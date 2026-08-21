
/* jsc_dumpNativePtrToSeObjectMapRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void jsc_dumpNativePtrToSeObjectMapRegistry(FunctionCallbackInfo *param_1)

{
  long *plVar1;
  long lVar2;
  Value *pVVar3;
  long *__src;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  Value *pVVar9;
  Isolate *pIVar10;
  long *__dest;
  long *plVar11;
  ulong uVar12;
  size_t __n;
  long *plVar13;
  Value *local_d8;
  Value *local_d0;
  undefined8 local_c8;
  HandleScope aHStack_c0 [24];
  long *local_a8;
  long *local_a0;
  long *local_98;
  State aSStack_90 [40];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar10 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_c0,pIVar10);
  local_d8 = (Value *)0x0;
  local_d0 = (Value *)0x0;
  local_c8 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar10,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar4,(vector *)&local_d8);
  uVar5 = se::NativePtrToObjectMap::size();
  cocos2d::log(">>> total: %d, Dump (native -> jsobj) map begin",uVar5);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  lVar6 = se::NativePtrToObjectMap::instance();
  plVar13 = *(long **)(lVar6 + 0x10);
  if (plVar13 == (long *)0x0) {
    plVar11 = (long *)0x0;
    __dest = (long *)0x0;
  }
  else {
    __dest = (long *)0x0;
    plVar11 = (long *)0x0;
    do {
      pbVar7 = (byte *)se::Object::_getClass((Object *)plVar13[3]);
      __src = local_a8;
      if ((*pbVar7 & 1) == 0) {
        pbVar7 = pbVar7 + 1;
      }
      else {
        pbVar7 = *(byte **)(pbVar7 + 0x10);
      }
      lVar6 = plVar13[2];
      if (plVar11 == local_98) {
        __n = (long)plVar11 - (long)local_a8;
        uVar12 = (long)__n >> 4;
        uVar8 = uVar12 + 1;
        if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar12 < 0x7ffffffffffffff) {
          if (uVar8 <= (ulong)((long)__n >> 3)) {
            uVar8 = (long)__n >> 3;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            goto LAB_008ec98c;
          }
          __dest = (long *)0x0;
        }
        else {
          uVar8 = 0xfffffffffffffff;
LAB_008ec98c:
          __dest = operator_new(uVar8 << 4);
        }
        plVar1 = __dest + uVar12 * 2;
        plVar11 = plVar1 + 2;
        *plVar1 = (long)pbVar7;
        plVar1[1] = lVar6;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        local_a8 = __dest;
        local_a0 = plVar11;
        local_98 = __dest + uVar8 * 2;
        if (__src != (long *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *plVar11 = (long)pbVar7;
        plVar11[1] = lVar6;
        plVar11 = local_a0 + 2;
        local_a0 = plVar11;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  FUN_008f2e78(__dest,plVar11);
  plVar11 = local_a0;
  for (plVar13 = local_a8; plVar13 != plVar11; plVar13 = plVar13 + 2) {
    cocos2d::log("%s: %p",*plVar13,plVar13[1]);
  }
  uVar8 = se::NativePtrToObjectMap::size();
  uVar5 = se::NonRefNativePtrCreatedByCtorMap::size();
  cocos2d::log(">>> total: %d, nonRefMap: %d, Dump (native -> jsobj) map end",uVar8 & 0xffffffff,
               uVar5);
  if (local_a8 != (long *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  pVVar9 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar9,param_1);
  se::State::~State(aSStack_90);
  pVVar3 = local_d8;
  pVVar9 = local_d0;
  if (local_d8 != (Value *)0x0) {
    while (pVVar9 != pVVar3) {
      se::Value::~Value(pVVar9 + -0x10);
      pVVar9 = pVVar9 + -0x10;
    }
    local_d0 = pVVar3;
    operator_delete(local_d8);
  }
  v8::HandleScope::~HandleScope(aHStack_c0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

