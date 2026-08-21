
/* v8::internal::compiler::OperationTyper::OperationTyper(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::OperationTyper::OperationTyper
          (OperationTyper *this,JSHeapBroker *param_1,Zone *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(Zone **)this = param_2;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  lVar3 = *(long *)param_1;
  uVar1 = Type::NewConstant(INFINITY,param_2);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Type::NewConstant(-INFINITY,param_2);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 200,param_2);
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 0x828,param_2);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 0xb08,param_2);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 0xc0,param_2);
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 0xb8,param_2);
  *(undefined8 *)(this + 0x38) = uVar1;
  uVar1 = Type::HeapConstant(param_1,lVar3 + 0xa8,param_2);
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = Type::Union(1099,0x1801,param_2);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = Type::Union(0x407,0x1801,param_2);
  *(undefined8 *)(this + 0x50) = uVar1;
  uVar1 = Type::Union(*(undefined8 *)(this + 0x30),*(undefined8 *)(*(long *)(this + 8) + 0x148),
                      param_2);
  uVar2 = Type::Union(*(undefined8 *)(this + 0x58),0x800001,param_2);
  uVar1 = Type::Union(uVar1,uVar2,param_2);
  uVar1 = Type::Union(0x40181,uVar1,param_2);
  uVar2 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x68) = uVar1;
  uVar1 = Type::Union(0x47b0001,0x2001,param_2);
  uVar1 = Type::Union(uVar2,uVar1,param_2);
  *(undefined8 *)(this + 0x60) = uVar1;
  return;
}

