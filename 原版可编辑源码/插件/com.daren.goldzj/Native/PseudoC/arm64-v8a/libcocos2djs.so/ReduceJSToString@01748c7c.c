
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSToString(v8::internal::compiler::Node*)
    */

long * __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSToString
          (JSNativeContextSpecialization *this,Node *param_1)

{
  Graph *this_00;
  short sVar1;
  ulong uVar2;
  Zone *this_01;
  Operator *pOVar3;
  StringConstantBase *pSVar4;
  Node *pNVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  Node *local_40 [2];
  
  pNVar5 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  plVar7 = *(long **)pNVar5;
  lVar6 = *plVar7;
  sVar1 = *(short *)(lVar6 + 0x10);
  if (sVar1 == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)local_40,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar6 + 0x30),0);
    uVar2 = ObjectRef::IsHeapObject((ObjectRef *)local_40);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar2 = ObjectRef::IsString((ObjectRef *)local_40);
    if ((uVar2 & 1) != 0) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,plVar7,0,0);
      return plVar7;
    }
    lVar6 = *plVar7;
    sVar1 = *(short *)(lVar6 + 0x10);
  }
  if (sVar1 == 0x1c) {
    this_01 = *(Zone **)(this + 0x48);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    pSVar4 = *(StringConstantBase **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)pSVar4) < 0x18) {
      pSVar4 = (StringConstantBase *)Zone::NewExpand(this_01,0x18);
    }
    else {
      *(StringConstantBase **)(this_01 + 0x10) = pSVar4 + 0x18;
    }
    *(undefined8 *)(pSVar4 + 8) = 0;
    *(undefined8 *)(pSVar4 + 0x10) = uVar8;
    *(undefined4 *)pSVar4 = 1;
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::DelayedStringConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pSVar4);
    local_40[0] = (Node *)0x0;
    plVar7 = (long *)Graph::NewNode(this_00,pOVar3,0,local_40,false);
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,plVar7,0,0);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}

