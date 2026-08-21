
void FUN_0108f5c8(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  FT_Activate_Size(param_1[0xb]);
  iVar1 = FT_Select_Size(*(undefined8 *)(lVar2 + 800),param_2);
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0108f224 with catch @ 0108f5fc */
    lVar2 = *(long *)(*(long *)(lVar2 + 800) + 0xa0);
    param_1[9] = *(long *)(lVar2 + 0x48);
                    /* try { // try from 0108f60c to 0118f63f has its CatchHandler @ 0108f60c
                       catch() { ... } // from try @ 0108f60c with catch @ 0108f60c
                       catch() { ... } // from try @ 0108f69c with catch @ 0108f60c
                       catch() { ... } // from try @ 0108f774 with catch @ 0108f60c */
    lVar3 = *(long *)(lVar2 + 0x38);
    param_1[8] = *(long *)(lVar2 + 0x40);
    param_1[7] = lVar3;
    lVar3 = *(long *)(lVar2 + 0x28);
    param_1[6] = *(long *)(lVar2 + 0x30);
    param_1[5] = lVar3;
    lVar3 = *(long *)(lVar2 + 0x18);
    param_1[4] = *(long *)(lVar2 + 0x20);
    param_1[3] = lVar3;
  }
  return;
}

