
/* v8::internal::compiler::RegisterAllocator::RegisterAllocator(v8::internal::compiler::RegisterAllocationData*,
   v8::internal::compiler::RegisterKind) */

void __thiscall
v8::internal::compiler::RegisterAllocator::RegisterAllocator
          (RegisterAllocator *this,long param_1,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  
  *(long *)this = param_1;
  *(int *)(this + 8) = param_3;
  bVar4 = param_3 != 1;
  lVar1 = 0x10;
  if (bVar4) {
    lVar1 = 8;
  }
  lVar2 = 0x20;
  if (bVar4) {
    lVar2 = 0x18;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar2);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  if (bVar4) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  uVar5 = *puVar3;
  this[0x20] = (RegisterAllocator)0x0;
  *(undefined8 *)(this + 0x18) = uVar5;
  return;
}

