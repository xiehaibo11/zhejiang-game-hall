
undefined8 * FUN_00c2ef90(long param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  FILE *pFVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar1 = FUN_00c29ac0(param_1,1);
  puVar2 = (undefined8 *)lua_newuserdata(param_1,0x10);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  *(undefined1 *)(uVar7 + 10) = 1;
  *(undefined8 *)(uVar7 + 0x20) =
       *(undefined8 *)((*(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff) + 0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  pFVar3 = fopen((char *)(lVar1 + 0x18),param_2);
  *puVar2 = pFVar3;
  if (pFVar3 != (FILE *)0x0) {
    return puVar2;
  }
  piVar4 = (int *)__errno();
  pcVar5 = strerror(*piVar4);
  uVar6 = FUN_00c00c18(param_1,"%s: %s",(char *)(lVar1 + 0x18),pcVar5);
  luaL_argerror(param_1,1,uVar6);
  return puVar2;
}

