
/* v8::internal::OptimizedFrame::GetFunctions(std::__ndk1::vector<v8::internal::SharedFunctionInfo,
   std::__ndk1::allocator<v8::internal::SharedFunctionInfo> >*) const */

void __thiscall v8::internal::OptimizedFrame::GetFunctions(OptimizedFrame *this,vector *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_78;
  int local_6c;
  ulong local_68 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar6 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  if ((*(uint *)(*(long *)(lVar6 + 8) + 0x17) & 0x3e) == 6) {
    uVar7 = (**(code **)(*(long *)this + 0x98))(this);
    local_68[0] = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
    if (*(ulong **)(param_1 + 8) < *(ulong **)(param_1 + 0x10)) {
      **(ulong **)(param_1 + 8) = local_68[0];
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    }
    else {
      std::__ndk1::
      vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
      ::__push_back_slow_path<v8::internal::SharedFunctionInfo>
                ((vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
                  *)param_1,(SharedFunctionInfo *)local_68);
    }
  }
  else {
    local_6c = -1;
    uVar7 = GetDeoptimizationData(this,&local_6c);
    uVar1 = *(uint *)(uVar7 + 0xf);
    uVar8 = uVar7 & 0xffffffff00000000;
    TranslationIterator::TranslationIterator
              ((TranslationIterator *)local_68,uVar8 | *(uint *)(uVar7 + 7),
               *(int *)(uVar7 + 7 + (long)(local_6c * 0xc + 0x28)) >> 1);
    TranslationIterator::Next((TranslationIterator *)local_68);
    TranslationIterator::Next((TranslationIterator *)local_68);
    iVar3 = TranslationIterator::Next((TranslationIterator *)local_68);
    TranslationIterator::Next((TranslationIterator *)local_68);
    if (iVar3 != 0) {
      do {
        uVar4 = TranslationIterator::Next((TranslationIterator *)local_68);
        if ((uVar4 < 5) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1aU) != 0)) {
          TranslationIterator::Next((TranslationIterator *)local_68);
          iVar3 = iVar3 + -1;
          iVar5 = TranslationIterator::Next((TranslationIterator *)local_68);
          local_78 = uVar8 | *(uint *)((uVar8 | uVar1) + 7 + (long)(iVar5 << 2));
          if (*(ulong **)(param_1 + 8) < *(ulong **)(param_1 + 0x10)) {
            **(ulong **)(param_1 + 8) = local_78;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
          }
          else {
            std::__ndk1::
            vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
            ::__push_back_slow_path<v8::internal::SharedFunctionInfo>
                      ((vector<v8::internal::SharedFunctionInfo,std::__ndk1::allocator<v8::internal::SharedFunctionInfo>>
                        *)param_1,(SharedFunctionInfo *)&local_78);
          }
          iVar5 = Translation::NumberOfOperandsFor(uVar4);
          iVar5 = iVar5 + -2;
          if (0 < iVar5) {
            do {
              TranslationIterator::Next((TranslationIterator *)local_68);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar5 = Translation::NumberOfOperandsFor(uVar4);
          if (0 < iVar5) {
            do {
              TranslationIterator::Next((TranslationIterator *)local_68);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      } while (iVar3 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

