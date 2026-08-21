
/* cocos2d::utils::getCascadeBoundingBox(cocos2d::Node*) */

void cocos2d::utils::getCascadeBoundingBox(Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  Size *pSVar4;
  long *plVar5;
  ulong uVar6;
  AffineTransform *in_x2;
  Rect *in_x8;
  Node *pNVar7;
  undefined8 *puVar8;
  Rect aRStack_98 [8];
  float local_90;
  float local_8c;
  Rect aRStack_80 [16];
  Rect aRStack_70 [16];
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Rect::Rect(in_x8);
  pSVar4 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  Size::Size((Size *)&local_60,pSVar4);
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar8 = (undefined8 *)*plVar5;
  puVar1 = (undefined8 *)plVar5[1];
  if (puVar8 == puVar1) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    do {
      pNVar7 = (Node *)*puVar8;
      uVar6 = (**(code **)(*(long *)pNVar7 + 0x178))(pNVar7);
      if ((((uVar6 & 1) != 0) && (getCascadeBoundingBox(pNVar7), 0.0 < local_90)) &&
         (0.0 < local_8c)) {
        if (bVar3) {
          Rect::merge(in_x8,aRStack_98);
        }
        else {
          Rect::operator=(in_x8,aRStack_98);
        }
        bVar3 = true;
      }
      puVar8 = puVar8 + 1;
    } while (puVar1 != puVar8);
  }
  if ((0.0 < local_60) && (0.0 < local_5c)) {
    Rect::Rect(aRStack_80,0.0,0.0,local_60,local_5c);
    (**(code **)(*(long *)param_1 + 0x438))(aRStack_98,param_1);
    RectApplyAffineTransform((cocos2d *)aRStack_80,aRStack_98,in_x2);
    if (bVar3) {
      Rect::merge(in_x8,aRStack_70);
    }
    else {
      Rect::operator=(in_x8,aRStack_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

