
/* universe::GlobalObjectMap::get(lua_State*, void*) const */

undefined8 __thiscall
universe::GlobalObjectMap::get(GlobalObjectMap *this,lua_State *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 != 0) {
                    /* try { // try from 009e303c to 00ae3093 has its CatchHandler @ 009e2fa0 */
    uVar3 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ (ulong)param_2 >> 0x20) * -0x622015f714c7d297;
    uVar9 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar2 >> 
                                                  8)),POPCOUNT((char)uVar2))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar3 ^ (ulong)param_2 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar3 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    if (uVar3 < 2) {
      uVar5 = uVar2 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
                    /* try { // try from 009e3094 to 00ae30a7 has its CatchHandler @ 009e30b0 */
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
                    /* try { // try from 009e30a8 to 00ae30cb has its CatchHandler @ 009e2fa0 */
    plVar6 = *(long **)(*(long *)this + uVar5 * 8);
                    /* catch() { ... } // from try @ 009e2ff0 with catch @ 009e30b0
                       catch() { ... } // from try @ 009e3094 with catch @ 009e30b0 */
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar4 - uVar7 == 0) {
          if ((void *)plVar6[2] == param_2) {
            lua_rawgeti(param_1,0xffffd8f0,(int)plVar6[3]);
            return 1;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}

