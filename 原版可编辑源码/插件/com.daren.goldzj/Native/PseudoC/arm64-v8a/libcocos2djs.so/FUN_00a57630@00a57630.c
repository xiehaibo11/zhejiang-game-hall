
void FUN_00a57630(byte *param_1,byte *param_2)

{
  byte *__s2;
  long lVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a576b4 with catch @ 00a57650 */
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  iVar2 = sscanf((char *)pbVar4,"%d.%d.%d.%d",&local_68,(ulong)&local_68 | 4,&local_60,
                 (long)&local_60 + 4);
                    /* try { // try from 00a576a4 to 00b576b3 has its CatchHandler @ 00a577b8 */
  pbVar4 = *(byte **)(param_2 + 0x10);
                    /* try { // try from 00a576b4 to 00b577d3 has its CatchHandler @ 00a57650 */
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  iVar3 = sscanf((char *)pbVar4,"%d.%d.%d.%d",&local_78,(ulong)&local_78 | 4,&local_70,
                 (long)&local_70 + 4);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    pbVar4 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x10);
    }
    __s2 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      __s2 = *(byte **)(param_2 + 0x10);
    }
    iVar2 = strcmp((char *)pbVar4,(char *)__s2);
    goto LAB_00a57728;
  }
  if ((int)local_68 <= (int)local_78) {
    if ((int)local_68 < (int)local_78) {
LAB_00a57724:
      iVar2 = -1;
      goto LAB_00a57728;
    }
    if (local_68._4_4_ <= local_78._4_4_) {
      if (local_68._4_4_ < local_78._4_4_) goto LAB_00a57724;
      if ((int)local_60 <= (int)local_70) {
        if ((int)local_60 < (int)local_70) goto LAB_00a57724;
        if (local_60._4_4_ <= local_70._4_4_) {
          iVar2 = -(uint)(local_60._4_4_ < local_70._4_4_);
          goto LAB_00a57728;
        }
      }
    }
  }
  iVar2 = 1;
LAB_00a57728:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

