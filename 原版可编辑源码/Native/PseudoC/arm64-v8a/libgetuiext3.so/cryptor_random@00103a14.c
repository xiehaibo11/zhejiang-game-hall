
ulong cryptor_random(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_600 [1072];
  undefined1 auStack_1d0 [392];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  thunk_EXT_FUN_00002bb0(auStack_1d0);
  thunk_EXT_FUN_00002bb0(auStack_600);
  uVar2 = thunk_EXT_FUN_00002bb0(auStack_1d0,0,auStack_600,"Qoz4KnuQrdU5",0xc);
  if (uVar2 == 0) {
    uVar2 = thunk_EXT_FUN_00002bb0(auStack_1d0,param_1,param_2);
  }
  thunk_EXT_FUN_00002bb0(auStack_1d0);
  thunk_EXT_FUN_00002bb0(auStack_600);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (ulong)uVar2;
  }
  uVar3 = thunk_EXT_FUN_00002bb0();
  return uVar3;
}

