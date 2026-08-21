
int FUN_0107c454(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_0107c4ac(param_1,param_2,auStack_30);
  if ((iVar1 == 0) &&
     (plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0xf0) + 0x60), plVar2 != (long *)0x0))
  {
    (**(code **)(*plVar2 + 8))(plVar2[1],auStack_30);
  }
  return iVar1;
}

