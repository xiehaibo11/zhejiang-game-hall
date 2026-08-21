
/* cocos2d::ui::EditBox::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ui::EditBox::draw(EditBox *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
  plVar1 = *(long **)(this + 0x5b8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x120))(plVar1,param_1,param_2,param_3 & 1);
    return;
  }
  return;
}

