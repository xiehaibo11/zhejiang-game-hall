
/* cocos2d::experimental::TMXLayer::setupTiles() */

void __thiscall cocos2d::experimental::TMXLayer::setupTiles(TMXLayer *this)

{
  long lVar1;
  Size *pSVar2;
  Director *this_00;
  float fVar3;
  float fVar4;
  float local_30;
  float fStack_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00ef9d48 with catch @ 00ef9de4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x360));
  Size::operator=((Size *)(*(long *)(this + 0x328) + 0x78),pSVar2);
  Texture2D::setAliasTexParameters(*(Texture2D **)(this + 0x360));
  parseInternalProperties(this);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_30,pSVar2);
  if (*(int *)(this + 0x330) == 0) {
    fVar3 = (float)(int)(local_30 / *(float *)(this + 0x318)) + 1.0;
    *(float *)(this + 0x380) = fVar3;
    fVar4 = (float)(int)(fStack_2c / *(float *)(this + 0x31c)) + 1.0 +
            *(float *)(*(long *)(this + 0x328) + 0x48) / *(float *)(this + 0x31c);
    *(float *)(this + 900) = fVar4;
  }
  else if (*(int *)(this + 0x330) == 2) {
    fVar3 = (float)(int)(local_30 / *(float *)(this + 0x318)) + 2.0;
    fVar4 = (float)(int)(fStack_2c / (*(float *)(this + 0x31c) * 0.5)) + 4.0;
    *(ulong *)(this + 0x380) = CONCAT44(fVar4,fVar3);
  }
  else {
    fVar3 = *(float *)(this + 0x380);
    fVar4 = *(float *)(this + 900);
  }
  *(int *)(this + 0x398) = (int)(fVar3 * fVar4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

