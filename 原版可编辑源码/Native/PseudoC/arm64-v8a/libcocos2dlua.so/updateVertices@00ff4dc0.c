
/* cocos2d::VertexBuffer::updateVertices(unsigned char const*, int, int) */

undefined8 __thiscall
cocos2d::VertexBuffer::updateVertices(VertexBuffer *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  Configuration *this_01;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  
  iVar1 = 0;
  if (*(int *)(this + 0x3c) != 0) {
    iVar1 = param_2 / *(int *)(this + 0x3c);
  }
  *(int *)(*(long *)(this + 0x40) + (long)param_3 * 4) = iVar1;
  lVar5 = (long)param_3;
  if (_enableShadowCopy != '\0') {
    lVar2 = *(long *)(this + 0x48);
    this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(lVar2 + lVar5 * 0x18);
    uVar3 = (long)*(int *)(this + 0x3c) * (long)iVar1;
    uVar4 = *(long *)(this_00 + 8) - *(long *)this_00;
    if (uVar4 < uVar3) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                (this_00,uVar3 - uVar4);
      lVar2 = *(long *)(this + 0x48);
    }
    else if (uVar4 != uVar3) {
      *(ulong *)(this_00 + 8) = *(long *)this_00 + uVar3;
    }
    memcpy(*(void **)(lVar2 + lVar5 * 0x18),param_1,(long)param_2);
  }
  __n = (size_t)param_2;
  this_01 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsMapBuffer(this_01);
  glBindBuffer(0x8892,*(undefined4 *)(*(long *)(this + 0x30) + lVar5 * 4));
  if ((uVar3 & 1) == 0) {
    glBufferData(0x8892,__n,param_1,*(undefined4 *)(this + 0x50));
  }
  else {
    glBufferData(0x8892,__n,0,0x88e4);
    __dest = (void *)glMapBufferOES(0x8892,0x88b9);
    memcpy(__dest,param_1,__n);
    glUnmapBufferOES(0x8892);
  }
  glBindBuffer(0x8892,0);
  return 1;
}

