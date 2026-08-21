
/* std::__ndk1::__hash_table<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> >, v8::base::hash<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > >,
   std::__ndk1::equal_to<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > >,
   std::__ndk1::allocator<std::__ndk1::pair<bool,
   v8::internal::Signature<v8::internal::wasm::ValueType> > > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
::__rehash(__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar5 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    uVar6 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
      *(undefined8 *)(*(long *)this + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (param_1 != uVar6);
    plVar7 = *(long **)(this + 0x10);
    if (plVar7 != (long *)0x0) {
      uVar6 = plVar7[1];
      uVar16 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar17 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15);
      if ((uVar17 & 0xffffffff) < 2) {
        uVar6 = uVar6 & param_1 - 1;
      }
      else if (param_1 <= uVar6) {
        uVar10 = 0;
        if (param_1 != 0) {
          uVar10 = uVar6 / param_1;
        }
        uVar6 = uVar6 - uVar10 * param_1;
      }
      *(__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
        **)(*(long *)this + uVar6 * 8) = this + 0x10;
      if ((long *)*plVar7 != (long *)0x0) {
        plVar8 = (long *)*plVar7;
        do {
          while (uVar10 = plVar8[1], (uVar17 & 0xffffffff) < 2) {
            uVar10 = uVar10 & param_1 - 1;
LAB_015e9694:
            if (uVar10 == uVar6) goto LAB_015e965c;
LAB_015e969c:
            if (*(long *)(*(long *)this + uVar10 * 8) != 0) {
              plVar9 = plVar8;
              if ((long *)*plVar8 != (long *)0x0) {
                plVar12 = (long *)*plVar8;
                while ((char)plVar8[2] == (char)plVar12[2]) {
                  if (plVar8 != plVar12) {
                    lVar3 = plVar8[4];
                    if ((lVar3 != plVar12[4]) || (lVar4 = plVar8[3], lVar4 != plVar12[3])) break;
                    pcVar13 = (char *)plVar8[5];
                    if (pcVar13 != pcVar13 + lVar3 + lVar4) {
                      pcVar14 = (char *)plVar12[5];
                      lVar4 = lVar4 + lVar3;
                      do {
                        if (*pcVar13 != *pcVar14) goto LAB_015e9760;
                        pcVar13 = pcVar13 + 1;
                        lVar4 = lVar4 + -1;
                        pcVar14 = pcVar14 + 1;
                      } while (lVar4 != 0);
                    }
                  }
                  plVar11 = (long *)*plVar12;
                  plVar9 = plVar12;
                  plVar12 = plVar11;
                  if (plVar11 == (long *)0x0) break;
                }
              }
LAB_015e9760:
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(*(long *)this + uVar10 * 8);
              **(undefined8 **)(*(long *)this + uVar10 * 8) = plVar8;
              plVar9 = (long *)*plVar7;
              plVar8 = plVar7;
              goto joined_r0x015e978c;
            }
            *(long **)(*(long *)this + uVar10 * 8) = plVar7;
            plVar9 = (long *)*plVar8;
            plVar7 = plVar8;
            uVar6 = uVar10;
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          if (uVar10 < param_1) goto LAB_015e9694;
          uVar1 = 0;
          if (param_1 != 0) {
            uVar1 = uVar10 / param_1;
          }
          uVar10 = uVar10 - uVar1 * param_1;
          if (uVar10 != uVar6) goto LAB_015e969c;
LAB_015e965c:
          plVar9 = (long *)*plVar8;
joined_r0x015e978c:
          plVar7 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}

