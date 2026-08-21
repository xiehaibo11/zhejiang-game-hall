
/* v8::internal::compiler::AccessInfoFactory::MergePropertyAccessInfos(v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>,
   v8::internal::compiler::AccessMode,
   v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>*) const */

void __thiscall
v8::internal::compiler::AccessInfoFactory::MergePropertyAccessInfos
          (AccessInfoFactory *this,undefined8 *param_2,undefined4 param_3,
          vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
          *param_4)

{
  PropertyAccessInfo *pPVar1;
  PropertyAccessInfo *pPVar2;
  PropertyAccessInfo *pPVar3;
  PropertyAccessInfo *pPVar4;
  ulong uVar5;
  
  pPVar3 = (PropertyAccessInfo *)param_2[1];
  pPVar1 = (PropertyAccessInfo *)*param_2;
joined_r0x017e7d1c:
  do {
    pPVar4 = pPVar1;
    if (pPVar4 == pPVar3) {
      if (*(long *)param_4 == *(long *)(param_4 + 8)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!result->empty()");
      }
      return;
    }
    pPVar1 = pPVar4 + 0x88;
    for (pPVar2 = pPVar1; pPVar2 != pPVar3; pPVar2 = pPVar2 + 0x88) {
      uVar5 = PropertyAccessInfo::Merge(pPVar2,pPVar4,param_3,*(undefined8 *)(this + 0x18));
      if ((uVar5 & 1) != 0) goto joined_r0x017e7d1c;
    }
    if (*(PropertyAccessInfo **)(param_4 + 8) == *(PropertyAccessInfo **)(param_4 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
      ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo_const&>(param_4,pPVar4);
    }
    else {
      PropertyAccessInfo::PropertyAccessInfo(*(PropertyAccessInfo **)(param_4 + 8),pPVar4);
      *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 0x88;
    }
  } while( true );
}

