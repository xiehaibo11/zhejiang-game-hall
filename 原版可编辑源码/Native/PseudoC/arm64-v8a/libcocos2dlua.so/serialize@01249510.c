
/* btStridingMeshInterface::serialize(void*, btSerializer*) const */

char * __thiscall
btStridingMeshInterface::serialize
          (btStridingMeshInterface *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  long local_70;
  long local_68;
  
  iVar3 = (**(code **)(*(long *)this + 0x38))();
  *(int *)((long)param_1 + 0x18) = iVar3;
  *(undefined8 *)param_1 = 0;
  if (iVar3 != 0) {
    lVar4 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x38,iVar3);
    puVar19 = *(undefined8 **)(lVar4 + 8);
    uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,puVar19);
    *(undefined8 *)param_1 = uVar5;
    iVar3 = (**(code **)(*(long *)this + 0x38))(this);
    if (0 < iVar3) {
      iVar20 = 0;
      do {
        (**(code **)(*(long *)this + 0x20))
                  (this,&local_68,&local_84,&local_78,&local_80,&local_70,&local_74,&local_88,
                   &local_7c,iVar20);
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        *puVar19 = 0;
        puVar19[1] = 0;
        *(int *)(puVar19 + 6) = local_88;
        *(int *)((long)puVar19 + 0x34) = local_84;
        if (local_7c == 5) {
          if (local_88 != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            puVar19[4] = uVar5;
            if (0 < local_88) {
              lVar9 = 0;
              puVar11 = (undefined1 *)(lVar21 + 1);
              do {
                iVar8 = (int)lVar9;
                lVar9 = lVar9 + 1;
                puVar13 = (undefined1 *)(local_70 + (long)local_74 * (long)iVar8);
                puVar11[-1] = *puVar13;
                *puVar11 = puVar13[1];
                puVar11[1] = puVar13[2];
                puVar11 = puVar11 + 4;
              } while (lVar9 < local_88);
            }
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar10 = *(code **)(*(long *)param_2 + 0x28);
            pcVar7 = "btCharIndexTripletData";
            goto LAB_01249820;
          }
        }
        else if (local_7c == 3) {
          if (local_88 != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,8);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            puVar19[3] = uVar5;
            if (0 < local_88) {
              lVar9 = 0;
              puVar17 = (undefined2 *)(lVar21 + 2);
              puVar15 = (undefined2 *)(local_70 + 4);
              do {
                lVar9 = lVar9 + 1;
                puVar17[-1] = puVar15[-2];
                *puVar17 = puVar15[-1];
                uVar2 = *puVar15;
                puVar15 = (undefined2 *)((long)puVar15 + (long)local_74);
                puVar17[1] = uVar2;
                puVar17 = puVar17 + 4;
              } while (lVar9 < local_88);
            }
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar10 = *(code **)(*(long *)param_2 + 0x28);
            pcVar7 = "btShortIntIndexTripletData";
            goto LAB_01249820;
          }
        }
        else if ((local_7c == 2) && (local_88 != 0)) {
          lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,4,local_88 * 3);
          lVar21 = *(long *)(lVar6 + 8);
          uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
          puVar19[2] = uVar5;
          if (0 < local_88) {
            lVar9 = 0;
            puVar12 = (undefined4 *)(lVar21 + 8);
            do {
              iVar8 = (int)lVar9;
              lVar9 = lVar9 + 1;
              puVar14 = (undefined4 *)(local_70 + (long)local_74 * (long)iVar8);
              puVar12[-2] = *puVar14;
              puVar12[-1] = puVar14[1];
              *puVar12 = puVar14[2];
              puVar12 = puVar12 + 3;
            } while (lVar9 < local_88);
          }
          uVar5 = *(undefined8 *)(lVar6 + 8);
          pcVar10 = *(code **)(*(long *)param_2 + 0x28);
          pcVar7 = "btIntIndexData";
LAB_01249820:
          (*pcVar10)(param_2,lVar6,pcVar7,0x59415241,uVar5);
        }
        if (local_78 == 1) {
          if (local_84 != 0) {
            lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x20);
            lVar21 = *(long *)(lVar6 + 8);
            uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
            puVar19[1] = uVar5;
            if (0 < local_84) {
              lVar9 = 0;
              puVar16 = (undefined8 *)(local_68 + 0x10);
              puVar18 = (undefined8 *)(lVar21 + 0x10);
              do {
                lVar9 = lVar9 + 1;
                puVar18[-2] = puVar16[-2];
                puVar18[-1] = puVar16[-1];
                uVar5 = *puVar16;
                puVar16 = (undefined8 *)((long)puVar16 + (long)local_80);
                *puVar18 = uVar5;
                puVar18 = puVar18 + 4;
              } while (lVar9 < local_84);
            }
            uVar5 = *(undefined8 *)(lVar6 + 8);
            pcVar10 = *(code **)(*(long *)param_2 + 0x28);
            pcVar7 = "btVector3DoubleData";
            goto LAB_01249988;
          }
        }
        else if ((local_78 == 0) && (local_84 != 0)) {
          lVar6 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x10);
          lVar21 = *(long *)(lVar6 + 8);
          uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar21);
          *puVar19 = uVar5;
          if (0 < local_84) {
            lVar9 = 0;
            puVar12 = (undefined4 *)(local_68 + 8);
            puVar14 = (undefined4 *)(lVar21 + 8);
            do {
              lVar9 = lVar9 + 1;
              puVar14[-2] = puVar12[-2];
              puVar14[-1] = puVar12[-1];
              uVar1 = *puVar12;
              puVar12 = (undefined4 *)((long)puVar12 + (long)local_80);
              *puVar14 = uVar1;
              puVar14 = puVar14 + 4;
            } while (lVar9 < local_84);
          }
          uVar5 = *(undefined8 *)(lVar6 + 8);
          pcVar10 = *(code **)(*(long *)param_2 + 0x28);
          pcVar7 = "btVector3FloatData";
LAB_01249988:
          (*pcVar10)(param_2,lVar6,pcVar7,0x59415241,uVar5);
        }
        (**(code **)(*(long *)this + 0x30))(this,iVar20);
        iVar20 = iVar20 + 1;
        puVar19 = puVar19 + 7;
      } while (iVar20 != iVar3);
    }
    (**(code **)(*(long *)param_2 + 0x28))
              (param_2,lVar4,"btMeshPartData",0x59415241,*(undefined8 *)(lVar4 + 8));
  }
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return "btStridingMeshInterfaceData";
}

