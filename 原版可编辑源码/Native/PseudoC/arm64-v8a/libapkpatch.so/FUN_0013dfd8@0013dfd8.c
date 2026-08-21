
void FUN_0013dfd8(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                 undefined4 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_478;
  undefined4 local_46c;
  undefined1 auStack_468 [32];
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_001357e0(auStack_468,param_3,param_3 + param_4);
  lVar3 = FUN_0013e0b4(&PTR_FUN_001670b8,param_5,param_6,auStack_468,auStack_448,0x400);
  uVar4 = 0;
  if (lVar3 != 0) {
    local_46c = 0;
    local_478 = 0;
    iVar2 = FUN_0013e158(lVar3,param_1,param_1 + param_2,1,&local_478,&local_46c);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_0013dbb0(lVar3);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = local_478;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

