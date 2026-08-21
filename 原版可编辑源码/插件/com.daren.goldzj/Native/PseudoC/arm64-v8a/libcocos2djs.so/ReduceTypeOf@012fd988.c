
/* v8::internal::compiler::TypedOptimization::ReduceTypeOf(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::ReduceTypeOf(TypedOptimization *this,Node *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  Node *pNVar3;
  JSGraph *this_00;
  long lVar4;
  ObjectRef aOStack_40 [16];
  long local_18;
  
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  local_18 = *(long *)(*(long *)pNVar3 + 8);
  this_00 = *(JSGraph **)(this + 0x18);
  lVar4 = *(long *)(this_00 + 0x168);
  if (local_18 != 0x201) {
    uVar1 = Type::SlowIs((Type *)&local_18,0x201);
    if ((uVar1 & 1) == 0) {
      if ((local_18 == 0x1c5f) || (uVar1 = Type::SlowIs((Type *)&local_18,0x1c5f), (uVar1 & 1) != 0)
         ) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0x890;
      }
      else if ((local_18 == 0x4021) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x4021), (uVar1 & 1) != 0)) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0xa00;
      }
      else if ((local_18 == 0x8000001) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x8000001), (uVar1 & 1) != 0)) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0x520;
      }
      else if ((local_18 == 0x2001) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x2001), (uVar1 & 1) != 0)) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0xa20;
      }
      else if ((local_18 == 0x40101) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x40101), (uVar1 & 1) != 0)) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0xaa8;
      }
      else if ((local_18 == 0x4120081) ||
              (uVar1 = Type::SlowIs((Type *)&local_18,0x4120081), (uVar1 & 1) != 0)) {
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0x8a8;
      }
      else {
        if ((local_18 != 0x200001) &&
           (uVar1 = Type::SlowIs((Type *)&local_18,0x200001), (uVar1 & 1) == 0)) {
          return 0;
        }
        this_00 = *(JSGraph **)(this + 0x18);
        uVar2 = *(undefined8 *)(this + 0x20);
        lVar4 = lVar4 + 0x6e0;
      }
      goto LAB_012fdb48;
    }
    this_00 = *(JSGraph **)(this + 0x18);
  }
  uVar2 = *(undefined8 *)(this + 0x20);
  lVar4 = lVar4 + 0x548;
LAB_012fdb48:
  ObjectRef::ObjectRef(aOStack_40,uVar2,lVar4,1);
  uVar2 = JSGraph::Constant(this_00,aOStack_40);
  return uVar2;
}

