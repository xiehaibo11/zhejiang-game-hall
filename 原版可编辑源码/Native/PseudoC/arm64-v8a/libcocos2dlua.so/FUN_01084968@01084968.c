
void FUN_01084968(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long local_60;
  long lStack_58;
  int local_48;
  int iStack_44;
  
  if (*(char *)(*(long *)(param_1 + 0x4900) + 9) == '\0') {
    bVar3 = false;
  }
  else {
                    /* catch() { ... } // from try @ 01084954 with catch @ 0108499c */
    bVar3 = *(char *)(param_1 + 0x48e9) == '\0';
  }
  if (((*(long *)(param_1 + 0x4948) != (long)param_2) || (bVar3)) ||
     (*(long *)(param_1 + 0x4950) != (long)param_3)) {
    FUN_01085d78(param_1,*(long *)(param_1 + 0x4948),*(long *)(param_1 + 0x4950),param_2,param_3,
                 &iStack_44,&local_48);
    local_60 = *(long *)(param_1 + 0x4948) + (long)iStack_44;
                    /* catch() { ... } // from try @ 01084ac8 with catch @ 01084a08 */
    lVar1 = (long)iStack_44 + (long)param_2;
    lVar2 = (long)local_48 + (long)param_3;
    lStack_58 = *(long *)(param_1 + 0x4950) + (long)local_48;
    if (*(char *)(param_1 + 0x48eb) != '\0') {
      FUN_01085f24(param_1);
      *(char *)(param_1 + 0x48eb) = '\0';
      *(undefined1 *)(param_1 + 0x48e8) = 1;
      *(long *)(param_1 + 0x4938) = lVar1;
      *(long *)(param_1 + 0x4940) = lVar2;
    }
    if (*(char *)(param_1 + 0x4978) != '\0') {
      FUN_01086160(param_1,param_1 + 0x10,&local_60,lVar1,lVar2,0);
    }
    *(char *)(param_1 + 0x4978) = '\x01';
    *(undefined4 *)(param_1 + 0x497c) = 2;
    *(long *)(param_1 + 0x4990) = lVar1;
    *(long *)(param_1 + 0x4998) = lVar2;
    *(long *)(param_1 + 0x4988) = lStack_58;
    *(long *)(param_1 + 0x4980) = local_60;
    if (bVar3) {
      FUN_010850c0(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48f0),
                   *(undefined8 *)(param_1 + 0x48f8),*(undefined8 *)(param_1 + 0x4900),
                   *(undefined4 *)(param_1 + 0x4908),0);
    }
    *(long *)(param_1 + 0x4948) = (long)param_2;
                    /* try { // try from 01084abc to 01184ac7 has its CatchHandler @ 01084aec */
    *(long *)(param_1 + 0x4950) = (long)param_3;
  }
                    /* try { // try from 01084ac8 to 01184aef has its CatchHandler @ 01084a08 */
  return;
}

