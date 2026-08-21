
/* cocos2d::Image::initWithTiffData(unsigned char const*, long) */

void __thiscall cocos2d::Image::initWithTiffData(Image *this,uchar *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  size_t __size;
  undefined2 local_74 [2];
  undefined2 local_70 [2];
  undefined2 local_6c [2];
  undefined8 local_68;
  uchar *local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
                    /* try { // try from 00996f60 to 00a96f77 has its CatchHandler @ 009972bc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00996f98 to 00a96fa3 has its CatchHandler @ 0099728c */
                    /* try { // try from 00996fc8 to 00a96fcf has its CatchHandler @ 00997234 */
  local_50 = 0;
  local_60 = param_1;
  lStack_58 = param_2;
  lVar3 = TIFFClientOpen("file.tif","r",&local_60,FUN_00997e88,FUN_00997f24,FUN_00997f2c,
                         FUN_00997fbc,FUN_00997fc4,FUN_00997fcc,FUN_00997fd4);
  uVar5 = 0;
  if (lVar3 != 0) {
                    /* try { // try from 00996fe4 to 00a96ff3 has its CatchHandler @ 00997230 */
    local_68 = 0;
    local_6c[0] = 0;
                    /* try { // try from 00996ff4 to 00a97007 has its CatchHandler @ 00997238 */
    local_70[0] = 0;
    local_74[0] = 0;
    TIFFGetField(lVar3,0x100,(long)&local_68 + 4);
    TIFFGetField(lVar3,0x101,&local_68);
    TIFFGetField(lVar3,0x102,local_6c);
    TIFFGetField(lVar3,0x115,local_70);
    TIFFGetField(lVar3,0x11c,local_74);
    *(undefined4 *)(this + 0x2c) = 2;
    __size = (ulong)(uint)((int)local_68 * local_68._4_4_) << 2;
    *(int *)(this + 0x20) = local_68._4_4_;
    *(int *)(this + 0x24) = (int)local_68;
    *(size_t *)(this + 0x18) = __size;
                    /* try { // try from 00997060 to 00a970c7 has its CatchHandler @ 009972bc */
    pvVar4 = malloc(__size);
    *(void **)(this + 0x10) = pvVar4;
    pvVar4 = _TIFFmalloc(__size);
    if (pvVar4 != (void *)0x0) {
      iVar2 = TIFFReadRGBAImageOriented(lVar3,local_68._4_4_,local_68 & 0xffffffff,pvVar4,1,0);
      if (iVar2 != 0) {
        this[0x134] = (Image)0x1;
        memcpy(*(void **)(this + 0x10),pvVar4,__size);
      }
      _TIFFfree(pvVar4);
    }
    TIFFClose(lVar3);
    uVar5 = 1;
  }
                    /* try { // try from 009970cc to 00a9710f has its CatchHandler @ 0099728c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

