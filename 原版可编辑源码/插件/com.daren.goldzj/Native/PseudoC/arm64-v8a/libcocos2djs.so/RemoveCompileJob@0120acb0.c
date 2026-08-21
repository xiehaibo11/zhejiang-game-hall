
/* v8::internal::wasm::WasmEngine::RemoveCompileJob(v8::internal::wasm::AsyncCompileJob*) */

void v8::internal::wasm::WasmEngine::RemoveCompileJob(AsyncCompileJob *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong in_x1;
  long *in_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  AsyncCompileJob *this;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_60 [2];
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  base::Mutex::Lock((Mutex *)(param_1 + 0x100));
  uVar4 = *(ulong *)(param_1 + 0x130);
  if (uVar4 != 0) {
    uVar6 = ((ulong)(uint)((int)in_x1 << 3) + 8 ^ in_x1 >> 0x20) * -0x622015f714c7d297;
    uVar12 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = (uVar6 ^ in_x1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar6 < 2) {
      uVar8 = uVar4 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
        uVar8 = uVar7 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x128) + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar7) {
            if (plVar9[2] == in_x1) break;
          }
          else {
            if (uVar6 < 2) {
              uVar10 = uVar10 & uVar4 - 1;
            }
            else if (uVar4 <= uVar10) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar10 / uVar4;
              }
              uVar10 = uVar10 - uVar1 * uVar4;
            }
            if (uVar10 != uVar8) goto LAB_0120add4;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0120add8;
    }
  }
LAB_0120add4:
  plVar9 = (long *)0x0;
LAB_0120add8:
  lVar5 = plVar9[3];
  plVar9[3] = 0;
  *in_x8 = lVar5;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::hash<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>,std::__ndk1::equal_to<v8::internal::wasm::AsyncCompileJob*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::AsyncCompileJob*,std::__ndk1::unique_ptr<v8::internal::wasm::AsyncCompileJob,std::__ndk1::default_delete<v8::internal::wasm::AsyncCompileJob>>>>>
  ::remove(local_60);
  pvVar3 = local_60[0];
  local_60[0] = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    if (local_50 != '\0') {
      this = *(AsyncCompileJob **)((long)pvVar3 + 0x18);
      *(undefined8 *)((long)pvVar3 + 0x18) = 0;
      if (this != (AsyncCompileJob *)0x0) {
        AsyncCompileJob::~AsyncCompileJob(this);
        operator_delete(this);
      }
    }
    operator_delete(pvVar3);
  }
  base::Mutex::Unlock((Mutex *)(param_1 + 0x100));
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

