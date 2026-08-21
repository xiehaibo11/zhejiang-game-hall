
void FUN_00a4e718(long *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 *puVar5;
  long local_450;
  undefined2 uStack_448;
  undefined1 auStack_446 [1022];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_2);
  if (sVar2 < 0x3fe) {
                    /* try { // try from 00a4e764 to 00b4e77b has its CatchHandler @ 00a4e940 */
    auStack_446[sVar2] = 0;
    *(undefined2 *)((long)&uStack_448 + sVar2) = 0xa0d;
    local_450 = 0;
    lVar4 = sVar2 + 2;
                    /* try { // try from 00a4e784 to 00b4e78f has its CatchHandler @ 00a4e93c */
    uVar3 = FUN_00a232e8(param_1,(int)param_1[0x4c],&uStack_448,lVar4,&local_450);
    if ((int)uVar3 == 0) {
                    /* try { // try from 00a4e790 to 00b4e79b has its CatchHandler @ 00a4e938 */
      puVar5 = &uStack_448;
      do {
                    /* try { // try from 00a4e79c to 00b4e8c3 has its CatchHandler @ 00a4e950 */
        if (*(char *)(*param_1 + 0x628) != '\0') {
          FUN_00a22e78(*param_1,2,puVar5,local_450,param_1);
        }
        lVar4 = lVar4 - local_450;
        if (lVar4 == 0) {
          uVar3 = 0;
          break;
        }
        puVar5 = (undefined2 *)((long)puVar5 + local_450);
        uVar3 = FUN_00a232e8(param_1,(int)param_1[0x4c],puVar5,lVar4,&local_450);
      } while ((int)uVar3 == 0);
    }
  }
  else {
    uVar3 = 0x2b;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

