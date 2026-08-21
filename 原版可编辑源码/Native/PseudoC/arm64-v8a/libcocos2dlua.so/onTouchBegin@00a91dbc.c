
/* fairygui::ScrollPane::onTouchBegin(fairygui::EventContext*) */

void fairygui::ScrollPane::onTouchBegin(EventContext *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  clock_t cVar4;
  long in_x1;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_s1;
  float fVar10;
  
  if (param_1[0x41] != (EventContext)0x0) {
    lVar6 = *(long *)(in_x1 + 8);
    *(undefined4 *)(in_x1 + 0x2c) = 1;
    uVar8 = GObject::globalToLocal(*(Vec2 **)(param_1 + 0xf8));
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 != 0) {
      killTween((ScrollPane *)param_1);
      InputProcessor::cancelClick(*(InputProcessor **)(lVar6 + 0x30),*(int *)(lVar6 + 0x18));
    }
    lVar7 = *(long *)(param_1 + 0x108);
    param_1[0xb8] = (EventContext)(iVar1 != 0);
    uVar2 = *(undefined4 *)(lVar7 + 0x50);
    lVar3 = (**(code **)(**(long **)(lVar7 + 400) + 0x168))();
    fVar9 = *(float *)(lVar3 + 4);
    fVar10 = *(float *)(lVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x94) = uVar8;
    *(undefined4 *)(param_1 + 0x98) = in_s1;
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(float *)(param_1 + 0x88) = fVar9 - fVar10;
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_1 + 0x94);
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    param_1[0xb9] = (EventContext)0x0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x9c) = uVar5;
    *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    cVar4 = clock();
    *(clock_t *)(param_1 + 0xb0) = cVar4;
  }
  return;
}

