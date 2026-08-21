
/* v8::internal::compiler::JSNativeContextSpecialization::TryRefineElementAccessFeedback(v8::internal::compiler::ElementAccessFeedback
   const&, v8::internal::compiler::Node*, v8::internal::compiler::Node*) const */

ElementAccessFeedback * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::TryRefineElementAccessFeedback
          (JSNativeContextSpecialization *this,ElementAccessFeedback *param_1,Node *param_2,
          Node *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = ElementAccessFeedback::keyed_mode(param_1);
  iVar1 = KeyedAccessMode::access_mode((KeyedAccessMode *)&local_50);
  if ((iVar1 == 3) || (iVar1 == 0)) {
    uStack_38 = *(undefined8 *)(this + 0x40);
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uVar2 = InferReceiverMaps(this,param_2,param_3,(ZoneVector *)&local_50);
    if ((uVar2 & 1) != 0) {
      RemoveImpossibleReceiverMaps(this,param_2,(ZoneVector *)&local_50);
      param_1 = (ElementAccessFeedback *)
                ElementAccessFeedback::Refine
                          (param_1,(ZoneVector *)&local_50,*(Zone **)(this + 0x40));
    }
  }
  return param_1;
}

