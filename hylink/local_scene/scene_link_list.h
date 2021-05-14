/***********************************************************
*文件名     : link_list.h
*版   本   : v1.0.0.0
*日   期   : 2018.05.31
*说   明   : 双向循环链表类相关接口
*修改记录: 
************************************************************/

#ifndef LINK_LIST_H
#define LINK_LIST_H

#define PRIVATE_PARAM_MAX_LEN	128
#pragma pack(1)

/*链表链接件*/
typedef struct link_list_piece_s
{
	struct link_list_piece_s *pPrev;
	struct link_list_piece_s *pNext;
} link_list_piece_t;

typedef int (*ComparePieceFunc)(link_list_piece_t*, link_list_piece_t*);
typedef int (*TravPieceFunc)(link_list_piece_t*, link_list_piece_t*);
typedef int (*PrintPieceFunc)(link_list_piece_t*);

/*链表类，带头结点的双向循环链表*/
typedef struct link_list_class_s
{
	link_list_piece_t *pHead;
	link_list_piece_t *pTail;
	int iNodeNum;
	int iNodeDataSize;
	/*private*/
	unsigned char acPrivateParam[PRIVATE_PARAM_MAX_LEN];
	/*methods*/
	/*************************************************************
	*方法:	read_lock
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	获取读锁（该接口为阻塞接口）
	*************************************************************/
	int	(*read_lock)(struct link_list_class_s *);
	/*************************************************************
	*方法:	read_lock_non_blocking
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	获取读锁（该接口为非阻塞接口）
	*************************************************************/
	int	(*read_lock_non_blocking)(struct link_list_class_s *);
	/*************************************************************
	*方法:	read_unlock
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	释放读锁
	*************************************************************/
	int	(*read_unlock)(struct link_list_class_s *);
	/*************************************************************
	*方法:	write_lock
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	获取写锁（该接口为阻塞接口）
	*************************************************************/
	int	(*write_lock)(struct link_list_class_s *);
	/*************************************************************
	*方法:	write_lock_non_blocking
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	获取写锁（该接口非阻塞接口）
	*************************************************************/
	int	(*write_lock_non_blocking)(struct link_list_class_s *);
	/*************************************************************
	*方法:	write_unlock
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	释放写锁
	*************************************************************/
	int	(*write_unlock)(struct link_list_class_s *);



	/*************************************************************
	*方法:	new_node
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	新建一个连接件
	*************************************************************/
	link_list_piece_t* (*new_node)(struct link_list_class_s *);
	/*************************************************************
	*方法:	destroy_node
	*参数:	类指针
	*		要销毁的连接件
	*返回值:0表示成功，非0表示失败
	*描述:	释放一个连接件（如果连接件中有内存申请，需要在传入前释放）
	*************************************************************/
	int (*destroy_node)(struct link_list_class_s *, link_list_piece_t*);


	
	/*************************************************************
	*方法:	size
	*参数:	类指针
	*返回值:>=0表示链表元素个数，<0表示失败
	*描述:	获取链表元素个数
	*************************************************************/
	int (*size)(struct link_list_class_s *);
	/*************************************************************
	*方法:	clear
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	清空链表
	*************************************************************/
	int (*clear)(struct link_list_class_s *);
	/*************************************************************
	*方法:	next
	*参数:	类指针
	*		当前连接件
	*返回值:成功返回下一个连接件，失败返回NULL
	*描述:	获取下一个连接件，如果当前连接件为NULL，则返回头结点的next
	*************************************************************/
	link_list_piece_t* (*next)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	prev
	*参数:	类指针
	*		当前连接件
	*返回值:成功返回前一个连接件，失败返回NULL
	*描述:	获取前一个连接件，如果当前连接件为NULL，则返回尾结点
	*************************************************************/
	link_list_piece_t* (*prev)(struct link_list_class_s *, link_list_piece_t *);
	
	/*************************************************************
	*方法:	inst_head
	*参数:	类指针
	*		要插入的链接件
	*返回值:0表示成功，非0表示失败
	*描述:	在pHead后插入连接件
	*************************************************************/
	int (*inst_head)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	inst_tail
	*参数:	类指针
	*		要插入的链接件
	*返回值:0表示成功，非0表示失败
	*描述:	在pTail后插入连接件
	*************************************************************/
	int (*inst_tail)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	inst
	*参数:	类指针
	*		位置
	*		要插入的连接件
	*返回值:0表示成功，非0表示失败
	*描述:	在指定位置后插入连接件
	*************************************************************/
	int (*inst)(struct link_list_class_s *, link_list_piece_t *, link_list_piece_t *);
	/*************************************************************
	*方法:	inst_by_id
	*参数:	类指针
	*		位置序号
	*		要插入的连接件
	*返回值:0表示成功，非0表示失败
	*描述:	在指定位置序号后插入连接件
	*************************************************************/
	int (*inst_by_id)(struct link_list_class_s *, int, link_list_piece_t *);
	/*************************************************************
	*方法:	del_head
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	删除头结点的next
	*************************************************************/
	int (*del_head)(struct link_list_class_s *);
	/*************************************************************
	*方法:	del_head_result
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	删除头结点的next(只断开连接件的链接，连接件以指针方式返回)
	*************************************************************/
	link_list_piece_t* (*del_head_result)(struct link_list_class_s *);
	/*************************************************************
	*方法:	del_tail
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	删除尾结点
	*************************************************************/
	int (*del_tail)(struct link_list_class_s *);
	/*************************************************************
	*方法:	del_tail_result
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	删除尾结点(只断开连接件的链接，连接件以指针方式返回)
	*************************************************************/
	link_list_piece_t* (*del_tail_result)(struct link_list_class_s *);
	/*************************************************************
	*方法:	del
	*参数:	类指针
	*		要删除的连接件
	*返回值:0表示成功，非0表示失败
	*描述:	删除指定结点
	*************************************************************/
	int (*del)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	del_result
	*参数:	类指针
	*		要删除的连接件
	*返回值:成功返回连接件，失败返回NULL
	*描述:	删除指定结点(只断开连接件的链接，连接件以指针方式返回)
	*************************************************************/
	link_list_piece_t* (*del_result)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	set
	*参数:	类指针
	*		被设置值
	*		设置值
	*返回值:0表示成功，非0表示失败
	*描述:	删除头结点
	*************************************************************/
	int (*set)(struct link_list_class_s *, link_list_piece_t *, link_list_piece_t *);
	/*************************************************************
	*方法:	set_by_id
	*参数:	类指针
	*		被设置值的ID序号
	*		设置值
	*返回值:0表示成功，非0表示失败
	*描述:	删除头结点
	*************************************************************/
	int (*set_by_id)(struct link_list_class_s *, int, link_list_piece_t *);
	/*************************************************************
	*方法:	get
	*参数:	类指针
	*		连接件比较函数
	*		比较函数参数
	*返回值:0表示成功，非0表示失败
	*描述:	获取指定下标的链接件
	*************************************************************/
	link_list_piece_t* (*get)(struct link_list_class_s *,ComparePieceFunc, link_list_piece_t *);
	/*************************************************************
	*方法:	get_by_id
	*参数:	类指针
	*		要获取的连接件的id序号
	*返回值:0表示成功，非0表示失败
	*描述:	获取指定下标的链接件
	*************************************************************/
	link_list_piece_t* (*get_by_id)(struct link_list_class_s *,int);
	/*************************************************************
	*方法:	get_index
	*参数:	类指针
	*		要获取的连接件的指针
	*返回值:<0表示失败，0>=表示连接件的下标
	*描述:	获取链接件的下标
	*************************************************************/
	int (*get_index)(struct link_list_class_s *, link_list_piece_t *);
	/*************************************************************
	*方法:	first
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	删除头结点的next
	*************************************************************/
	link_list_piece_t* (*first)(struct link_list_class_s *);
	/*************************************************************
	*方法:	head
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	获取头结点
	*************************************************************/
	link_list_piece_t* (*head)(struct link_list_class_s *);
	/*************************************************************
	*方法:	tail
	*参数:	类指针
	*返回值:成功返回连接件，失败返回NULL
	*描述:	获取尾结点
	*************************************************************/
	link_list_piece_t* (*tail)(struct link_list_class_s *);
	/*************************************************************
	*方法:	traverse
	*参数:	类指针
	*		遍历操作函数
	*		遍历操作函数参数
	*返回值:0表示成功，非0表示失败
	*描述:	获取尾结点
	*************************************************************/
	int(*traverse)(struct link_list_class_s *, TravPieceFunc, link_list_piece_t *);
	/*************************************************************
	*方法:	print
	*参数:	类指针
	*返回值:0表示成功，非0表示失败
	*描述:	打印链表数据
	*************************************************************/
	int(*print)(struct link_list_class_s *, PrintPieceFunc);
}link_list_class_t;
#pragma pack()


/*构造函数*/
link_list_class_t *new_link_list(int iNodeDataSize);

/*析构函数*/
int destroy_link_list(link_list_class_t *_this);


#endif /* LINK_LIST_H */
