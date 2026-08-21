
/* cocos2d::Image::premultipliedAlpha() */

void __thiscall cocos2d::Image::premultipliedAlpha(Image *this)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(this + 0x3c) * *(int *)(this + 0x38)) {
    lVar4 = *(long *)(this + 0x28);
    uVar3 = 0;
    lVar5 = 0;
    do {
      pbVar2 = (byte *)(lVar4 + (uVar3 & 0xfffffffc));
      iVar1 = pbVar2[3] + 1;
      *(uint *)(lVar4 + uVar3) =
           iVar1 * (uint)pbVar2[1] & 0x1ff00 | (uint)pbVar2[3] << 0x18 | iVar1 * (uint)*pbVar2 >> 8
           | iVar1 * (uint)pbVar2[2] * 0x100 & 0x1ff0000;
      lVar5 = lVar5 + 1;
      uVar3 = uVar3 + 4;
    } while (lVar5 < (long)*(int *)(this + 0x3c) * (long)*(int *)(this + 0x38));
  }
  this[0x154] = (Image)0x1;
  return;
}

