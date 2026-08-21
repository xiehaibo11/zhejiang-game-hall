
/* cocos2d::TextFieldTTF::controlKey(cocos2d::EventKeyboard::KeyCode) */

void __thiscall cocos2d::TextFieldTTF::controlKey(TextFieldTTF *this,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  byte local_58 [16];
  void *local_48;
  StringUTF8 aSStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00f57020 to 01057033 has its CatchHandler @ 00f57680 */
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x710] == (TextFieldTTF)0x0) goto switchD_00f57054_caseD_7;
  switch(param_2) {
  case 6:
    (**(code **)(*(long *)this + 0x618))(this);
                    /* try { // try from 00f57130 to 0105715b has its CatchHandler @ 00f5769c */
  default:
    goto switchD_00f57054_caseD_7;
  case 0x15:
  case 0x24:
    lVar3 = *(long *)this;
    *(undefined8 *)(this + 0x718) = 0;
    *(undefined4 *)(this + 0x724) = 0x3f800000;
    goto LAB_00f5715c;
  case 0x17:
  case 0x2e:
    if (*(ulong *)(this + 0x718) < *(ulong *)(this + 0x6b0)) {
      StringUtils::StringUTF8::StringUTF8(aSStack_40);
                    /* try { // try from 00f57088 to 010570b3 has its CatchHandler @ 00f576a0 */
      StringUtils::StringUTF8::replace(aSStack_40,(basic_string *)(this + 0x6b8));
      StringUtils::StringUTF8::deleteChar(aSStack_40,*(ulong *)(this + 0x718));
      if ((this[0x710] != (TextFieldTTF)0x0) &&
         (*(ulong *)(this + 0x718) <= *(ulong *)(this + 0x6b0))) {
        *(undefined4 *)(this + 0x724) = 0x3f800000;
      }
      uVar2 = StringUtils::StringUTF8::length(aSStack_40);
      *(undefined8 *)(this + 0x6b0) = uVar2;
                    /* try { // try from 00f570c8 to 010570db has its CatchHandler @ 00f5767c */
      StringUtils::StringUTF8::getAsCharSequence();
      (**(code **)(*(long *)this + 0x588))(this,local_58);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      StringUtils::StringUTF8::~StringUTF8(aSStack_40);
    }
    goto switchD_00f57054_caseD_7;
  case 0x18:
    *(undefined4 *)(this + 0x724) = 0x3f800000;
    *(undefined8 *)(this + 0x718) = *(undefined8 *)(this + 0x6b0);
    pcVar5 = *(code **)(*(long *)this + 0x588);
    break;
  case 0x1a:
    if (*(long *)(this + 0x718) == 0) goto switchD_00f57054_caseD_7;
    uVar4 = *(long *)(this + 0x718) - 1;
    if (uVar4 <= *(ulong *)(this + 0x6b0)) {
      *(ulong *)(this + 0x718) = uVar4;
      *(undefined4 *)(this + 0x724) = 0x3f800000;
    }
    lVar3 = *(long *)this;
LAB_00f5715c:
    pcVar5 = *(code **)(lVar3 + 0x588);
    break;
  case 0x1b:
    if (*(ulong *)(this + 0x6b0) <= *(ulong *)(this + 0x718)) goto switchD_00f57054_caseD_7;
    *(ulong *)(this + 0x718) = *(ulong *)(this + 0x718) + 1;
    *(undefined4 *)(this + 0x724) = 0x3f800000;
    pcVar5 = *(code **)(*(long *)this + 0x588);
  }
  (*pcVar5)(this,this + 0x6b8);
switchD_00f57054_caseD_7:
                    /* try { // try from 00f5716c to 0105717f has its CatchHandler @ 00f57678 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

