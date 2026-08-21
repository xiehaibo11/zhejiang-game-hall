
/* v8::internal::compiler::BytecodeLivenessMap::InitializeLiveness(int, int, v8::internal::Zone*) */

int * __thiscall
v8::internal::compiler::BytecodeLivenessMap::InitializeLiveness
          (BytecodeLivenessMap *this,int param_1,int param_2,Zone *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)this;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & param_1);
  piVar5 = (int *)(lVar3 + uVar4 * 0x20);
  if ((char)piVar5[7] != '\0') {
    iVar2 = *(int *)(lVar3 + uVar4 * 0x20);
    while (iVar2 != param_1) {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      piVar5 = (int *)(lVar3 + uVar4 * 0x20);
      if ((char)piVar5[7] == '\0') break;
      iVar2 = *(int *)(lVar3 + uVar4 * 0x20);
    }
  }
  if ((char)piVar5[7] == '\0') {
    BytecodeLiveness::BytecodeLiveness((BytecodeLiveness *)&local_40,param_2,param_3);
    *piVar5 = param_1;
    piVar5[6] = param_1;
    *(undefined8 *)(piVar5 + 2) = local_40;
    *(undefined8 *)(piVar5 + 4) = uStack_38;
    *(undefined1 *)(piVar5 + 7) = 1;
    uVar1 = *(int *)(this + 0xc) + 1;
    *(uint *)(this + 0xc) = uVar1;
    if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
      base::
      TemplateHashMapImpl<int,v8::internal::compiler::BytecodeLiveness,v8::base::KeyEqualityMatcher<int>,v8::internal::ZoneAllocationPolicy>
      ::Resize((TemplateHashMapImpl<int,v8::internal::compiler::BytecodeLiveness,v8::base::KeyEqualityMatcher<int>,v8::internal::ZoneAllocationPolicy>
                *)this,param_3);
      lVar3 = *(long *)this;
      uVar4 = (ulong)(*(int *)(this + 8) - 1U & param_1);
      piVar5 = (int *)(lVar3 + uVar4 * 0x20);
      if ((char)piVar5[7] != '\0') {
        iVar2 = *(int *)(lVar3 + uVar4 * 0x20);
        while (iVar2 != param_1) {
          uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
          piVar5 = (int *)(lVar3 + uVar4 * 0x20);
          if ((char)piVar5[7] == '\0') break;
          iVar2 = *(int *)(lVar3 + uVar4 * 0x20);
        }
      }
    }
  }
  return piVar5 + 2;
}

