
undefined8 FUN_00c329b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_8;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xd0);
  lVar1 = FUN_00c29b44(param_1,1);
  uVar7 = uVar7 & 0x7fffffffffff;
  uVar2 = FUN_00c29dd4(param_1,2);
  uVar3 = lua_newthread(param_1);
  local_8 = 0xfffe000001412519;
  puVar4 = (ulong *)FUN_00c1bdd4(param_1,uVar7,&local_8);
  *puVar4 = uVar3 | 0xfffc800000000000;
  local_8 = 0xfffe00000141251a;
  puVar4 = (ulong *)FUN_00c1bdd4(param_1,uVar7,&local_8);
  *puVar4 = uVar2 | 0xfffb800000000000;
  if ((*(byte *)(uVar7 + 8) >> 2 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
    *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
    *(ulong *)(lVar6 + 0x50) = uVar7;
  }
  if (lVar1 == 0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)(lVar1 + 0x18);
  }
  luaJIT_profile_start(param_1,pcVar5,FUN_00c32acc,uVar3);
  return 0;
}

