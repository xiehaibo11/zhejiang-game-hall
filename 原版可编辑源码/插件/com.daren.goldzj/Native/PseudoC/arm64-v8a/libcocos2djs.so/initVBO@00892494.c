
/* cocos2d::RenderTexture::initVBO() */

void __thiscall cocos2d::RenderTexture::initVBO(RenderTexture *this)

{
  long lVar1;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGenBuffers(2,this + 0xc);
  glBindBuffer(0x8892,*(undefined4 *)(this + 0xc));
  uStack_48 = 0;
  local_50 = 0xbf800000bf800000;
  uStack_38 = 0x3f80000000000000;
  uStack_40 = 0x3f800000bf800000;
  uStack_68 = 0x3f8000003f800000;
  local_70 = 0x3f8000003f800000;
  uStack_58 = 0x3f800000;
  uStack_60 = 0xbf8000003f800000;
  glBufferData(0x8892,0x40,&local_70,0x88e4);
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x10));
  local_80 = 0x300000002;
  puStack_88 = &DAT_100000003;
  local_90 = 0x100000000;
  glBufferData(0x8893,0x18,&local_90,0x88e4);
  glBindBuffer(0x8893,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

