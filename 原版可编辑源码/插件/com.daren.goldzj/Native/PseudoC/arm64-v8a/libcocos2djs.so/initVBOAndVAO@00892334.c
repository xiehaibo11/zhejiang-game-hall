
/* cocos2d::RenderTexture::initVBOAndVAO() */

void __thiscall cocos2d::RenderTexture::initVBOAndVAO(RenderTexture *this)

{
  long lVar1;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (*glGenVertexArraysOESEXT)(1,this + 0x14);
  glGenBuffers(2,this + 0xc);
  (*glBindVertexArrayOESEXT)(*(undefined4 *)(this + 0x14));
  glBindBuffer(0x8892,*(undefined4 *)(this + 0xc));
  uStack_58 = 0;
  local_60 = 0xbf800000bf800000;
  uStack_48 = 0x3f80000000000000;
  uStack_50 = 0x3f800000bf800000;
  uStack_78 = 0x3f8000003f800000;
  local_80 = 0x3f8000003f800000;
  uStack_68 = 0x3f800000;
  uStack_70 = 0xbf8000003f800000;
  glBufferData(0x8892,0x40,&local_80,0x88e4);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x10));
  local_90 = 0x300000002;
  puStack_98 = &DAT_100000003;
  local_a0 = 0x100000000;
  glBufferData(0x8893,0x18,&local_a0,0x88e4);
  glEnableVertexAttribArray(*(undefined4 *)(this + 0x24));
  glVertexAttribPointer(*(undefined4 *)(this + 0x24),2,0x1406,0,0x10,0);
  glEnableVertexAttribArray(*(undefined4 *)(this + 0x28));
  glVertexAttribPointer(*(undefined4 *)(this + 0x28),2,0x1406,0,0x10,8);
  (*glBindVertexArrayOESEXT)(0);
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

