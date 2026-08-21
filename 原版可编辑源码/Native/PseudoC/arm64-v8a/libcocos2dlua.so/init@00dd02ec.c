
/* cocos2d::ui::RichElement::init(int, cocos2d::Color3B const&, unsigned char) */

undefined8 __thiscall
cocos2d::ui::RichElement::init(RichElement *this,int param_1,Color3B *param_2,uchar param_3)

{
  undefined2 uVar1;
  
  *(int *)(this + 0x28) = param_1;
                    /* try { // try from 00dd02f0 to 00ed02f7 has its CatchHandler @ 00dd02fc */
  uVar1 = *(undefined2 *)param_2;
                    /* try { // try from 00dd02f8 to 00ed03d3 has its CatchHandler @ 00dcfb64 */
                    /* catch() { ... } // from try @ 00dd02f0 with catch @ 00dd02fc */
  this[0x2e] = *(RichElement *)(param_2 + 2);
                    /* catch() { ... } // from try @ 00dd02e8 with catch @ 00dd0300 */
  *(undefined2 *)(this + 0x2c) = uVar1;
                    /* catch() { ... } // from try @ 00dd02e0 with catch @ 00dd0304 */
                    /* catch() { ... } // from try @ 00dd02d8 with catch @ 00dd0308 */
  this[0x2f] = (RichElement)param_3;
                    /* catch() { ... } // from try @ 00dd02d0 with catch @ 00dd030c */
  return 1;
}

