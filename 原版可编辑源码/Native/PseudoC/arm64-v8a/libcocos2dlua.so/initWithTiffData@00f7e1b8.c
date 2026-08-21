
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
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  local_60 = param_1;
  lStack_58 = param_2;
  lVar3 = TIFFClientOpen("file.tif","r",&local_60,FUN_00f7f244,FUN_00f7f2e0,FUN_00f7f2e8,
                         FUN_00f7f368,FUN_00f7f370,FUN_00f7f378,FUN_00f7f380);
  uVar5 = 0;
  if (lVar3 != 0) {
    local_68 = 0;
    local_6c[0] = 0;
    local_70[0] = 0;
    local_74[0] = 0;
    TIFFGetField(lVar3,0x100,(long)&local_68 + 4);
    TIFFGetField(lVar3,0x101,&local_68);
    TIFFGetField(lVar3,0x102,local_6c);
    TIFFGetField(lVar3,0x115,local_70);
    TIFFGetField(lVar3,0x11c,local_74);
    *(undefined4 *)(this + 0x48) = 2;
    __size = (ulong)(uint)((int)local_68 * local_68._4_4_) << 2;
    *(int *)(this + 0x38) = local_68._4_4_;
    *(int *)(this + 0x3c) = (int)local_68;
    *(size_t *)(this + 0x30) = __size;
    pvVar4 = malloc(__size);
    *(void **)(this + 0x28) = pvVar4;
    pvVar4 = _TIFFmalloc(__size);
    if (pvVar4 != (void *)0x0) {
      iVar2 = TIFFReadRGBAImageOriented(lVar3,local_68._4_4_,local_68 & 0xffffffff,pvVar4,1,0);
      if (iVar2 != 0) {
        this[0x154] = (Image)0x1;
        memcpy(*(void **)(this + 0x28),pvVar4,__size);
      }
      _TIFFfree(pvVar4);
    }
    TIFFClose(lVar3);
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

