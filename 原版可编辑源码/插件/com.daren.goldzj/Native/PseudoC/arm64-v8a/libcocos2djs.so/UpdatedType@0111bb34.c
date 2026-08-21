
/* v8::internal::PropertyCell::UpdatedType(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::PropertyCell>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDetails) */

bool v8::internal::PropertyCell::UpdatedType
               (long param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar2 = param_4 >> 6 & 3;
  uVar1 = *(uint *)(*param_2 + 0xb);
  if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa8))) {
    uVar3 = 1;
    switch(uVar2) {
    case 0:
      goto switchD_0111bb98_caseD_0;
    case 1:
      uVar4 = *param_3;
      if (uVar1 == (uint)uVar4) {
        return true;
      }
      break;
    case 2:
      uVar4 = *param_3;
      break;
    case 3:
      goto switchD_0111bb98_caseD_3;
    }
    if (((ulong)uVar1 & 1 & uVar4) == 0) {
      uVar1 = (uint)uVar4 | uVar1;
    }
    else {
      if (*(int *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) - 1) != *(int *)(uVar4 - 1))
      goto switchD_0111bb98_caseD_3;
      uVar1 = *(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 0xb) >> 0x19;
    }
    if ((uVar1 & 1) == 0) {
      return (bool)2;
    }
  }
  else if (uVar2 != 1) {
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((*param_3 & 1) == 0) {
      return true;
    }
    return (int)*param_3 != *(int *)(param_1 + 0xa0);
  }
switchD_0111bb98_caseD_3:
  uVar3 = 3;
switchD_0111bb98_caseD_0:
  return (bool)uVar3;
}

