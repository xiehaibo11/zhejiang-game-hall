
/* btOptimizedBvh::build(btStridingMeshInterface*, bool, btVector3 const&, btVector3 const&) */

void __thiscall
btOptimizedBvh::build
          (btOptimizedBvh *this,btStridingMeshInterface *param_1,bool param_2,btVector3 *param_3,
          btVector3 *param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  btInternalTriangleIndexCallback *this_00;
  long lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  long lVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  btOptimizedBvh *pbStack_a0;
  undefined **local_98;
  btOptimizedBvh *pbStack_90;
  btOptimizedBvh *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this[0x40] = (btOptimizedBvh)param_2;
  if (param_2) {
    btQuantizedBvh::setQuantizationValues((btQuantizedBvh *)this,param_3,param_4,1.0);
    pbStack_90 = this + 0x88;
    local_98 = &PTR__btInternalTriangleIndexCallback_01733488;
    local_88 = this;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_98,this + 8,this + 0x18);
    iVar11 = *(int *)(this + 0x8c);
    local_a8 = (undefined **)0x0;
    pbStack_a0 = (btOptimizedBvh *)0x0;
    iVar12 = *(int *)(this + 0xac);
    iVar13 = (int)((long)iVar11 << 1);
    if (iVar12 < iVar13) {
      if (*(int *)(this + 0xb0) < iVar13) {
        if (iVar11 == 0) {
          lVar4 = 0;
          iVar8 = iVar12;
        }
        else {
          lVar4 = btAlignedAllocInternal((long)iVar11 << 5,0x10);
          iVar8 = *(int *)(this + 0xac);
        }
        if (0 < iVar8) {
          lVar5 = 0;
          lVar9 = (long)iVar8;
          do {
            lVar9 = lVar9 + -1;
            puVar6 = (undefined8 *)(*(long *)(this + 0xb8) + lVar5);
            uVar14 = *puVar6;
            ((undefined8 *)(lVar4 + lVar5))[1] = puVar6[1];
            *(undefined8 *)(lVar4 + lVar5) = uVar14;
            lVar5 = lVar5 + 0x10;
          } while (lVar9 != 0);
        }
        if (*(void **)(this + 0xb8) != (void *)0x0) {
          if (this[0xc0] != (btOptimizedBvh)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0xb8));
          }
          *(undefined8 *)(this + 0xb8) = 0;
        }
        *(long *)(this + 0xb8) = lVar4;
        this[0xc0] = (btOptimizedBvh)0x1;
        *(int *)(this + 0xb0) = iVar13;
      }
      lVar5 = (long)iVar13 - (long)iVar12;
      lVar4 = (long)iVar12 << 4;
      do {
        lVar9 = *(long *)(this + 0xb8);
        lVar5 = lVar5 + -1;
        ((undefined8 *)(lVar9 + lVar4))[1] = pbStack_a0;
        *(undefined8 *)(lVar9 + lVar4) = local_a8;
        lVar4 = lVar4 + 0x10;
      } while (lVar5 != 0);
    }
    *(int *)(this + 0xac) = iVar13;
    this_00 = (btInternalTriangleIndexCallback *)&local_98;
  }
  else {
    pbStack_a0 = this + 0x48;
    local_b8 = 0xdd5e0b6bdd5e0b6b;
    uStack_b0 = 0xdd5e0b6b;
    local_c8 = 0x5d5e0b6b5d5e0b6b;
    uStack_c0 = 0x5d5e0b6b;
    local_a8 = &PTR__btInternalTriangleIndexCallback_017334c8;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_a8,&local_b8,&local_c8);
    iVar11 = *(int *)(this + 0x4c);
    uStack_60 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = (btOptimizedBvh *)0x0;
    pbStack_90 = (btOptimizedBvh *)0x0;
    local_98 = (undefined **)0x0;
    iVar12 = *(int *)(this + 0x6c);
    iVar13 = (int)((long)iVar11 << 1);
    if (iVar12 < iVar13) {
      if (*(int *)(this + 0x70) < iVar13) {
        if (iVar11 == 0) {
          lVar4 = 0;
          iVar8 = iVar12;
        }
        else {
          lVar4 = btAlignedAllocInternal((long)iVar11 << 7,0x10);
          iVar8 = *(int *)(this + 0x6c);
        }
        if (0 < iVar8) {
          lVar5 = 0;
          lVar9 = (long)iVar8;
          do {
            puVar6 = (undefined8 *)(lVar4 + lVar5);
            lVar9 = lVar9 + -1;
            puVar1 = (undefined8 *)(*(long *)(this + 0x78) + lVar5);
            uVar14 = puVar1[6];
            lVar5 = lVar5 + 0x40;
            puVar6[7] = puVar1[7];
            puVar6[6] = uVar14;
            uVar14 = puVar1[4];
            puVar6[5] = puVar1[5];
            puVar6[4] = uVar14;
            uVar14 = puVar1[2];
            puVar6[3] = puVar1[3];
            puVar6[2] = uVar14;
            uVar14 = *puVar1;
            puVar6[1] = puVar1[1];
            *puVar6 = uVar14;
          } while (lVar9 != 0);
        }
        if (*(void **)(this + 0x78) != (void *)0x0) {
          if (this[0x80] != (btOptimizedBvh)0x0) {
            btAlignedFreeInternal(*(void **)(this + 0x78));
          }
          *(undefined8 *)(this + 0x78) = 0;
        }
        *(long *)(this + 0x78) = lVar4;
        this[0x80] = (btOptimizedBvh)0x1;
        *(int *)(this + 0x70) = iVar13;
      }
      lVar5 = (long)iVar13 - (long)iVar12;
      lVar4 = (long)iVar12 << 6;
      do {
        lVar5 = lVar5 + -1;
        puVar6 = (undefined8 *)(*(long *)(this + 0x78) + lVar4);
        puVar6[7] = uStack_60;
        puVar6[6] = local_68;
        lVar4 = lVar4 + 0x40;
        puVar6[5] = uStack_70;
        puVar6[4] = local_78;
        puVar6[3] = uStack_80;
        puVar6[2] = local_88;
        puVar6[1] = pbStack_90;
        *puVar6 = local_98;
      } while (lVar5 != 0);
    }
    this_00 = (btInternalTriangleIndexCallback *)&local_a8;
    *(int *)(this + 0x6c) = iVar13;
  }
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback(this_00);
  *(undefined4 *)(this + 0x3c) = 0;
  btQuantizedBvh::buildTree((btQuantizedBvh *)this,0,iVar11);
  if ((this[0x40] != (btOptimizedBvh)0x0) && (*(int *)(this + 0xd4) == 0)) {
    iVar12 = 1;
    if (*(int *)(this + 0xd8) == 0) {
      lVar4 = btAlignedAllocInternal(0x20,0x10);
      lVar5 = (long)*(int *)(this + 0xd4);
      if (0 < *(int *)(this + 0xd4)) {
        lVar9 = 0;
        do {
          puVar6 = (undefined8 *)(lVar4 + lVar9);
          lVar5 = lVar5 + -1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar9);
          uVar14 = puVar1[2];
          lVar9 = lVar9 + 0x20;
          puVar6[3] = puVar1[3];
          puVar6[2] = uVar14;
          uVar14 = *puVar1;
          puVar6[1] = puVar1[1];
          *puVar6 = uVar14;
        } while (lVar5 != 0);
      }
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        if (this[0xe8] != (btOptimizedBvh)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0xe0));
        }
        *(undefined8 *)(this + 0xe0) = 0;
      }
      this[0xe8] = (btOptimizedBvh)0x1;
      *(undefined4 *)(this + 0xd8) = 1;
      iVar12 = *(int *)(this + 0xd4) + 1;
      *(long *)(this + 0xe0) = lVar4;
    }
    *(int *)(this + 0xd4) = iVar12;
    puVar6 = *(undefined8 **)(this + 0xe0);
    puVar6[3] = uStack_80;
    puVar6[2] = local_88;
    puVar6[1] = pbStack_90;
    *puVar6 = local_98;
    puVar7 = *(undefined2 **)(this + 0xb8);
    puVar10 = *(undefined2 **)(this + 0xe0);
    *puVar10 = *puVar7;
    puVar10[1] = puVar7[1];
    puVar10[2] = puVar7[2];
    puVar10[3] = puVar7[3];
    puVar10[4] = puVar7[4];
    uVar2 = puVar7[5];
    *(undefined4 *)(puVar10 + 6) = 0;
    puVar10[5] = uVar2;
    iVar12 = 1;
    if (*(int *)(puVar7 + 6) < 0) {
      iVar12 = -*(int *)(puVar7 + 6);
    }
    *(int *)(puVar10 + 8) = iVar12;
  }
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xd4);
  if (*(void **)(this + 0x98) != (void *)0x0) {
    if (this[0xa0] != (btOptimizedBvh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x98));
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  this[0xa0] = (btOptimizedBvh)0x1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (this[0x60] != (btOptimizedBvh)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x58));
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  this[0x60] = (btOptimizedBvh)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

