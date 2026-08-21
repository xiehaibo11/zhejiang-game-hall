
/* btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback*, btVector3
   const&, btVector3 const&) const */

void btStridingMeshInterface::InternalProcessAllTriangles
               (btInternalTriangleIndexCallback *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  ushort *puVar4;
  long lVar5;
  float *pfVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  int local_80;
  undefined1 auStack_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  long local_58;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x38))();
  if (0 < iVar1) {
    fVar10 = *(float *)(param_1 + 8);
    fVar11 = *(float *)(param_1 + 0xc);
    fVar12 = *(float *)(param_1 + 0x10);
    iVar8 = 0;
    do {
      (**(code **)(*(long *)param_1 + 0x20))
                (param_1,&local_58,auStack_7c,&local_70,&local_78,&local_68,&local_6c,&local_80,
                 &local_74,iVar8);
      if (local_70 == 1) {
        if (local_74 == 2) {
          if (0 < local_80) {
            iVar9 = 0;
            do {
              piVar3 = (int *)(local_68 + (long)local_6c * (long)iVar9);
              pdVar7 = (double *)(local_58 + (ulong)(uint)(local_78 * *piVar3));
              local_a4 = 0;
              local_b0 = fVar10 * (float)*pdVar7;
              fStack_ac = fVar11 * (float)pdVar7[1];
              local_a8 = fVar12 * (float)pdVar7[2];
              pdVar7 = (double *)(local_58 + (ulong)(uint)(local_78 * piVar3[1]));
              local_94 = 0;
              local_a0 = fVar10 * (float)*pdVar7;
              fStack_9c = fVar11 * (float)pdVar7[1];
              local_98 = fVar12 * (float)pdVar7[2];
              pdVar7 = (double *)(local_58 + (ulong)(uint)(local_78 * piVar3[2]));
              local_84 = 0;
              local_90 = fVar10 * (float)*pdVar7;
              fStack_8c = fVar11 * (float)pdVar7[1];
              local_88 = fVar12 * (float)pdVar7[2];
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_80);
          }
        }
        else if (local_74 == 3) {
          if (0 < local_80) {
            iVar9 = 0;
            do {
              puVar4 = (ushort *)(local_68 + (long)local_6c * (long)iVar9);
              lVar5 = (long)local_78;
              pdVar7 = (double *)(local_58 + lVar5 * (ulong)*puVar4);
              local_a4 = 0;
              local_b0 = fVar10 * (float)*pdVar7;
              fStack_ac = fVar11 * (float)pdVar7[1];
              local_a8 = fVar12 * (float)pdVar7[2];
              pdVar7 = (double *)(local_58 + lVar5 * (ulong)puVar4[1]);
              local_94 = 0;
              local_a0 = fVar10 * (float)*pdVar7;
              fStack_9c = fVar11 * (float)pdVar7[1];
              local_98 = fVar12 * (float)pdVar7[2];
              pdVar7 = (double *)(local_58 + lVar5 * (ulong)puVar4[2]);
              local_84 = 0;
              local_90 = fVar10 * (float)*pdVar7;
              fStack_8c = fVar11 * (float)pdVar7[1];
              local_88 = fVar12 * (float)pdVar7[2];
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_80);
          }
        }
        else if ((local_74 == 5) && (0 < local_80)) {
          iVar9 = 0;
          do {
            pbVar2 = (byte *)(local_68 + (long)local_6c * (long)iVar9);
            lVar5 = (long)local_78;
            pdVar7 = (double *)(local_58 + lVar5 * (ulong)*pbVar2);
            local_a4 = 0;
            local_b0 = fVar10 * (float)*pdVar7;
            fStack_ac = fVar11 * (float)pdVar7[1];
            local_a8 = fVar12 * (float)pdVar7[2];
            pdVar7 = (double *)(local_58 + lVar5 * (ulong)pbVar2[1]);
            local_94 = 0;
            local_a0 = fVar10 * (float)*pdVar7;
            fStack_9c = fVar11 * (float)pdVar7[1];
            local_98 = fVar12 * (float)pdVar7[2];
            pdVar7 = (double *)(local_58 + lVar5 * (ulong)pbVar2[2]);
            local_84 = 0;
            local_90 = fVar10 * (float)*pdVar7;
            fStack_8c = fVar11 * (float)pdVar7[1];
            local_88 = fVar12 * (float)pdVar7[2];
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_80);
        }
      }
      else if (local_70 == 0) {
        if (local_74 == 2) {
          if (0 < local_80) {
            iVar9 = 0;
            do {
              piVar3 = (int *)(local_68 + (long)local_6c * (long)iVar9);
              pfVar6 = (float *)(local_58 + (ulong)(uint)(local_78 * *piVar3));
              local_a4 = 0;
              local_b0 = fVar10 * *pfVar6;
              fStack_ac = fVar11 * pfVar6[1];
              local_a8 = fVar12 * pfVar6[2];
              pfVar6 = (float *)(local_58 + (ulong)(uint)(local_78 * piVar3[1]));
              local_94 = 0;
              local_a0 = fVar10 * *pfVar6;
              fStack_9c = fVar11 * pfVar6[1];
              local_98 = fVar12 * pfVar6[2];
              pfVar6 = (float *)(local_58 + (ulong)(uint)(local_78 * piVar3[2]));
              local_84 = 0;
              local_90 = fVar10 * *pfVar6;
              fStack_8c = fVar11 * pfVar6[1];
              local_88 = fVar12 * pfVar6[2];
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_80);
          }
        }
        else if (local_74 == 3) {
          if (0 < local_80) {
            iVar9 = 0;
            do {
              puVar4 = (ushort *)(local_68 + (long)local_6c * (long)iVar9);
              lVar5 = (long)local_78;
              pfVar6 = (float *)(local_58 + lVar5 * (ulong)*puVar4);
              local_a4 = 0;
              local_b0 = fVar10 * *pfVar6;
              fStack_ac = fVar11 * pfVar6[1];
              local_a8 = fVar12 * pfVar6[2];
              pfVar6 = (float *)(local_58 + lVar5 * (ulong)puVar4[1]);
              local_94 = 0;
              local_a0 = fVar10 * *pfVar6;
              fStack_9c = fVar11 * pfVar6[1];
              local_98 = fVar12 * pfVar6[2];
              pfVar6 = (float *)(local_58 + lVar5 * (ulong)puVar4[2]);
              local_84 = 0;
              local_90 = fVar10 * *pfVar6;
              fStack_8c = fVar11 * pfVar6[1];
              local_88 = fVar12 * pfVar6[2];
              (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_80);
          }
        }
        else if ((local_74 == 5) && (0 < local_80)) {
          iVar9 = 0;
          do {
            pbVar2 = (byte *)(local_68 + (long)local_6c * (long)iVar9);
            lVar5 = (long)local_78;
            pfVar6 = (float *)(local_58 + lVar5 * (ulong)*pbVar2);
            local_a4 = 0;
            local_b0 = fVar10 * *pfVar6;
            fStack_ac = fVar11 * pfVar6[1];
            local_a8 = fVar12 * pfVar6[2];
            pfVar6 = (float *)(local_58 + lVar5 * (ulong)pbVar2[1]);
            local_94 = 0;
            local_a0 = fVar10 * *pfVar6;
            fStack_9c = fVar11 * pfVar6[1];
            local_98 = fVar12 * pfVar6[2];
            pfVar6 = (float *)(local_58 + lVar5 * (ulong)pbVar2[2]);
            local_84 = 0;
            local_90 = fVar10 * *pfVar6;
            fStack_8c = fVar11 * pfVar6[1];
            local_88 = fVar12 * pfVar6[2];
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_b0,iVar8,iVar9);
            iVar9 = iVar9 + 1;
          } while (iVar9 < local_80);
        }
      }
      (**(code **)(*(long *)param_1 + 0x30))(param_1,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}

