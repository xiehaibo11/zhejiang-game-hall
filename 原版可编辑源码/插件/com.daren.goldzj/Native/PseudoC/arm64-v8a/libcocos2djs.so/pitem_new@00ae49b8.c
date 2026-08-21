
pitem * pitem_new(uchar *prio64be,void *data)

{
  pitem *ppVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00ae4890 with catch @ 00ae49d4 */
                    /* catch() { ... } // from try @ 00ae4784 with catch @ 00ae49d8 */
  ppVar1 = CRYPTO_malloc(0x18,"ssl/pqueue.c",0x14);
  if (ppVar1 != (pitem *)0x0) {
    uVar2 = *(undefined8 *)prio64be;
    ppVar1->next = (_pitem *)0x0;
    *(undefined8 *)ppVar1->priority = uVar2;
    ppVar1->data = data;
  }
                    /* try { // try from 00ae49f4 to 00be4af3 has its CatchHandler @ 00ae49f4
                       catch() { ... } // from try @ 00ae49f4 with catch @ 00ae49f4
                       catch() { ... } // from try @ 00ae4afc with catch @ 00ae49f4
                       catch() { ... } // from try @ 00ae4bd8 with catch @ 00ae49f4
                       catch() { ... } // from try @ 00ae4cd4 with catch @ 00ae49f4 */
  return ppVar1;
}

