
/* cocosbuilder::NodeLoader::parsePropTypeBlockControl(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined1 (*) [16] __thiscall
cocosbuilder::NodeLoader::parsePropTypeBlockControl
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3)

{
  void *pvVar1;
  long lVar2;
  basic_string bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  CCBAnimationManager *this_00;
  long lVar7;
  long *plVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined1 auVar11 [16];
  basic_string local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  CCBReader::readCachedString();
  iVar4 = CCBReader::readInt(param_3,false);
  uVar5 = CCBReader::readInt(param_3,false);
  if (iVar4 != 0) {
    uVar6 = CCBReader::isJSControlled(param_3);
    if ((uVar6 & 1) == 0) {
      if (iVar4 == 1) {
        this_00 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
        lVar7 = CCBAnimationManager::getRootNode(this_00);
      }
      else {
        if (iVar4 != 2) goto LAB_00d04040;
        lVar7 = CCBReader::getOwner(param_3);
      }
      bVar3 = local_70[0];
      if (lVar7 != 0) {
        uVar6 = (ulong)((byte)local_70[0] >> 1);
        if (((byte)local_70[0] & 1) != 0) {
          uVar6 = local_68;
        }
        if (uVar6 != 0) {
          plVar8 = (long *)__dynamic_cast(lVar7,&cocos2d::Ref::typeinfo,
                                          &CCBSelectorResolver::typeinfo,0xfffffffffffffffe);
          if (plVar8 == (long *)0x0) {
            auVar11 = ZEXT816(0);
          }
          else {
            pvVar1 = (void *)((ulong)local_70 | 1);
            if (((byte)bVar3 & 1) != 0) {
              pvVar1 = local_60;
            }
            auVar11 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7,pvVar1);
          }
          uVar6 = auVar11._8_8_;
          uVar10 = uVar6 & 1;
          if ((auVar11._0_8_ == 0) && (uVar6 == 0 || uVar10 == 0)) {
            plVar8 = (long *)CCBReader::getCCBSelectorResolver(param_3);
            if (plVar8 == (long *)0x0) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar6;
              auVar11 = auVar11 << 0x40;
            }
            else {
              pvVar1 = (void *)((ulong)local_70 | 1);
              if (((byte)local_70[0] & 1) != 0) {
                pvVar1 = local_60;
              }
              auVar11 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar7,pvVar1);
              uVar10 = auVar11._8_8_ & 1;
            }
          }
          if ((auVar11._0_8_ != 0) || (auVar11._8_8_ != 0 && uVar10 != 0)) {
            pauVar9 = operator_new(0x20,(nothrow_t *)&std::nothrow);
            *(undefined8 *)(*pauVar9 + 8) = 0;
            *(undefined8 *)*pauVar9 = 0;
            *(undefined8 *)(pauVar9[1] + 8) = 0;
            *(undefined8 *)pauVar9[1] = 0;
            *pauVar9 = auVar11;
            *(long *)pauVar9[1] = lVar7;
            *(undefined4 *)(pauVar9[1] + 8) = uVar5;
            goto joined_r0x00d04048;
          }
        }
      }
    }
    else if (iVar4 == 1) {
      CCBReader::addDocumentCallbackNode(param_3,param_1);
      CCBReader::addDocumentCallbackName(param_3,local_70);
      CCBReader::addDocumentCallbackControlEvents(param_3,uVar5);
    }
    else {
      CCBReader::addOwnerCallbackNode(param_3,param_1);
      CCBReader::addOwnerCallbackName(param_3,local_70);
      CCBReader::addOwnerCallbackControlEvents(param_3,uVar5);
    }
  }
LAB_00d04040:
  pauVar9 = (undefined1 (*) [16])0x0;
joined_r0x00d04048:
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return pauVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

