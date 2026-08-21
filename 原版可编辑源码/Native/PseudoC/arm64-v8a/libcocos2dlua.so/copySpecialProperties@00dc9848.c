
/* cocos2d::ui::TextAtlas::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::TextAtlas::copySpecialProperties(TextAtlas *this,Widget *param_1)

{
  long lVar1;
  
                    /* try { // try from 00dc984c to 00ec9877 has its CatchHandler @ 00dc94e4 */
                    /* try { // try from 00dc9878 to 00ec987f has its CatchHandler @ 00dc9880 */
  if ((param_1 != (Widget *)0x0) &&
     (lVar1 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar1 != 0)) {
                    /* catch() { ... } // from try @ 00dc9674 with catch @ 00dc9880
                       catch() { ... } // from try @ 00dc9878 with catch @ 00dc9880
                       try { // try from 00dc9880 to 00ec9953 has its CatchHandler @ 00dc94e4 */
                    /* catch() { ... } // from try @ 00dc9720 with catch @ 00dc9890 */
                    /* catch() { ... } // from try @ 00dc96d0 with catch @ 00dc9894 */
                    /* catch() { ... } // from try @ 00dc96bc with catch @ 00dc9898 */
                    /* catch() { ... } // from try @ 00dc95a8 with catch @ 00dc989c */
                    /* catch() { ... } // from try @ 00dc9588 with catch @ 00dc98a0 */
    setProperty(this,(basic_string *)(lVar1 + 0x4f8),(basic_string *)(lVar1 + 0x510),
                *(int *)(lVar1 + 0x528),*(int *)(lVar1 + 0x52c),(basic_string *)(lVar1 + 0x530));
    return;
  }
  return;
}

