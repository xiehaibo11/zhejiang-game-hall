
/* v8::internal::compiler::JSHeapBroker::ShouldBeSerializedForCompilation(v8::internal::compiler::SharedFunctionInfoRef
   const&, v8::internal::compiler::FeedbackVectorRef const&,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&) const */

bool __thiscall
v8::internal::compiler::JSHeapBroker::ShouldBeSerializedForCompilation
          (JSHeapBroker *this,SharedFunctionInfoRef *param_1,FeedbackVectorRef *param_2,
          ZoneVector *param_3)

{
  Hints *this_00;
  Hints *pHVar1;
  Hints *pHVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_58 = *(undefined8 *)(param_1 + 8);
  local_60 = *(undefined8 *)param_1;
  uStack_48 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)param_2;
  auVar10 = std::__ndk1::
            __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
            ::__equal_range_multi<v8::internal::compiler::JSHeapBroker::SerializedFunction>
                      ((__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
                        *)(this + 0x248),(SerializedFunction *)&local_60);
  plVar5 = auVar10._8_8_;
  plVar8 = auVar10._0_8_;
  plVar9 = auVar10._0_8_;
  while (plVar8 != plVar5) {
    this_00 = (Hints *)plVar8[8];
    pHVar2 = (Hints *)plVar8[9];
    pHVar1 = *(Hints **)param_3;
    if ((long)pHVar2 - (long)this_00 == *(long *)(param_3 + 8) - (long)pHVar1) {
      while( true ) {
        plVar9 = plVar8;
        if (this_00 == pHVar2) goto LAB_0171759c;
        uVar4 = Hints::operator==(this_00,pHVar1);
        if ((uVar4 & 1) == 0) break;
        this_00 = this_00 + 8;
        pHVar1 = pHVar1 + 8;
      }
    }
    plVar6 = (long *)plVar8[1];
    plVar9 = plVar5;
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar6 = plVar8 + 2;
      bVar3 = *(long **)*plVar6 != plVar8;
      plVar8 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar7 = *plVar6;
          plVar6 = (long *)(lVar7 + 0x10);
          plVar8 = (long *)*plVar6;
        } while (*plVar8 != lVar7);
      }
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
LAB_0171759c:
  return plVar9 == plVar5;
}

