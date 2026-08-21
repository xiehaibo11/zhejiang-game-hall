
/* fairygui::GObject::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GObject::setup_afterAdd(GObject *this,ByteBuffer *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  basic_string *pbVar5;
  long lVar6;
  undefined8 uVar7;
  GearBase *this_00;
  int iVar8;
  
  ByteBuffer::seek(param_1,param_2,1);
  pbVar5 = (basic_string *)ByteBuffer::readS(param_1);
  uVar1 = (ulong)((byte)*pbVar5 >> 1);
  if (((byte)*pbVar5 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar1 != 0) {
    setTooltips(this,pbVar5);
  }
  sVar4 = ByteBuffer::readShort(param_1);
  if (-1 < sVar4) {
    lVar6 = GComponent::getChildAt(*(GComponent **)(this + 0xa0),(int)sVar4);
    uVar7 = 0;
    if (lVar6 != 0) {
      uVar7 = __dynamic_cast(lVar6,&typeinfo,&GGroup::typeinfo,0);
    }
    *(undefined8 *)(this + 0x128) = uVar7;
  }
  ByteBuffer::seek(param_1,param_2,2);
  sVar4 = ByteBuffer::readShort(param_1);
  iVar8 = (int)sVar4;
  if (0 < iVar8) {
    do {
      sVar4 = ByteBuffer::readShort(param_1);
      iVar2 = *(int *)(param_1 + 0x1c);
      cVar3 = ByteBuffer::readByte(param_1);
      this_00 = *(GearBase **)(this + (long)cVar3 * 8 + 0x140);
      if (this_00 == (GearBase *)0x0) {
        this_00 = (GearBase *)GearBase::create(this,(int)cVar3);
        *(GearBase **)(this + (long)cVar3 * 8 + 0x140) = this_00;
      }
      GearBase::setup(this_00,param_1);
      iVar8 = iVar8 + -1;
      *(int *)(param_1 + 0x1c) = iVar2 + sVar4;
    } while (iVar8 != 0);
  }
  return;
}

