
/* v8::internal::DeclarationScope::DeclareDefaultFunctionVariables(v8::internal::AstValueFactory*)
    */

void __thiscall
v8::internal::DeclarationScope::DeclareDefaultFunctionVariables
          (DeclarationScope *this,AstValueFactory *param_1)

{
  DeclarationScope DVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  Zone *pZVar6;
  undefined8 uVar7;
  char local_14 [4];
  
  pZVar6 = *(Zone **)this;
  DVar1 = this[0x85];
  puVar4 = *(undefined8 **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar4) < 0x30) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar6,0x30);
  }
  else {
    *(undefined8 **)(pZVar6 + 0x10) = puVar4 + 6;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1d8);
  uVar5 = 0x21;
  if (1 < (byte)((char)DVar1 - 5U)) {
    uVar5 = 0x22;
  }
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0xffffffffffffffff;
  *(ushort *)(puVar4 + 5) = uVar5 | (ushort)(1 < (byte)((char)DVar1 - 5U)) << 0xc;
  *puVar4 = this;
  puVar4[1] = uVar7;
  *(undefined8 **)(this + 0xb0) = puVar4;
  lVar2 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,
                     *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x168),1,0,1,0,0,local_14);
  if (local_14[0] != '\0') {
    **(long **)(this + 0x40) = lVar2;
    *(long *)(this + 0x40) = lVar2 + 0x18;
  }
  *(long *)(this + 0xc0) = lVar2;
  if (((byte)this[0x85] < 0x13) && ((1 << (ulong)((byte)this[0x85] & 0x1f) & 0x731f8U) != 0)) {
    lVar2 = VariableMap::Declare
                      ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,
                       *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1e0),1,0,1,0,0,local_14);
    if (local_14[0] != '\0') {
      **(long **)(this + 0x40) = lVar2;
      *(long *)(this + 0x40) = lVar2 + 0x18;
    }
    plVar3 = *(long **)(this + 0xd8);
    if (plVar3 == (long *)0x0) {
      pZVar6 = *(Zone **)this;
      plVar3 = *(long **)(pZVar6 + 0x10);
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)plVar3) < 0x10) {
        plVar3 = (long *)Zone::NewExpand(pZVar6,0x10);
      }
      else {
        *(long **)(pZVar6 + 0x10) = plVar3 + 2;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(long **)(this + 0xd8) = plVar3;
    }
    *plVar3 = lVar2;
  }
  return;
}

