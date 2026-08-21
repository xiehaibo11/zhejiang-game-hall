
/* btCompoundShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCompoundShape::serialize(btCompoundShape *this,void *param_1,btSerializer *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined4 *puVar9;
  
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 100);
  iVar1 = *(int *)(this + 0x1c);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  *(int *)((long)param_1 + 0x18) = iVar1;
  if (iVar1 != 0) {
    lVar2 = (**(code **)(*(long *)param_2 + 0x20))(param_2,0x50);
    lVar6 = *(long *)(lVar2 + 8);
    uVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2,lVar6);
    *(undefined8 *)((long)param_1 + 0x10) = uVar3;
    if (0 < *(int *)((long)param_1 + 0x18)) {
      lVar8 = 0;
      puVar9 = (undefined4 *)(lVar6 + 0x28);
      lVar6 = 0x4c;
      do {
        lVar5 = *(long *)(this + 0x28);
        puVar9[9] = *(undefined4 *)(lVar5 + lVar6);
        uVar3 = (**(code **)(*(long *)param_2 + 0x38))
                          (param_2,*(undefined8 *)((undefined4 *)(lVar5 + lVar6) + -3));
        *(undefined8 *)(puVar9 + 6) = uVar3;
        lVar5 = (**(code **)(*(long *)param_2 + 0x30))
                          (param_2,*(undefined8 *)(*(long *)(this + 0x28) + lVar6 + -0xc));
        if (lVar5 == 0) {
          pcVar7 = *(code **)(*(long *)param_2 + 0x20);
          iVar1 = (**(code **)(**(long **)(*(long *)(this + 0x28) + lVar6 + -0xc) + 0x68))();
          lVar5 = (*pcVar7)(param_2,(long)iVar1,1);
          plVar4 = *(long **)(*(long *)(this + 0x28) + lVar6 + -0xc);
          uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined8 *)(lVar5 + 8),param_2);
          (**(code **)(*(long *)param_2 + 0x28))
                    (param_2,lVar5,uVar3,0x50414853,
                     *(undefined8 *)(*(long *)(this + 0x28) + lVar6 + -0xc));
        }
        lVar8 = lVar8 + 1;
        lVar5 = *(long *)(this + 0x28) + lVar6;
        lVar6 = lVar6 + 0x58;
        puVar9[8] = *(undefined4 *)(lVar5 + -4);
        puVar9[-10] = *(undefined4 *)(lVar5 + -0x4c);
        puVar9[-9] = *(undefined4 *)(lVar5 + -0x48);
        puVar9[-8] = *(undefined4 *)(lVar5 + -0x44);
        puVar9[-7] = *(undefined4 *)(lVar5 + -0x40);
        puVar9[-6] = *(undefined4 *)(lVar5 + -0x3c);
        puVar9[-5] = *(undefined4 *)(lVar5 + -0x38);
        puVar9[-4] = *(undefined4 *)(lVar5 + -0x34);
        puVar9[-3] = *(undefined4 *)(lVar5 + -0x30);
        puVar9[-2] = *(undefined4 *)(lVar5 + -0x2c);
        puVar9[-1] = *(undefined4 *)(lVar5 + -0x28);
        *puVar9 = *(undefined4 *)(lVar5 + -0x24);
        puVar9[1] = *(undefined4 *)(lVar5 + -0x20);
        puVar9[2] = *(undefined4 *)(lVar5 + -0x1c);
        puVar9[3] = *(undefined4 *)(lVar5 + -0x18);
        puVar9[4] = *(undefined4 *)(lVar5 + -0x14);
        puVar9[5] = *(undefined4 *)(lVar5 + -0x10);
        puVar9 = puVar9 + 0x14;
      } while (lVar8 < *(int *)((long)param_1 + 0x18));
    }
    (**(code **)(*(long *)param_2 + 0x28))
              (param_2,lVar2,"btCompoundShapeChildData",0x59415241,*(undefined8 *)(lVar2 + 8));
  }
  return "btCompoundShapeData";
}

