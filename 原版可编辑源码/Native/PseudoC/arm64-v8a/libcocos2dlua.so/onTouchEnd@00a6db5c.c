
/* fairygui::GButton::onTouchEnd(fairygui::EventContext*) */

void __thiscall fairygui::GButton::onTouchEnd(GButton *this,EventContext *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  size_t sVar10;
  
  if ((*(int *)(*(long *)(param_1 + 8) + 0x24) == 0) && (this[0x33e] != (GButton)0x0)) {
                    /* try { // try from 00a6db90 to 00b6dbe3 has its CatchHandler @ 00a6db90
                       catch() { ... } // from try @ 00a6db90 with catch @ 00a6db90
                       catch() { ... } // from try @ 00a6dc88 with catch @ 00a6db90
                       catch() { ... } // from try @ 00a6dce8 with catch @ 00a6db90 */
    this[0x33e] = (GButton)0x0;
    if (*(int *)(this + 0x280) == 0) {
                    /* try { // try from 00a6dc2c to 00b6dc87 has its CatchHandler @ 00a6dd2c */
      if (((this[0xf6] == (GButton)0x0) || (*(GController **)(this + 0x298) == (GController *)0x0))
         || (uVar7 = GController::hasPage(*(GController **)(this + 0x298),(basic_string *)DISABLED),
            (uVar7 & 1) == 0)) {
        if (this[0x33d] == (GButton)0x0) {
          puVar8 = UP;
        }
        else {
          puVar8 = &OVER;
        }
      }
      else {
        puVar8 = DISABLED;
      }
      setState(this,(basic_string *)puVar8);
      return;
    }
    if (this[0x33d] != (GButton)0x0) {
      return;
    }
    if (*(GController **)(this + 0x298) == (GController *)0x0) {
      return;
    }
    pbVar6 = (byte *)GController::getSelectedPage(*(GController **)(this + 0x298));
    bVar4 = *pbVar6;
    sVar10 = (size_t)(bVar4 >> 1);
    sVar1 = sVar10;
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    sVar2 = (ulong)(OVER >> 1);
    if ((OVER & 1) != 0) {
      sVar2 = DAT_01782570;
    }
    if (sVar1 == sVar2) {
                    /* try { // try from 00a6dbe4 to 00b6dc1f has its CatchHandler @ 00a6dd28 */
      pbVar9 = *(byte **)(pbVar6 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar9 = pbVar6 + 1;
      }
      pbVar3 = DAT_01782578;
      if ((OVER & 1) == 0) {
        pbVar3 = &DAT_01782569;
      }
      if ((bVar4 & 1) == 0) {
        while (sVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *pbVar3) goto LAB_00a6dc94;
          pbVar3 = pbVar3 + 1;
          sVar10 = sVar10 - 1;
          sVar1 = sVar10;
        }
        goto LAB_00a6dd2c;
      }
                    /* try { // try from 00a6dc88 to 00b6dcbb has its CatchHandler @ 00a6db90 */
      if ((sVar1 == 0) || (iVar5 = memcmp(pbVar9,pbVar3,sVar1), iVar5 == 0)) goto LAB_00a6dd2c;
    }
LAB_00a6dc94:
    pbVar6 = (byte *)GController::getSelectedPage(*(GController **)(this + 0x298));
    bVar4 = *pbVar6;
    sVar10 = (size_t)(bVar4 >> 1);
    sVar1 = sVar10;
                    /* try { // try from 00a6dcbc to 00b6dccf has its CatchHandler @ 00a6dd28 */
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar6 + 8);
    }
    sVar2 = (ulong)(SELECTED_OVER >> 1);
    if ((SELECTED_OVER & 1) != 0) {
      sVar2 = DAT_01782588;
    }
    if (sVar1 == sVar2) {
                    /* try { // try from 00a6dcd4 to 00b6dce7 has its CatchHandler @ 00a6dd2c */
      pbVar9 = *(byte **)(pbVar6 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar9 = pbVar6 + 1;
      }
      pbVar3 = DAT_01782590;
                    /* try { // try from 00a6dce8 to 00b6dd47 has its CatchHandler @ 00a6db90 */
      if ((SELECTED_OVER & 1) == 0) {
        pbVar3 = &DAT_01782581;
      }
      if ((bVar4 & 1) == 0) {
        while (sVar1 != 0) {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *pbVar3) {
            return;
          }
          pbVar3 = pbVar3 + 1;
          sVar10 = sVar10 - 1;
          sVar1 = sVar10;
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a6dbe4 with catch @ 00a6dd28
                       catch() { ... } // from try @ 00a6dcbc with catch @ 00a6dd28 */
        if ((sVar1 != 0) && (iVar5 = memcmp(pbVar9,pbVar3,sVar1), iVar5 != 0)) {
          return;
        }
      }
LAB_00a6dd2c:
                    /* catch() { ... } // from try @ 00a6dc2c with catch @ 00a6dd2c
                       catch() { ... } // from try @ 00a6dcd4 with catch @ 00a6dd2c */
      setCurrentState(this);
      return;
    }
  }
  return;
}

