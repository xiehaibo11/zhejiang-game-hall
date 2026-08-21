
/* v8::internal::compiler::SharedFunctionInfoRef::GetTemplateObject(v8::internal::compiler::TemplateObjectDescriptionRef,
   v8::internal::compiler::FeedbackSource const&, v8::internal::compiler::SerializationPolicy) */

undefined1  [16]
v8::internal::compiler::SharedFunctionInfoRef::GetTemplateObject
          (ObjectRef *param_1,undefined8 *param_2,undefined8 param_3,FeedbackSource *param_4,
          int param_5)

{
  int iVar1;
  short sVar2;
  undefined1 auVar3 [16];
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong extraout_x1;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long local_50;
  undefined8 uStack_48;
  ulong local_40;
  long lStack_38;
  
  if ((param_5 == 1) || (FLAG_concurrent_inlining == '\0')) {
    piVar5 = (int *)JSHeapBroker::ProcessFeedbackForTemplateObject
                              (*(JSHeapBroker **)(param_1 + 8),param_4);
    iVar1 = *piVar5;
  }
  else {
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
            ::find<v8::internal::compiler::FeedbackSource>
                      ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::FeedbackSource,std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>,v8::internal::compiler::FeedbackSource::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::FeedbackSource,v8::internal::compiler::ProcessedFeedback_const*>>>
                        *)(*(JSHeapBroker **)(param_1 + 8) + 0x180),param_4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it != feedback_.end()");
    }
    piVar5 = *(int **)(lVar4 + 0x20);
    iVar1 = *piVar5;
  }
  if (iVar1 != 0) {
    if (iVar1 != 0xb) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kTemplateObject == kind()");
    }
    uStack_48 = *(undefined8 *)(piVar5 + 4);
    local_50 = *(long *)(piVar5 + 2);
    goto LAB_01734e58;
  }
  if (*(int *)(*(undefined8 **)param_1 + 1) == 2) {
    puVar11 = *(undefined8 **)(param_1 + 8);
    if (*(char *)(puVar11 + 3) != '\x01') goto LAB_01734eac;
    uVar6 = TemplateObjectDescription::GetTemplateObject
                      (*puVar11,*(undefined8 *)puVar11[4],*param_2,**(undefined8 **)param_1,
                       *(undefined4 *)(param_4 + 8));
    ObjectRef::ObjectRef((ObjectRef *)&local_50,*(undefined8 *)(param_1 + 8),uVar6,0);
  }
  else {
    lVar4 = ObjectRef::data(param_1);
    if (*(int *)(lVar4 + 8) != 1) goto LAB_01734e98;
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa6) goto LAB_01734ec0;
    iVar1 = *(int *)(param_4 + 8);
    plVar7 = (long *)(lVar4 + 0x58);
    plVar12 = (long *)*plVar7;
    plVar9 = plVar7;
    if (plVar12 != (long *)0x0) {
      do {
        if (iVar1 <= (int)plVar12[4]) {
          plVar9 = plVar12;
        }
        plVar12 = (long *)plVar12[(int)plVar12[4] < iVar1];
      } while (plVar12 != (long *)0x0);
      if (((plVar9 != plVar7) && ((int)plVar9[4] <= iVar1)) && (plVar9[5] != 0)) {
        uStack_48 = *(undefined8 *)(param_1 + 8);
        local_50 = plVar9[5];
        goto LAB_01734e0c;
      }
    }
    if (param_5 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","policy == SerializationPolicy::kSerializeIfNeeded");
    }
    puVar11 = *(undefined8 **)(param_1 + 8);
    if (*(int *)(puVar11 + 0xe) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","broker()->SerializingAllowed()");
    }
    if (*(char *)(puVar11 + 3) != '\x01') {
LAB_01734eac:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","storage_.is_populated_");
    }
    uVar6 = TemplateObjectDescription::GetTemplateObject
                      (*puVar11,*(undefined8 *)puVar11[4],*param_2,**(undefined8 **)param_1);
    lVar4 = JSHeapBroker::GetOrCreateData(*(JSHeapBroker **)(param_1 + 8),uVar6);
    if (*(int *)(lVar4 + 8) != 1) {
LAB_01734e98:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0x423) goto LAB_01734e70;
    lVar8 = ObjectRef::data(param_1);
    if (*(int *)(lVar8 + 8) != 1) goto LAB_01734e98;
    if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0xa6) {
LAB_01734ec0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_40 = (ulong)*(uint *)(param_4 + 8);
    lStack_38 = lVar4;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>>>
    ::__emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::JSArrayData*>>
              ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::JSArrayData*>>>
                *)(lVar8 + 0x50),(int *)&local_40,(pair *)&local_40);
    if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "template_objects_.insert(std::make_pair(slot.ToInt(), object)).second");
    }
    uStack_48 = *(undefined8 *)(param_1 + 8);
    local_50 = lVar4;
  }
LAB_01734e0c:
  puVar11 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_50);
  if (*(int *)(puVar11 + 1) == 2) {
    uVar10 = *(ulong *)*puVar11;
    if ((uVar10 & 1) == 0) goto LAB_01734e70;
    sVar2 = *(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
  }
  else {
    if (*(int *)(puVar11 + 1) == 0) goto LAB_01734e70;
    sVar2 = *(short *)(puVar11[2] + 0x18);
  }
  if (sVar2 == 0x423) {
LAB_01734e58:
    auVar3._8_8_ = uStack_48;
    auVar3._0_8_ = local_50;
    return auVar3;
  }
LAB_01734e70:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSArray()");
}

