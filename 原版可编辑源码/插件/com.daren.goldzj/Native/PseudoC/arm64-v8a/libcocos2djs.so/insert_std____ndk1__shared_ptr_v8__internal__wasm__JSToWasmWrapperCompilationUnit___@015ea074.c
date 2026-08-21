
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>::value&&is_constructible<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,
   std::__ndk1::iterator_traits<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>::reference>::value,
   std::__ndk1::__wrap_iter<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>
   >::type
   std::__ndk1::vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,
   std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>
   > 
   >::insert<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>(std::__ndk1::__wrap_iter<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>
   const*>, std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*,
   std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*) */

undefined8 * __thiscall
std::__ndk1::
vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
::insert<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>*>
          (vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
           *this,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  __shared_weak_count *p_Var17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  puVar16 = param_2;
  if (0 < (long)param_4 - (long)param_3) {
    puVar8 = *(undefined8 **)(this + 8);
    lVar9 = (long)param_4 - (long)param_3 >> 4;
    if (*(long *)(this + 0x10) - (long)puVar8 >> 4 < lVar9) {
      puVar19 = *(undefined8 **)this;
      uVar3 = lVar9 + ((long)puVar8 - (long)puVar19 >> 4);
      if (uVar3 >> 0x3c != 0) {
LAB_015ea3f8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar9 = *(long *)(this + 0x10) - (long)puVar19;
      uVar13 = lVar9 >> 3;
      if (uVar3 <= uVar13) {
        uVar3 = uVar13;
      }
      if (0x7fffffffffffffe < (ulong)(lVar9 >> 4)) {
        uVar3 = 0xfffffffffffffff;
      }
      if (uVar3 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3c != 0) goto LAB_015ea3f8;
        pvVar6 = operator_new(uVar3 << 4);
      }
      puVar16 = (undefined8 *)((long)pvVar6 + ((long)param_2 - (long)puVar19 >> 4) * 0x10);
      puVar8 = puVar16;
      puVar18 = puVar16;
      puVar11 = param_2;
      if (param_3 != param_4) {
        do {
          *puVar8 = *param_3;
          lVar9 = param_3[1];
          puVar8[1] = lVar9;
          if (lVar9 != 0) {
            plVar1 = (long *)(lVar9 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          param_3 = param_3 + 2;
          puVar8 = puVar8 + 2;
        } while (param_3 != param_4);
        puVar19 = *(undefined8 **)this;
      }
      while (puVar19 != puVar11) {
        puVar12 = puVar11 + -2;
        puVar18[-2] = *puVar12;
        puVar18[-1] = puVar11[-1];
        *puVar12 = 0;
        puVar11[-1] = 0;
        puVar18 = puVar18 + -2;
        puVar11 = puVar12;
      }
      puVar19 = *(undefined8 **)(this + 8);
      if (puVar19 != param_2) {
        do {
          *puVar8 = *param_2;
          puVar8[1] = param_2[1];
          puVar11 = param_2 + 2;
          *param_2 = 0;
          param_2[1] = 0;
          puVar8 = puVar8 + 2;
          param_2 = puVar11;
        } while (puVar11 != puVar19);
        param_2 = *(undefined8 **)(this + 8);
      }
      puVar19 = *(undefined8 **)this;
      *(undefined8 **)this = puVar18;
      *(undefined8 **)(this + 8) = puVar8;
      *(void **)(this + 0x10) = (void *)((long)pvVar6 + uVar3 * 0x10);
      while (param_2 != puVar19) {
        p_Var17 = (__shared_weak_count *)param_2[-1];
        param_2 = param_2 + -2;
        if (p_Var17 != (__shared_weak_count *)0x0) {
          p_Var2 = p_Var17 + 8;
          do {
            lVar9 = *(long *)p_Var2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
            if (bVar5) {
              *(long *)p_Var2 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
            __shared_weak_count::__release_weak(p_Var17);
          }
        }
      }
      if (puVar19 != (undefined8 *)0x0) {
        operator_delete(puVar19);
      }
    }
    else {
      lVar14 = (long)puVar8 - (long)param_2 >> 4;
      puVar19 = puVar8;
      if (lVar14 < lVar9) {
        for (puVar18 = param_3 + lVar14 * 2; puVar18 != param_4; puVar18 = puVar18 + 2) {
          *puVar19 = *puVar18;
          lVar15 = puVar18[1];
          puVar19[1] = lVar15;
          if (lVar15 != 0) {
            plVar1 = (long *)(lVar15 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar19 = (undefined8 *)(*(long *)(this + 8) + 0x10);
          *(undefined8 **)(this + 8) = puVar19;
        }
        param_4 = param_3 + lVar14 * 2;
        if ((long)puVar8 - (long)param_2 < 1) {
          return param_2;
        }
      }
      puVar18 = puVar19;
      for (puVar11 = puVar19 + lVar9 * -2; puVar11 < puVar8; puVar11 = puVar11 + 2) {
        *puVar18 = *puVar11;
        puVar18[1] = puVar11[1];
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar18 = (undefined8 *)(*(long *)(this + 8) + 0x10);
        *(undefined8 **)(this + 8) = puVar18;
      }
      puVar8 = puVar19 + lVar9 * -2;
      if (puVar19 != param_2 + lVar9 * 2) {
        do {
          puVar18 = puVar8 + -2;
          uVar7 = *puVar18;
          uVar10 = puVar8[-1];
          *puVar18 = 0;
          puVar8[-1] = 0;
          puVar19[-2] = uVar7;
          p_Var17 = (__shared_weak_count *)puVar19[-1];
          puVar19[-1] = uVar10;
          if (p_Var17 != (__shared_weak_count *)0x0) {
            p_Var2 = p_Var17 + 8;
            do {
              lVar9 = *(long *)p_Var2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
              if (bVar5) {
                *(long *)p_Var2 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
              __shared_weak_count::__release_weak(p_Var17);
            }
          }
          puVar8 = puVar18;
          puVar19 = puVar19 + -2;
        } while (puVar18 != param_2);
      }
      if (param_4 != param_3) {
        uVar7 = *param_3;
        lVar9 = param_3[1];
        while( true ) {
          if (lVar9 != 0) {
            plVar1 = (long *)(lVar9 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          p_Var17 = (__shared_weak_count *)param_2[1];
          *param_2 = uVar7;
          param_2[1] = lVar9;
          if (p_Var17 != (__shared_weak_count *)0x0) {
            p_Var2 = p_Var17 + 8;
            do {
              lVar9 = *(long *)p_Var2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
              if (bVar5) {
                *(long *)p_Var2 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*(long *)p_Var17 + 0x10))(p_Var17);
              __shared_weak_count::__release_weak(p_Var17);
            }
          }
          puVar8 = param_3 + 2;
          param_2 = param_2 + 2;
          if (puVar8 == param_4) break;
          uVar7 = *puVar8;
          lVar9 = param_3[3];
          param_3 = puVar8;
        }
      }
    }
  }
  return puVar16;
}

