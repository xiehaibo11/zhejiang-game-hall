
/* v8::internal::compiler::CodeGenerator::AssembleArchBinarySearchSwitch(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchBinarySearchSwitch
          (CodeGenerator *this,Instruction *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uVar12;
  void *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  long lStack_48;
  
  uVar3 = *(uint *)(param_1 + 4);
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  local_68 = (void *)0x0;
  uVar1 = 0x200000003f;
  if ((int)(*(long *)(param_1 + (ulong)(byte)uVar3 * 8 + 0x28) >> 0x23) != 0x3f) {
    uVar1 = *(long *)(param_1 + (ulong)(byte)uVar3 * 8 + 0x28) >> 0x23 & 0xffffffffU | 0x2000000000;
  }
  if (0x200 < (uVar3 & 0xffff00)) {
    uVar11 = 2;
    do {
      uVar6 = (ulong)(uVar3 & 0xff);
      uVar9 = *(ulong *)(param_1 + (uVar11 + uVar6) * 8 + 0x28);
      lVar4 = *(long *)(this + 0x28);
      if ((uVar9 & 7) == 3) {
        if (((uint)uVar9 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_50,(int)(uVar9 >> 0x20));
          uVar6 = (ulong)(byte)param_1[4];
          lVar4 = *(long *)(this + 0x28);
        }
        else {
          puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x60) + ((long)uVar9 >> 0x20) * 0x10);
          lStack_48 = puVar2[1];
          local_50 = *puVar2;
        }
        uVar12 = (undefined4)lStack_48;
      }
      else {
        plVar5 = (long *)(lVar4 + 0x48);
        plVar10 = (long *)*plVar5;
        if (plVar10 == (long *)0x0) {
LAB_01617350:
          plVar7 = plVar5;
        }
        else {
          plVar7 = plVar5;
          do {
            iVar8 = (int)(uVar9 >> 3);
            if (iVar8 <= (int)plVar10[4]) {
              plVar7 = plVar10;
            }
            plVar10 = (long *)plVar10[(int)plVar10[4] < iVar8];
          } while (plVar10 != (long *)0x0);
          if ((plVar7 == plVar5) || (iVar8 < (int)plVar7[4])) goto LAB_01617350;
        }
        uVar12 = (undefined4)plVar7[6];
      }
      uVar6 = *(ulong *)(param_1 + ((uVar11 | 1) + uVar6) * 8 + 0x28);
      if ((uVar6 & 7) == 3) {
        if (((uint)uVar6 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_50,(int)(uVar6 >> 0x20));
        }
        else {
          puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x60) + ((long)uVar6 >> 0x20) * 0x10);
          lStack_48 = puVar2[1];
          local_50 = *puVar2;
        }
      }
      else {
        plVar5 = (long *)(lVar4 + 0x48);
        plVar10 = (long *)*plVar5;
        if (plVar10 == (long *)0x0) {
LAB_016173dc:
          plVar7 = plVar5;
        }
        else {
          plVar7 = plVar5;
          do {
            iVar8 = (int)(uVar6 >> 3);
            if (iVar8 <= (int)plVar10[4]) {
              plVar7 = plVar10;
            }
            plVar10 = (long *)plVar10[(int)plVar10[4] < iVar8];
          } while (plVar10 != (long *)0x0);
          if ((plVar7 == plVar5) || (iVar8 < (int)plVar7[4])) goto LAB_016173dc;
        }
        lStack_48 = plVar7[6];
      }
      local_50 = CONCAT44(local_50._4_4_,uVar12);
      lStack_48 = *(long *)(this + 0xa8) + ((lStack_48 << 0x20) >> 0x1d);
      if (local_60 < puStack_58) {
        local_60[1] = lStack_48;
        *local_60 = local_50;
        local_60 = local_60 + 2;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<int,v8::internal::Label*>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::Label*>>>
        ::__push_back_slow_path<std::__ndk1::pair<int,v8::internal::Label*>>
                  ((vector<std::__ndk1::pair<int,v8::internal::Label*>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::Label*>>>
                    *)&local_68,(pair *)&local_50);
      }
      uVar3 = *(uint *)(param_1 + 4);
      uVar11 = uVar11 + 2;
    } while (uVar11 < (ushort)(uVar3 >> 8));
  }
  uVar11 = *(ulong *)(param_1 + (ulong)((uVar3 & 0xff) + 1) * 8 + 0x28);
  if ((uVar11 & 7) == 3) {
    if (((uint)uVar11 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_50,(int)(uVar11 >> 0x20));
    }
    else {
      puVar2 = (undefined8 *)
               (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar11 >> 0x20) * 0x10);
      lStack_48 = puVar2[1];
      local_50 = *puVar2;
    }
    uVar12 = (undefined4)lStack_48;
    goto LAB_016174cc;
  }
  plVar5 = (long *)(*(long *)(this + 0x28) + 0x48);
  plVar10 = (long *)*plVar5;
  if (plVar10 == (long *)0x0) {
LAB_016174ac:
    plVar7 = plVar5;
  }
  else {
    plVar7 = plVar5;
    do {
      iVar8 = (int)(uVar11 >> 3);
      if (iVar8 <= (int)plVar10[4]) {
        plVar7 = plVar10;
      }
      plVar10 = (long *)plVar10[(int)plVar10[4] < iVar8];
    } while (plVar10 != (long *)0x0);
    if ((plVar7 == plVar5) || (iVar8 < (int)plVar7[4])) goto LAB_016174ac;
  }
  uVar12 = (undefined4)plVar7[6];
LAB_016174cc:
  AssembleArchBinarySearchSwitchRange(this,uVar1,0,uVar12,local_68,local_60);
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}

