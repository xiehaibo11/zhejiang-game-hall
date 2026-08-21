
/* v8::internal::Scope::Scope(v8::internal::Zone*, v8::internal::AstRawString const*,
   v8::internal::MaybeAssignedFlag, v8::internal::Handle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::Scope::Scope
          (Scope *this,Zone *param_1,undefined8 param_2,undefined4 param_4,undefined8 param_5)

{
  VariableMap *pVVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  char local_44 [4];
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  pVVar1 = (VariableMap *)(this + 0x20);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < 0xc0) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_1,0xc0);
    *(undefined8 **)pVVar1 = puVar3;
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 0x18;
    *(undefined8 **)pVVar1 = puVar3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(this + 0x28) = 8;
    *puVar3 = 0;
    if (1 < *(uint *)(this + 0x28)) {
      uVar4 = 1;
      lVar5 = 0x18;
      do {
        uVar4 = uVar4 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (uVar4 < *(uint *)(this + 0x28));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(Scope **)(this + 0x40) = this + 0x38;
    *(undefined8 *)(this + 0x58) = 0;
    this[0x80] = (Scope)0x5;
    *(Scope **)(this + 0x60) = this + 0x58;
    *(undefined8 *)(this + 0x68) = param_5;
    *(undefined8 *)(this + 0x48) = 0;
    *(Scope **)(this + 0x50) = this + 0x48;
    *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) & 0xf000;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x78) = 0x200000000;
    *(undefined8 *)(this + 0x70) = 0xffffffffffffffff;
    lVar5 = VariableMap::Declare(pVVar1,param_1,this,param_2,2,0,1,param_4,0,local_44);
    if (local_44[0] != '\0') {
      **(long **)(this + 0x40) = lVar5;
      *(long *)(this + 0x40) = lVar5 + 0x18;
    }
    iVar2 = *(int *)(this + 0x7c);
    *(int *)(this + 0x7c) = iVar2 + 1;
    *(int *)(lVar5 + 0x20) = iVar2;
    *(ushort *)(lVar5 + 0x28) = *(ushort *)(lVar5 + 0x28) & 0xfdff | 0x180;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

