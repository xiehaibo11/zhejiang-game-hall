
pitem * pqueue_insert(pqueue pq,pitem *item)

{
  int iVar1;
  _pitem *__s1;
  _pitem *p_Var2;
  _pitem *p_Var3;
  
  if (*(_pitem **)pq != (_pitem *)0x0) {
    p_Var2 = *(_pitem **)pq;
    p_Var3 = (_pitem *)0x0;
    do {
      __s1 = p_Var2;
      iVar1 = memcmp(__s1,item,8);
      if (0 < iVar1) {
        item->next = __s1;
        if (p_Var3 != (_pitem *)0x0) {
          pq = (pqueue)&p_Var3->next;
        }
        goto LAB_00af3954;
      }
      if (iVar1 == 0) {
        return (pitem *)0x0;
      }
      p_Var2 = __s1->next;
      p_Var3 = __s1;
    } while (p_Var2 != (_pitem *)0x0);
    item->next = (_pitem *)0x0;
    pq = (pqueue)&__s1->next;
  }
LAB_00af3954:
  *(pitem **)pq = item;
  return item;
}

