
/* v8::internal::compiler::LoopVariableOptimizer::LoopVariableOptimizer(v8::internal::compiler::Graph*,
   v8::internal::compiler::CommonOperatorBuilder*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoopVariableOptimizer::LoopVariableOptimizer
          (LoopVariableOptimizer *this,Graph *param_1,CommonOperatorBuilder *param_2,Zone *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  Zone *local_40;
  bool local_34 [4];
  
  *(Graph **)(this + 8) = param_1;
  *(CommonOperatorBuilder **)(this + 0x10) = param_2;
  *(Zone **)(this + 0x18) = param_3;
  *(undefined8 *)this = 0x100000000;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar4 = (ulong)uVar1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_3;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = *(undefined8 **)(param_3 + 0x10);
    uVar3 = uVar4 * 8;
    if (uVar3 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(param_3 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(param_3 + 0x10) = puVar2 + uVar4;
    }
    else {
      puVar2 = (undefined8 *)Zone::NewExpand(param_3,uVar3);
    }
    *(undefined8 **)(this + 0x20) = puVar2;
    *(undefined8 **)(this + 0x28) = puVar2;
    *(undefined8 **)(this + 0x30) = puVar2 + uVar4;
    do {
      *puVar2 = 0;
      uVar4 = uVar4 - 1;
      puVar2 = (undefined8 *)(*(long *)(this + 0x28) + 8);
      *(undefined8 **)(this + 0x28) = puVar2;
    } while (uVar4 != 0);
  }
  local_34[0] = false;
  local_40 = param_3;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x40),
             (ulong)*(uint *)(param_1 + 0x1c),local_34,(ZoneAllocator *)&local_40);
  *(undefined8 *)(this + 0x68) = 0;
  *(Zone **)(this + 0x70) = param_3;
  *(undefined8 *)(this + 0x78) = 0;
  *(LoopVariableOptimizer **)(this + 0x60) = this + 0x68;
  return;
}

