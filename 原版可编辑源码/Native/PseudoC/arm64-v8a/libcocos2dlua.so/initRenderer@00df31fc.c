
/* cocos2d::ui::TabHeader::initRenderer() */

void __thiscall cocos2d::ui::TabHeader::initRenderer(TabHeader *this)

{
  undefined8 uVar1;
  
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x4f0) = uVar1;
  uVar1 = Sprite::create();
  *(undefined8 *)(this + 0x4f8) = uVar1;
  uVar1 = Sprite::create();
                    /* try { // try from 00df3220 to 00ef3223 has its CatchHandler @ 00df3224 */
  *(undefined8 *)(this + 0x500) = uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3220 with catch @ 00df3224
                        */
  uVar1 = Sprite::create();
                    /* try { // try from 00df3228 to 00ef322b has its CatchHandler @ 00df3230 */
  *(undefined8 *)(this + 0x508) = uVar1;
                    /* try { // try from 00df322c to 00ef3273 has its CatchHandler @ 00df30b4 */
  uVar1 = Sprite::create();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3228 with catch @ 00df3230
                        */
  *(undefined8 *)(this + 0x510) = uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df31b4 with catch @ 00df3234
                        */
  uVar1 = Label::create();
  *(undefined8 *)(this + 0x5c0) = uVar1;
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f0),0xfffffffe,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x4f8),0xfffffffe,0xffffffff);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df32c4 with catch @ 00df3274
                        */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x500),0xfffffffe,0xffffffff);
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x508),0xfffffffe,0xffffffff);
                    /* try { // try from 00df32b8 to 00ef32c3 has its CatchHandler @ 00df33f4 */
                    /* try { // try from 00df32c4 to 00ef33f7 has its CatchHandler @ 00df3274 */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x510),0xfffffffe,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00df32e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,*(undefined8 *)(this + 0x5c0),0xffffffff,0xffffffff);
  return;
}

