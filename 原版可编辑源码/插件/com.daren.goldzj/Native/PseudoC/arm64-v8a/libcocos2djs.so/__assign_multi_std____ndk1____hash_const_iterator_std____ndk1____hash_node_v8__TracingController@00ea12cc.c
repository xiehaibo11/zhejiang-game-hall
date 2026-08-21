
/* void std::__ndk1::__hash_table<v8::TracingController::TraceStateObserver*,
   std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,
   std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,
   std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>
   >::__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,
   void*>*>
   >(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,
   void*>*>,
   std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,
   void*>*>) */

void __thiscall
std::__ndk1::
__hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
::
__assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::TracingController::TraceStateObserver*,void*>*>>
          (__hash_table<v8::TracingController::TraceStateObserver*,std::__ndk1::hash<v8::TracingController::TraceStateObserver*>,std::__ndk1::equal_to<v8::TracingController::TraceStateObserver*>,std::__ndk1::allocator<v8::TracingController::TraceStateObserver*>>
           *this,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    plVar2 = *(long **)(this + 0x10);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    while (plVar2 != (long *)0x0) {
      if (param_2 == (long *)param_3) goto LAB_00ea1340;
      lVar3 = *plVar2;
      plVar2[2] = param_2[2];
      FUN_00ea13d0(this);
      param_2 = (long *)*param_2;
      plVar2 = (long *)lVar3;
    }
  }
joined_r0x00ea1358:
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    puVar1 = operator_new(0x18);
    uVar4 = param_2[2];
    puVar1[2] = uVar4;
    uVar5 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar5 ^ uVar4 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    *puVar1 = 0;
    puVar1[1] = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    FUN_00ea13d0(this,puVar1);
  }
  return;
LAB_00ea1340:
  do {
    pvVar7 = (void *)*plVar2;
    operator_delete(plVar2);
    plVar2 = pvVar7;
  } while (pvVar7 != (void *)0x0);
  goto joined_r0x00ea1358;
}

