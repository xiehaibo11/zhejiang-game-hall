
undefined8 FUN_00e36dc8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  puVar4 = *(undefined8 **)(*param_1 + 0x370);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  uVar2 = 0;
  if ((puVar4 != (undefined8 *)0x0) && (lVar1 != 0)) {
    pcVar3 = (code *)*puVar4;
    if (pcVar3 == (code *)0x0) {
      return 0;
    }
    puVar4 = (undefined8 *)(*pcVar3)(lVar1);
    uVar2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = (*(code *)*puVar4)(*(undefined8 *)(*param_1 + 0xb8),*param_1 + 0x138,&local_28);
      if ((int)uVar2 == 0) {
        *(undefined8 *)param_1[10] = local_28;
        return uVar2;
      }
    }
  }
  return uVar2;
}

