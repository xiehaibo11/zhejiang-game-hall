
/* cocos2d::renderer::Pass::getProperty(unsigned long) const */

long __thiscall cocos2d::renderer::Pass::getProperty(Pass *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  do {
    uVar2 = *(ulong *)(this + 0x40);
    if (uVar2 != 0) {
      uVar3 = uVar2 - 1;
      if ((uVar3 & uVar2) == 0) {
        uVar4 = uVar3 & param_1;
      }
      else {
        uVar4 = param_1;
        if (uVar2 <= param_1) {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = param_1 / uVar2;
          }
          uVar4 = param_1 - uVar4 * uVar2;
        }
      }
      plVar5 = *(long **)(*(long *)(this + 0x38) + uVar4 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar5 = (long *)*plVar5;
              if (plVar5 == (long *)0x0) goto LAB_0091f0b0;
              uVar6 = plVar5[1];
              if (uVar6 != param_1) break;
              if (plVar5[2] == param_1) {
                return (long)(plVar5 + 3);
              }
            }
            if ((uVar3 & uVar2) == 0) break;
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) goto LAB_0091f0b0;
          }
        } while ((uVar6 & uVar3) == uVar4);
      }
    }
LAB_0091f0b0:
    this = *(Pass **)(this + 0x30);
    if (this == (Pass *)0x0) {
      return 0;
    }
  } while( true );
}

