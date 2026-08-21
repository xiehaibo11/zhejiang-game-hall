
/* v8::internal::compiler::JSHeapBroker::InitializeAndStartSerializing(v8::internal::Handle<v8::internal::NativeContext>)
    */

void __thiscall
v8::internal::compiler::JSHeapBroker::InitializeAndStartSerializing
          (JSHeapBroker *this,undefined8 param_2)

{
  PropertyCellData *pPVar1;
  long lVar2;
  undefined8 uVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  TraceScope::TraceScope
            ((TraceScope *)&local_28,this,this,"JSHeapBroker::InitializeAndStartSerializing");
  if (*(int *)(this + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","mode_ == kDisabled");
  }
  plVar5 = *(long **)(this + 0x30);
  *(undefined4 *)(this + 0x70) = 1;
  if ((int)plVar5[1] != 0) {
    uVar6 = 0;
    lVar7 = 0x14;
    do {
      uVar6 = uVar6 + 1;
      *(undefined1 *)(*plVar5 + lVar7) = 0;
      lVar7 = lVar7 + 0x18;
    } while (uVar6 < *(uint *)(plVar5 + 1));
  }
  *(undefined4 *)((long)plVar5 + 0xc) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  InitializeRefsMap(this);
  SetTargetNativeContextRef(this,param_2);
  if (this[0x18] != (JSHeapBroker)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uStack_38 = *(undefined8 *)(this + 0x28);
  local_40 = *(undefined8 *)(this + 0x20);
  NativeContextRef::Serialize((NativeContextRef *)&local_40);
  CollectArrayAndObjectPrototypes(this);
  SerializeTypedArrayStringTags(this);
  lVar7 = *(long *)this;
  GetOrCreateData(this,lVar7 + 0x380);
  GetOrCreateData(this,lVar7 + 0x520);
  GetOrCreateData(this,lVar7 + 0x370);
  GetOrCreateData(this,lVar7 + 0x548);
  GetOrCreateData(this,lVar7 + 0x168);
  GetOrCreateData(this,lVar7 + 200);
  GetOrCreateData(this,lVar7 + 0x6a0);
  GetOrCreateData(this,lVar7 + 0x6a8);
  GetOrCreateData(this,lVar7 + 0xc0);
  GetOrCreateData(this,lVar7 + 0xe0);
  GetOrCreateData(this,lVar7 + 0xe8);
  GetOrCreateData(this,lVar7 + 0x1e8);
  GetOrCreateData(this,lVar7 + 0x6e0);
  GetOrCreateData(this,lVar7 + 0xc68);
  GetOrCreateData(this,lVar7 + 0x140);
  GetOrCreateData(this,lVar7 + 0x7b8);
  GetOrCreateData(this,lVar7 + 0x1f8);
  GetOrCreateData(this,lVar7 + 0x448);
  GetOrCreateData(this,lVar7 + 0x208);
  GetOrCreateData(this,lVar7 + 0x820);
  GetOrCreateData(this,lVar7 + 0x828);
  GetOrCreateData(this,lVar7 + 0x368);
  GetOrCreateData(this,lVar7 + 0x878);
  GetOrCreateData(this,lVar7 + 0xb0);
  GetOrCreateData(this,lVar7 + 0x890);
  GetOrCreateData(this,lVar7 + 0x8a8);
  GetOrCreateData(this,lVar7 + 0x88);
  GetOrCreateData(this,lVar7 + 400);
  GetOrCreateData(this,lVar7 + 0x398);
  GetOrCreateData(this,lVar7 + 0x248);
  GetOrCreateData(this,lVar7 + 0x908);
  GetOrCreateData(this,lVar7 + 0x948);
  GetOrCreateData(this,lVar7 + 0x940);
  GetOrCreateData(this,lVar7 + 0x270);
  GetOrCreateData(this,lVar7 + 0x198);
  GetOrCreateData(this,lVar7 + 0x3a0);
  GetOrCreateData(this,lVar7 + 0xa00);
  GetOrCreateData(this,lVar7 + 0xa20);
  GetOrCreateData(this,lVar7 + 0x390);
  GetOrCreateData(this,lVar7 + 0x360);
  GetOrCreateData(this,lVar7 + 0xa8);
  GetOrCreateData(this,lVar7 + 0xa38);
  GetOrCreateData(this,lVar7 + 0xa70);
  GetOrCreateData(this,lVar7 + 0xb8);
  GetOrCreateData(this,lVar7 + 0x358);
  GetOrCreateData(this,lVar7 + 0xaa8);
  GetOrCreateData(this,lVar7 + 0xa0);
  GetOrCreateData(this,lVar7 + 0x378);
  GetOrCreateData(this,lVar7 + 0xb08);
  pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xee0);
  if (*(int *)(pPVar1 + 8) == 1) {
    if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) != 0xa5) {
LAB_01717f50:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
    PropertyCellData::Serialize(pPVar1,this);
    pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xea0);
    if (*(int *)(pPVar1 + 8) == 1) {
      if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) != 0xa5) goto LAB_01717f50;
      PropertyCellData::Serialize(pPVar1,this);
      pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xed8);
      if (*(int *)(pPVar1 + 8) == 1) {
        if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) != 0xa5) goto LAB_01717f50;
        PropertyCellData::Serialize(pPVar1,this);
        pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xeb8);
        if (*(int *)(pPVar1 + 8) == 1) {
          if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) != 0xa5) goto LAB_01717f50;
          PropertyCellData::Serialize(pPVar1,this);
          lVar2 = GetOrCreateData(this,lVar7 + 0xe90);
          if (*(int *)(lVar2 + 8) == 1) {
            if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x5d) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","IsFeedbackCell()");
            }
            pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xea8);
            if (*(int *)(pPVar1 + 8) == 1) {
              if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) == 0xa5) {
                PropertyCellData::Serialize(pPVar1,this);
                pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xee8);
                if (*(int *)(pPVar1 + 8) != 1) goto LAB_01717f3c;
                if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) == 0xa5) {
                  PropertyCellData::Serialize(pPVar1,this);
                  pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xec8);
                  if (*(int *)(pPVar1 + 8) != 1) goto LAB_01717f3c;
                  if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) == 0xa5) {
                    PropertyCellData::Serialize(pPVar1,this);
                    pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xf00);
                    if (*(int *)(pPVar1 + 8) != 1) goto LAB_01717f3c;
                    if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) == 0xa5) {
                      PropertyCellData::Serialize(pPVar1,this);
                      pPVar1 = (PropertyCellData *)GetOrCreateData(this,lVar7 + 0xed0);
                      if (*(int *)(pPVar1 + 8) != 1) goto LAB_01717f3c;
                      if (*(short *)(*(long *)(pPVar1 + 0x10) + 0x18) == 0xa5) {
                        PropertyCellData::Serialize(pPVar1,this);
                        uVar3 = CodeFactory::CEntry(*(undefined8 *)this,1,0,0,1);
                        GetOrCreateData(this,uVar3);
                        if ((this[0x74] != (JSHeapBroker)0x0) &&
                           (FLAG_trace_heap_broker_verbose != '\0')) {
                          pbVar4 = (basic_ostream *)Trace(this);
                          pbVar4 = std::__ndk1::
                                   __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                             (pbVar4,"Finished serializing standard objects",0x25);
                          local_40 = CONCAT71(local_40._1_7_,10);
                          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    (pbVar4,(char *)&local_40,1);
                        }
                        *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
                        return;
                      }
                    }
                  }
                }
              }
              goto LAB_01717f50;
            }
          }
        }
      }
    }
  }
LAB_01717f3c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

