
undefined8 FUN_00f0472c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(int *)(param_2 + 0x70) == *(int *)(param_1 + 0x14)) &&
     (*(int *)(param_2 + 0x74) == *(int *)(param_1 + 0x14))) {
    *(long *)(param_1 + 0x20) = param_2;
    uVar1 = v8::internal::Scope::AsDeclarationScope();
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  else {
    for (lVar4 = *(long *)(param_2 + 0x10); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
      uVar3 = FUN_00f0472c(param_1,lVar4);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

