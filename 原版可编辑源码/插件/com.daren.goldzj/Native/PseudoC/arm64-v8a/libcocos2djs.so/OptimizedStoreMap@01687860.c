
/* v8::internal::compiler::CodeAssembler::OptimizedStoreMap(v8::internal::TNode<v8::internal::HeapObject>,
   v8::internal::TNode<v8::internal::Map>) */

void __thiscall
v8::internal::compiler::CodeAssembler::OptimizedStoreMap
          (CodeAssembler *this,Node *param_2,undefined8 param_3)

{
  long lVar1;
  Operator *pOVar2;
  RawMachineAssembler *this_00;
  Node *local_90;
  undefined8 uStack_88;
  FieldAccess aFStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  AccessBuilder::ForMap((AccessBuilder *)this);
  pOVar2 = (Operator *)
           SimplifiedOperatorBuilder::StoreField
                     ((SimplifiedOperatorBuilder *)(this_00 + 0x58),aFStack_80);
  local_90 = param_2;
  uStack_88 = param_3;
  RawMachineAssembler::AddNode(this_00,pOVar2,2,&local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

