
/* v8::internal::Literal::BuildValue(v8::internal::Isolate*) const */

Isolate * __thiscall v8::internal::Literal::BuildValue(Literal *this,Isolate *param_1)

{
  int iVar1;
  Isolate *pIVar2;
  
  switch(*(uint *)(this + 4) >> 7 & 0xf) {
  case 0:
    iVar1 = *(int *)(this + 8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar2 = *(Isolate **)(param_1 + 0x95a0);
      if (pIVar2 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar2 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)(param_1 + 0x95a0) = pIVar2 + 8;
      *(long *)pIVar2 = (long)iVar1 << 1;
    }
    else {
      pIVar2 = (Isolate *)
               CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),(long)iVar1 << 1);
    }
    break;
  case 1:
    pIVar2 = (Isolate *)
             Factory::NewNumber<(v8::internal::AllocationType)1>
                       ((Factory *)param_1,*(double *)(this + 8));
    return pIVar2;
  case 2:
    pIVar2 = (Isolate *)BigIntLiteral(param_1,*(char **)(this + 8));
    if (pIVar2 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    break;
  case 3:
    pIVar2 = (Isolate *)**(long **)(this + 8);
    break;
  case 4:
    pIVar2 = param_1 + 0xb78;
    break;
  case 5:
    pIVar2 = (Isolate *)Factory::ToBoolean((Factory *)param_1,(bool)this[8]);
    return pIVar2;
  case 6:
    pIVar2 = param_1 + 0xa0;
    break;
  case 7:
    pIVar2 = param_1 + 0xb0;
    break;
  case 8:
    pIVar2 = param_1 + 0xa8;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return pIVar2;
}

