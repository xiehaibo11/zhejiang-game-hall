
/* v8::internal::Parser::NewHiddenCatchScope() */

Scope * __thiscall v8::internal::Parser::NewHiddenCatchScope(Parser *this)

{
  Zone *this_00;
  Scope *pSVar1;
  undefined8 uVar2;
  undefined1 auStack_14 [4];
  
  this_00 = *(Zone **)(this + 0xb8);
  uVar2 = *(undefined8 *)this;
  pSVar1 = *(Scope **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pSVar1) < 0x88) {
    pSVar1 = (Scope *)Zone::NewExpand(this_00,0x88);
  }
  else {
    *(Scope **)(this_00 + 0x10) = pSVar1 + 0x88;
  }
  Scope::Scope(pSVar1,*(undefined8 *)(this + 0xb8),uVar2,5);
  Scope::DeclareLocal(pSVar1,*(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x108),2,0,
                      auStack_14,1);
  *(ushort *)(pSVar1 + 0x81) = *(ushort *)(pSVar1 + 0x81) | 0x10;
  return pSVar1;
}

