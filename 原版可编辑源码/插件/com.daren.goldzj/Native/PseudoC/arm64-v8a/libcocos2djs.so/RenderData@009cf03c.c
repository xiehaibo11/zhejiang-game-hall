
/* cocos2d::renderer::RenderData::RenderData(cocos2d::renderer::RenderData const&) */

void __thiscall cocos2d::renderer::RenderData::RenderData(RenderData *this,RenderData *param_1)

{
  Object *pOVar1;
  Object *this_00;
  
                    /* try { // try from 009cf060 to 00acf077 has its CatchHandler @ 009cf4e4 */
  *(undefined ***)this = &PTR__RenderData_01c6b6d8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  pOVar1 = *(Object **)(param_1 + 0x28);
                    /* try { // try from 009cf080 to 00acf08b has its CatchHandler @ 009cf4e0 */
  if (pOVar1 != (Object *)0x0) {
    *(Object **)(this + 0x28) = pOVar1;
    se::Object::root(pOVar1);
                    /* try { // try from 009cf08c to 00acf097 has its CatchHandler @ 009cf4dc */
    se::RefCounter::incRef(*(RefCounter **)(this + 0x28));
                    /* try { // try from 009cf098 to 00acf4d3 has its CatchHandler @ 009cf4f4 */
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 8) = 0;
    se::Object::getTypedArrayData
              (*(Object **)(this + 0x28),(uchar **)(this + 0x18),(ulong *)(this + 8));
  }
  pOVar1 = *(Object **)(param_1 + 0x30);
  if ((pOVar1 != (Object *)0x0) && (this_00 = *(Object **)(this + 0x30), this_00 != pOVar1)) {
    if (this_00 != (Object *)0x0) {
      se::Object::unroot(this_00);
      se::RefCounter::decRef(*(RefCounter **)(this + 0x30));
    }
    *(Object **)(this + 0x30) = pOVar1;
    se::Object::root(pOVar1);
    se::RefCounter::incRef(*(RefCounter **)(this + 0x30));
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    se::Object::getTypedArrayData
              (*(Object **)(this + 0x30),(uchar **)(this + 0x20),(ulong *)(this + 0x10));
    return;
  }
  return;
}

