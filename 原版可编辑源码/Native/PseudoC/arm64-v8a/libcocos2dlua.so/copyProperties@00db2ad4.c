
/* cocos2d::ui::LinearLayoutParameter::copyProperties(cocos2d::ui::LayoutParameter*) */

void __thiscall
cocos2d::ui::LinearLayoutParameter::copyProperties
          (LinearLayoutParameter *this,LayoutParameter *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00db2ae0 to 00eb2ae7 has its CatchHandler @ 00db2fe0 */
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = uVar2;
                    /* try { // try from 00db2aec to 00eb2af3 has its CatchHandler @ 00db2fc0 */
                    /* try { // try from 00db2af8 to 00eb2b07 has its CatchHandler @ 00db2f78 */
  if ((param_1 != (LayoutParameter *)0x0) &&
     (lVar1 = __dynamic_cast(param_1,&LayoutParameter::typeinfo,&typeinfo,0), lVar1 != 0)) {
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar1 + 0x38);
  }
  return;
}

