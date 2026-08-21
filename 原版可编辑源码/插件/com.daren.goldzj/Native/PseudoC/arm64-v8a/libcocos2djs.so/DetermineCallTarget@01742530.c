
/* v8::internal::compiler::JSInliner::DetermineCallTarget(v8::internal::compiler::Node*) */

void v8::internal::compiler::JSInliner::DetermineCallTarget(Node *param_1)

{
  Operator *pOVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long in_x1;
  short sVar4;
  undefined1 *in_x8;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  JSFunctionRef local_50 [16];
  ObjectRef local_40 [16];
  
  plVar7 = (long *)(in_x1 + 0x20);
  if ((~*(uint *)(in_x1 + 0x14) & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar7 + 0x10);
  }
  plVar7 = (long *)*plVar7;
  pOVar1 = (Operator *)*plVar7;
  sVar4 = *(short *)(pOVar1 + 0x10);
  if (sVar4 == 0x1e) {
    uVar6 = *(undefined8 *)(pOVar1 + 0x30);
    ObjectRef::ObjectRef(local_40,*(undefined8 *)(param_1 + 0x28),uVar6,0);
    uVar2 = ObjectRef::IsHeapObject(local_40);
    if ((uVar2 & 1) == 0) {
LAB_017426e0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar2 = ObjectRef::IsJSFunction(local_40);
    if ((uVar2 & 1) != 0) {
      ObjectRef::ObjectRef(local_40,*(undefined8 *)(param_1 + 0x28),uVar6,0);
      uVar2 = ObjectRef::IsHeapObject(local_40);
      if ((uVar2 & 1) == 0) goto LAB_017426e0;
      local_50 = (JSFunctionRef  [16])ObjectRef::AsJSFunction(local_40);
      uVar2 = JSFunctionRef::has_feedback_vector(local_50);
      if ((uVar2 & 1) != 0) {
        local_40 = (ObjectRef  [16])JSFunctionRef::native_context(local_50);
        lVar5 = *(long *)(param_1 + 0x28);
        if (*(char *)(lVar5 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        uStack_58 = *(undefined8 *)(lVar5 + 0x28);
        local_60 = *(undefined8 *)(lVar5 + 0x20);
        uVar2 = ObjectRef::equals(local_40,(ObjectRef *)&local_60);
        if ((uVar2 & 1) != 0) {
          auVar8 = JSFunctionRef::shared(local_50);
          *in_x8 = 1;
          *(undefined1 (*) [16])(in_x8 + 8) = auVar8;
          return;
        }
      }
      goto LAB_017426c4;
    }
    pOVar1 = (Operator *)*plVar7;
    sVar4 = *(short *)(pOVar1 + 0x10);
  }
  if (sVar4 == 0x2da) {
    puVar3 = (undefined8 *)CreateClosureParametersOf(pOVar1);
    ObjectRef::ObjectRef(local_40,*(undefined8 *)(param_1 + 0x28),puVar3[1],0);
    uVar2 = ObjectRef::IsFeedbackCell(local_40);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFeedbackCell()");
    }
    local_50 = (JSFunctionRef  [16])FeedbackCellRef::value((FeedbackCellRef *)local_40);
    uVar2 = ObjectRef::IsFeedbackVector((ObjectRef *)local_50);
    if ((uVar2 & 1) != 0) {
      ObjectRef::ObjectRef((ObjectRef *)local_50,*(undefined8 *)(param_1 + 0x28),*puVar3,0);
      uVar2 = ObjectRef::IsSharedFunctionInfo((ObjectRef *)local_50);
      if ((uVar2 & 1) != 0) {
        *in_x8 = 1;
        *(JSFunctionRef (*) [16])(in_x8 + 8) = local_50;
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
  }
LAB_017426c4:
  *in_x8 = 0;
  in_x8[8] = 0;
  return;
}

