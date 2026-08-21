
/* cocos2d::renderer::NodeProxy::render(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::NodeProxy::render(NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  code *pcVar8;
  uint *puVar9;
  Scene *local_a8;
  ModelBatcher *local_a0;
  long lStack_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar4 = _globalRenderOrder + 1;
  *(int *)(param_1 + 0x110) = _globalRenderOrder;
  _globalRenderOrder = iVar4;
  if ((param_1[0x40] != (NodeProxy)0x0) && (param_1[0x43] != (NodeProxy)0x0)) {
    puVar7 = *(uint **)(param_1 + 0x80);
    plVar5 = *(long **)(param_1 + 0x108);
    uVar1 = *puVar7 & 0x80;
    if ((uint)(byte)param_1[0x42] != uVar1 >> 7) {
      if ((plVar5 != (long *)0x0) && (puVar9 = (uint *)plVar5[3], puVar9 != (uint *)0x0)) {
        *puVar9 = *puVar9 | 1;
      }
      param_1[0x42] = SUB41(uVar1 >> 7,0);
    }
    if ((uVar1 != 0) && (plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1,param_2,param_3);
      puVar7 = *(uint **)(param_1 + 0x80);
    }
    if ((*(byte *)((long)puVar7 + 3) >> 5 & 1) != 0) {
      FUN_00924024(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8));
      **(uint **)(param_1 + 0x80) = **(uint **)(param_1 + 0x80) & 0xdfffffff;
    }
    plVar5 = *(long **)(param_1 + 0xf0);
    plVar2 = *(long **)(param_1 + 0xf8);
    if (plVar5 != plVar2) {
      do {
        plVar6 = *(long **)(*plVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          local_70 = (long *)0x0;
        }
        else if ((long *)(*plVar5 + 0x10) == plVar6) {
          local_70 = local_90;
          (**(code **)(*plVar6 + 0x18))(plVar6,local_90);
        }
        else {
          local_70 = (long *)(**(code **)(*plVar6 + 0x10))();
        }
        lStack_98 = *plVar5;
        local_a8 = param_3;
        local_a0 = param_2;
        if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_008589d0();
        }
        (**(code **)(*local_70 + 0x30))(local_70,&lStack_98,&local_a0,&local_a8);
        if (local_90 == local_70) {
          pcVar8 = *(code **)(*local_70 + 0x20);
LAB_009227f8:
          (*pcVar8)();
        }
        else if (local_70 != (long *)0x0) {
          pcVar8 = *(code **)(*local_70 + 0x28);
          goto LAB_009227f8;
        }
        plVar5 = plVar5 + 1;
      } while (plVar2 != plVar5);
    }
    plVar5 = *(long **)(param_1 + 0x108);
    if ((plVar5 != (long *)0x0) && ((*(byte *)(*(long *)(param_1 + 0x80) + 1) >> 1 & 1) != 0)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,param_1,param_2,param_3);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

