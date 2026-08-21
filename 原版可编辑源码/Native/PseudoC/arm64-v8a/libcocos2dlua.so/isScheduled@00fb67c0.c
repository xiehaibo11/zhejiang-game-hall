
/* cocos2d::Scheduler::isScheduled(void (cocos2d::Ref::*)(float), cocos2d::Ref const*) const */

undefined8 cocos2d::Scheduler::isScheduled(_func_void_float *param_1,Ref *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x2;
  uint uVar5;
  long in_x3;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar5 = (uint)in_x3;
    iVar1 = (int)((ulong)in_x3 >> 0x20) + -0x61c88647;
    uVar5 = ((uVar5 & 0xff000000) - iVar1) + (uVar5 & 0xff0000) + (uVar5 & 0xff00) + (uVar5 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar5) + 0x1124109 ^ uVar5 << 8;
    uVar3 = 0xfeedbef7 - (uVar5 + uVar2) ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar2 >> 5;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 10;
    lVar7 = *(long *)(*plVar6 +
                     (ulong)(((uVar3 - uVar5) - uVar2 ^ uVar2 >> 0xf) & (int)plVar6[1] - 1U) * 0x10)
    ;
    while (lVar7 != 0) {
      plVar8 = (long *)(lVar7 - plVar6[4]);
      if (((int)plVar8[0xb] == 8) && (*(long *)plVar8[10] == in_x3)) {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return 0;
        }
        lVar7 = *plVar8;
        if (lVar7 < 1) {
          return 0;
        }
        plVar6 = (long *)plVar8[2];
        lVar9 = 0;
        lVar4 = *plVar6;
        do {
          if (((lVar4 != 0) &&
              (lVar4 = __dynamic_cast(lVar4,&Ref::typeinfo,&TimerTargetSelector::typeinfo,0),
              lVar4 != 0)) &&
             ((*(char *)(lVar4 + 0x34) != '\0' ||
              (*(uint *)(lVar4 + 0x38) <= *(uint *)(lVar4 + 0x3c))))) {
            if ((param_2 == *(Ref **)(lVar4 + 0x58)) &&
               (in_x2 == *(long *)(lVar4 + 0x60) ||
                (((uint)*(long *)(lVar4 + 0x60) | (uint)in_x2) & 1) == 0 && param_2 == (Ref *)0x0))
            {
              return 1;
            }
          }
          lVar9 = lVar9 + 1;
          if (lVar7 <= lVar9) {
            return 0;
          }
          lVar4 = plVar6[lVar9];
        } while( true );
      }
      lVar7 = plVar8[9];
    }
  }
  return 0;
}

