
/* v8::internal::compiler::Schedule::InsertSwitch(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*, v8::internal::compiler::Node*,
   v8::internal::compiler::BasicBlock**, unsigned long) */

void __thiscall
v8::internal::compiler::Schedule::InsertSwitch
          (Schedule *this,BasicBlock *param_1,BasicBlock *param_2,Node *param_3,BasicBlock **param_4
          ,ulong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
  *pvVar10;
  long lVar11;
  BasicBlock *pBVar12;
  undefined8 *puVar13;
  
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  puVar13 = *(undefined8 **)(param_1 + 0x60);
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x34) = 4;
  if (puVar13 != puVar1) {
    do {
      pBVar12 = (BasicBlock *)*puVar13;
      BasicBlock::AddSuccessor(param_2,pBVar12);
      puVar9 = *(undefined8 **)(pBVar12 + 0x80);
      puVar2 = *(undefined8 **)(pBVar12 + 0x88);
      if (puVar9 != puVar2) {
        uVar6 = ((ulong)((long)puVar2 + (-8 - (long)puVar9)) >> 3) + 1;
        puVar5 = puVar9;
        if (3 < uVar6) {
          uVar8 = uVar6 & 0x3ffffffffffffffc;
          puVar5 = puVar9 + uVar8;
          puVar9 = puVar9 + 2;
          uVar7 = uVar8;
          do {
            if ((BasicBlock *)puVar9[-2] == param_1) {
              puVar9[-2] = param_2;
            }
            if ((BasicBlock *)puVar9[-1] == param_1) {
              puVar9[-1] = param_2;
            }
            if ((BasicBlock *)*puVar9 == param_1) {
              *puVar9 = param_2;
            }
            if ((BasicBlock *)puVar9[1] == param_1) {
              puVar9[1] = param_2;
            }
            uVar7 = uVar7 - 4;
            puVar9 = puVar9 + 4;
          } while (uVar7 != 0);
          if (uVar6 == uVar8) goto LAB_012b2184;
        }
        do {
          if ((BasicBlock *)*puVar5 == param_1) {
            *puVar5 = param_2;
          }
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
      }
LAB_012b2184:
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
  *(undefined8 **)(param_1 + 0x68) = puVar13;
  for (; param_5 != 0; param_5 = param_5 - 1) {
    pBVar12 = *param_4;
    BasicBlock::AddSuccessor(param_1,pBVar12);
    BasicBlock::AddPredecessor(pBVar12,param_1);
    param_4 = param_4 + 1;
  }
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    if ((*(long *)(param_2 + 0x40) != *(long *)(param_2 + 0x48)) &&
       (plVar3 = (long *)(*(long *)(param_2 + 0x48) + -8), *plVar3 == lVar11)) {
      *(long **)(param_2 + 0x48) = plVar3;
    }
    *(long *)(param_2 + 0x38) = lVar11;
    pvVar10 = (vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
               *)(this + 0x28);
    lVar4 = *(long *)pvVar10;
    uVar6 = (ulong)*(uint *)(lVar11 + 0x14) & 0xffffff;
    uVar7 = *(long *)(this + 0x30) - lVar4 >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = (ulong)((int)uVar6 + 1);
      if (uVar7 < uVar6) {
        std::__ndk1::
        vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
        ::__append(pvVar10,uVar6 - uVar7);
        lVar4 = *(long *)pvVar10;
      }
      else if (uVar7 != uVar6) {
        *(ulong *)(this + 0x30) = lVar4 + uVar6 * 8;
      }
    }
    *(BasicBlock **)(lVar4 + ((ulong)*(uint *)(lVar11 + 0x14) & 0xffffff) * 8) = param_2;
  }
  if ((*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) &&
     (puVar13 = (undefined8 *)(*(long *)(param_1 + 0x48) + -8), (Node *)*puVar13 == param_3)) {
    *(undefined8 **)(param_1 + 0x48) = puVar13;
  }
  *(Node **)(param_1 + 0x38) = param_3;
  pvVar10 = (vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
             *)(this + 0x28);
  lVar11 = *(long *)pvVar10;
  uVar6 = *(long *)(this + 0x30) - lVar11 >> 3;
  if (uVar6 <= ((ulong)*(uint *)(param_3 + 0x14) & 0xffffff)) {
    uVar7 = (ulong)((int)((ulong)*(uint *)(param_3 + 0x14) & 0xffffff) + 1);
    if (uVar6 < uVar7) {
      std::__ndk1::
      vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
      ::__append(pvVar10,uVar7 - uVar6);
      lVar11 = *(long *)pvVar10;
    }
    else if (uVar6 != uVar7) {
      *(ulong *)(this + 0x30) = lVar11 + uVar7 * 8;
    }
  }
  *(BasicBlock **)(lVar11 + ((ulong)*(uint *)(param_3 + 0x14) & 0xffffff) * 8) = param_1;
  return;
}

