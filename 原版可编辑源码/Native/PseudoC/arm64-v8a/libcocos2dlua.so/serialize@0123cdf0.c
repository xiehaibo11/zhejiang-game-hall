
/* btQuantizedBvh::serialize(void*, btSerializer*) const */

char * __thiscall
btQuantizedBvh::serialize(btQuantizedBvh *this,void *param_1,btSerializer *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x3c);
  *(uint *)((long)param_1 + 0x34) = (uint)(byte)this[0x40];
  iVar3 = *(int *)(this + 0x6c);
  *(int *)((long)param_1 + 0x38) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x78));
    *(long *)((long)param_1 + 0x40) = lVar5;
    if (lVar5 != 0) {
      uVar4 = *(uint *)(this + 0x6c);
      uVar11 = (ulong)uVar4;
      lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x30,uVar11);
      if ((int)uVar4 < 1) {
        lVar6 = *(long *)(this + 0x78);
      }
      else {
        lVar6 = *(long *)(this + 0x78);
        puVar7 = (undefined4 *)(*(long *)(lVar5 + 8) + 0x10);
        puVar9 = (undefined4 *)(lVar6 + 0x10);
        do {
          uVar11 = uVar11 - 1;
          *puVar7 = *puVar9;
          puVar7[1] = puVar9[1];
          puVar7[2] = puVar9[2];
          uVar12 = *(undefined8 *)(puVar9 + 3);
          *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(puVar9 + 5);
          *(undefined8 *)(puVar7 + 3) = uVar12;
          puVar7[-4] = puVar9[-4];
          puVar7[-3] = puVar9[-3];
          puVar7[-2] = puVar9[-2];
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + 0x10;
          puVar7[-1] = *puVar1;
          puVar7 = puVar7 + 0xc;
        } while (uVar11 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar5,"btOptimizedBvhNodeData",0x59415241,lVar6);
    }
  }
  iVar3 = *(int *)(this + 0xac);
  *(int *)((long)param_1 + 0x3c) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x48) = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0xb8));
    *(long *)((long)param_1 + 0x48) = lVar5;
    if (lVar5 != 0) {
      uVar4 = *(uint *)(this + 0xac);
      uVar11 = (ulong)uVar4;
      lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10,uVar11);
      if ((int)uVar4 < 1) {
        lVar6 = *(long *)(this + 0xb8);
      }
      else {
        lVar6 = *(long *)(this + 0xb8);
        puVar8 = (undefined2 *)(lVar6 + 6);
        puVar10 = (undefined2 *)(*(long *)(lVar5 + 8) + 6);
        do {
          uVar11 = uVar11 - 1;
          *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar8 + 3);
          *puVar10 = *puVar8;
          puVar10[1] = puVar8[1];
          puVar10[2] = puVar8[2];
          puVar10[-3] = puVar8[-3];
          puVar10[-2] = puVar8[-2];
          puVar2 = puVar8 + -1;
          puVar8 = puVar8 + 8;
          puVar10[-1] = *puVar2;
          puVar10 = puVar10 + 8;
        } while (uVar11 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))
                (param_2,lVar5,"btQuantizedBvhNodeData",0x59415241,lVar6);
    }
  }
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 200);
  iVar3 = *(int *)(this + 0xd4);
  *(int *)((long)param_1 + 0x5c) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 0x50) = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0xe0));
    *(long *)((long)param_1 + 0x50) = lVar5;
    if (lVar5 != 0) {
      uVar4 = *(uint *)(this + 0xd4);
      uVar11 = (ulong)uVar4;
      lVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x14,uVar11);
      if ((int)uVar4 < 1) {
        lVar6 = *(long *)(this + 0xe0);
      }
      else {
        lVar6 = *(long *)(this + 0xe0);
        puVar8 = (undefined2 *)(*(long *)(lVar5 + 8) + 10);
        puVar10 = (undefined2 *)(lVar6 + 8);
        do {
          uVar11 = uVar11 - 1;
          puVar8[2] = puVar10[-1];
          puVar8[3] = *puVar10;
          puVar8[4] = puVar10[1];
          puVar8[-1] = puVar10[-4];
          *puVar8 = puVar10[-3];
          puVar8[1] = puVar10[-2];
          *(undefined4 *)(puVar8 + -5) = *(undefined4 *)(puVar10 + 2);
          puVar7 = (undefined4 *)(puVar10 + 4);
          puVar10 = puVar10 + 0x10;
          *(undefined4 *)(puVar8 + -3) = *puVar7;
          puVar8 = puVar8 + 10;
        } while (uVar11 != 0);
      }
      (**(code **)(*(long *)param_2 + 0x28))(param_2,lVar5,"btBvhSubtreeInfoData",0x59415241,lVar6);
    }
  }
  return "btQuantizedBvhFloatData";
}

