
/* v8::internal::ObjectDescriptor::AddConstant(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::ObjectDescriptor::AddConstant
          (ObjectDescriptor *this,undefined8 param_1,undefined8 param_3,ulong *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_50;
  Descriptor aDStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_4;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) ==
                  0x51);
  }
  if ((*(int *)(this + 0x10) < 1) && (*(int *)this + *(int *)(this + 4) < 0x3fd)) {
    if (uVar5 == 0) {
      Descriptor::DataConstant(aDStack_48,param_3,param_4,param_5);
    }
    else {
      Descriptor::AccessorConstant();
    }
    local_50 = **(undefined8 **)(this + 0x18);
    DescriptorArray::Append((DescriptorArray *)&local_50,aDStack_48);
  }
  else {
    iVar1 = *(int *)(this + 8);
    *(int *)(this + 8) = iVar1 + 1;
    uVar3 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
            AddNoUpdateNextEnumerationIndex
                      (param_1,*(undefined8 *)(this + 0x20),param_3,param_4,
                       uVar5 | param_5 << 3 | iVar1 << 8 | 0xc0,0);
    *(undefined8 *)(this + 0x20) = uVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

