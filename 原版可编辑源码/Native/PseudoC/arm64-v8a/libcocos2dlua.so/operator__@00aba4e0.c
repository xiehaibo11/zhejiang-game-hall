
/* fairygui::WeakPtr::TEMPNAMEPLACEHOLDERVALUE(fairygui::GObject const*) */

bool __thiscall fairygui::WeakPtr::operator==(WeakPtr *this,GObject *param_1)

{
  ulong uVar1;
  ulong uVar2;
  GObject *pGVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)this;
  pGVar3 = (GObject *)0x0;
  if (((uVar2 != 0) && (DAT_017829f0 != 0)) && (pGVar3 = (GObject *)0x0, DAT_017829e0 != 0)) {
    uVar9 = CONCAT17(POPCOUNT((char)(DAT_017829e0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_017829e0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_017829e0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_017829e0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_017829e0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_017829e0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_017829e0 >> 8)),POPCOUNT((char)DAT_017829e0)))
                                                  )))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar4 < 2) {
      uVar5 = DAT_017829e0 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (DAT_017829e0 <= uVar2) {
        uVar5 = 0;
        if (DAT_017829e0 != 0) {
          uVar5 = uVar2 / DAT_017829e0;
        }
        uVar5 = uVar2 - uVar5 * DAT_017829e0;
      }
    }
    plVar6 = *(long **)(_weakPointers + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar2) {
          if (plVar6[2] == uVar2) {
            pGVar3 = (GObject *)plVar6[3];
            goto LAB_00aba5ac;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & DAT_017829e0 - 1;
          }
          else if (DAT_017829e0 <= uVar7) {
            uVar1 = 0;
            if (DAT_017829e0 != 0) {
              uVar1 = uVar7 / DAT_017829e0;
            }
            uVar7 = uVar7 - uVar1 * DAT_017829e0;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    pGVar3 = (GObject *)0x0;
  }
LAB_00aba5ac:
  return pGVar3 == param_1;
}

