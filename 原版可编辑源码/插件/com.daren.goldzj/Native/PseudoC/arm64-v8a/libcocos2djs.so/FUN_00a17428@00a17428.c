
undefined8 FUN_00a17428(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (plVar2 = (long *)FUN_00a15520(), plVar2 != (long *)0x0))
  {
    for (puVar3 = (undefined8 *)*plVar2; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
      puVar4 = (undefined8 *)*puVar3;
      iVar1 = FUN_00a33710(*puVar4,*(undefined8 *)(param_2 + 0xc0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0x1a0) == (uint)*(ushort *)(puVar4 + 1))) {
        FUN_00a22d58(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xc0))
        ;
        return 1;
      }
    }
  }
  return 0;
}

