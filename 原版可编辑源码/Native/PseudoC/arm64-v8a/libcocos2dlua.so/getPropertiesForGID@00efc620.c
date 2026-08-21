
/* cocos2d::experimental::TMXTiledMap::getPropertiesForGID(int) const */

void __thiscall
cocos2d::experimental::TMXTiledMap::getPropertiesForGID(TMXTiledMap *this,int param_1)

{
  ulong uVar1;
  undefined4 in_w8;
  undefined4 in_register_00004044;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)(this + 0x358);
                    /* catch() { ... } // from try @ 00efc3b8 with catch @ 00efc62c */
  if (uVar3 != 0) {
                    /* catch() { ... } // from try @ 00efc0c0 with catch @ 00efc630
                       catch() { ... } // from try @ 00efc168 with catch @ 00efc630 */
    uVar8 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    uVar4 = (ulong)param_1;
    if ((uVar9 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*(long *)(this + 0x350) + uVar5 * 8);
    if ((plVar2 != (long *)0x0) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0)) {
      do {
        uVar6 = plVar2[1];
        if (uVar6 == uVar4) {
                    /* try { // try from 00efc68c to 00ffc6ff has its CatchHandler @ 00efc68c
                       catch() { ... } // from try @ 00efc68c with catch @ 00efc68c
                       catch() { ... } // from try @ 00efc820 with catch @ 00efc68c */
          if ((int)plVar2[2] == param_1) {
            cocos2d::Value::Value
                      ((Value *)CONCAT44(in_register_00004044,in_w8),(Value *)(plVar2 + 3));
            return;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar3 - 1;
          }
          else if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) break;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  cocos2d::Value::Value((Value *)CONCAT44(in_register_00004044,in_w8));
  return;
}

