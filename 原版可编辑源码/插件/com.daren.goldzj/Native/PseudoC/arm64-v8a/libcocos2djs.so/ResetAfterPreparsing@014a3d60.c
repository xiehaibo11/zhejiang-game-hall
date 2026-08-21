
/* v8::internal::DeclarationScope::ResetAfterPreparsing(v8::internal::AstValueFactory*, bool) */

void __thiscall
v8::internal::DeclarationScope::ResetAfterPreparsing
          (DeclarationScope *this,AstValueFactory *param_1,bool param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Zone *this_00;
  long lVar5;
  
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(DeclarationScope **)(this + 0x60) = this + 0x58;
  *(undefined8 *)(this + 0x38) = 0;
  *(DeclarationScope **)(this + 0x40) = this + 0x38;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(DeclarationScope **)(this + 0x50) = this + 0x48;
  *(undefined8 *)(this + 0xa0) = 0;
  *(DeclarationScope **)(this + 0xa8) = this + 0xa0;
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xfff7;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  Zone::ReleaseMemory(*(Zone **)this);
  if (param_2) {
    this_00 = *(Zone **)(param_1 + 0x448);
    uVar2 = *(uint *)(this + 0x28);
    *(Zone **)this = this_00;
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    uVar4 = (ulong)uVar2 * 0x18;
    if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) ||
        uVar4 - (*(long *)(this_00 + 0x18) - (long)puVar3) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar3 + (ulong)uVar2 * 3;
      *(undefined8 **)(this + 0x20) = puVar3;
    }
    else {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,uVar4);
      *(undefined8 **)(this + 0x20) = puVar3;
    }
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    *(uint *)(this + 0x28) = uVar2;
    if ((uVar2 != 0) && (*puVar3 = 0, 1 < *(uint *)(this + 0x28))) {
      uVar4 = 1;
      lVar5 = 0x18;
      do {
        uVar4 = uVar4 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (uVar4 < *(uint *)(this + 0x28));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    if (1 < (byte)this[0x85] - 9) {
      *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 1;
      DeclareDefaultFunctionVariables(this,param_1);
    }
  }
  else {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  uVar1 = 0;
  if (!param_2) {
    uVar1 = 0x80;
  }
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xff7f | uVar1;
  return;
}

