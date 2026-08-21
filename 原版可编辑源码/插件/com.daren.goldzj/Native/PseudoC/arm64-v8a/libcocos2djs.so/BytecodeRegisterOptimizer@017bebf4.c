
/* v8::internal::interpreter::BytecodeRegisterOptimizer::BytecodeRegisterOptimizer(v8::internal::Zone*,
   v8::internal::interpreter::BytecodeRegisterAllocator*, int, int,
   v8::internal::interpreter::BytecodeRegisterOptimizer::BytecodeWriter*) */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::BytecodeRegisterOptimizer
          (BytecodeRegisterOptimizer *this,Zone *param_1,BytecodeRegisterAllocator *param_2,
          int param_3,int param_4,BytecodeWriter *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  vector<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
  *this_00;
  ulong uVar7;
  
  *(undefined ***)this = &PTR__BytecodeRegisterOptimizer_01cdaf90;
  uVar1 = Register::virtual_accumulator();
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(int *)(this + 0x18) = param_3;
  *(int *)(this + 0x1c) = param_3 + -1;
  this_00 = (vector<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
             *)(this + 0x20);
  *(undefined8 *)this_00 = 0;
  *(Zone **)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x68) = param_1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(Zone **)(this + 0x88) = param_1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(BytecodeWriter **)(this + 0xa0) = param_5;
  this[0xa8] = (BytecodeRegisterOptimizer)0x0;
  *(Zone **)(this + 0xb0) = param_1;
  *(BytecodeRegisterOptimizer **)(param_2 + 8) = this;
  iVar2 = Register::FromParameterIndex(0,param_4);
  *(int *)(this + 0x40) = -iVar2;
  lVar5 = *(long *)(this + 0x28);
  lVar4 = *(long *)this_00;
  uVar7 = (long)*(int *)(this + 0x18) + (long)-iVar2;
  uVar6 = lVar5 - lVar4 >> 3;
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    if (uVar7 < uVar6) {
      lVar5 = lVar4 + uVar7 * 8;
      *(long *)(this + 0x28) = lVar5;
    }
    if (lVar5 == lVar4) goto LAB_017bed54;
  }
  else {
    std::__ndk1::
    vector<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::ZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
    ::__append(this_00,uVar7 - uVar6);
    lVar4 = *(long *)(this + 0x20);
    if (*(long *)(this + 0x28) == lVar4) goto LAB_017bed54;
  }
  uVar7 = 0;
  do {
    piVar3 = *(int **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)piVar3) < 0x20) {
      piVar3 = (int *)Zone::NewExpand(param_1,0x20);
    }
    else {
      *(int **)(param_1 + 0x10) = piVar3 + 8;
    }
    iVar2 = *(int *)(this + 0x98);
    *(int *)(this + 0x98) = iVar2 + 1;
    *piVar3 = (int)uVar7 - *(int *)(this + 0x40);
    piVar3[1] = iVar2 + 1;
    *(undefined2 *)(piVar3 + 2) = 0x101;
    *(undefined1 *)((long)piVar3 + 10) = 0;
    *(int **)(piVar3 + 4) = piVar3;
    *(int **)(piVar3 + 6) = piVar3;
    *(int **)(*(long *)(this + 0x20) + uVar7 * 8) = piVar3;
    lVar4 = *(long *)(this + 0x20);
    uVar7 = uVar7 + 1;
  } while (uVar7 < (ulong)(*(long *)(this + 0x28) - lVar4 >> 3));
LAB_017bed54:
  *(undefined8 *)(this + 0x10) =
       *(undefined8 *)(lVar4 + (long)(*(int *)(this + 0x40) + *(int *)(this + 8)) * 8);
  return;
}

