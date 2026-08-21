
/* fairygui::GearSize::onTweenUpdate(fairygui::GTweener*) */

void __thiscall fairygui::GearSize::onTweenUpdate(GearSize *this,GTweener *param_1)

{
  byte bVar1;
  uint uVar2;
  GObject *this_00;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 00ab4bc0 to 00bb4c0f has its CatchHandler @ 00ab4bc0
                       catch() { ... } // from try @ 00ab4bc0 with catch @ 00ab4bc0
                       catch() { ... } // from try @ 00ab4c44 with catch @ 00ab4bc0
                       catch() { ... } // from try @ 00ab4c8c with catch @ 00ab4bc0 */
  uVar2 = cocos2d::Value::asInt((Value *)(param_1 + 200));
  this_00 = *(GObject **)(this + 8);
  this_00[0x99] = (GObject)0x1;
  if ((uVar2 & 1) != 0) {
    fVar3 = *(float *)(param_1 + 0x58);
    fVar4 = *(float *)(param_1 + 0x5c);
    bVar1 = GObject::checkGearController(this_00,1,*(GController **)(this + 0x10));
                    /* try { // try from 00ab4c10 to 00bb4c27 has its CatchHandler @ 00ab4cd0 */
    GObject::setSize(this_00,fVar3,fVar4,(bool)(bVar1 & 1));
  }
  if ((uVar2 >> 1 & 1) != 0) {
                    /* try { // try from 00ab4c2c to 00bb4c43 has its CatchHandler @ 00ab4ccc */
    GObject::setScale(*(GObject **)(this + 8),*(float *)(param_1 + 0x60),*(float *)(param_1 + 100));
  }
  *(undefined1 *)(*(long *)(this + 8) + 0x99) = 0;
                    /* try { // try from 00ab4c44 to 00bb4c77 has its CatchHandler @ 00ab4bc0 */
  return;
}

