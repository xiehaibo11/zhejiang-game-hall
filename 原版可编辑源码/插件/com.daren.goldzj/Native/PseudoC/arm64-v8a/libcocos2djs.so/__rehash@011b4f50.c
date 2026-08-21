
/* std::__ndk1::__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
::__rehash(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
           *this,ulong param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    pvVar1 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar11 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar7 < 2) {
        uVar4 = uVar4 & param_1 - 1;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      if ((long *)*plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        do {
          uVar8 = plVar6[1];
          if (uVar7 < 2) {
            uVar8 = uVar8 & param_1 - 1;
          }
          else if (param_1 <= uVar8) {
            uVar2 = 0;
            if (param_1 != 0) {
              uVar2 = uVar8 / param_1;
            }
            uVar8 = uVar8 - uVar2 * param_1;
          }
          if (uVar8 != uVar4) {
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) {
              *(long **)(*(long *)this + uVar8 * 8) = plVar5;
              uVar4 = uVar8;
            }
            else {
              plVar9 = plVar6;
              if (*plVar6 != 0) {
                uVar2 = v8::internal::CodeEntry::IsSameFunctionAs
                                  ((CodeEntry *)plVar6[2],*(CodeEntry **)(*plVar6 + 0x10));
                while ((uVar2 & 1) != 0) {
                  plVar9 = (long *)*plVar9;
                  if (*plVar9 == 0) break;
                  uVar2 = v8::internal::CodeEntry::IsSameFunctionAs
                                    ((CodeEntry *)plVar6[2],*(CodeEntry **)(*plVar9 + 0x10));
                }
              }
              *plVar5 = *plVar9;
              *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
              **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar6;
              plVar6 = plVar5;
            }
          }
          plVar9 = (long *)*plVar6;
          plVar5 = plVar6;
          plVar6 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}

