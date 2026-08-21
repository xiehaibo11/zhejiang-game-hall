
/* v8::internal::CompilerDispatcher::AbortJob(unsigned long) */

void __thiscall v8::internal::CompilerDispatcher::AbortJob(CompilerDispatcher *this,ulong param_1)

{
  ulong uVar1;
  CompilerDispatcher *pCVar2;
  ulong uVar3;
  CompilerDispatcher *pCVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  CompilerDispatcher *pCVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong local_18;
  
  if (this[0x40] != (CompilerDispatcher)0x0) {
    PrintF("CompilerDispatcher: aborted job %zu\n",param_1);
  }
  pCVar2 = this + 0x60;
  pCVar4 = *(CompilerDispatcher **)pCVar2;
  pCVar10 = pCVar2;
  if (pCVar4 != (CompilerDispatcher *)0x0) {
    do {
      if (*(ulong *)(pCVar4 + 0x20) >= param_1) {
        pCVar10 = pCVar4;
      }
      pCVar4 = *(CompilerDispatcher **)(pCVar4 + (ulong)(*(ulong *)(pCVar4 + 0x20) < param_1) * 8);
    } while (pCVar4 != (CompilerDispatcher *)0x0);
    if ((pCVar10 != pCVar2) && (*(ulong *)(pCVar10 + 0x20) <= param_1)) goto LAB_00ef6768;
  }
  pCVar10 = pCVar2;
LAB_00ef6768:
  local_18 = *(ulong *)(pCVar10 + 0x28);
  base::Mutex::Lock((Mutex *)(this + 0xb0));
  FUN_00ef62c8(this + 0xe0,&local_18);
  uVar3 = *(ulong *)(this + 0x110);
  if (uVar3 != 0) {
    uVar5 = ((ulong)(uint)((int)local_18 << 3) + 8 ^ local_18 >> 0x20) * -0x622015f714c7d297;
    uVar12 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = (uVar5 ^ local_18 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar7 = uVar6 & uVar3 - 1;
    }
    else {
      uVar7 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar6 / uVar3;
        }
        uVar7 = uVar6 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x108) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if (plVar8[2] == local_18) {
            *(undefined1 *)(local_18 + 0x11) = 1;
            goto LAB_00ef6884;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar1 * uVar3;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  if (*(ulong **)(*(long *)(pCVar10 + 0x28) + 8) != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)(*(long *)(pCVar10 + 0x28) + 8));
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
  ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
           *)(this + 0x58),pCVar10);
LAB_00ef6884:
  base::Mutex::Unlock((Mutex *)(this + 0xb0));
  return;
}

