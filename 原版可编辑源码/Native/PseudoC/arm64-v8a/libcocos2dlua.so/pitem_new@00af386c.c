
pitem * pitem_new(uchar *prio64be,void *data)

{
  pitem *ppVar1;
  undefined8 uVar2;
  
  ppVar1 = CRYPTO_malloc(0x18,"ssl/pqueue.c",0x14);
  if (ppVar1 != (pitem *)0x0) {
    uVar2 = *(undefined8 *)prio64be;
    ppVar1->next = (_pitem *)0x0;
    *(undefined8 *)ppVar1->priority = uVar2;
    ppVar1->data = data;
  }
  return ppVar1;
}

