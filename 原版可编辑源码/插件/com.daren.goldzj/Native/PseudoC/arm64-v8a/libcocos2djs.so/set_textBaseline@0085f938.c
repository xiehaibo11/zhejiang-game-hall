
/* cocos2d::CanvasRenderingContext2D::set_textBaseline(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::CanvasRenderingContext2D::set_textBaseline
          (CanvasRenderingContext2D *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  int iVar3;
  CanvasRenderingContext2DImpl *pCVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 10) {
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar6,"alphabetic",10);
  }
  else {
    if (uVar1 != 6) {
      if (uVar1 != 3) {
        return;
      }
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      iVar3 = memcmp(pbVar6,"top",3);
      if (iVar3 != 0) {
        return;
      }
      pCVar4 = *(CanvasRenderingContext2DImpl **)(this + 0x100);
      uVar5 = 0;
      goto LAB_0085fa1c;
    }
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    iVar3 = memcmp(pbVar6,"middle",6);
    if (iVar3 == 0) {
      pCVar4 = *(CanvasRenderingContext2DImpl **)(this + 0x100);
      uVar5 = 1;
      goto LAB_0085fa1c;
    }
    iVar3 = memcmp(pbVar6,"bottom",6);
  }
  if (iVar3 != 0) {
    return;
  }
  pCVar4 = *(CanvasRenderingContext2DImpl **)(this + 0x100);
  uVar5 = 2;
LAB_0085fa1c:
  CanvasRenderingContext2DImpl::setTextBaseline(pCVar4,uVar5);
  return;
}

