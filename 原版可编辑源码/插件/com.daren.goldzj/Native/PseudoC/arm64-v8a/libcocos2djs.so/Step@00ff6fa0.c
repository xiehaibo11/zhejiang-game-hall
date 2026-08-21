
/* v8::internal::MemoryReducer::Step(v8::internal::MemoryReducer::State const&,
   v8::internal::MemoryReducer::Event const&) */

void __thiscall v8::internal::MemoryReducer::Step(MemoryReducer *this,State *param_1,Event *param_2)

{
  ulong uVar1;
  undefined8 *in_x8;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  undefined8 uVar8;
  
  if ((FLAG_incremental_marking == '\0') || (FLAG_memory_reducer == '\0')) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = uVar3;
    in_x8[3] = 0;
    return;
  }
  iVar2 = *(int *)this;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      if (*(int *)param_1 != 0) {
        if (*(int *)param_1 != 1) goto LAB_00ff70c8;
        dVar7 = *(double *)(param_1 + 8);
        iVar2 = *(int *)(this + 4);
        dVar4 = 8000.0;
        goto LAB_00ff7160;
      }
      iVar2 = *(int *)(this + 4);
      if (2 < iVar2) {
        uVar3 = *(undefined8 *)(this + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        in_x8[1] = 0;
        in_x8[2] = uVar3;
        *in_x8 = 0x300000000;
        in_x8[3] = uVar5;
        return;
      }
      if (param_1[0x1a] != (State)0x0) {
        if (param_1[0x19] == (State)0x0) {
          dVar4 = *(double *)(this + 0x10);
          dVar7 = *(double *)(param_1 + 8);
          if ((dVar4 == 0.0) || (dVar7 <= dVar4 + 100000.0)) goto LAB_00ff71ec;
        }
        else {
          dVar7 = *(double *)(param_1 + 8);
        }
        if (dVar7 < *(double *)(this + 8)) {
LAB_00ff70c8:
          uVar3 = *(undefined8 *)this;
          uVar8 = *(undefined8 *)(this + 0x18);
          uVar5 = *(undefined8 *)(this + 0x10);
          in_x8[1] = *(undefined8 *)(this + 8);
          *in_x8 = uVar3;
          in_x8[3] = uVar8;
          in_x8[2] = uVar5;
          return;
        }
        dVar4 = *(double *)(this + 0x10);
        *(undefined4 *)in_x8 = 2;
        *(int *)((long)in_x8 + 4) = iVar2 + 1;
        in_x8[1] = 0;
        goto LAB_00ff7018;
      }
      dVar7 = *(double *)(param_1 + 8);
      dVar4 = *(double *)(this + 0x10);
LAB_00ff71ec:
      *(undefined4 *)in_x8 = 1;
      *(int *)((long)in_x8 + 4) = iVar2;
    }
    else {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (*(int *)param_1 == 1) {
        uVar1 = *(ulong *)(this + 0x18) + 0xa00000;
        uVar6 = (ulong)((double)*(ulong *)(this + 0x18) * 1.1);
        if (uVar1 <= uVar6) {
          uVar1 = uVar6;
        }
        if (*(ulong *)(param_1 + 0x10) < uVar1) goto LAB_00ff70c8;
        dVar4 = *(double *)(param_1 + 8);
        in_x8[1] = dVar4 + 8000.0;
        in_x8[2] = dVar4;
        *in_x8 = 1;
        goto LAB_00ff716c;
      }
      if (*(int *)param_1 == 0) goto LAB_00ff70c8;
      dVar7 = *(double *)(param_1 + 8);
      dVar4 = *(double *)(this + 0x10);
      *in_x8 = 1;
    }
    in_x8[1] = dVar7 + 8000.0;
LAB_00ff7018:
    in_x8[2] = dVar4;
    in_x8[3] = 0;
    return;
  }
  if (*(int *)param_1 != 1) goto LAB_00ff70c8;
  iVar2 = *(int *)(this + 4);
  if ((2 < iVar2) || ((iVar2 != 1 && (param_1[0x18] == (State)0x0)))) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    in_x8[1] = 0;
    *in_x8 = 0x300000000;
    in_x8[3] = uVar5;
    in_x8[2] = uVar3;
    return;
  }
  dVar7 = *(double *)(param_1 + 8);
  dVar4 = 500.0;
LAB_00ff7160:
  *(undefined4 *)in_x8 = 1;
  *(int *)((long)in_x8 + 4) = iVar2;
  in_x8[1] = dVar7 + dVar4;
  in_x8[2] = dVar7;
LAB_00ff716c:
  in_x8[3] = 0;
  return;
}

