
/* v8::internal::compiler::MemoryOptimizer::VisitNode(v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::VisitNode
          (MemoryOptimizer *this,Node *param_1,AllocationState *param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  TickCounter::DoTick(*(TickCounter **)(this + 0x158));
  sVar1 = *(short *)(*(Operator **)param_1 + 0x10);
  switch(sVar1) {
  case 0xe7:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xe8:
    VisitAllocateRaw(this,param_1,param_2);
    return;
  case 0xea:
    MemoryLowering::ReduceLoadField((MemoryLowering *)(this + 0x40),param_1);
    break;
  case 0xeb:
    MemoryLowering::ReduceLoadElement((MemoryLowering *)(this + 0x40),param_1);
    break;
  case 0xee:
    MemoryLowering::ReduceLoadFromObject((MemoryLowering *)(this + 0x40),param_1);
    break;
  case 0xf1:
    MemoryLowering::ReduceStoreField((MemoryLowering *)(this + 0x40),param_1,param_2);
    break;
  case 0xf2:
    MemoryLowering::ReduceStoreElement((MemoryLowering *)(this + 0x40),param_1,param_2);
    break;
  case 0xf5:
    MemoryLowering::ReduceStoreToObject((MemoryLowering *)(this + 0x40),param_1,param_2);
    break;
  default:
    if (sVar1 == 0x31) {
      lVar3 = CallDescriptorOf(*(Operator **)param_1);
      if ((*(byte *)(lVar3 + 0x48) >> 4 & 1) == 0) {
        param_2 = *(AllocationState **)(this + 0xd8);
      }
      break;
    }
    if (sVar1 == 0x1ac) {
      MemoryLowering::ReduceStore((MemoryLowering *)(this + 0x40),param_1,param_2);
      break;
    }
  case 0xe9:
  case 0xec:
  case 0xed:
  case 0xef:
  case 0xf0:
  case 0xf3:
  case 0xf4:
    uVar2 = FUN_01794b64(param_1);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  EnqueueUses(this,param_1,param_2);
  return;
}

