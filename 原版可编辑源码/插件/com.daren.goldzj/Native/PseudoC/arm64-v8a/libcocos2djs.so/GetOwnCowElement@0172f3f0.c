
/* v8::internal::compiler::JSArrayRef::GetOwnCowElement(unsigned int,
   v8::internal::compiler::SerializationPolicy) const */

void v8::internal::compiler::JSArrayRef::GetOwnCowElement
               (undefined1 *param_1,ObjectRef *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  JSObjectData *this;
  JSArrayData *pJVar4;
  long lVar5;
  basic_ostream *pbVar6;
  ulong uVar7;
  Factory *this_00;
  ulong *puVar8;
  undefined1 auVar9 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  Factory *local_80;
  ulong *local_78;
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 local_60;
  ulong *puStack_58;
  ulong local_50;
  undefined8 uStack_48;
  
  if (*(int *)(*(undefined8 **)param_2 + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)param_2;
    local_98 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 7);
    uVar7 = FixedArrayBase::IsCowArray((FixedArrayBase *)&local_98);
    if ((uVar7 & 1) != 0) {
      puVar1 = *(undefined8 **)(param_2 + 8);
      uVar7 = (ulong)param_3;
      puVar8 = (ulong *)**(undefined8 **)param_2;
      this_00 = (Factory *)*puVar1;
      if (((*puVar8 & 1) == 0) ||
         (puStack_58 = puVar8,
         *(ushort *)(((ulong)this_00 | 7) + (ulong)*(uint *)(*puVar8 - 1)) < 0xa9)) {
        puStack_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this_00,puVar8,uVar7);
      }
      local_78 = (ulong *)0x0;
      local_70 = 0;
      local_60 = 0;
      local_98._0_4_ = 1;
      local_8c = 0;
      uStack_88 = 0xc0;
      uStack_48 = 0xffffffffffffffff;
      local_80 = this_00;
      puVar2 = local_78;
      puStack_68 = puVar8;
      local_50 = uVar7;
      if (((param_3 == 0xffffffff) &&
          (*(short *)((*puStack_58 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puStack_58 - 1)) !=
           0x41b)) &&
         (puVar2 = (ulong *)Factory::SizeToString(this_00,0xffffffff,true),
         (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) & 0xffe0)
         == 0x20)) {
        puVar2 = (ulong *)StringTable::LookupString(this_00);
      }
      local_78 = puVar2;
      LookupIterator::Start<true>((LookupIterator *)&local_98);
      if (local_98._4_4_ == 6) {
        uVar3 = LookupIterator::GetDataValue();
        ObjectRef::ObjectRef((ObjectRef *)local_a8,puVar1,uVar3,0);
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x10) = local_a8._8_8_;
        *(undefined8 *)(param_1 + 8) = local_a8._0_8_;
        return;
      }
      param_1[8] = 0;
      *param_1 = 0;
      return;
    }
  }
  else {
    this = (JSObjectData *)ObjectRef::data(param_2);
    if (*(int *)(this + 8) != 1) {
LAB_0172f688:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(this + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    if (param_4 == 1) {
      JSObjectData::SerializeElements(this,*(JSHeapBroker **)(param_2 + 8));
    }
    else if (this[0x22] == (JSObjectData)0x0) {
      if (((*(JSHeapBroker **)(param_2 + 8))[0x74] != (JSHeapBroker)0x0) &&
         (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar6 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)(param_2 + 8));
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"\'elements\' on ",0xe);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_2);
        local_98 = CONCAT71(local_98._1_7_,10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar6,(char *)&local_98,1);
      }
      goto LAB_0172f668;
    }
    local_a8 = JSObjectRef::elements((JSObjectRef *)param_2);
    auVar9 = HeapObjectRef::map((HeapObjectRef *)local_a8);
    local_98 = auVar9._0_8_;
    uStack_90 = auVar9._8_4_;
    local_8c = auVar9._12_4_;
    uVar7 = MapRef::IsFixedCowArrayMap((MapRef *)&local_98);
    if ((uVar7 & 1) != 0) {
      pJVar4 = (JSArrayData *)ObjectRef::data(param_2);
      if (*(int *)(pJVar4 + 8) != 1) goto LAB_0172f688;
      if (*(short *)(*(long *)(pJVar4 + 0x10) + 0x18) != 0x423) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSArray()");
      }
      lVar5 = JSArrayData::GetOwnElement(pJVar4,*(undefined8 *)(param_2 + 8),param_3,param_4);
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 8);
        *param_1 = 1;
        *(long *)(param_1 + 8) = lVar5;
        *(undefined8 *)(param_1 + 0x10) = uVar3;
        return;
      }
    }
  }
LAB_0172f668:
  *param_1 = 0;
  param_1[8] = 0;
  return;
}

