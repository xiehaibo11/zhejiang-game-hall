
/* fairygui::ChangePageAction::enter(fairygui::GController*) */

void __thiscall fairygui::ChangePageAction::enter(ChangePageAction *this,GController *param_1)

{
  size_t sVar1;
  basic_string bVar2;
  int iVar3;
  int iVar4;
  GComponent *this_00;
  long lVar5;
  GController *this_01;
  ChangePageAction *pCVar6;
  basic_string *pbVar7;
  ulong uVar8;
  
                    /* try { // try from 00abf1cc to 00bbf2fb has its CatchHandler @ 00abf1cc
                       catch() { ... } // from try @ 00abf1cc with catch @ 00abf1cc
                       catch() { ... } // from try @ 00abf37c with catch @ 00abf1cc */
  bVar2 = *(basic_string *)(this + 0x50);
  if (((byte)bVar2 & 1) == 0) {
    if ((byte)bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(this + 0x58) == 0) {
    return;
  }
  bVar2 = *(basic_string *)(this + 0x38);
  if (((byte)bVar2 & 1) == 0) {
    this_00 = *(GComponent **)(param_1 + 0x68);
    if ((byte)bVar2 >> 1 == 0) goto joined_r0x00abf23c;
  }
  else {
    this_00 = *(GComponent **)(param_1 + 0x68);
    if (*(long *)(this + 0x40) == 0) goto joined_r0x00abf23c;
  }
  lVar5 = GComponent::getChildById(this_00,(basic_string *)(this + 0x38));
  if (lVar5 == 0) {
    return;
  }
  this_00 = (GComponent *)__dynamic_cast(lVar5,&GObject::typeinfo,&GComponent::typeinfo,0);
joined_r0x00abf23c:
  if ((((this_00 != (GComponent *)0x0) &&
       (this_01 = (GController *)GComponent::getController(this_00,(basic_string *)(this + 0x50)),
       this_01 != (GController *)0x0)) && (this_01 != param_1)) &&
     (this_01[0x60] == (GController)0x0)) {
    bVar2 = *(basic_string *)(this + 0x68);
    if (((byte)bVar2 & 1) == 0) {
      uVar8 = (ulong)((byte)bVar2 >> 1);
      pCVar6 = this + 0x69;
    }
    else {
      uVar8 = *(ulong *)(this + 0x70);
      pCVar6 = *(ChangePageAction **)(this + 0x78);
    }
    sVar1 = 2;
    if (uVar8 < 3) {
      sVar1 = uVar8;
    }
    if (((sVar1 != 0) && (iVar3 = memcmp(pCVar6,&DAT_013cfe5d,sVar1), iVar3 != 0)) ||
       (2 < uVar8 == 1 < uVar8)) {
      if (((byte)bVar2 & 1) == 0) {
        uVar8 = (ulong)((byte)bVar2 >> 1);
        pCVar6 = this + 0x69;
      }
      else {
        uVar8 = *(ulong *)(this + 0x70);
        pCVar6 = *(ChangePageAction **)(this + 0x78);
      }
      sVar1 = 2;
      if (uVar8 < 3) {
        sVar1 = uVar8;
      }
                    /* try { // try from 00abf330 to 00bbf343 has its CatchHandler @ 00abf3c8 */
                    /* try { // try from 00abf348 to 00bbf37b has its CatchHandler @ 00abf3cc */
      if (((sVar1 == 0) || (iVar3 = memcmp(pCVar6,&DAT_013cfe60,sVar1), iVar3 == 0)) &&
         (2 < uVar8 != 1 < uVar8)) {
        pbVar7 = (basic_string *)GController::getSelectedPage(param_1);
                    /* try { // try from 00abf37c to 00bbf417 has its CatchHandler @ 00abf1cc */
        GController::setSelectedPage(this_01,pbVar7,true);
        return;
      }
      GController::setSelectedPageId(this_01,(basic_string *)(this + 0x68),true);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x70);
    iVar4 = GController::getPageCount(this_01);
    if (iVar3 < iVar4) {
                    /* try { // try from 00abf2fc to 00bbf32f has its CatchHandler @ 00abf3fc */
      GController::setSelectedIndex(this_01,*(int *)(param_1 + 0x70),true);
      return;
    }
  }
  return;
}

