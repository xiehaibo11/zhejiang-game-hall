
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSToObject(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSToObject
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  ulong uVar4;
  MapInference aMStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)NodeProperties::GetValueInput(param_1,0);
  pNVar3 = (Node *)NodeProperties::GetEffectInput(param_1,0);
  MapInference::MapInference(aMStack_78,*(JSHeapBroker **)(this + 0x18),pNVar2,pNVar3);
  uVar4 = MapInference::HaveMaps(aMStack_78);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = MapInference::AllOfInstanceTypesAreJSReceiver(aMStack_78), (uVar4 & 1) == 0)) {
    pNVar2 = (Node *)0x0;
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar2,pNVar3,0);
  }
  MapInference::~MapInference(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

