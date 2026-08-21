
/* cocos2d::renderer::VertexFormat::getElement(unsigned long) const */

long * __thiscall cocos2d::renderer::VertexFormat::getElement(VertexFormat *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(this + 0x30);
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  uVar3 = uVar2 - 1;
  if ((uVar3 & uVar2) == 0) {
    uVar4 = uVar3 & param_1;
  }
  else {
                    /* try { // try from 009b9cfc to 00ab9d33 has its CatchHandler @ 009b9d64 */
    uVar4 = param_1;
    if (uVar2 <= param_1) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = param_1 / uVar2;
      }
      uVar4 = param_1 - uVar4 * uVar2;
    }
  }
  plVar5 = *(long **)(*(long *)(this + 0x28) + uVar4 * 8);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    do {
      uVar6 = plVar5[1];
                    /* try { // try from 009b9d34 to 00ab9d77 has its CatchHandler @ 009b9cb8 */
      if (uVar6 == param_1) {
        if (plVar5[2] == param_1) {
          return plVar5 + 3;
        }
      }
      else {
        if ((uVar3 & uVar2) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar2 <= uVar6) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar6 / uVar2;
          }
          uVar6 = uVar6 - uVar1 * uVar2;
        }
                    /* catch() { ... } // from try @ 009b9cfc with catch @ 009b9d64 */
        if (uVar6 != uVar4) {
          return (long *)0x0;
        }
      }
                    /* try { // try from 009b9d78 to 00ab9dd7 has its CatchHandler @ 009b9d78
                       catch() { ... } // from try @ 009b9d78 with catch @ 009b9d78
                       catch() { ... } // from try @ 009ba264 with catch @ 009b9d78 */
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return (long *)0x0;
      }
    } while( true );
  }
  return (long *)0x0;
}

