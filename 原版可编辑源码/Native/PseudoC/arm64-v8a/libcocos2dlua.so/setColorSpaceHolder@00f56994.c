
/* cocos2d::TextFieldTTF::setColorSpaceHolder(cocos2d::Color3B const&) */

void __thiscall cocos2d::TextFieldTTF::setColorSpaceHolder(TextFieldTTF *this,Color3B *param_1)

{
  long lVar1;
  Color4B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B(aCStack_30,param_1,0xff);
  (**(code **)(*(long *)this + 0x630))(this,aCStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

