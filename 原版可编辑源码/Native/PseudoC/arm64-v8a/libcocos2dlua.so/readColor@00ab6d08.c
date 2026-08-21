
/* fairygui::ByteBuffer::readColor() */

void __thiscall fairygui::ByteBuffer::readColor(ByteBuffer *this)

{
  long lVar1;
  long lVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  long lVar7;
  undefined4 local_2c;
  long local_28;
  
  lVar7 = tpidr_el0;
  local_28 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00ab6d24 to 00bb6d57 has its CatchHandler @ 00ab6e24 */
  lVar2 = (long)*(int *)(this + 0x1c) + (long)*(int *)(this + 0x10);
  lVar1 = *(long *)(this + 8) + (long)(int)lVar2;
  uVar6 = *(uchar *)(*(long *)(this + 8) + lVar2);
  uVar3 = *(uchar *)(lVar1 + 3);
  uVar4 = *(uchar *)(lVar1 + 2);
  uVar5 = *(uchar *)(lVar1 + 1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 4;
  cocos2d::Color4B::Color4B((Color4B *)&local_2c,uVar6,uVar5,uVar4,uVar3);
                    /* try { // try from 00ab6d68 to 00bb6d8b has its CatchHandler @ 00ab6e20 */
  if (*(long *)(lVar7 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}

