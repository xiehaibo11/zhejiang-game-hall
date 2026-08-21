
/* fairygui::WeakPtr::onStage() const */

undefined8 __thiscall fairygui::WeakPtr::onStage(WeakPtr *this)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)this;
  if (((uVar3 != 0) && (DAT_017829f0 != 0)) && (DAT_017829e0 != 0)) {
    uVar2 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar7 = NEON_uaddlv(uVar2,1);
    uVar8 = CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar7);
    if ((uVar8 & 0xffffffff) < 2) {
      uVar4 = DAT_017829e0 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (DAT_017829e0 <= uVar3) {
        uVar4 = 0;
        if (DAT_017829e0 != 0) {
          uVar4 = uVar3 / DAT_017829e0;
        }
        uVar4 = uVar3 - uVar4 * DAT_017829e0;
      }
    }
    plVar5 = *(long **)(_weakPointers + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == uVar3) {
          if (plVar5[2] == uVar3) {
            if ((GObject *)plVar5[3] == (GObject *)0x0) {
              return 0;
            }
            uVar2 = GObject::onStage((GObject *)plVar5[3]);
            return uVar2;
          }
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            uVar6 = uVar6 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar6) {
            uVar1 = 0;
            if (DAT_017829e0 != 0) {
              uVar1 = uVar6 / DAT_017829e0;
            }
            uVar6 = uVar6 - uVar1 * DAT_017829e0;
          }
          if (uVar6 != uVar4) {
            return 0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return 0;
}

