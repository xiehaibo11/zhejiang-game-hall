
/* v8::internal::interpreter::ConstantArrayBuilder::Entry::ToHandle(v8::internal::Isolate*) const */

Isolate * __thiscall
v8::internal::interpreter::ConstantArrayBuilder::Entry::ToHandle(Entry *this,Isolate *param_1)

{
  Isolate *pIVar1;
  ulong uVar2;
  
  switch(this[8]) {
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (Entry)0x1:
    pIVar1 = *(Isolate **)this;
    break;
  case (Entry)0x2:
  case (Entry)0x8:
    uVar2 = *(ulong *)this;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar1 = *(Isolate **)(param_1 + 0x95a0);
      if (pIVar1 == *(Isolate **)(param_1 + 0x95a8)) {
        pIVar1 = (Isolate *)HandleScope::Extend(param_1);
      }
      *(Isolate **)(param_1 + 0x95a0) = pIVar1 + 8;
      *(ulong *)pIVar1 = uVar2;
    }
    else {
      pIVar1 = (Isolate *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
    break;
  case (Entry)0x3:
    pIVar1 = (Isolate *)**(long **)this;
    break;
  case (Entry)0x4:
    pIVar1 = (Isolate *)
             Factory::NewNumber<(v8::internal::AllocationType)1>((Factory *)param_1,*(double *)this)
    ;
    return pIVar1;
  case (Entry)0x5:
    pIVar1 = (Isolate *)BigIntLiteral(param_1,*(char **)this);
    if (pIVar1 == (Isolate *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    break;
  case (Entry)0x6:
    pIVar1 = *(Isolate **)(*(long *)this + 0x68);
    break;
  case (Entry)0x7:
    pIVar1 = param_1 + 0xa8;
    break;
  case (Entry)0x9:
    pIVar1 = param_1 + 0xc10;
    break;
  case (Entry)0xa:
    pIVar1 = param_1 + 0xb30;
    break;
  case (Entry)0xb:
    pIVar1 = param_1 + 0x3c8;
    break;
  case (Entry)0xc:
    pIVar1 = param_1 + 0x3d0;
    break;
  case (Entry)0xd:
    pIVar1 = param_1 + 0x168;
    break;
  case (Entry)0xe:
    pIVar1 = param_1 + 0xb78;
    break;
  case (Entry)0xf:
    pIVar1 = param_1 + 0xc18;
    break;
  case (Entry)0x10:
    pIVar1 = param_1 + 0xb80;
    break;
  case (Entry)0x11:
    pIVar1 = param_1 + 0x430;
  }
  return pIVar1;
}

