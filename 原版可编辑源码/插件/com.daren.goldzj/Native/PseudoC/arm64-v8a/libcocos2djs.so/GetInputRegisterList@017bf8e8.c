
/* v8::internal::interpreter::BytecodeRegisterOptimizer::GetInputRegisterList(v8::internal::interpreter::RegisterList)
    */

ulong __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::GetInputRegisterList
          (BytecodeRegisterOptimizer *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = (int)(param_2 >> 0x20);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      param_2 = GetInputRegister(this,param_2 & 0xffffffff);
      param_2 = param_2 & 0xffffffff;
      uVar3 = 0x100000000;
      goto LAB_017bf9f8;
    }
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        piVar7 = *(int **)(*(long *)(this + 0x20) +
                          (long)(iVar6 + (int)param_2 + *(int *)(this + 0x40)) * 8);
        piVar4 = piVar7;
        if ((char)piVar7[2] == '\0') {
          do {
            piVar4 = *(int **)(piVar4 + 4);
          } while ((char)piVar4[2] == '\0');
          iVar1 = *piVar7;
          if (*piVar4 == *(int *)(this + 8)) {
            (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar1);
          }
          else {
            plVar2 = *(long **)(this + 0xa0);
            if (iVar1 == *(int *)(this + 8)) {
              (**(code **)(*plVar2 + 0x10))();
            }
            else {
              (**(code **)(*plVar2 + 0x20))(plVar2,*piVar4,iVar1);
            }
          }
          if (iVar1 != *(int *)(this + 8)) {
            if (iVar1 <= *(int *)(this + 0x1c)) {
              iVar1 = *(int *)(this + 0x1c);
            }
            *(int *)(this + 0x1c) = iVar1;
          }
          *(undefined1 *)(piVar7 + 2) = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar5);
    }
  }
  uVar3 = param_2 & 0xffffffff00000000;
LAB_017bf9f8:
  return uVar3 | param_2 & 0xffffffff;
}

