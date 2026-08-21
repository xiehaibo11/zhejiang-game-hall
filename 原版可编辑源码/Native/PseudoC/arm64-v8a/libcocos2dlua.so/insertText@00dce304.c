
/* cocos2d::ui::UICCTextField::insertText(char const*, unsigned long) */

void cocos2d::ui::UICCTextField::insertText(char *param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  basic_string *pbVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong in_x2;
  ulong in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [8];
  ulong uStack_70;
  char *local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dce33c to 00ece34f has its CatchHandler @ 00dced74 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,(char *)param_2);
  iVar3 = strcmp((char *)param_2,"\n");
                    /* try { // try from 00dce354 to 00ece36b has its CatchHandler @ 00dce91c */
  if ((iVar3 != 0) && (param_1[0x740] != '\0')) {
    pbVar4 = (basic_string *)(**(code **)(*(long *)param_1 + 0x590))(param_1);
                    /* try { // try from 00dce36c to 00ece37f has its CatchHandler @ 00dce878 */
    lVar5 = StringUtils::getCharacterCountInUTF8String(pbVar4);
    if (*(int *)(param_1 + 0x744) <= lVar5) {
                    /* try { // try from 00dce3dc to 00ece403 has its CatchHandler @ 00dce908 */
      uVar7 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
      if ((uVar7 & 1) != 0) {
        pbVar4 = (basic_string *)(**(code **)(*(long *)param_1 + 0x590))(param_1);
        setPasswordText((UICCTextField *)param_1,pbVar4);
      }
      goto LAB_00dce474;
    }
                    /* try { // try from 00dce384 to 00ece3b3 has its CatchHandler @ 00dceb60 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,(char *)param_2);
    lVar6 = StringUtils::getCharacterCountInUTF8String((basic_string *)local_78);
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((long)*(int *)(param_1 + 0x744) < lVar6 + lVar5) {
                    /* try { // try from 00dce3c4 to 00ece3d7 has its CatchHandler @ 00dce868 */
      Helper::getSubStringOfUTF8String
                ((Helper *)&local_60,(basic_string *)0x0,*(int *)(param_1 + 0x744) - lVar5,in_x3);
      if (((byte)local_60._0_1_ & 1) != 0) {
                    /* try { // try from 00dce414 to 00ece453 has its CatchHandler @ 00dce980 */
        *local_50 = '\0';
        uStack_58 = 0;
        if (((byte)local_60._0_1_ & 1) != 0) {
          operator_delete(local_50);
        }
      }
      local_60 = (ulong)(byte)local_78[0];
      uStack_58 = uStack_70;
      local_50 = local_68;
      in_x2 = uStack_70;
      if (((byte)local_78[0] & 1) == 0) {
        in_x2 = (ulong)((byte)local_78[0] >> 1);
      }
    }
  }
  pcVar1 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pcVar1 = local_50;
  }
  TextFieldTTF::insertText((TextFieldTTF *)param_1,pcVar1,in_x2);
LAB_00dce474:
  if (((byte)local_60._0_1_ & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

