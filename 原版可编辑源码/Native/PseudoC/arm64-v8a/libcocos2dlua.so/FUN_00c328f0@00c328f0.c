
undefined8 FUN_00c328f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_8;
  
  luaJIT_profile_stop();
  local_8 = 0xfffe000001412519;
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xd0) & 0x7fffffffffff;
  puVar1 = (undefined8 *)FUN_00c1bdd4(param_1,uVar3,&local_8);
  *puVar1 = 0xffffffffffffffff;
  local_8 = 0xfffe00000141251a;
  puVar1 = (undefined8 *)FUN_00c1bdd4(param_1,uVar3,&local_8);
  *puVar1 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 8) >> 2 & 1) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(byte *)(uVar3 + 8) = *(byte *)(uVar3 + 8) & 0xfb;
  *(undefined8 *)(uVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x50);
  *(ulong *)(lVar2 + 0x50) = uVar3;
  return 0;
}

