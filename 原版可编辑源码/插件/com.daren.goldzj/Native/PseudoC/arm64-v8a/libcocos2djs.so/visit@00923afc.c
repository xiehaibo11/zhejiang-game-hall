
/* cocos2d::renderer::NodeProxy::visit(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::NodeProxy::visit(NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  NodeProxy NVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  iVar2 = _globalRenderOrder + 1;
  *(int *)(param_1 + 0x110) = _globalRenderOrder;
  _globalRenderOrder = iVar2;
  if (param_1[0x40] == (NodeProxy)0x0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar5 = **(uint **)(param_1 + 0x80);
  if (lVar7 == 0) {
    if ((uVar5 >> 5 & 1) != 0) {
      NVar6 = **(NodeProxy **)(param_1 + 0xb8);
      goto LAB_00923ba0;
    }
  }
  else if (((uVar5 >> 5 & 1) != 0) || (**(int **)(lVar7 + 0x80) < 0)) {
    NVar6 = SUB41((int)((float)((uint)*(byte *)(lVar7 + 0x43) * (uint)**(byte **)(param_1 + 0xb8)) /
                       255.0),0);
LAB_00923ba0:
    param_1[0x43] = NVar6;
    **(uint **)(param_1 + 0x80) = uVar5 & 0xffffffdf | 0x80000000;
  }
  if (param_1[0x43] == (NodeProxy)0x0) {
    return;
  }
  updateLocalMatrix(param_1);
  puVar4 = *(uint **)(param_1 + 0x80);
  uVar5 = *puVar4;
  if (param_1[0x41] != (NodeProxy)0x0) {
    lVar7 = *(long *)(param_1 + 0xe8);
    if (lVar7 == 0) {
      if ((uVar5 >> 3 & 1) == 0) goto LAB_00923c1c;
      puVar9 = *(undefined8 **)(param_1 + 0x90);
      puVar1 = *(undefined8 **)(param_1 + 0x98);
      uVar10 = puVar9[4];
      uVar12 = puVar9[7];
      uVar11 = puVar9[6];
      uVar14 = puVar9[1];
      uVar13 = *puVar9;
      uVar16 = puVar9[3];
      uVar15 = puVar9[2];
      puVar1[5] = puVar9[5];
      puVar1[4] = uVar10;
      puVar1[7] = uVar12;
      puVar1[6] = uVar11;
      puVar1[1] = uVar14;
      *puVar1 = uVar13;
      puVar1[3] = uVar16;
      puVar1[2] = uVar15;
    }
    else {
      if (((uVar5 >> 3 & 1) == 0) && ((*(byte *)(*(long *)(lVar7 + 0x80) + 3) >> 6 & 1) == 0))
      goto LAB_00923c1c;
      Mat4::multiply(*(Mat4 **)(lVar7 + 0x98),*(Mat4 **)(param_1 + 0x90),*(Mat4 **)(param_1 + 0x98))
      ;
    }
    puVar4 = *(uint **)(param_1 + 0x80);
    uVar5 = *puVar4 & 0xfffffff7 | 0x40000000;
    *puVar4 = uVar5;
  }
LAB_00923c1c:
  plVar3 = *(long **)(param_1 + 0x108);
  uVar5 = uVar5 & 0x80;
  if ((uint)(byte)param_1[0x42] != uVar5 >> 7) {
    if ((plVar3 != (long *)0x0) && (puVar8 = (uint *)plVar3[3], puVar8 != (uint *)0x0)) {
      *puVar8 = *puVar8 | 1;
    }
    param_1[0x42] = SUB41(uVar5 >> 7,0);
  }
  if ((uVar5 != 0) && (plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2,param_3);
    puVar4 = *(uint **)(param_1 + 0x80);
  }
  if ((*(byte *)((long)puVar4 + 3) >> 5 & 1) != 0) {
    FUN_00924024(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
    **(uint **)(param_1 + 0x80) = **(uint **)(param_1 + 0x80) & 0xdfffffff;
  }
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  for (puVar9 = *(undefined8 **)(param_1 + 0xf0); puVar9 != puVar1; puVar9 = puVar9 + 1) {
    visit((NodeProxy *)*puVar9,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x108);
  if ((plVar3 != (long *)0x0) && ((*(byte *)(*(long *)(param_1 + 0x80) + 1) >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00923d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2,param_3);
    return;
  }
  return;
}

