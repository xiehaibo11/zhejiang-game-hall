
void dtls1_clear(int *param_1)

{
  pqueue p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  pqueue pq;
  pitem *ppVar6;
  int iVar7;
  long lVar8;
  
  DTLS_RECORD_LAYER_clear(param_1 + 0xe8);
  lVar8 = *(long *)(param_1 + 0x26);
  if (lVar8 != 0) {
    p_Var1 = *(pqueue *)(lVar8 + 0x110);
    uVar2 = *(undefined8 *)(lVar8 + 0x118);
    uVar3 = *(undefined4 *)(lVar8 + 0x124);
    uVar4 = *(undefined4 *)(lVar8 + 0x120);
    pq = p_Var1;
    while (ppVar6 = pqueue_pop(pq), ppVar6 != (pitem *)0x0) {
      dtls1_hm_fragment_free(ppVar6->data);
                    /* try { // try from 00af1e68 to 00bf1e6b has its CatchHandler @ 00af2030 */
      pitem_free(ppVar6);
                    /* try { // try from 00af1e74 to 00bf1e7f has its CatchHandler @ 00af202c */
      pq = *(pqueue *)(*(long *)(param_1 + 0x26) + 0x110);
    }
    while (ppVar6 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x26) + 0x118)),
          ppVar6 != (pitem *)0x0) {
                    /* try { // try from 00af1e8c to 00bf1e93 has its CatchHandler @ 00af2018 */
      dtls1_hm_fragment_free(ppVar6->data);
      pitem_free(ppVar6);
    }
    memset(*(void **)(param_1 + 0x26),0,0x200);
    if (param_1[0xe] != 0) {
                    /* try { // try from 00af1ec4 to 00bf1ecf has its CatchHandler @ 00af1fd8 */
      *(undefined4 *)(*(long *)(param_1 + 0x26) + 0x100) = 0x100;
    }
                    /* try { // try from 00af1ed0 to 00bf20cf has its CatchHandler @ 00af188c */
    uVar5 = SSL_get_options(param_1);
    lVar8 = *(long *)(param_1 + 0x26);
    if ((uVar5 >> 0xc & 1) != 0) {
      *(undefined4 *)(lVar8 + 0x124) = uVar3;
      *(undefined4 *)(lVar8 + 0x120) = uVar4;
    }
    *(pqueue *)(lVar8 + 0x110) = p_Var1;
    *(undefined8 *)(lVar8 + 0x118) = uVar2;
  }
  ssl3_clear(param_1);
  iVar7 = **(int **)(param_1 + 2);
  if (iVar7 == 0x1ffff) {
    iVar7 = 0xfefd;
  }
  else if (*(char *)((long)param_1 + 0x1e5) < '\0') {
    *param_1 = 0x100;
    param_1[0x81] = 0x100;
    return;
  }
  *param_1 = iVar7;
  return;
}

