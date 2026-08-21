
/* cocos2d::Grid3D::reuse() */

void __thiscall cocos2d::Grid3D::reuse(Grid3D *this)

{
                    /* try { // try from 00f085b8 to 010085bf has its CatchHandler @ 00f0861c */
                    /* try { // try from 00f085c0 to 01008637 has its CatchHandler @ 00f08590 */
  if (0 < *(int *)(this + 0x24)) {
    memcpy(*(void **)(this + 0x80),*(void **)(this + 0x78),
           (long)((*(float *)(this + 0x28) + 1.0) * (*(float *)(this + 0x2c) + 1.0) * 12.0));
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  }
  return;
}

