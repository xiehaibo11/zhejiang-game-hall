
/* fairygui::GLoader3D::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GLoader3D::setProp(GLoader3D *this,undefined4 param_2,Value *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  switch(param_2) {
  case 2:
                    /* try { // try from 00a80a78 to 00b80ac3 has its CatchHandler @ 00a80b48 */
    uVar2 = cocos2d::Value::asUnsignedInt(param_3);
    uVar4 = ToolSet::intToColor(uVar2);
    plVar5 = *(long **)(this + 0x260);
    *(short *)(this + 0x250) = (short)uVar4;
    this[0x252] = SUB81((ulong)uVar4 >> 0x10,0);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a80aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x4c0))(plVar5,this + 0x250);
      return;
    }
    break;
  default:
    GObject::setProp(this);
    return;
  case 4:
                    /* try { // try from 00a80ac4 to 00b80af3 has its CatchHandler @ 00a80a28 */
    bVar1 = cocos2d::Value::asBool(param_3);
    if (this[0x210] != (GLoader3D)(bVar1 & 1)) {
      this[0x210] = (GLoader3D)(bVar1 & 1);
LAB_00a80b0c:
      GObject::updateGear((GObject *)this,5);
      return;
    }
    break;
  case 5:
    iVar3 = cocos2d::Value::asInt(param_3);
                    /* try { // try from 00a80af4 to 00b80b07 has its CatchHandler @ 00a80b48 */
    if (*(int *)(this + 0x214) != iVar3) {
                    /* try { // try from 00a80b08 to 00b80b63 has its CatchHandler @ 00a80a28 */
      *(int *)(this + 0x214) = iVar3;
      goto LAB_00a80b0c;
    }
    break;
  case 6:
  case 7:
    break;
  }
  return;
}

