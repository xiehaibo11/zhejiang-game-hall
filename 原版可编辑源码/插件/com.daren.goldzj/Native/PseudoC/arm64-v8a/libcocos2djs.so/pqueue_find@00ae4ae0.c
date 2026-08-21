
pitem * pqueue_find(pqueue pq,uchar *prio64be)

{
  pitem *ppVar1;
  pitem *ppVar2;
  pitem *ppVar3;
  
  ppVar2 = *(pitem **)pq;
  if (*(pitem **)pq == (pitem *)0x0) {
                    /* try { // try from 00ae4b20 to 00be4b2b has its CatchHandler @ 00ae4cd8 */
    return (pitem *)0x0;
  }
  do {
    ppVar1 = ppVar2;
    ppVar2 = ppVar1->next;
    ppVar3 = ppVar2;
    if (ppVar2 == (pitem *)0x0) break;
                    /* try { // try from 00ae4af4 to 00be4afb has its CatchHandler @ 00ae4cd4 */
                    /* try { // try from 00ae4afc to 00be4b1f has its CatchHandler @ 00ae49f4 */
    ppVar3 = ppVar1;
  } while (*(long *)ppVar1->priority != *(long *)prio64be);
  if (*(long *)ppVar1->priority != *(long *)prio64be) {
    ppVar1 = ppVar3;
  }
  return ppVar1;
}

