
/* btCollisionWorld::debugDrawWorld() */

void __thiscall btCollisionWorld::debugDrawWorld(btCollisionWorld *this)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = (**(code **)(*(long *)this + 0x28))();
  if (lVar4 != 0) {
    plVar5 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar2 = (**(code **)(*plVar5 + 0x60))();
    if ((uVar2 >> 3 & 1) != 0) {
      iVar3 = (**(code **)(**(long **)(this + 0x28) + 0x48))();
      local_70 = 0x3f8000003f800000;
      local_68 = 0;
      if (0 < iVar3) {
        iVar9 = 0;
        do {
          lVar4 = (**(code **)(**(long **)(this + 0x28) + 0x50))(*(long **)(this + 0x28),iVar9);
          uVar10 = (ulong)*(uint *)(lVar4 + 0x318);
          if (0 < (int)*(uint *)(lVar4 + 0x318)) {
            puVar11 = (undefined4 *)(lVar4 + 0xa0);
            do {
              plVar5 = (long *)(**(code **)(*(long *)this + 0x28))(this);
              (**(code **)(*plVar5 + 0x40))
                        (puVar11[-0x12],plVar5,puVar11 + -0x1e,puVar11 + -0x16,*puVar11,&local_70);
              uVar10 = uVar10 - 1;
              puVar11 = puVar11 + 0x30;
            } while (uVar10 != 0);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar3);
      }
    }
  }
  lVar4 = (**(code **)(*(long *)this + 0x28))(this);
  if (lVar4 != 0) {
    plVar5 = (long *)(**(code **)(*(long *)this + 0x28))(this);
    uVar2 = (**(code **)(*plVar5 + 0x60))();
    if (((uVar2 & 3) != 0) && (0 < *(int *)(this + 0xc))) {
      lVar4 = 0;
      do {
        lVar12 = *(long *)(*(long *)(this + 0x18) + lVar4 * 8);
        if ((*(byte *)(lVar12 + 0xe0) >> 5 & 1) == 0) {
          lVar6 = (**(code **)(*(long *)this + 0x28))(this);
          if (lVar6 != 0) {
            plVar5 = (long *)(**(code **)(*(long *)this + 0x28))(this);
            uVar10 = (**(code **)(*plVar5 + 0x60))();
            if ((uVar10 & 1) != 0) {
              uVar7 = 0x3f800000;
              uVar2 = *(int *)(lVar12 + 0xec) - 1;
              if (uVar2 < 5) {
                uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
                uVar7 = *(undefined4 *)(&DAT_014a5720 + uVar10);
                uVar8 = *(undefined4 *)(&DAT_014a5740 + uVar10);
                uVar2 = *(uint *)(&DAT_014a5760 + uVar10);
              }
              else {
                uVar8 = 0;
                uVar2 = 0;
              }
              local_70 = CONCAT44(uVar8,uVar7);
              local_68 = (ulong)uVar2;
              (**(code **)(*(long *)this + 0x38))
                        (this,lVar12 + 8,*(undefined8 *)(lVar12 + 200),&local_70);
            }
          }
          if ((*(long **)(this + 0x68) != (long *)0x0) &&
             (uVar2 = (**(code **)(**(long **)(this + 0x68) + 0x60))(), (uVar2 >> 1 & 1) != 0)) {
            local_90 = 0x3f800000;
            uStack_88 = 0;
            (**(code **)(**(long **)(lVar12 + 200) + 0x10))
                      (*(long **)(lVar12 + 200),lVar12 + 8,&local_70,&local_80);
            fVar1 = gContactBreakingThreshold;
            local_80 = gContactBreakingThreshold + local_80;
            local_70 = CONCAT44(local_70._4_4_ - gContactBreakingThreshold,
                                (float)local_70 - gContactBreakingThreshold);
            local_7c = gContactBreakingThreshold + local_7c;
            local_68 = CONCAT44(local_68._4_4_,(float)local_68 - gContactBreakingThreshold);
            local_78 = gContactBreakingThreshold + local_78;
            if ((this[0x40] != (btCollisionWorld)0x0) &&
               ((*(int *)(lVar12 + 0x100) == 2 && ((*(byte *)(lVar12 + 0xe0) & 3) == 0)))) {
              (**(code **)(**(long **)(lVar12 + 200) + 0x10))
                        (*(long **)(lVar12 + 200),lVar12 + 0x48,&local_a0,&local_b0);
              local_a0 = local_a0 - fVar1;
              local_b0 = fVar1 + local_b0;
              fStack_ac = fVar1 + fStack_ac;
              local_9c = local_9c - fVar1;
              local_98 = local_98 - fVar1;
              local_a8 = fVar1 + local_a8;
              if (local_a0 < (float)local_70) {
                local_70 = CONCAT44(local_70._4_4_,local_a0);
              }
              if (local_9c < local_70._4_4_) {
                local_70 = CONCAT44(local_9c,(float)local_70);
              }
              if (local_98 < (float)local_68) {
                local_68 = CONCAT44(local_68._4_4_,local_98);
              }
              if (local_94 < local_68._4_4_) {
                local_68 = CONCAT44(local_94,(float)local_68);
              }
              if (local_80 < local_b0) {
                local_80 = local_b0;
              }
              if (local_7c < fStack_ac) {
                local_7c = fStack_ac;
              }
              if (local_78 < local_a8) {
                local_78 = local_a8;
              }
              if (local_74 < local_a4) {
                local_74 = local_a4;
              }
            }
            (**(code **)(**(long **)(this + 0x68) + 0x68))
                      (*(long **)(this + 0x68),&local_70,&local_80,&local_90);
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this + 0xc));
    }
  }
  return;
}

