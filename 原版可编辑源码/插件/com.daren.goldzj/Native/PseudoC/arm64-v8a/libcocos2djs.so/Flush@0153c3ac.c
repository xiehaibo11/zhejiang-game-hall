
/* v8::internal::Trace::Flush(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*) */

void __thiscall v8::internal::Trace::Flush(Trace *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  bool bVar1;
  Trace *this_00;
  vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>> *this_01;
  RegExpMacroAssembler *pRVar2;
  int iVar3;
  int iVar4;
  Zone *pZVar5;
  uint uVar6;
  int *piVar7;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined8 local_74;
  undefined1 local_6c;
  undefined8 local_68;
  
  pRVar2 = *(RegExpMacroAssembler **)(param_1 + 0x28);
  piVar7 = *(int **)(this + 8);
  if ((piVar7 == (int *)0x0) && (*(long *)(this + 0x10) == 0)) {
    if (*(int *)this != 0) {
      (**(code **)(*(long *)pRVar2 + 0x28))(pRVar2);
    }
    local_c0 = (RegExpNode *)((ulong)local_c0._4_4_ << 0x20);
    local_86 = 0;
    local_82 = 0;
    local_80 = 0;
    local_7c = 0;
    local_7a = 0;
    local_76 = 0;
    local_74 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_6c = 0;
    local_88 = 0;
    local_68 = 0xffffffff00000064;
    (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1,&local_c0);
  }
  else {
    local_d0[0] = 0;
    local_c8 = 0;
    if (*(long *)(this + 0x10) != 0) {
      (**(code **)(*(long *)pRVar2 + 0x128))(pRVar2);
      piVar7 = *(int **)(this + 8);
    }
    pZVar5 = *(Zone **)(param_1 + 0x448);
    iVar4 = -1;
    iVar3 = iVar4;
    if (piVar7 != (int *)0x0) {
      do {
        while (*piVar7 != 6) {
          DynamicBitSet::Set((DynamicBitSet *)local_d0,piVar7[1],pZVar5);
          iVar4 = piVar7[1];
          if (piVar7[1] <= iVar3) {
            iVar4 = iVar3;
          }
          piVar7 = *(int **)(piVar7 + 2);
          iVar3 = iVar4;
          if (piVar7 == (int *)0x0) goto LAB_0153c4fc;
        }
        iVar4 = piVar7[5];
        uVar6 = piVar7[4];
        if (piVar7[4] <= iVar4) {
          do {
            DynamicBitSet::Set((DynamicBitSet *)local_d0,uVar6,pZVar5);
            bVar1 = (int)uVar6 < iVar4;
            uVar6 = uVar6 + 1;
          } while (bVar1);
        }
        if (iVar4 <= iVar3) {
          iVar4 = iVar3;
        }
        piVar7 = *(int **)(piVar7 + 2);
        iVar3 = iVar4;
      } while (piVar7 != (int *)0x0);
LAB_0153c4fc:
      pZVar5 = *(Zone **)(param_1 + 0x448);
    }
    local_e0[0] = 0;
    local_d8 = 0;
    local_f0[0] = 0;
    local_e8 = 0;
    PerformDeferredActions
              (this,pRVar2,iVar4,(DynamicBitSet *)local_d0,(DynamicBitSet *)local_e0,
               (DynamicBitSet *)local_f0,pZVar5);
    if (*(int *)this != 0) {
      (**(code **)(*(long *)pRVar2 + 0x28))(pRVar2);
    }
    local_f8 = 0;
    (**(code **)(*(long *)pRVar2 + 0x120))(pRVar2,&local_f8);
    if ((param_1[0x32] == (RegExpCompiler)0x0) && (*(int *)(param_1 + 0x20) < 0x65)) {
      local_c0 = (RegExpNode *)((ulong)local_c0._4_4_ << 0x20);
      local_86 = 0;
      local_82 = 0;
      local_80 = 0;
      local_7c = 0;
      local_7a = 0;
      local_76 = 0;
      local_74 = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      uStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      local_98 = 0;
      local_6c = 0;
      local_88 = 0;
      local_68 = 0xffffffff00000064;
      (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1,&local_c0);
    }
    else {
      local_c0 = param_2;
      if ((param_2[0x18] == (RegExpNode)0x0) && (-1 < *(int *)(param_2 + 0x10))) {
        param_2[0x18] = (RegExpNode)0x1;
        this_01 = *(vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>>
                    **)(param_1 + 0x18);
        if (*(undefined8 **)(this_01 + 8) == *(undefined8 **)(this_01 + 0x10)) {
          std::__ndk1::
          vector<v8::internal::RegExpNode*,std::__ndk1::allocator<v8::internal::RegExpNode*>>::
          __push_back_slow_path<v8::internal::RegExpNode*const&>(this_01,(RegExpNode **)&local_c0);
        }
        else {
          **(undefined8 **)(this_01 + 8) = param_2;
          *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
        }
      }
      (**(code **)(*(long *)pRVar2 + 0xe0))(pRVar2,param_2 + 0x10);
    }
    this_00 = (Trace *)(**(code **)(*(long *)pRVar2 + 0x40))(pRVar2,&local_f8);
    RestoreAffectedRegisters
              (this_00,pRVar2,iVar4,(DynamicBitSet *)local_e0,(DynamicBitSet *)local_f0);
    if (*(long *)(this + 0x10) == 0) {
      (**(code **)(*(long *)pRVar2 + 0x38))(pRVar2);
    }
    else {
      (**(code **)(*(long *)pRVar2 + 0x110))(pRVar2);
      (**(code **)(*(long *)pRVar2 + 0xe0))(pRVar2,*(undefined8 *)(this + 0x10));
    }
  }
  return;
}

