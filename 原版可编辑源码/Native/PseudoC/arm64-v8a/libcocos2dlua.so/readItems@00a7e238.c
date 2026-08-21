
/* fairygui::GList::readItems(fairygui::ByteBuffer*) */

void __thiscall fairygui::GList::readItems(GList *this,ByteBuffer *param_1)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  int iVar3;
  basic_string bVar4;
  short sVar5;
  basic_string *pbVar6;
  GObject *this_00;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  
  sVar5 = ByteBuffer::readShort(param_1);
  iVar9 = (int)sVar5;
  if (0 < iVar9) {
    pbVar1 = (basic_string *)(this + 0x308);
    do {
      sVar5 = ByteBuffer::readShort(param_1);
      iVar3 = *(int *)(param_1 + 0x1c);
      pbVar6 = (basic_string *)ByteBuffer::readSP(param_1);
      if (pbVar6 == (basic_string *)0x0) {
LAB_00a7e2b8:
        bVar4 = *pbVar1;
        uVar7 = (ulong)(byte)bVar4;
        bVar8 = (byte)bVar4 & 1;
        pbVar6 = pbVar1;
        if (((byte)bVar4 & 1) == 0) {
          if ((byte)bVar4 >> 1 != 0) goto LAB_00a7e2e0;
        }
        else {
                    /* try { // try from 00a7e2d4 to 00b7e327 has its CatchHandler @ 00a7e2d4
                       catch() { ... } // from try @ 00a7e2d4 with catch @ 00a7e2d4
                       catch() { ... } // from try @ 00a7e3cc with catch @ 00a7e2d4
                       catch() { ... } // from try @ 00a7e42c with catch @ 00a7e2d4 */
          if (*(long *)(this + 0x310) != 0) goto LAB_00a7e2e0;
        }
      }
      else {
        bVar4 = *pbVar6;
        uVar7 = (ulong)(byte)bVar4;
        bVar8 = (byte)bVar4 & 1;
        if (((byte)bVar4 & 1) == 0) {
          if ((byte)bVar4 >> 1 == 0) goto LAB_00a7e2b8;
        }
        else if (*(long *)(pbVar6 + 8) == 0) goto LAB_00a7e2b8;
LAB_00a7e2e0:
        uVar7 = uVar7 >> 1;
        if (bVar8 != 0) {
          uVar7 = *(ulong *)(pbVar6 + 8);
        }
        pbVar2 = pbVar1;
        if (uVar7 != 0) {
          pbVar2 = pbVar6;
        }
        this_00 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar2);
        if (this_00 != (GObject *)0x0) {
          GObject::setVisible(this_00,true);
          GComponent::addChild((GComponent *)this,this_00);
                    /* try { // try from 00a7e328 to 00b7e363 has its CatchHandler @ 00a7e46c */
          (**(code **)(*(long *)this + 0x100))(this,param_1,this_00);
        }
      }
      iVar9 = iVar9 + -1;
      *(int *)(param_1 + 0x1c) = iVar3 + sVar5;
    } while (iVar9 != 0);
  }
  return;
}

