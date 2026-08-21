
/* cocos2d::NinePatchImageParser::NinePatchImageParser(cocos2d::Image*) */

void __thiscall
cocos2d::NinePatchImageParser::NinePatchImageParser(NinePatchImageParser *this,Image *param_1)

{
  long lVar1;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__NinePatchImageParser_01722220;
  *(Image **)(this + 8) = param_1;
  Rect::Rect((Rect *)(this + 0x10),(Rect *)Rect::ZERO);
  this[0x20] = (NinePatchImageParser)0x0;
  Rect::Rect(aRStack_48,0.0,0.0,(float)*(int *)(param_1 + 0x38),(float)*(int *)(param_1 + 0x3c));
  Rect::operator=((Rect *)(this + 0x10),aRStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

