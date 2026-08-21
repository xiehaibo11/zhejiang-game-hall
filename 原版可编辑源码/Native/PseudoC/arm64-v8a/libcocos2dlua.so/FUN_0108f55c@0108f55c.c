
void FUN_0108f55c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 0108f2f4 with catch @ 0108f568 */
  lVar2 = *param_1;
  FT_Activate_Size(param_1[0xb]);
  iVar1 = FT_Request_Size(*(undefined8 *)(lVar2 + 800),param_2);
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0108f2e4 with catch @ 0108f594 */
    lVar2 = *(long *)(*(long *)(lVar2 + 800) + 0xa0);
                    /* catch() { ... } // from try @ 0108f274 with catch @ 0108f598 */
    param_1[9] = *(long *)(lVar2 + 0x48);
    lVar3 = *(long *)(lVar2 + 0x38);
    param_1[8] = *(long *)(lVar2 + 0x40);
    param_1[7] = lVar3;
                    /* catch() { ... } // from try @ 0108f260 with catch @ 0108f5a8 */
    lVar3 = *(long *)(lVar2 + 0x28);
    param_1[6] = *(long *)(lVar2 + 0x30);
    param_1[5] = lVar3;
    lVar3 = *(long *)(lVar2 + 0x18);
    param_1[4] = *(long *)(lVar2 + 0x20);
    param_1[3] = lVar3;
  }
  return;
}

