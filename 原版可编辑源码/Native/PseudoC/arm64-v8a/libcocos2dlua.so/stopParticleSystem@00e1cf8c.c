
/* cocos2d::PUParticleSystem3D::stopParticleSystem() */

void __thiscall cocos2d::PUParticleSystem3D::stopParticleSystem(PUParticleSystem3D *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
                    /* catch() { ... } // from try @ 00e1cac8 with catch @ 00e1cf8c */
                    /* catch() { ... } // from try @ 00e1cb98 with catch @ 00e1cf90
                       catch() { ... } // from try @ 00e1cc34 with catch @ 00e1cf90 */
  if (*(int *)(this + 0x300) != 0) {
    *(undefined4 *)(this + 0x300) = 0;
  }
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
                    /* catch() { ... } // from try @ 00e1c6c8 with catch @ 00e1cfc0 */
    lVar3 = *plVar1;
    while( true ) {
                    /* catch() { ... } // from try @ 00e1c77c with catch @ 00e1cfe8
                       catch() { ... } // from try @ 00e1c7f4 with catch @ 00e1cfe8 */
      if ((lVar3 != 0) &&
         (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
         ) {
        (**(code **)(*plVar4 + 0x548))();
      }
      plVar1 = plVar1 + 1;
                    /* catch() { ... } // from try @ 00e1c804 with catch @ 00e1cfd4 */
      if (plVar2 == plVar1) break;
                    /* catch() { ... } // from try @ 00e1c740 with catch @ 00e1cfd8 */
      lVar3 = *plVar1;
    }
  }
  return;
}

