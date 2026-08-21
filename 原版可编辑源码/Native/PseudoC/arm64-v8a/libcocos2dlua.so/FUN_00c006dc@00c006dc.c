
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c006dc(undefined8 param_1,ulong *param_2)

{
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  char *__s;
  ulong uVar5;
  uint uVar6;
  ulong __n;
  undefined1 auStack_28 [32];
  long local_8;
  
  uVar5 = *param_2;
  local_8 = ___stack_chk_guard;
  uVar6 = (uint)((long)uVar5 >> 0x2f);
  if (uVar6 == 0xfffffffb) {
    uVar5 = uVar5 & 0x7fffffffffff;
  }
  else if (uVar6 < 0xfffffff3) {
    uVar5 = FUN_00c006c0();
  }
  else if (uVar5 == 0xffffffffffffffff) {
    uVar5 = FUN_00bfba1c(param_1,&DAT_0140fd28,3);
  }
  else if (uVar6 == 0xfffffffe) {
    uVar5 = FUN_00bfba1c(param_1,"false",5);
  }
  else if (uVar6 == 0xfffffffd) {
    uVar5 = FUN_00bfba1c(param_1,&DAT_01410098,4);
  }
  else {
    __s = (&PTR_DAT_01697110)[~uVar6];
    sVar1 = strlen(__s);
    __n = sVar1 & 0xffffffff;
    pvVar2 = memcpy(auStack_28,__s,__n);
    *(undefined1 *)((long)pvVar2 + __n) = 0x3a;
    *(undefined1 *)((long)pvVar2 + __n + 1) = 0x20;
    if ((uVar6 == 0xfffffff7) && (1 < *(byte *)((uVar5 & 0x7fffffffffff) + 10))) {
      builtin_strncpy((char *)((long)pvVar2 + __n + 2),"builtin#",8);
      lVar3 = FUN_00bff3ac((long)pvVar2 + __n + 10,*(undefined1 *)((uVar5 & 0x7fffffffffff) + 10));
    }
    else {
      uVar4 = FUN_00bfb70c(param_2);
      lVar3 = FUN_00bff578((long)pvVar2 + __n + 2,uVar4);
    }
    uVar5 = FUN_00bfba1c(param_1,auStack_28,lVar3 - (long)auStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

