
void FUN_01076a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 01076a3c with catch @ 01076a50 */
  lVar2 = *(long *)(param_1 + 0x30);
  iVar1 = FT_Stream_Seek(lVar2,param_3);
  if ((iVar1 == 0) && (iVar1 = FT_Stream_EnterFrame(lVar2,param_4), iVar1 == 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0x160) = uVar3;
  }
  return;
}

