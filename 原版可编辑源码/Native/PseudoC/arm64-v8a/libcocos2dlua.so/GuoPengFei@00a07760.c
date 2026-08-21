
/* universe::network::GuoPengFei::GuoPengFei() */

void __thiscall universe::network::GuoPengFei::GuoPengFei(GuoPengFei *this)

{
  ShowLineNumbers *this_00;
  long lVar1;
  int iVar2;
  void *__s;
  char *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  GuoPengFei *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR__GuoPengFei_016a1f20;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 00a077b4 to 00b077e7 has its CatchHandler @ 00a078b4 */
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  __s = operator_new(0x10000);
                    /* try { // try from 00a077e8 to 00b077fb has its CatchHandler @ 00a07880 */
  *(void **)(this + 0x390) = __s;
  *(long *)(this + 0x3a0) = (long)__s + 0x10000;
  memset(__s,0,0x10000);
  *(long *)(this + 0x398) = (long)__s + 0x10000;
                    /* try { // try from 00a07800 to 00b07833 has its CatchHandler @ 00a07884 */
  iVar2 = Touchbar::Touchbar()::a + 1;
  *(int *)(this + 0x3a8) = Touchbar::Touchbar()::a;
  Touchbar::Touchbar()::a = iVar2;
  pcVar3 = (char *)Translated::getInstance();
  Translated::log(pcVar3,"Touchbar init size=%d %d",
                  *(long *)(this + 0x398) - *(long *)(this + 0x390),(ulong)*(uint *)(this + 0x3a8));
                    /* try { // try from 00a07834 to 00b078cf has its CatchHandler @ 00a076b8 */
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined4 *)(this + 0x3d8) = 0x3f800000;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x43c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x424) = 0;
  *(undefined8 *)(this + 0x41c) = 0;
  *(undefined8 *)(this + 0x434) = 0;
  *(undefined8 *)(this + 0x42c) = 0;
  *(undefined2 *)(this + 0x458) = 0x100;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined4 *)(this + 0x460) = 200;
  *(undefined8 *)(this + 0x490) = 0;
                    /* catch() { ... } // from try @ 00a077e8 with catch @ 00a07880 */
  this[0x4a0] = (GuoPengFei)0x0;
                    /* catch() { ... } // from try @ 00a07800 with catch @ 00a07884 */
  this_00 = (ShowLineNumbers *)(this + 0x3b8);
  iVar2 = DAT_01782368 + 1;
  *(int *)(this + 0x45c) = DAT_01782368;
  DAT_01782368 = iVar2;
  pcVar3 = (char *)Translated::getInstance();
  Translated::log(pcVar3,"GuoPengFei new %d",(ulong)*(uint *)(this + 0x45c));
  uVar4 = uv_default_loop();
                    /* catch() { ... } // from try @ 00a077b4 with catch @ 00a078b4 */
  uv_timer_init(uVar4,this + 0xe8);
  uVar4 = uv_default_loop();
  uv_timer_init(uVar4,this + 0x180);
  uVar4 = uv_default_loop();
  uv_timer_init(uVar4,this + 0x218);
  local_80 = &PTR_FUN_016a2180;
  uStack_70 = 0;
  local_78 = onEncryptVer;
  local_68 = this;
  local_60 = (long *)&local_80;
  ShowLineNumbers::setCallback(this_00,0,1,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00a07934:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00a07934;
  }
  local_80 = &PTR_FUN_016a2180;
                    /* try { // try from 00a07948 to 00b0797f has its CatchHandler @ 00a07948
                       catch() { ... } // from try @ 00a07948 with catch @ 00a07948
                       catch() { ... } // from try @ 00a079c4 with catch @ 00a07948
                       catch() { ... } // from try @ 00a07a40 with catch @ 00a07948 */
  uStack_70 = 0;
  local_78 = onRespKey;
  local_68 = this;
  local_60 = (long *)&local_80;
  ShowLineNumbers::setCallback(this_00,0,4,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00a07994:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
                    /* try { // try from 00a07980 to 00b07997 has its CatchHandler @ 00a07a58 */
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00a07994;
  }
                    /* try { // try from 00a0799c to 00b079c3 has its CatchHandler @ 00a07a54 */
  local_80 = &PTR_FUN_016a2180;
  uStack_70 = 0;
  local_78 = onCheckAct;
  local_68 = this;
  local_60 = (long *)&local_80;
                    /* try { // try from 00a079c4 to 00b079eb has its CatchHandler @ 00a07948 */
  ShowLineNumbers::setCallback(this_00,0,2,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
                    /* try { // try from 00a079ec to 00b079ff has its CatchHandler @ 00a07a58 */
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00a079f4:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00a079f4;
  }
  local_80 = &PTR_FUN_016a2180;
  uStack_70 = 0;
  local_78 = onRespKey;
  local_68 = this;
  local_60 = (long *)&local_80;
  ShowLineNumbers::setCallback(this_00,0,0xc,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00a07a50;
                    /* try { // try from 00a07a38 to 00b07a3f has its CatchHandler @ 00a07a54 */
    pcVar5 = *(code **)(*local_60 + 0x28);
                    /* try { // try from 00a07a40 to 00b07a73 has its CatchHandler @ 00a07948 */
  }
  (*pcVar5)();
LAB_00a07a50:
                    /* catch() { ... } // from try @ 00a0799c with catch @ 00a07a54
                       catch() { ... } // from try @ 00a07a38 with catch @ 00a07a54 */
                    /* catch() { ... } // from try @ 00a07980 with catch @ 00a07a58
                       catch() { ... } // from try @ 00a079ec with catch @ 00a07a58 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

