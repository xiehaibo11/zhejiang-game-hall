
/* v8::internal::interpreter::BytecodeRegisterOptimizer::GetInputRegister(v8::internal::interpreter::Register)
    */

int __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::GetInputRegister
          (BytecodeRegisterOptimizer *this,int param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = *(int **)(*(long *)(this + 0x20) + (long)(*(int *)(this + 0x40) + param_2) * 8);
  if ((char)piVar6[2] == '\0') {
    iVar1 = *(int *)(this + 8);
    piVar4 = piVar6;
    do {
      piVar4 = *(int **)(piVar4 + 4);
      piVar5 = piVar6;
      if (piVar4 == piVar6) {
        do {
          piVar5 = *(int **)(piVar5 + 4);
        } while ((char)piVar5[2] == '\0');
        iVar2 = *piVar6;
        if (*piVar5 == iVar1) {
          (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar2);
        }
        else {
          plVar3 = *(long **)(this + 0xa0);
          if (iVar2 == iVar1) {
            (**(code **)(*plVar3 + 0x10))();
          }
          else {
            (**(code **)(*plVar3 + 0x20))(plVar3,*piVar5,iVar2);
          }
        }
        if (iVar2 != *(int *)(this + 8)) {
          if (iVar2 <= *(int *)(this + 0x1c)) {
            iVar2 = *(int *)(this + 0x1c);
          }
          *(int *)(this + 0x1c) = iVar2;
        }
        *(undefined1 *)(piVar6 + 2) = 1;
        return *piVar6;
      }
    } while (((char)piVar4[2] == '\0') || (param_2 = *piVar4, param_2 == iVar1));
  }
  return param_2;
}

