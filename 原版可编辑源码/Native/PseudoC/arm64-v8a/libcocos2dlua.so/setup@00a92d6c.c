
/* fairygui::ScrollPane::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::ScrollPane::setup(ScrollPane *this,ByteBuffer *param_1)

{
  uint uVar1;
  char cVar2;
  basic_string *pbVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  long lVar13;
  Ref *pRVar14;
  ScrollPane SVar15;
  code *pcVar16;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  ScrollPane *local_78;
  long *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  cVar5 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x24) = (int)cVar5;
  cVar5 = ByteBuffer::readByte(param_1);
  uVar6 = ByteBuffer::readInt(param_1);
  uVar8 = ByteBuffer::readBool(param_1);
  if ((uVar8 & 1) != 0) {
    iVar7 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x34) = (float)iVar7;
    iVar7 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x3c) = (float)iVar7;
    iVar7 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x30) = (float)iVar7;
    iVar7 = ByteBuffer::readInt(param_1);
    *(float *)(this + 0x38) = (float)iVar7;
  }
  pbVar9 = (basic_string *)ByteBuffer::readS(param_1);
  pbVar10 = (basic_string *)ByteBuffer::readS(param_1);
  pbVar11 = (basic_string *)ByteBuffer::readS(param_1);
  pbVar12 = (basic_string *)ByteBuffer::readS(param_1);
  uVar1 = uVar6 & 0xff;
  this[0x4c] = (ScrollPane)((byte)uVar6 & 1);
  this[0x4d] = (ScrollPane)((byte)(uVar1 >> 1) & 1);
  this[0x4e] = (ScrollPane)((byte)(uVar1 >> 2) & 1);
  this[0x58] = (ScrollPane)((byte)(uVar1 >> 3) & 1);
  if ((uVar6 >> 4 & 1) == 0) {
    if ((uVar6 >> 5 & 1) != 0) {
      SVar15 = (ScrollPane)0x0;
                    /* try { // try from 00a92e70 to 00b92ebf has its CatchHandler @ 00a92e70
                       catch() { ... } // from try @ 00a92e70 with catch @ 00a92e70
                       catch() { ... } // from try @ 00a92f0c with catch @ 00a92e70
                       catch() { ... } // from try @ 00a92f50 with catch @ 00a92e70 */
      goto LAB_00a92e78;
    }
  }
  else {
    SVar15 = (ScrollPane)0x1;
LAB_00a92e78:
    this[0x41] = SVar15;
  }
  if ((uVar6 >> 6 & 1) == 0) {
    if ((uVar6 >> 7 & 1) != 0) {
      SVar15 = (ScrollPane)0x0;
      goto LAB_00a92e90;
    }
  }
  else {
    SVar15 = (ScrollPane)0x1;
LAB_00a92e90:
    this[0x40] = SVar15;
  }
  this[0x50] = (ScrollPane)((byte)(uVar6 >> 8) & 1);
  FUIContainer::setClippingEnabled(*(FUIContainer **)(this + 0x100),(uVar6 & 0x200) == 0);
  cVar2 = '\x02';
  if (cVar5 != '\0') {
    cVar2 = cVar5;
  }
  this[0x59] = (ScrollPane)((byte)(uVar6 >> 10) & 1);
                    /* try { // try from 00a92ec0 to 00b92f0b has its CatchHandler @ 00a92f90 */
  this[0x5a] = (ScrollPane)((byte)(uVar6 >> 0xb) & 1);
  if (cVar2 == '\x03') {
    this[0x4f] = (ScrollPane)0x0;
  }
  else {
    uVar6 = *(uint *)(this + 0x24);
    if (uVar6 - 1 < 2) {
      uVar8 = (ulong)((byte)*pbVar9 >> 1);
      if (((byte)*pbVar9 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar9 + 8);
      }
      pbVar3 = (basic_string *)&UIConfig::verticalScrollBar;
                    /* try { // try from 00a92f0c to 00b92f3b has its CatchHandler @ 00a92e70 */
      if (uVar8 != 0) {
        pbVar3 = pbVar9;
      }
      if (((byte)*pbVar3 & 1) == 0) {
        if ((byte)*pbVar3 >> 1 != 0) {
LAB_00a92f20:
          lVar13 = UIPackage::createObjectFromURL(pbVar3);
          if (lVar13 == 0) {
                    /* catch() { ... } // from try @ 00a92ec0 with catch @ 00a92f90
                       catch() { ... } // from try @ 00a92f3c with catch @ 00a92f90 */
            *(undefined8 *)(this + 0x118) = 0;
          }
          else {
                    /* try { // try from 00a92f3c to 00b92f4f has its CatchHandler @ 00a92f90 */
            pRVar14 = (Ref *)__dynamic_cast(lVar13,&GObject::typeinfo,&GScrollBar::typeinfo,0);
            *(Ref **)(this + 0x118) = pRVar14;
            if (pRVar14 != (Ref *)0x0) {
              cocos2d::Ref::retain(pRVar14);
                    /* try { // try from 00a92f50 to 00b92fab has its CatchHandler @ 00a92e70 */
              GScrollBar::setScrollPane(*(GScrollBar **)(this + 0x118),this,true);
              lVar13 = *(long *)(this + 0x118);
              *(undefined1 *)(lVar13 + 0x9a) = 1;
              (**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x208))
                        (*(long **)(*(long *)(this + 0xf8) + 0xa8),*(undefined8 *)(lVar13 + 0xa8));
            }
          }
        }
      }
      else if (*(long *)(pbVar3 + 8) != 0) goto LAB_00a92f20;
      uVar6 = *(uint *)(this + 0x24);
    }
    if ((uVar6 | 2) == 2) {
      uVar8 = (ulong)((byte)*pbVar10 >> 1);
      if (((byte)*pbVar10 & 1) != 0) {
        uVar8 = *(ulong *)(pbVar10 + 8);
      }
      pbVar9 = (basic_string *)&UIConfig::horizontalScrollBar;
      if (uVar8 != 0) {
        pbVar9 = pbVar10;
      }
      if (((byte)*pbVar9 & 1) == 0) {
        if ((byte)*pbVar9 >> 1 != 0) {
LAB_00a92fd8:
          lVar13 = UIPackage::createObjectFromURL(pbVar9);
          if (lVar13 == 0) {
            *(undefined8 *)(this + 0x110) = 0;
          }
          else {
            pRVar14 = (Ref *)__dynamic_cast(lVar13,&GObject::typeinfo,&GScrollBar::typeinfo,0);
            *(Ref **)(this + 0x110) = pRVar14;
            if (pRVar14 != (Ref *)0x0) {
              cocos2d::Ref::retain(pRVar14);
              GScrollBar::setScrollPane(*(GScrollBar **)(this + 0x110),this,false);
              lVar13 = *(long *)(this + 0x110);
              *(undefined1 *)(lVar13 + 0x9a) = 1;
              (**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x208))
                        (*(long **)(*(long *)(this + 0xf8) + 0xa8),*(undefined8 *)(lVar13 + 0xa8));
            }
          }
        }
      }
      else if (*(long *)(pbVar9 + 8) != 0) goto LAB_00a92fd8;
    }
    this[0x42] = (ScrollPane)(cVar2 == '\x02');
    if (cVar2 == '\x02') {
      if (*(GObject **)(this + 0x118) != (GObject *)0x0) {
        GObject::setVisible(*(GObject **)(this + 0x118),false);
      }
      if (*(GObject **)(this + 0x110) != (GObject *)0x0) {
        GObject::setVisible(*(GObject **)(this + 0x110),false);
      }
      local_90 = &PTR_FUN_016a7338;
      uStack_80 = 0;
      local_88 = onRollOver;
      local_78 = this;
      local_70 = (long *)&local_90;
      UIEventDispatcher::addEventListener
                (*(UIEventDispatcher **)(this + 0xf8),0xe,(function *)&local_90,
                 (EventTag *)&EventTag::None);
      if (&local_90 == (undefined ***)local_70) {
        pcVar16 = *(code **)(*local_70 + 0x20);
LAB_00a930e8:
        (*pcVar16)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar16 = *(code **)(*local_70 + 0x28);
        goto LAB_00a930e8;
      }
      local_90 = &PTR_FUN_016a7338;
      uStack_80 = 0;
      local_88 = onRollOut;
      local_78 = this;
      local_70 = (long *)&local_90;
      UIEventDispatcher::addEventListener
                (*(UIEventDispatcher **)(this + 0xf8),0xf,(function *)&local_90,
                 (EventTag *)&EventTag::None);
      if (&local_90 == (undefined ***)local_70) {
        pcVar16 = *(code **)(*local_70 + 0x20);
      }
      else {
        if (local_70 == (long *)0x0) goto LAB_00a93150;
        pcVar16 = *(code **)(*local_70 + 0x28);
      }
      (*pcVar16)();
    }
  }
