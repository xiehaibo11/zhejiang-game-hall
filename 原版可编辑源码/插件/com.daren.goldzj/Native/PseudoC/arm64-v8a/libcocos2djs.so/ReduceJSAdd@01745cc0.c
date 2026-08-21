
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAdd(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSAdd
          (JSNativeContextSpecialization *this,Node *param_1)

{
  Node *pNVar1;
  Graph *this_00;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  StringConstantBase *pSVar7;
  Node *pNVar8;
  Zone *this_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  Node *local_50 [2];
  
  pNVar8 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
  }
  pNVar1 = *(Node **)pNVar8;
  pNVar8 = *(Node **)(pNVar8 + 8);
  auVar9 = GetMaxStringLength(*(JSHeapBroker **)(this + 0x18),pNVar1);
  auVar10 = GetMaxStringLength(*(JSHeapBroker **)(this + 0x18),pNVar8);
  if (0xffffff0 < (ulong)(auVar10._8_8_ + auVar9._8_8_)) {
    return 0;
  }
  if ((auVar9._0_8_ & 0xff) == 0) {
    return 0;
  }
  if ((auVar10._0_8_ & 0xff) == 0) {
    return 0;
  }
  sVar2 = *(short *)(*(long *)pNVar1 + 0x10);
  if (sVar2 != 0x119) {
    if (sVar2 == 0x1e) {
      ObjectRef::ObjectRef
                ((ObjectRef *)local_50,*(undefined8 *)(this + 0x18),
                 *(undefined8 *)(*(long *)pNVar1 + 0x30),0);
      uVar3 = ObjectRef::IsHeapObject((ObjectRef *)local_50);
      if ((uVar3 & 1) == 0) goto LAB_01745eb0;
      uVar3 = ObjectRef::IsString((ObjectRef *)local_50);
      if ((uVar3 & 1) != 0) goto LAB_01745ddc;
    }
    sVar2 = *(short *)(*(long *)pNVar8 + 0x10);
    if (sVar2 != 0x119) {
      if (sVar2 == 0x1e) {
        ObjectRef::ObjectRef
                  ((ObjectRef *)local_50,*(undefined8 *)(this + 0x18),
                   *(undefined8 *)(*(long *)pNVar8 + 0x30),0);
        uVar3 = ObjectRef::IsHeapObject((ObjectRef *)local_50);
        if ((uVar3 & 1) == 0) {
LAB_01745eb0:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsHeapObject()");
        }
        uVar3 = ObjectRef::IsString((ObjectRef *)local_50);
        if ((uVar3 & 1) != 0) goto LAB_01745ddc;
      }
      return 0;
    }
  }
LAB_01745ddc:
  uVar4 = CreateDelayedStringConstant(this,pNVar1);
  uVar5 = CreateDelayedStringConstant(this,pNVar8);
  this_01 = *(Zone **)(this + 0x48);
  pSVar7 = *(StringConstantBase **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)pSVar7) < 0x20) {
    pSVar7 = (StringConstantBase *)Zone::NewExpand(this_01,0x20);
  }
  else {
    *(StringConstantBase **)(this_01 + 0x10) = pSVar7 + 0x20;
  }
  *(undefined8 *)(pSVar7 + 8) = 0;
  *(undefined8 *)(pSVar7 + 0x10) = uVar4;
  *(undefined8 *)(pSVar7 + 0x18) = uVar5;
  *(undefined4 *)pSVar7 = 2;
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::DelayedStringConstant
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],pSVar7);
  local_50[0] = (Node *)0x0;
  uVar4 = Graph::NewNode(this_00,pOVar6,0,local_50,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar4,0,0);
  return uVar4;
}

