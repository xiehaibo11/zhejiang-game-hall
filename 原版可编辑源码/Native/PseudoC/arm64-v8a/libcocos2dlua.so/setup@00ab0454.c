
/* fairygui::GearBase::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::GearBase::setup(GearBase *this,ByteBuffer *param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  GearXY *this_00;
  basic_string *pbVar10;
  int iVar11;
  GComponent *this_01;
  undefined4 uVar12;
  
  this_01 = *(GComponent **)(*(long *)(this + 8) + 0xa0);
  sVar3 = ByteBuffer::readShort(param_1);
  uVar4 = GComponent::getControllerAt(this_01,(int)sVar3);
  *(undefined8 *)(this + 0x10) = uVar4;
  (**(code **)(*(long *)this + 0x30))(this);
  sVar3 = ByteBuffer::readShort(param_1);
  iVar11 = (int)sVar3;
  if (this != (GearBase *)0x0) {
    lVar5 = __dynamic_cast(this,&typeinfo,&GearDisplay2::typeinfo,0);
    lVar6 = __dynamic_cast(this,&typeinfo,&GearDisplay::typeinfo,0);
    if ((lVar6 != 0) || (lVar6 = lVar5, lVar5 != 0)) {
      ByteBuffer::readSArray(param_1,(vector *)(lVar6 + 0x20),iVar11);
      goto LAB_00ab0590;
    }
  }
  iVar1 = iVar11;
  if (0 < iVar11) {
    do {
      pbVar7 = (byte *)ByteBuffer::readS(param_1);
      uVar8 = (ulong)(*pbVar7 >> 1);
      if ((*pbVar7 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar7 + 8);
      }
      if (uVar8 != 0) {
        (**(code **)(*(long *)this + 0x28))(this,pbVar7,param_1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar8 = ByteBuffer::readBool(param_1);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*(long *)this + 0x28))(this,&cocos2d::STD_STRING_EMPTY,param_1);
  }
  lVar5 = 0;
LAB_00ab0590:
                    /* try { // try from 00ab0594 to 00bb05c7 has its CatchHandler @ 00ab0694 */
  uVar8 = ByteBuffer::readBool(param_1);
  if ((uVar8 & 1) != 0) {
    puVar9 = operator_new(0x20);
    *(undefined4 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    *(undefined4 *)(puVar9 + 4) = 5;
    *(undefined8 *)(puVar9 + 8) = 0x3e99999a;
    *(undefined1 **)(this + 0x18) = puVar9;
                    /* try { // try from 00ab05c8 to 00bb05db has its CatchHandler @ 00ab0660 */
    *puVar9 = 1;
    cVar2 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00ab05e0 to 00bb0613 has its CatchHandler @ 00ab0664 */
    *(int *)(*(long *)(this + 0x18) + 4) = (int)cVar2;
    uVar12 = ByteBuffer::readFloat(param_1);
    *(undefined4 *)(*(long *)(this + 0x18) + 8) = uVar12;
    uVar12 = ByteBuffer::readFloat(param_1);
    *(undefined4 *)(*(long *)(this + 0x18) + 0xc) = uVar12;
  }
  if (1 < *(int *)param_1) {
                    /* try { // try from 00ab0614 to 00bb06af has its CatchHandler @ 00ab0438 */
    if ((this == (GearBase *)0x0) ||
       (this_00 = (GearXY *)__dynamic_cast(this,&typeinfo,&GearXY::typeinfo,0),
       this_00 == (GearXY *)0x0)) {
      if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 00ab0594 with catch @ 00ab0694 */
        cVar2 = ByteBuffer::readByte(param_1);
        *(int *)(lVar5 + 0x38) = (int)cVar2;
      }
    }
    else {
      uVar8 = ByteBuffer::readBool(param_1);
      if ((uVar8 & 1) != 0) {
        this_00[0x20] = (GearXY)0x1;
        if (0 < iVar11) {
          do {
                    /* catch() { ... } // from try @ 00ab05c8 with catch @ 00ab0660 */
            pbVar10 = (basic_string *)ByteBuffer::readS(param_1);
                    /* catch() { ... } // from try @ 00ab05e0 with catch @ 00ab0664 */
            uVar8 = (ulong)((byte)*pbVar10 >> 1);
            if (((byte)*pbVar10 & 1) != 0) {
              uVar8 = *(ulong *)(pbVar10 + 8);
            }
            if (uVar8 != 0) {
              GearXY::addExtStatus(this_00,pbVar10,param_1);
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        uVar8 = ByteBuffer::readBool(param_1);
        if ((uVar8 & 1) != 0) {
          GearXY::addExtStatus(this_00,(basic_string *)&cocos2d::STD_STRING_EMPTY,param_1);
          return;
        }
      }
    }
  }
  return;
}

