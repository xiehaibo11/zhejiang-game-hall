
void FUN_01057ba4(long param_1,int param_2,uint param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined4 local_28;
  undefined4 local_24;
  
                    /* catch() { ... } // from try @ 01057a78 with catch @ 01057bb4 */
  local_28 = *(undefined4 *)(param_1 + 0x98);
  lVar4 = *(long *)(param_1 + 0xb8);
  local_24 = 0;
  if (param_2 < 0) {
    if (param_2 == -0xb) {
      return;
    }
    uVar2 = 0;
    uVar3 = 0x18;
                    /* catch() { ... } // from try @ 01057aec with catch @ 01057be8 */
  }
  else {
    bVar1 = (param_3 & 1) != 0;
    if (bVar1) {
      local_24 = 0x10001;
    }
    uVar2 = (ushort)bVar1;
    if ((param_3 >> 1 & 1) == 0) goto LAB_01057c0c;
    uVar3 = 4;
  }
                    /* catch() { ... } // from try @ 01057d10 with catch @ 01057c04 */
  local_24 = CONCAT22(uVar3 | uVar2,uVar3 | uVar2);
LAB_01057c0c:
  lws_service_fd(lVar4,&local_28);
  uv_idle_start(lVar4 + (ulong)*(byte *)(param_1 + 0x19c) * 0x6f8 + 0x690,FUN_01057ecc);
  return;
}

