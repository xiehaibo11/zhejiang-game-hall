
/* fairygui::GTree::readItems(fairygui::ByteBuffer*) */

void __thiscall fairygui::GTree::readItems(GTree *this,ByteBuffer *param_1)

{
  GTree *pGVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  ulong *puVar11;
  GTreeNode *this_00;
  ulong uVar12;
  GTreeNode *this_01;
  int iVar13;
  int iVar14;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  sVar9 = ByteBuffer::readShort(param_1);
  if (0 < sVar9) {
    iVar14 = 0;
    this_01 = (GTreeNode *)0x0;
    iVar13 = 0;
    do {
      sVar10 = ByteBuffer::readShort(param_1);
      iVar4 = *(int *)(param_1 + 0x1c);
      puVar11 = (ulong *)ByteBuffer::readS(param_1);
      if (&local_80 != puVar11) {
        uVar2 = puVar11[1];
        pbVar3 = (byte *)puVar11[2];
        if (((byte)*puVar11 & 1) == 0) {
          pbVar3 = (byte *)((long)puVar11 + 1);
          uVar2 = (ulong)(byte)((byte)*puVar11 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,(char *)pbVar3,uVar2);
      }
      uVar12 = (ulong)((byte)local_80._0_1_ >> 1);
      uVar2 = uVar12;
      if ((local_80 & 1) != 0) {
        uVar2 = local_78;
      }
      if (uVar2 == 0) {
LAB_00a8e8c8:
        bVar7 = ByteBuffer::readBool(param_1);
        cVar8 = ByteBuffer::readByte(param_1);
        this_00 = (GTreeNode *)GTreeNode::create((bool)(bVar7 & 1),(basic_string *)&local_80);
        GTreeNode::setExpaned(this_00,true);
        iVar5 = (int)cVar8;
        if (iVar14 == 0) {
          GTreeNode::addChild(*(GTreeNode **)(this + 1000),this_00);
        }
        else if (iVar13 < iVar5) {
          GTreeNode::addChild(this_01,this_00);
        }
        else if (iVar13 - iVar5 == 0 || iVar13 < iVar5) {
          GTreeNode::addChild(*(GTreeNode **)(this_01 + 0x30),this_00);
        }
        else {
          iVar13 = (iVar13 - iVar5) + 1;
          do {
            this_01 = *(GTreeNode **)(this_01 + 0x30);
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          GTreeNode::addChild(this_01,this_00);
        }
        (**(code **)(*(long *)this + 0x100))(this,param_1,*(undefined8 *)(this_00 + 0x38));
        this_01 = this_00;
        iVar13 = iVar5;
      }
      else {
        if ((GTree *)&local_80 != this + 0x308) {
          pGVar1 = this + 0x309;
          uVar2 = (ulong)((byte)this[0x308] >> 1);
          if (((byte)this[0x308] & 1) != 0) {
            pGVar1 = *(GTree **)(this + 0x318);
            uVar2 = *(ulong *)(this + 0x310);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,(char *)pGVar1,uVar2);
          uVar12 = (ulong)((byte)local_80._0_1_ >> 1);
        }
        if (((byte)local_80._0_1_ & 1) != 0) {
          uVar12 = local_78;
        }
        if (uVar12 != 0) goto LAB_00a8e8c8;
      }
      iVar14 = iVar14 + 1;
      *(int *)(param_1 + 0x1c) = iVar4 + sVar10;
    } while (iVar14 != sVar9);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

