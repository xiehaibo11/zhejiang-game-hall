
/* v8::internal::ObjectDescriptor::CreateTemplates(v8::internal::Isolate*) */

void __thiscall
v8::internal::ObjectDescriptor::CreateTemplates(ObjectDescriptor *this,Isolate *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  ObjectDescriptor *pOVar8;
  
  *(Isolate **)(this + 0x20) = param_1 + 0x410;
  pOVar8 = this + 0x18;
  *(Isolate **)pOVar8 = param_1 + 0x170;
  iVar1 = *(int *)(this + 4);
  iVar6 = *(int *)(this + 0x10);
  if (iVar1 == 0 && iVar6 == 0) {
    if (*(int *)this != 0) {
      iVar6 = 0;
      goto LAB_01526f40;
    }
  }
  else {
    if (iVar6 < 1) {
LAB_01526f40:
      iVar7 = *(int *)this;
      if (0x3fc < iVar7 + iVar1) goto LAB_01526f50;
      lVar2 = DescriptorArray::Allocate(param_1,0,iVar7 + iVar1);
    }
    else {
      iVar7 = *(int *)this;
LAB_01526f50:
      lVar2 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
              New(param_1,iVar6 + iVar1 + iVar7,0,0);
      pOVar8 = this + 0x20;
    }
    *(long *)pOVar8 = lVar2;
  }
  if (*(int *)(this + 0xc) == 0 && *(int *)(this + 0x10) == 0) {
    *(Isolate **)(this + 0x28) = param_1 + 1000;
  }
  else {
    uVar3 = HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::New
                      (param_1,*(int *)(this + 0x10) + *(int *)(this + 0xc),0,0);
    *(undefined8 *)(this + 0x28) = uVar3;
    if (*(int *)(this + 0x10) != 0) {
      pIVar4 = (Isolate *)Factory::NewFixedArray((Factory *)param_1,*(int *)(this + 0x10) << 1,0);
      goto LAB_01526fcc;
    }
  }
  pIVar4 = param_1 + 0x168;
LAB_01526fcc:
  *(Isolate **)(this + 0x30) = pIVar4;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x95a0);
    if (puVar5 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar5 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = 0;
  }
  else {
    puVar5 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  *(undefined8 **)(this + 0x38) = puVar5;
  return;
}

