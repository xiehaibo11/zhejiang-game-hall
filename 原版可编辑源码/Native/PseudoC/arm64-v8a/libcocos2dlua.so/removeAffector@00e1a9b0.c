
/* cocos2d::ParticleSystem3D::removeAffector(int) */

void __thiscall cocos2d::ParticleSystem3D::removeAffector(ParticleSystem3D *this,int param_1)

{
  void *__dest;
  size_t __n;
  
  __dest = (void *)(*(long *)(this + 0x310) + (long)param_1 * 8);
  __n = *(long *)(this + 0x318) - ((long)__dest + 8);
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 8),__n);
  }
  *(void **)(this + 0x318) = (void *)((long)__dest + ((long)__n >> 3) * 8);
                    /* try { // try from 00e1a9f4 to 00f1aa27 has its CatchHandler @ 00e1aae0 */
  return;
}

