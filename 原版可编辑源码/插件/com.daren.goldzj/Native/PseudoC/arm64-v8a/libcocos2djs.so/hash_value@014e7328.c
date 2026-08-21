
/* v8::internal::hash_value(v8::internal::StringConstantBase const&) */

undefined8 v8::internal::hash_value(StringConstantBase *param_1)

{
  StringConstantBase *pSVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)param_1;
  if (iVar2 == 2) {
    pSVar1 = *(StringConstantBase **)(param_1 + 0x10);
    uVar3 = hash_value(*(StringConstantBase **)(param_1 + 0x18));
    uVar4 = base::hash_combine(0,uVar3);
    uVar3 = hash_value(pSVar1);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        return *(undefined8 *)(param_1 + 0x10);
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (*(double *)(param_1 + 0x10) == 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = base::hash_value((ulong)*(double *)(param_1 + 0x10));
    }
    uVar4 = 0;
  }
  uVar5 = base::hash_combine(uVar4,uVar3);
  return uVar5;
}

