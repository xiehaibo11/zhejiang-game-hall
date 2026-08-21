
void FUN_00a26bcc(long *param_1,long param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int __type;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  int __protocol;
  long lVar7;
  int local_e8 [36];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar4 = *(int *)(param_2 + 4);
  piVar1 = local_e8;
  if (param_3 != (int *)0x0) {
    piVar1 = param_3;
  }
  lVar7 = *param_1;
  *piVar1 = iVar4;
  __type = *(int *)((long)param_1 + 0xac);
  piVar1[1] = __type;
  if (__type == 2) {
    __protocol = 0x11;
  }
  else {
    __protocol = *(int *)(param_2 + 0xc);
  }
  piVar1[2] = __protocol;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (0x7f < uVar2) {
    uVar2 = 0x80;
  }
                    /* try { // try from 00a26c48 to 00b26c97 has its CatchHandler @ 00a26c48
                       catch() { ... } // from try @ 00a26c48 with catch @ 00a26c48
                       catch() { ... } // from try @ 00a26ce0 with catch @ 00a26c48
                       catch() { ... } // from try @ 00a26d60 with catch @ 00a26c48 */
  piVar1[3] = uVar2;
  memcpy(piVar1 + 4,*(void **)(param_2 + 0x20),(ulong)uVar2);
  pcVar6 = *(code **)(lVar7 + 0x308);
  if (pcVar6 == (code *)0x0) {
    iVar4 = socket(iVar4,__type,__protocol);
  }
  else {
    iVar4 = (*pcVar6)(*(undefined8 *)(lVar7 + 0x310),0,piVar1);
  }
  *param_4 = iVar4;
  if (iVar4 == -1) {
                    /* try { // try from 00a26cb4 to 00b26cdf has its CatchHandler @ 00a26d74 */
    uVar5 = 7;
  }
  else {
                    /* try { // try from 00a26c98 to 00b26caf has its CatchHandler @ 00a26d78 */
    if (((int)param_1[0x15] == 0) || (*piVar1 != 10)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      piVar1[10] = (int)param_1[0x15];
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00a26ce0 to 00b26d07 has its CatchHandler @ 00a26c48 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

