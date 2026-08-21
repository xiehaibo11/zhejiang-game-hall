
/* v8::internal::compiler::JSBinopReduction::ConvertToUI32(v8::internal::compiler::Node*,
   v8::internal::compiler::Signedness) */

long __thiscall
v8::internal::compiler::JSBinopReduction::ConvertToUI32
          (JSBinopReduction *this,Node *param_1,int param_3)

{
  ulong uVar1;
  Operator *pOVar2;
  long lVar3;
  Graph *this_00;
  long local_30;
  Node *local_28;
  
  local_30 = *(long *)(param_1 + 8);
  if (param_3 == 0) {
    if (local_30 == 1099) {
      return (long)param_1;
    }
    uVar1 = Type::SlowIs((Type *)&local_30,1099);
    if ((uVar1 & 1) != 0) {
      return (long)param_1;
    }
    this_00 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::NumberToInt32
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
  }
  else {
    if (local_30 == 0x407) {
      return (long)param_1;
    }
    uVar1 = Type::SlowIs((Type *)&local_30,0x407);
    if ((uVar1 & 1) != 0) {
      return (long)param_1;
    }
    this_00 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
    pOVar2 = (Operator *)
             SimplifiedOperatorBuilder::NumberToUint32
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[0x2f])
    ;
  }
  local_28 = param_1;
  lVar3 = Graph::NewNode(this_00,pOVar2,1,&local_28,false);
  return lVar3;
}

