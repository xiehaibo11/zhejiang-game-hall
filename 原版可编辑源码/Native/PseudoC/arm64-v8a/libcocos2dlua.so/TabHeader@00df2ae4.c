
/* cocos2d::ui::TabHeader::TabHeader() */

void __thiscall cocos2d::ui::TabHeader::TabHeader(TabHeader *this)

{
  AbstractCheckButton::AbstractCheckButton((AbstractCheckButton *)this);
                    /* try { // try from 00df2afc to 00ef2b03 has its CatchHandler @ 00df2be4 */
                    /* try { // try from 00df2b04 to 00ef2c13 has its CatchHandler @ 00df28ec */
  *(undefined8 *)(this + 0x5c0) = 0;
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined4 *)(this + 0x5c8) = 0x41400000;
  *(undefined ***)this = &PTR__TabHeader_016e6c50;
  *(undefined ***)(this + 0x318) = &PTR__TabHeader_016e7328;
  *(undefined4 *)(this + 0x610) = 0;
  return;
}

