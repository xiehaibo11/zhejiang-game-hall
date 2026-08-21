
long * arraylist_new(uint param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = 0x10;
  if (0 < (int)param_1) {
    uVar1 = param_1;
  }
  plVar2 = (long *)thunk_EXT_FUN_00002bb0(0x10);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(plVar2 + 1) = 0;
    *(uint *)((long)plVar2 + 0xc) = uVar1;
    lVar3 = thunk_EXT_FUN_00002bb0(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)
    ;
    *plVar2 = lVar3;
    if (lVar3 == 0) {
      thunk_EXT_FUN_00002bb0(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}

