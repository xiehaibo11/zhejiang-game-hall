
/* v8::internal::ActionNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall
v8::internal::ActionNode::Emit(ActionNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(param_1 + 0x28);
  iVar3 = RegExpNode::LimitVersions((RegExpNode *)this,param_1,param_2);
  if (iVar3 == 0) goto LAB_01542bc4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  switch(*(undefined4 *)(this + 0x50)) {
  case 0:
    local_60 = (ulong)*(uint *)(this + 0x40) << 0x20;
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(this + 0x44));
    break;
  case 1:
    local_60 = CONCAT44(*(undefined4 *)(this + 0x40),1);
    break;
  case 2:
    local_60 = CONCAT44(*(undefined4 *)(this + 0x40),2);
    local_50 = CONCAT44(CONCAT31(local_50._5_3_,this[0x44]),*(undefined4 *)param_2);
    break;
  case 3:
    if ((((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 8) == 0)) &&
        ((*(int *)param_2 == 0 &&
         ((*(int *)(param_2 + 0x28) == 0 && (*(int *)(param_2 + 0x2c) == 0)))))) &&
       ((*(int *)(param_2 + 0x30) == 0 && (*(int *)(param_2 + 0x5c) == -1)))) {
      (**(code **)(*plVar6 + 0x160))(plVar6,*(undefined4 *)(this + 0x44),0);
      (**(code **)(*plVar6 + 0x170))(plVar6,*(undefined4 *)(this + 0x40));
      goto LAB_01542b60;
    }
LAB_01542ba8:
    Trace::Flush(param_2,param_1,(RegExpNode *)this);
    goto LAB_01542bb8;
  case 4:
    if ((((*(long *)(param_2 + 0x10) != 0) || (*(long *)(param_2 + 8) != 0)) ||
        ((*(int *)param_2 != 0 ||
         (((*(int *)(param_2 + 0x28) != 0 || (*(int *)(param_2 + 0x2c) != 0)) ||
          (*(int *)(param_2 + 0x30) != 0)))))) || (*(int *)(param_2 + 0x5c) != -1))
    goto LAB_01542ba8;
    (**(code **)(*plVar6 + 0x138))(plVar6,*(undefined4 *)(this + 0x44));
    (**(code **)(*plVar6 + 0x140))(plVar6,*(undefined4 *)(this + 0x40));
    iVar3 = *(int *)(this + 0x48);
    if (iVar3 == 0) {
      (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),param_1,param_2);
    }
    else {
      iVar1 = *(int *)(this + 0x4c);
      local_60 = 0;
      puStack_b8 = *(undefined8 **)(param_2 + 8);
      local_c0 = *(undefined8 *)param_2;
      uStack_a8 = *(undefined8 *)(param_2 + 0x18);
      local_b0 = &local_60;
      uStack_78 = *(undefined8 *)(param_2 + 0x48);
      local_80 = *(undefined8 *)(param_2 + 0x40);
      uStack_68 = *(undefined8 *)(param_2 + 0x58);
      uStack_70 = *(undefined8 *)(param_2 + 0x50);
      uStack_98 = *(undefined8 *)(param_2 + 0x28);
      local_a0 = *(undefined8 *)(param_2 + 0x20);
      uStack_88 = *(undefined8 *)(param_2 + 0x38);
      uStack_90 = *(undefined8 *)(param_2 + 0x30);
      (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38),param_1,&local_c0);
      (**(code **)(*plVar6 + 0x40))(plVar6,&local_60);
      (**(code **)(*plVar6 + 0x168))(plVar6,iVar1,iVar3 + iVar1 + -1);
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    goto LAB_01542bb8;
  case 5:
    iVar3 = *(int *)(this + 0x40);
    iVar1 = *(int *)(this + 0x44);
    for (piVar5 = *(int **)(param_2 + 8); piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 2)) {
      if (*piVar5 == 6) {
        if (((int)*(undefined8 *)(piVar5 + 4) <= iVar3) &&
           (iVar3 <= (int)((ulong)*(undefined8 *)(piVar5 + 4) >> 0x20))) break;
      }
      else if (piVar5[1] == iVar3) {
        if (*piVar5 == 2) {
          if ((piVar5[4] == *(int *)param_2) && (iVar1 == -1)) {
            (**(code **)(*plVar6 + 0xe0))(plVar6,*(undefined8 *)(param_2 + 0x10));
            goto LAB_01542bb8;
          }
          if (piVar5[4] < *(int *)param_2) goto LAB_01542b60;
        }
        break;
      }
    }
    if (((((*(long *)(param_2 + 0x10) != 0) || (*(int **)(param_2 + 8) != (int *)0x0)) ||
         (*(int *)param_2 != 0)) ||
        ((*(int *)(param_2 + 0x28) != 0 || (*(int *)(param_2 + 0x2c) != 0)))) ||
       ((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x5c) != -1)))) goto LAB_01542ba8;
    local_c0 = 0;
    if (iVar1 == -1) {
      uVar4 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0xf0))(plVar6,iVar1,*(undefined4 *)(this + 0x48),&local_c0);
      iVar3 = *(int *)(this + 0x40);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
    }
    (**(code **)(*plVar6 + 0xf8))(plVar6,iVar3,uVar4);
    (**(code **)(*plVar6 + 0x40))(plVar6,&local_c0);
LAB_01542b60:
    plVar6 = *(long **)(this + 0x38);
    goto LAB_01542b10;
  case 6:
    local_50 = *(undefined8 *)(this + 0x40);
    local_60 = -0xfffffffa;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_58 = *(undefined8 *)(param_2 + 8);
  local_c0 = *(undefined8 *)param_2;
  uStack_a8 = *(undefined8 *)(param_2 + 0x18);
  local_b0 = *(undefined8 **)(param_2 + 0x10);
  puStack_b8 = &local_60;
  uStack_78 = *(undefined8 *)(param_2 + 0x48);
  local_80 = *(undefined8 *)(param_2 + 0x40);
  uStack_68 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined8 *)(param_2 + 0x50);
  uStack_98 = *(undefined8 *)(param_2 + 0x28);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_88 = *(undefined8 *)(param_2 + 0x38);
  uStack_90 = *(undefined8 *)(param_2 + 0x30);
  plVar6 = *(long **)(this + 0x38);
  param_2 = (Trace *)&local_c0;
LAB_01542b10:
  (**(code **)(*plVar6 + 0x18))(plVar6,param_1,param_2);
LAB_01542bb8:
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
LAB_01542bc4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

