
/* cocos2d::ui::TextField::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::TextField::copySpecialProperties(TextField *this,Widget *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00dcfe70 to 00ecfe87 has its CatchHandler @ 00dd0384 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dcfe88 to 00ecfe9b has its CatchHandler @ 00dd03a0 */
                    /* try { // try from 00dcfea0 to 00ecfeb7 has its CatchHandler @ 00dd0368 */
  if ((param_1 == (Widget *)0x0) ||
     (lVar3 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar3 == 0)) goto LAB_00dd00e4;
  (**(code **)(**(long **)(lVar3 + 0x4f0) + 0x590))();
                    /* try { // try from 00dcfebc to 00ecfed3 has its CatchHandler @ 00dd036c */
  setString((basic_string *)this);
  uVar4 = (**(code **)(**(long **)(lVar3 + 0x4f0) + 0x590))();
  (**(code **)(**(long **)(this + 0x4f0) + 0x640))(*(long **)(this + 0x4f0),uVar4);
                    /* try { // try from 00dcfef0 to 00ecfef7 has its CatchHandler @ 00dd0314 */
                    /* try { // try from 00dcfef8 to 00ecff3b has its CatchHandler @ 00dd03b4 */
  this[0x550] = (TextField)0x1;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  setFontSize(this,*(int *)(lVar3 + 0x570));
  setFontName(this,(basic_string *)(lVar3 + 0x558));
  lVar7 = *(long *)(lVar3 + 0x4f0);
  plVar5 = *(long **)(this + 0x4f0);
  *(undefined1 *)(plVar5 + 0xe8) = *(undefined1 *)(lVar7 + 0x740);
  *(undefined4 *)((long)plVar5 + 0x744) = *(undefined4 *)(lVar7 + 0x744);
  (**(code **)(*plVar5 + 0x590))();
  setString((basic_string *)this);
  uVar2 = (**(code **)(**(long **)(lVar3 + 0x4f0) + 0x660))();
                    /* try { // try from 00dcff70 to 00ecff87 has its CatchHandler @ 00dd0374 */
  (**(code **)(**(long **)(this + 0x4f0) + 0x650))(*(long **)(this + 0x4f0),uVar2 & 1);
                    /* try { // try from 00dcff88 to 00ecff9b has its CatchHandler @ 00dd03a4 */
  pbVar6 = (byte *)TextFieldTTF::getPasswordTextStyle(*(TextFieldTTF **)(lVar3 + 0x4f0));
  pbVar9 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar9 = pbVar6 + 1;
  }
                    /* try { // try from 00dcffa0 to 00ecffb7 has its CatchHandler @ 00dd0370 */
  setPasswordStyleText(this,(char *)pbVar9);
  lVar7 = *(long *)(lVar3 + 0x4f0);
  lVar10 = *(long *)(this + 0x4f0);
  *(undefined1 *)(lVar10 + 0x748) = *(undefined1 *)(lVar7 + 0x748);
  *(undefined1 *)(lVar10 + 0x749) = *(undefined1 *)(lVar7 + 0x749);
  *(undefined1 *)(lVar10 + 0x74a) = *(undefined1 *)(lVar7 + 0x74a);
  *(undefined1 *)(lVar10 + 0x74b) = *(undefined1 *)(lVar7 + 0x74b);
  plVar5 = *(long **)(lVar3 + 0x540);
  if (plVar5 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
                    /* try { // try from 00dcffd4 to 00ecffdb has its CatchHandler @ 00dd0330 */
                    /* try { // try from 00dcffdc to 00ed0013 has its CatchHandler @ 00dd039c */
    if ((long *)(lVar3 + 0x520) == plVar5) {
      local_50 = alStack_70;
      (**(code **)(*plVar5 + 0x18))(plVar5,alStack_70);
    }
    else {
      local_50 = (long *)(**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_00dd0184(alStack_70,this + 0x520);
  if (alStack_70 == local_50) {
    pcVar8 = *(code **)(*local_50 + 0x20);
LAB_00dd0048:
                    /* try { // try from 00dd0048 to 00ed005f has its CatchHandler @ 00dd037c */
    (*pcVar8)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar8 = *(code **)(*local_50 + 0x28);
    goto LAB_00dd0048;
  }
  plVar5 = *(long **)(lVar3 + 0x4b0);
  if (plVar5 == (long *)0x0) {
    local_50 = (long *)0x0;
                    /* try { // try from 00dd0078 to 00ed008f has its CatchHandler @ 00dd0360 */
  }
  else if ((long *)(lVar3 + 0x490) == plVar5) {
    local_50 = alStack_70;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_70);
  }
  else {
                    /* try { // try from 00dd0060 to 00ed0073 has its CatchHandler @ 00dd0390 */
    local_50 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  FUN_00dad59c(alStack_70,this + 0x490);
                    /* try { // try from 00dd00ac to 00ed00b3 has its CatchHandler @ 00dd032c */
  if (alStack_70 == local_50) {
    pcVar8 = *(code **)(*local_50 + 0x20);
LAB_00dd00c8:
    (*pcVar8)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00dd00b4 to 00ed00eb has its CatchHandler @ 00dd038c */
    pcVar8 = *(code **)(*local_50 + 0x28);
    goto LAB_00dd00c8;
  }
  uVar11 = *(undefined8 *)(lVar3 + 0x508);
  uVar4 = *(undefined8 *)(lVar3 + 0x518);
  *(undefined8 *)(this + 0x510) = *(undefined8 *)(lVar3 + 0x510);
  *(undefined8 *)(this + 0x508) = uVar11;
  *(undefined8 *)(this + 0x518) = uVar4;
LAB_00dd00e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

