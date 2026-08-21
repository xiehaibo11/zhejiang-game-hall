
/* v8::internal::Scope::NewTemporary(v8::internal::AstRawString const*,
   v8::internal::MaybeAssignedFlag) */

Variable * __thiscall v8::internal::Scope::NewTemporary(Scope *this,undefined8 param_1,char param_3)

{
  Zone *this_00;
  Variable *this_01;
  Scope *pSVar1;
  
  pSVar1 = this;
  if (((byte)this[0x82] & 1) != 0) goto LAB_014a1fb8;
  do {
    do {
      pSVar1 = *(Scope **)(pSVar1 + 8);
    } while (((byte)pSVar1[0x82] & 1) == 0);
LAB_014a1fb8:
  } while ((pSVar1[0x80] == (Scope)0x6) || (pSVar1[0x80] == (Scope)0x0));
  this_00 = *(Zone **)this;
  this_01 = *(Variable **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
    this_01 = (Variable *)Zone::NewExpand(this_00,0x30);
  }
  else {
    *(Variable **)(this_00 + 0x10) = this_01 + 0x30;
  }
  *(Scope **)this_01 = pSVar1;
  *(undefined8 *)(this_01 + 8) = param_1;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x18) = 0;
  *(undefined8 *)(this_01 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)(this_01 + 0x28) = 0x1003;
  **(undefined8 **)(pSVar1 + 0x40) = this_01;
  *(Variable **)(pSVar1 + 0x40) = this_01 + 0x18;
  if (param_3 == '\x01') {
    Variable::SetMaybeAssigned(this_01);
  }
  return this_01;
}

