
/* v8::internal::interpreter::BytecodeRegisterOptimizer::Flush() */

void __thiscall
v8::internal::interpreter::BytecodeRegisterOptimizer::Flush(BytecodeRegisterOptimizer *this)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  
  if (this[0xa8] != (BytecodeRegisterOptimizer)0x0) {
    lVar6 = *(long *)(this + 0x50);
    if (*(long *)(this + 0x58) != lVar6) {
      uVar1 = *(ulong *)(this + 0x78);
      lVar2 = *(long *)(this + 0x80);
      plVar8 = (long *)(lVar6 + (uVar1 >> 6 & 0x3fffffffffffff8));
      lVar6 = *(long *)(lVar6 + (lVar2 + uVar1 >> 6 & 0x3fffffffffffff8));
      puVar9 = (undefined8 *)(*plVar8 + (uVar1 & 0x1ff) * 8);
      while ((undefined8 *)(lVar6 + (lVar2 + uVar1 & 0x1ff) * 8) != puVar9) {
        piVar7 = (int *)*puVar9;
        if (*(char *)((long)piVar7 + 10) != '\0') {
          *(undefined1 *)((long)piVar7 + 10) = 0;
          cVar4 = (char)piVar7[2];
          piVar10 = piVar7;
          while (cVar4 == '\0') {
            piVar10 = *(int **)(piVar10 + 4);
            if (piVar10 == piVar7) {
              iVar3 = *(int *)(this + 0x98);
              *(int *)(this + 0x98) = iVar3 + 1;
              *(undefined8 *)(*(long *)(piVar7 + 4) + 0x18) = *(undefined8 *)(piVar7 + 6);
              *(undefined8 *)(*(long *)(piVar7 + 6) + 0x10) = *(undefined8 *)(piVar7 + 4);
              *(int **)(piVar7 + 4) = piVar7;
              *(int **)(piVar7 + 6) = piVar7;
              piVar7[1] = iVar3 + 1;
              *(undefined1 *)(piVar7 + 2) = 0;
              goto LAB_017beffc;
            }
            cVar4 = (char)piVar10[2];
          }
          while (piVar7 = *(int **)(piVar10 + 4), piVar7 != piVar10) {
            if ((*(char *)((long)piVar7 + 9) != '\0') && ((char)piVar7[2] == '\0')) {
              iVar3 = *piVar7;
              if (*piVar10 == *(int *)(this + 8)) {
                (**(code **)(**(long **)(this + 0xa0) + 0x18))(*(long **)(this + 0xa0),iVar3);
              }
              else {
                plVar5 = *(long **)(this + 0xa0);
                if (iVar3 == *(int *)(this + 8)) {
                  (**(code **)(*plVar5 + 0x10))();
                }
                else {
                  (**(code **)(*plVar5 + 0x20))(plVar5,*piVar10,iVar3);
                }
              }
              if (iVar3 != *(int *)(this + 8)) {
                if (iVar3 <= *(int *)(this + 0x1c)) {
                  iVar3 = *(int *)(this + 0x1c);
                }
                *(int *)(this + 0x1c) = iVar3;
              }
              *(undefined1 *)(piVar7 + 2) = 1;
            }
            iVar3 = *(int *)(this + 0x98);
            *(int *)(this + 0x98) = iVar3 + 1;
            *(undefined8 *)(*(long *)(piVar7 + 4) + 0x18) = *(undefined8 *)(piVar7 + 6);
            *(undefined8 *)(*(long *)(piVar7 + 6) + 0x10) = *(undefined8 *)(piVar7 + 4);
            *(int **)(piVar7 + 4) = piVar7;
            *(int **)(piVar7 + 6) = piVar7;
            piVar7[1] = iVar3 + 1;
            *(undefined1 *)(piVar7 + 2) = 1;
            *(undefined1 *)((long)piVar7 + 10) = 0;
          }
        }
LAB_017beffc:
        puVar9 = puVar9 + 1;
        if ((long)puVar9 - *plVar8 == 0x1000) {
          plVar8 = plVar8 + 1;
          puVar9 = (undefined8 *)*plVar8;
        }
      }
    }
    std::__ndk1::
    __deque_base<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
    ::clear((__deque_base<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
             *)(this + 0x48));
    this[0xa8] = (BytecodeRegisterOptimizer)0x0;
  }
  return;
}

