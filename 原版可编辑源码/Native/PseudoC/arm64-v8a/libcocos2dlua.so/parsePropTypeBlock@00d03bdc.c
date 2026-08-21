
/* cocosbuilder::NodeLoader::parsePropTypeBlock(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined1 (*) [16] __thiscall
cocosbuilder::NodeLoader::parsePropTypeBlock
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3)

{
  void *pvVar1;
  long lVar2;
  basic_string bVar3;
  int iVar4;
  ulong uVar5;
  CCBAnimationManager *this_00;
  long lVar6;
  long *plVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined1 auVar10 [16];
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  CCBReader::readCachedString();
  iVar4 = CCBReader::readInt(param_3,false);
  if (iVar4 != 0) {
    uVar5 = CCBReader::isJSControlled(param_3);
    if ((uVar5 & 1) == 0) {
      if (iVar4 != 1) {
        if (iVar4 != 2) goto LAB_00d03dbc;
        lVar6 = CCBReader::getOwner(param_3);
      }
      else {
        this_00 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
        lVar6 = CCBAnimationManager::getRootNode(this_00);
      }
      bVar3 = local_60[0];
      if (lVar6 != 0) {
        uVar5 = (ulong)((byte)local_60[0] >> 1);
        if (((byte)local_60[0] & 1) != 0) {
          uVar5 = local_58;
        }
        if (uVar5 != 0) {
          plVar7 = (long *)__dynamic_cast(lVar6,&cocos2d::Ref::typeinfo,
                                          &CCBSelectorResolver::typeinfo,0xfffffffffffffffe);
          if (plVar7 == (long *)0x0) {
            auVar10 = ZEXT816(0);
          }
          else {
            pvVar1 = (void *)((ulong)local_60 | 1);
            if (((byte)bVar3 & 1) != 0) {
              pvVar1 = local_50;
            }
            auVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar6,pvVar1);
          }
          uVar5 = auVar10._8_8_;
          uVar9 = uVar5 & 1;
          if ((auVar10._0_8_ == 0) && (uVar5 == 0 || uVar9 == 0)) {
            plVar7 = (long *)CCBReader::getCCBSelectorResolver(param_3);
            if (plVar7 == (long *)0x0) {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar5;
              auVar10 = auVar10 << 0x40;
            }
            else {
              pvVar1 = (void *)((ulong)local_60 | 1);
              if (((byte)local_60[0] & 1) != 0) {
                pvVar1 = local_50;
              }
              auVar10 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar6,pvVar1);
              uVar9 = auVar10._8_8_ & 1;
            }
          }
          if ((auVar10._0_8_ != 0) || (auVar10._8_8_ != 0 && uVar9 != 0)) {
            pauVar8 = operator_new(0x18,(nothrow_t *)&std::nothrow);
            *pauVar8 = auVar10;
            *(long *)pauVar8[1] = lVar6;
            goto joined_r0x00d03dc4;
          }
        }
      }
    }
    else if (iVar4 != 1) {
      if (iVar4 == 2) {
        CCBReader::addOwnerCallbackNode(param_3,param_1);
        CCBReader::addOwnerCallbackName(param_3,local_60);
        CCBReader::addOwnerCallbackControlEvents(param_3,1);
      }
    }
    else {
      CCBReader::addDocumentCallbackNode(param_3,param_1);
      CCBReader::addDocumentCallbackName(param_3,local_60);
      CCBReader::addDocumentCallbackControlEvents(param_3,1);
    }
  }
LAB_00d03dbc:
  pauVar8 = (undefined1 (*) [16])0x0;
joined_r0x00d03dc4:
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pauVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

