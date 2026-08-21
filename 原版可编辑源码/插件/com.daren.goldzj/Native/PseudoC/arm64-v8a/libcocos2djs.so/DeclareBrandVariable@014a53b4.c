
/* v8::internal::ClassScope::DeclareBrandVariable(v8::internal::AstValueFactory*,
   v8::internal::IsStaticFlag, int) */

long __thiscall
v8::internal::ClassScope::DeclareBrandVariable
          (ClassScope *this,long param_1,short param_3,undefined4 param_4)

{
  long lVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  char local_34 [4];
  
  lVar1 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,
                     *(undefined8 *)(*(long *)(param_1 + 0x38) + 0xa8),1,0,0,1,0,local_34);
  if (local_34[0] != '\0') {
    **(long **)(this + 0x40) = lVar1;
    *(long *)(this + 0x40) = lVar1 + 0x18;
  }
  *(ushort *)(lVar1 + 0x28) = *(ushort *)(lVar1 + 0x28) & 0x7fff | param_3 << 0xf | 0xc00;
  uVar5 = *(ulong *)(this + 0x88);
  if (uVar5 < 8) {
    pZVar2 = *(Zone **)this;
    puVar3 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar3) < 0x30) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar2,0x30);
    }
    else {
      *(undefined8 **)(pZVar2 + 0x10) = puVar3 + 6;
    }
    pZVar2 = *(Zone **)this;
    *puVar3 = 0;
    puVar3[1] = puVar3;
    puVar4 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar4) < 0xc0) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar2,0xc0);
      puVar3[2] = puVar4;
    }
    else {
      *(undefined8 **)(pZVar2 + 0x10) = puVar4 + 0x18;
      puVar3[2] = puVar4;
    }
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    *(undefined4 *)(puVar3 + 3) = 8;
    *puVar4 = 0;
    if (1 < *(uint *)(puVar3 + 3)) {
      uVar5 = 1;
      lVar6 = 0x18;
      do {
        uVar5 = uVar5 + 1;
        *(undefined8 *)(puVar3[2] + lVar6) = 0;
        lVar6 = lVar6 + 0x18;
      } while (uVar5 < *(uint *)(puVar3 + 3));
    }
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    puVar3[5] = 0;
    uVar5 = *(ulong *)(this + 0x88) & 7 | (ulong)puVar3;
    *(ulong *)(this + 0x88) = uVar5;
  }
  *(long *)((uVar5 & 0xfffffffffffffff8) + 0x28) = lVar1;
  *(undefined4 *)(lVar1 + 0x24) = param_4;
  return lVar1;
}

