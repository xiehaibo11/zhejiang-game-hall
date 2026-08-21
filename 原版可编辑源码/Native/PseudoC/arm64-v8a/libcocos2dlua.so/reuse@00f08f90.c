
/* cocos2d::TiledGrid3D::reuse() */

void __thiscall cocos2d::TiledGrid3D::reuse(TiledGrid3D *this)

{
  if (0 < *(int *)(this + 0x24)) {
    memcpy(*(void **)(this + 0x80),*(void **)(this + 0x78),
           -(ulong)(((int)(*(float *)(this + 0x28) * *(float *)(this + 0x2c)) * 3 & 0x3fffffffU) >>
                   0x1d) & 0xfffffffc00000000 |
           (ulong)(uint)((int)(*(float *)(this + 0x28) * *(float *)(this + 0x2c)) * 0xc) << 2);
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  }
  return;
}

