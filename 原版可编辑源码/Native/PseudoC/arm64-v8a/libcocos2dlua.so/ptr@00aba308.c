
/* fairygui::WeakPtr::ptr() const */

long __thiscall fairygui::WeakPtr::ptr(WeakPtr *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar2 = *(ulong *)this;
  if ((uVar2 == 0) || (DAT_017829f0 == 0)) {
    return 0;
  }
  if (DAT_017829e0 != 0) {
    uVar7 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
    if ((uVar8 & 0xffffffff) < 2) {
      uVar3 = DAT_017829e0 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (DAT_017829e0 <= uVar2) {
        uVar3 = 0;
        if (DAT_017829e0 != 0) {
          uVar3 = uVar2 / DAT_017829e0;
        }
        uVar3 = uVar2 - uVar3 * DAT_017829e0;
      }
    }
    plVar4 = *(long **)(_weakPointers + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 == uVar2) {
          if (plVar4[2] == uVar2) {
            return plVar4[3];
          }
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            uVar5 = uVar5 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar5) {
            uVar1 = 0;
            if (DAT_017829e0 != 0) {
              uVar1 = uVar5 / DAT_017829e0;
            }
            uVar5 = uVar5 - uVar1 * DAT_017829e0;
          }
          if (uVar5 != uVar3) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return 0;
}

