
/* cocos2d::PUParticleSystem3D::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::PUParticleSystem3D::draw
          (PUParticleSystem3D *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00e1fce8 to 00f1fcff has its CatchHandler @ 00e1fd5c */
  if ((this[0x379] != (PUParticleSystem3D)0x0) &&
     (iVar1 = (**(code **)(*(long *)this + 0x560))(), 0 < iVar1)) {
    plVar2 = *(long **)(this + 0x328);
                    /* try { // try from 00e1fd10 to 00f1fd17 has its CatchHandler @ 00e1fd54 */
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00e1fd18 to 00f1fd8b has its CatchHandler @ 00e1f82c */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,this);
    }
    if (*(long *)(this + 0x3f0) != 0) {
      for (plVar2 = *(long **)(this + 1000); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        lVar4 = plVar2[7];
                    /* catch() { ... } // from try @ 00e1fcb8 with catch @ 00e1fd54
                       catch() { ... } // from try @ 00e1fd10 with catch @ 00e1fd54 */
                    /* catch() { ... } // from try @ 00e1fb04 with catch @ 00e1fd58
                       catch() { ... } // from try @ 00e1fbfc with catch @ 00e1fd58 */
                    /* catch() { ... } // from try @ 00e1fce8 with catch @ 00e1fd5c */
        while ((plVar2[5] = lVar4, plVar2 + 6 != (long *)lVar4 && (*(long *)(lVar4 + 0x10) != 0))) {
          plVar3 = *(long **)(*(long *)(lVar4 + 0x10) + 0x78);
                    /* catch() { ... } // from try @ 00e1f868 with catch @ 00e1fd70 */
          (**(code **)(*plVar3 + 0x348))(plVar3,param_1,param_2,param_3);
          if ((long *)plVar2[5] == plVar2 + 6) break;
                    /* try { // try from 00e1fd8c to 00f1fdcf has its CatchHandler @ 00e1fd8c
                       catch() { ... } // from try @ 00e1fd8c with catch @ 00e1fd8c
                       catch() { ... } // from try @ 00e1fde0 with catch @ 00e1fd8c
                       catch() { ... } // from try @ 00e1ff5c with catch @ 00e1fd8c
                       catch() { ... } // from try @ 00e20174 with catch @ 00e1fd8c
                       catch() { ... } // from try @ 00e20484 with catch @ 00e1fd8c
                       catch() { ... } // from try @ 00e205a0 with catch @ 00e1fd8c */
          lVar4 = *(long *)(plVar2[5] + 8);
        }
                    /* catch() { ... } // from try @ 00e1fb68 with catch @ 00e1fd40 */
      }
    }
  }
  return;
}

