
/* btPersistentManifold::refreshContactPoints(btTransform const&, btTransform const&) */

void __thiscall
btPersistentManifold::refreshContactPoints
          (btPersistentManifold *this,btTransform *param_1,btTransform *param_2)

{
  int iVar1;
  long lVar2;
  btPersistentManifold *pbVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(this + 0x318);
  if (0 < iVar1) {
    lVar2 = (long)iVar1 + 1;
    pbVar3 = this + (long)iVar1 * 0xc0 + -0xb8;
    do {
      fVar5 = *(float *)pbVar3;
      fVar6 = *(float *)(pbVar3 + 4);
      fVar9 = *(float *)(pbVar3 + 8);
      fVar7 = fVar5 * *(float *)param_1 + fVar6 * *(float *)(param_1 + 4) +
              fVar9 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
      fVar8 = fVar5 * *(float *)(param_1 + 0x10) + fVar6 * *(float *)(param_1 + 0x14) +
              fVar9 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
      fVar5 = fVar5 * *(float *)(param_1 + 0x20) + fVar6 * *(float *)(param_1 + 0x24) +
              fVar9 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
      *(undefined4 *)(pbVar3 + 0x3c) = 0;
      *(float *)(pbVar3 + 0x30) = fVar7;
      *(float *)(pbVar3 + 0x34) = fVar8;
      *(float *)(pbVar3 + 0x38) = fVar5;
      fVar11 = *(float *)(pbVar3 + 0x10);
      fVar12 = *(float *)(pbVar3 + 0x14);
      fVar6 = *(float *)(pbVar3 + 0x18);
      fVar9 = fVar11 * *(float *)param_2 + fVar12 * *(float *)(param_2 + 4) +
              fVar6 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x30);
      fVar10 = fVar11 * *(float *)(param_2 + 0x10) + fVar12 * *(float *)(param_2 + 0x14) +
               fVar6 * *(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x34);
      fVar6 = fVar11 * *(float *)(param_2 + 0x20) + fVar12 * *(float *)(param_2 + 0x24) +
              fVar6 * *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x38);
      lVar2 = lVar2 + -1;
      *(undefined4 *)(pbVar3 + 0x2c) = 0;
      *(int *)(pbVar3 + 0x98) = *(int *)(pbVar3 + 0x98) + 1;
      *(float *)(pbVar3 + 0x20) = fVar9;
      *(float *)(pbVar3 + 0x24) = fVar10;
      *(float *)(pbVar3 + 0x28) = fVar6;
      *(float *)(pbVar3 + 0x50) =
           (fVar7 - fVar9) * *(float *)(pbVar3 + 0x40) +
           (fVar8 - fVar10) * *(float *)(pbVar3 + 0x44) +
           (fVar5 - fVar6) * *(float *)(pbVar3 + 0x48);
      pbVar3 = pbVar3 + -0xc0;
    } while (1 < lVar2);
    iVar1 = *(int *)(this + 0x318);
    if (0 < iVar1) {
      lVar2 = (long)iVar1 + 1;
      pbVar3 = this + (long)iVar1 * 0xc0 + -0xb8;
      do {
        fVar6 = *(float *)(pbVar3 + 0x50);
        fVar5 = *(float *)(this + 0x31c);
        if ((fVar5 < fVar6) ||
           (fVar8 = *(float *)(pbVar3 + 0x20) -
                    (*(float *)(pbVar3 + 0x30) - *(float *)(pbVar3 + 0x40) * fVar6),
           fVar7 = (float)*(undefined8 *)(pbVar3 + 0x24) -
                   ((float)*(undefined8 *)(pbVar3 + 0x34) -
                   (float)*(undefined8 *)(pbVar3 + 0x44) * fVar6),
           fVar6 = (float)((ulong)*(undefined8 *)(pbVar3 + 0x24) >> 0x20) -
                   ((float)((ulong)*(undefined8 *)(pbVar3 + 0x34) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(pbVar3 + 0x44) >> 0x20) * fVar6),
           fVar5 * fVar5 < fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6)) {
          if ((*(long *)(pbVar3 + 0x70) != 0) && (gContactDestroyedCallback != (code *)0x0)) {
            (*gContactDestroyedCallback)();
            *(undefined8 *)(pbVar3 + 0x70) = 0;
          }
          iVar1 = *(int *)(this + 0x318);
          uVar4 = (long)iVar1 - 1;
          if (lVar2 - 2U != (uVar4 & 0xffffffff)) {
            memcpy(pbVar3,this + uVar4 * 0xc0 + 8,0xbc);
            *(undefined8 *)(this + uVar4 * 0xc0 + 0x78) = 0;
            *(undefined8 *)(this + uVar4 * 0xc0 + 0x84) = 0;
            this[uVar4 * 0xc0 + 0x80] = (btPersistentManifold)0x0;
            *(undefined4 *)(this + uVar4 * 0xc0 + 0x8c) = 0;
            *(undefined4 *)(this + uVar4 * 0xc0 + 0xa0) = 0;
            iVar1 = *(int *)(this + 0x318);
          }
          *(int *)(this + 0x318) = iVar1 + -1;
        }
        else if (gContactProcessedCallback != (code *)0x0) {
          (*gContactProcessedCallback)
                    (pbVar3,*(undefined8 *)(this + 0x308),*(undefined8 *)(this + 0x310));
        }
        lVar2 = lVar2 + -1;
        pbVar3 = pbVar3 + -0xc0;
      } while (1 < lVar2);
    }
  }
  return;
}

