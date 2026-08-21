
/* cocos2d::ui::RichText::initWithXML(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> const&) */

uint __thiscall
cocos2d::ui::RichText::initWithXML
          (RichText *this,basic_string *param_1,unordered_map *param_2,function *param_3)

{
  basic_string *pbVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  SAXParser aSStack_a0 [8];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  RichText *local_80;
  void *local_78;
  void *local_70;
  RichText **local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_017889b0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_017889b0), iVar7 != 0)) {
    DAT_01788980 = &PTR_FUN_016e2c28;
    DAT_017889a0 = (long *)&DAT_01788980;
    __cxa_atexit(std::__ndk1::
                 function<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(cocos2d::ui::RichText*)>
                 ::~function,&DAT_01788980,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017889b0);
  }
  uVar8 = Widget::init((Widget *)this);
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
    goto LAB_00dd4d8c;
  }
  setDefaults(this,param_2);
  plVar9 = *(long **)(param_3 + 0x20);
  if (plVar9 == (long *)0x0) {
    local_60 = (RichText **)0x0;
  }
  else if ((long *)param_3 == plVar9) {
    local_60 = &local_80;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
  }
  else {
    local_60 = (RichText **)(**(code **)(*plVar9 + 0x10))();
  }
  FUN_008f7af0(&local_80,this + 0x570);
  if (&local_80 == local_60) {
    pcVar10 = *(code **)(*local_60 + 0x20);
LAB_00dd4c60:
    (*pcVar10)();
  }
  else if (local_60 != (RichText **)0x0) {
    pcVar10 = *(code **)(*local_60 + 0x28);
    goto LAB_00dd4c60;
  }
  local_80 = this;
  if (DAT_017889a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*DAT_017889a0 + 0x30))(local_98,DAT_017889a0,&local_80);
  uVar8 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar8 = (ulong)((byte)*param_1 >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_98,(char *)pbVar1,uVar8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_98,"</font>",7);
  MyXMLVisitor::MyXMLVisitor((MyXMLVisitor *)&local_80,this);
  SAXParser::SAXParser(aSStack_a0);
  SAXParser::setDelegator(aSStack_a0,(SAXDelegator *)&local_80);
  uVar8 = (ulong)((byte)local_98[0] >> 1);
  pcVar3 = (char *)((ulong)local_98 | 1);
  if (((byte)local_98[0] & 1) != 0) {
    uVar8 = local_90;
    pcVar3 = local_88;
  }
  uVar6 = SAXParser::parseIntrusive(aSStack_a0,pcVar3,uVar8);
  SAXParser::~SAXParser(aSStack_a0);
  pvVar5 = local_78;
  local_80 = (RichText *)&PTR__MyXMLVisitor_016e1d58;
  if (local_78 != (void *)0x0) {
    while (pvVar4 = local_70, pvVar4 != pvVar5) {
      if ((*(byte *)((long)pvVar4 + -0x48) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x38));
      }
      local_70 = (void *)((long)pvVar4 + -0x60);
      if ((*(byte *)((long)pvVar4 + -0x60) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x50));
      }
    }
    local_70 = pvVar5;
    operator_delete(local_78);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00dd4d8c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