LAB_00a93150:
  uVar8 = (ulong)((byte)*pbVar11 >> 1);
  if (((byte)*pbVar11 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar11 + 8);
  }
  if (uVar8 != 0) {
    lVar13 = UIPackage::createObjectFromURL(pbVar11);
    if (lVar13 == 0) {
      *(undefined8 *)(this + 0x120) = 0;
    }
    else {
      pRVar14 = (Ref *)__dynamic_cast(lVar13,&GObject::typeinfo,&GComponent::typeinfo,0);
      *(Ref **)(this + 0x120) = pRVar14;
      if (pRVar14 != (Ref *)0x0) {
        cocos2d::Ref::retain(pRVar14);
        GObject::setVisible(*(GObject **)(this + 0x120),false);
        lVar13 = *(long *)(this + 0x120);
        *(undefined1 *)(lVar13 + 0x9a) = 1;
        (**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x208))
                  (*(long **)(*(long *)(this + 0xf8) + 0xa8),*(undefined8 *)(lVar13 + 0xa8));
      }
    }
  }
  uVar8 = (ulong)((byte)*pbVar12 >> 1);
  if (((byte)*pbVar12 & 1) != 0) {
    uVar8 = *(ulong *)(pbVar12 + 8);
  }
  if (uVar8 != 0) {
    lVar13 = UIPackage::createObjectFromURL(pbVar12);
    if (lVar13 == 0) {
      *(undefined8 *)(this + 0x128) = 0;
      lVar13 = *(long *)(this + 0x120);
      goto joined_r0x00a93264;
    }
    pRVar14 = (Ref *)__dynamic_cast(lVar13,&GObject::typeinfo,&GComponent::typeinfo,0);
    *(Ref **)(this + 0x128) = pRVar14;
    if (pRVar14 != (Ref *)0x0) {
      cocos2d::Ref::retain(pRVar14);
      GObject::setVisible(*(GObject **)(this + 0x128),false);
      lVar13 = *(long *)(this + 0x128);
      *(undefined1 *)(lVar13 + 0x9a) = 1;
      (**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x208))
                (*(long **)(*(long *)(this + 0xf8) + 0xa8),*(undefined8 *)(lVar13 + 0xa8));
    }
  }
  lVar13 = *(long *)(this + 0x120);
joined_r0x00a93264:
  if ((lVar13 != 0) || (*(long *)(this + 0x128) != 0)) {
                    /* try { // try from 00a9326c to 00b932bf has its CatchHandler @ 00a9326c
                       catch() { ... } // from try @ 00a9326c with catch @ 00a9326c
                       catch() { ... } // from try @ 00a93364 with catch @ 00a9326c
                       catch() { ... } // from try @ 00a933c4 with catch @ 00a9326c */
    *(uint *)(this + 0x48) = (uint)(*(int *)(this + 0x24) - 1U < 2);
  }
  setSize(this,*(float *)(*(long *)(this + 0xf8) + 200),*(float *)(*(long *)(this + 0xf8) + 0xcc));
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

