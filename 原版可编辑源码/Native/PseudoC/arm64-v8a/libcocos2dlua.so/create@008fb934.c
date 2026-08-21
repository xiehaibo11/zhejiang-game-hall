
/* cocos2d::ComponentLua::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

ComponentLua * cocos2d::ComponentLua::create(basic_string *param_1)

{
  char *pcVar1;
  size_t __n;
  basic_string bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ComponentLua *this;
  basic_string *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [8];
  ulong local_70;
  char *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (uVar7 == 0) {
                    /* catch() { ... } // from try @ 008fb898 with catch @ 008fb99c */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/scripting/lua-bindings/proj.android/../manual/CCComponentLua.cpp"
                        ,"create",0x42);
  }
                    /* catch() { ... } // from try @ 008fb8c0 with catch @ 008fb9a0 */
                    /* catch() { ... } // from try @ 008fb87c with catch @ 008fb9a4 */
  if ((DAT_01781e94 & 1) == 0) {
    lVar5 = LuaEngine::getInstance();
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 8) + 0x28);
    lua_pushstring(uVar10,"component");
    lua_createtable(uVar10,0,0);
    lua_rawset(uVar10,0xffffd8f0);
    DAT_01781e94 = 1;
  }
  plVar6 = (long *)FileUtils::getInstance();
  uVar7 = (**(code **)(*plVar6 + 0x128))(plVar6,param_1);
  if ((uVar7 & 1) != 0) goto LAB_008fbb08;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,".lua");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,".luac");
  bVar2 = *param_1;
  uVar7 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (((byte)local_60[0] & 1) == 0) {
    uVar9 = (ulong)((byte)local_60[0] >> 1);
    uVar11 = uVar9;
  }
  else {
    uVar9 = (ulong)((byte)local_60[0] >> 1);
    uVar11 = local_58;
  }
  pcVar1 = (char *)((ulong)local_60 | 1);
  if (((byte)local_60[0] & 1) != 0) {
    pcVar1 = local_50;
    uVar9 = local_58;
  }
  if ((uVar9 == 0xffffffffffffffff) || (uVar7 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar9;
  if (uVar11 <= uVar9) {
    __n = uVar11;
  }
  if (__n == 0) {
    if (uVar11 == uVar9) goto LAB_008fbab8;
LAB_008fbb64:
    uVar11 = (ulong)((byte)local_78[0] >> 1);
    if (((byte)local_78[0] & 1) != 0) {
      uVar11 = local_70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_1,uVar7 - uVar11,uVar11,pcVar1,uVar9);
  }
  else {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    iVar4 = memcmp(pbVar8 + (uVar7 - uVar11),pcVar1,__n);
    if ((uVar11 != uVar9) || (iVar4 != 0)) goto LAB_008fbb64;
LAB_008fbab8:
    uVar11 = (ulong)((byte)local_78[0] >> 1);
    pcVar1 = (char *)((ulong)local_78 | 1);
    if (((byte)local_78[0] & 1) != 0) {
      uVar11 = local_70;
      pcVar1 = local_68;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_1,uVar7 - uVar9,uVar9,pcVar1,uVar11);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_008fbb08:
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (ComponentLua *)0x0) {
    ComponentLua(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

