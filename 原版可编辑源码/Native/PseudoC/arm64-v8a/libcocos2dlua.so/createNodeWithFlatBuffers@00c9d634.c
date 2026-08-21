
/* cocostudio::TextFieldReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
cocostudio::TextFieldReader::createNodeWithFlatBuffers(TextFieldReader *this,Table *param_1)

{
  Table *pTVar1;
  ushort uVar2;
  long lVar3;
  Scale9Sprite *pSVar4;
  undefined8 uVar5;
  Table *pTVar6;
  Size aSStack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar2 = *(ushort *)(param_1 + -(long)*(int *)param_1 + 4);
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) || (uVar2 == 0)) {
    pTVar6 = (Table *)0x0;
  }
  else {
    pTVar6 = param_1 + uVar2 + *(uint *)(param_1 + uVar2);
  }
  pTVar1 = param_1 + uVar2 + *(uint *)(param_1 + uVar2);
  cocos2d::Size::Size(aSStack_40,
                      *(float *)(pTVar6 + *(ushort *)(pTVar6 + (0x1a - (long)*(int *)pTVar6))),
                      *(float *)(pTVar1 + (ulong)*(ushort *)(pTVar1 + (0x1a - (long)*(int *)pTVar1))
                                          + 4));
  pSVar4 = (Scale9Sprite *)cocos2d::ui::Scale9Sprite::create();
  uVar5 = cocos2d::ui::EditBox::create(aSStack_40,pSVar4,(Scale9Sprite *)0x0,(Scale9Sprite *)0x0);
  (**(code **)(*(long *)this + 0x30))(this,uVar5,param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

