
/* cocos2d::ui::Text::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Text::copySpecialProperties(Text *this,Widget *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string *pbVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48 [3];
  Color4B aCStack_3c [4];
  long local_38;
  
                    /* try { // try from 00dc8c20 to 00ec8c2f has its CatchHandler @ 00dc9050 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (Widget *)0x0) &&
     (plVar2 = (long *)__dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), plVar2 != (long *)0x0)
     ) {
    setFontName(this,(basic_string *)(plVar2 + 0xa1));
    setFontSize(this,*(float *)(plVar2 + 0xa4));
    local_48[0] = *(undefined4 *)(plVar2[0xa5] + 0x4b0);
    (**(code **)(**(long **)(this + 0x528) + 0x598))(*(long **)(this + 0x528),local_48);
    pbVar3 = (basic_string *)(**(code **)(*(long *)plVar2[0xa5] + 0x590))();
    setString(this,pbVar3);
    this[0x4f8] = *(Text *)(plVar2 + 0x9f);
    Label::setAlignment(*(Label **)(this + 0x528),*(undefined4 *)(plVar2[0xa5] + 0x450),
                        *(undefined4 *)(*(Label **)(this + 0x528) + 0x454));
    Label::setAlignment(*(Label **)(this + 0x528),*(undefined4 *)(*(Label **)(this + 0x528) + 0x450)
                        ,*(undefined4 *)(plVar2[0xa5] + 0x454));
    lVar5 = plVar2[0xa5];
    Label::setDimensions
              (*(Label **)(this + 0x528),*(float *)(lVar5 + 0x440),*(float *)(lVar5 + 0x444));
    if (this[0x387] == (Text)0x0) {
      Size::operator=((Size *)(this + 0x39c),(Size *)(lVar5 + 0x440));
    }
    (**(code **)(**(long **)(this + 0x528) + 0x168))();
    Widget::updateContentSizeWithTextureSize((Size *)this);
    this[0x530] = (Text)0x1;
                    /* try { // try from 00dc8d3c to 00ec8d43 has its CatchHandler @ 00dc9000 */
    uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2);
    (**(code **)(*(long *)this + 0x160))(this,uVar4);
    lVar5 = plVar2[0xa5];
    if (*(int *)(lVar5 + 0x49c) == 1) {
                    /* try { // try from 00dc8de0 to 00ec8def has its CatchHandler @ 00dc904c */
      Color4B::Color4B((Color4B *)local_48,(uchar)(int)(*(float *)(lVar5 + 0x4a0) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x4a4) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x4a8) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x4ac) * 255.0));
      (**(code **)(**(long **)(this + 0x528) + 0x5a8))
                (*(long **)(this + 0x528),local_48,(int)*(float *)(plVar2[0xa5] + 0x398));
                    /* try { // try from 00dc8e38 to 00ec8e53 has its CatchHandler @ 00dc9064 */
      (**(code **)(**(long **)(this + 0x528) + 0x168))();
      Widget::updateContentSizeWithTextureSize((Size *)this);
      this[0x530] = (Text)0x1;
    }
    else {
                    /* try { // try from 00dc8d90 to 00ec8d9b has its CatchHandler @ 00dc8fec */
      if ((*(int *)(lVar5 + 0x49c) == 3) &&
         (Color4B::Color4B((Color4B *)local_48,(uchar)(int)(*(float *)(lVar5 + 0x4a0) * 255.0),
                           (uchar)(int)(*(float *)(lVar5 + 0x4a4) * 255.0),
                           (uchar)(int)(*(float *)(lVar5 + 0x4a8) * 255.0),
                           (uchar)(int)(*(float *)(lVar5 + 0x4ac) * 255.0)),
         *(int *)(this + 0x534) == 1)) {
        (**(code **)(**(long **)(this + 0x528) + 0x5b0))(*(long **)(this + 0x528),local_48);
      }
    }
    lVar5 = plVar2[0xa5];
                    /* try { // try from 00dc8e58 to 00ec8e67 has its CatchHandler @ 00dc9068 */
    if (*(char *)(lVar5 + 0x60f) != '\0') {
      Color4B::Color4B(aCStack_3c,(uchar)(int)(*(float *)(lVar5 + 0x618) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x61c) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x620) * 255.0),
                       (uchar)(int)(*(float *)(lVar5 + 0x624) * 255.0));
      Size::Size((Size *)local_48,(Size *)(plVar2[0xa5] + 0x610));
                    /* try { // try from 00dc8ec0 to 00ec8ec7 has its CatchHandler @ 00dc9008 */
      (**(code **)(**(long **)(this + 0x528) + 0x5a0))
                (*(long **)(this + 0x528),aCStack_3c,local_48,(int)*(float *)(plVar2[0xa5] + 0x62c))
      ;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dc8ee0 to 00ec8eeb has its CatchHandler @ 00dc9048 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

