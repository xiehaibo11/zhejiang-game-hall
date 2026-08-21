
/* v8::internal::compiler::JSNativeContextSpecialization::ReducePropertyAccess(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::base::Optional<v8::internal::compiler::NameRef>,
   v8::internal::compiler::Node*, v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::AccessMode) */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReducePropertyAccess
          (JSNativeContextSpecialization *this,Node *param_1,Node *param_2,undefined8 *param_4,
          Node *param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  ProcessedFeedback *this_00;
  ElementAccessFeedback *pEVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = param_4[2];
  uStack_58 = param_4[1];
  local_60 = *param_4;
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::GetFeedbackForPropertyAccess
                      (*(undefined8 *)(this + 0x18),param_6,param_7,&local_60);
  iVar1 = *(int *)this_00;
  if (iVar1 == 9) {
    uVar3 = ProcessedFeedback::AsNamedAccess(this_00);
    ReduceNamedAccess(this,param_1,param_5,uVar3,param_7,param_2);
  }
  else if (iVar1 == 4) {
    pEVar2 = (ElementAccessFeedback *)ProcessedFeedback::AsElementAccess(this_00);
    ReduceElementAccess(this,param_1,param_2,param_5,pEVar2);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    ReduceSoftDeoptimize(this,param_1,0xd);
  }
  return;
}

