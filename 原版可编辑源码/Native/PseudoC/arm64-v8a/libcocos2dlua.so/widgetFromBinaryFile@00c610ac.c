
/* cocostudio::GUIReader::widgetFromBinaryFile(char const*) */

undefined8 __thiscall cocostudio::GUIReader::widgetFromBinaryFile(GUIReader *this,char *param_1)

{
  stExpCocoNode *psVar1;
  void *pvVar2;
  stExpCocoNode *psVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  GUIReader *extraout_x0;
  GUIReader *this_00;
  Ref *this_01;
  stExpCocoNode *psVar13;
  undefined8 uVar14;
  GUIReader *pGVar15;
  void *__dest;
  bool bVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_158 [8];
  ulong local_150;
  void *local_148;
  ulong local_140;
  stExpCocoNode *psStack_138;
  void *local_130;
  Data aDStack_120 [16];
  byte local_110 [16];
  void *local_100;
  ulong local_f8;
  stExpCocoNode *local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_f0 = (stExpCocoNode *)0x0;
  local_e8 = (void *)0x0;
  local_f8 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  puStack_c8 = operator_new(0x28);
  puStack_c8[3] = 0;
  puStack_c8[4] = 0;
  puStack_c8[1] = 0x10000;
  puStack_c8[2] = 0;
  *puStack_c8 = 0;
  puStack_c0 = puStack_c8;
  sVar8 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_f8
         ,param_1,sVar8);
  pvVar2 = (void *)((ulong)&local_f8 | 1);
  psVar3 = (stExpCocoNode *)(local_f8 >> 1 & 0x7f);
  if ((local_f8 & 1) != 0) {
    pvVar2 = local_e8;
    psVar3 = local_f0;
  }
  psVar13 = psVar3;
  if (psVar3 == (stExpCocoNode *)0x0) {
LAB_00c61184:
    psVar13 = (stExpCocoNode *)0xffffffffffffffff;
  }
  else {
    do {
      if (psVar13 == (stExpCocoNode *)0x0) goto LAB_00c61184;
      psVar1 = (stExpCocoNode *)((long)pvVar2 + (long)psVar13);
      psVar13 = psVar13 + -1;
    } while (psVar1[-1] != (stExpCocoNode)0x2f);
  }
  if (psVar13 + 1 <= psVar3) {
    psVar3 = psVar13 + 1;
  }
  psStack_138 = (stExpCocoNode *)0x0;
  local_130 = (void *)0x0;
  local_140 = 0;
  if ((stExpCocoNode *)0xffffffffffffffef < psVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (psVar3 < (stExpCocoNode *)0x17) {
    __dest = (void *)((ulong)&local_140 | 1);
    local_140 = (ulong)(byte)((int)psVar3 << 1);
    if (psVar3 != (stExpCocoNode *)0x0) goto LAB_00c611e4;
  }
  else {
    __dest = operator_new((ulong)(psVar3 + 0x10) & 0xfffffffffffffff0);
    local_140 = (ulong)(psVar3 + 0x10) & 0xfffffffffffffff0 | 1;
    psStack_138 = psVar3;
    local_130 = __dest;
LAB_00c611e4:
    memcpy(__dest,pvVar2,(size_t)psVar3);
  }
  *(stExpCocoNode *)((long)__dest + (long)psVar3) = (stExpCocoNode)0x0;
  pGVar15 = this + 0x28;
  if (((byte)*pGVar15 & 1) == 0) {
    *(undefined2 *)pGVar15 = 0;
  }
  else {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((byte)this[0x28] & 1) != 0) {
      operator_delete(*(void **)(this + 0x38));
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  *(void **)(this + 0x38) = local_130;
  *(stExpCocoNode **)(this + 0x30) = psStack_138;
  *(ulong *)pGVar15 = local_140;
  plVar9 = (long *)cocos2d::FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_140,param_1);
  (**(code **)(*plVar9 + 0x50))(local_110,plVar9,&local_140);
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  plVar9 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar9 + 0x28))(aDStack_120,plVar9,local_110);
  pcVar10 = (char *)cocos2d::Data::getBytes(aDStack_120);
  lVar11 = cocos2d::Data::getSize(aDStack_120);
  uVar14 = 0;
  if ((pcVar10 == (char *)0x0) || (lVar11 < 1)) goto LAB_00c61488;
  CocoLoader::CocoLoader((CocoLoader *)&local_140);
  uVar12 = CocoLoader::ReadCocoBinBuff((CocoLoader *)&local_140,pcVar10);
  psVar3 = psStack_138;
  if (((uVar12 & 1) == 0) ||
     (iVar6 = stExpCocoNode::GetType(psStack_138,(CocoLoader *)&local_140), 1 < iVar6 - 3U)) {
    uVar14 = 0;
  }
  else {
    psVar13 = (stExpCocoNode *)stExpCocoNode::GetChildArray(psVar3,(CocoLoader *)&local_140);
    pGVar15 = (GUIReader *)&DAT_013c996e;
    lVar11 = -1;
    do {
      this_00 = (GUIReader *)stExpCocoNode::GetChildNum(psVar3);
      lVar11 = lVar11 + 1;
      if ((int)this_00 <= lVar11) break;
      pcVar10 = (char *)stExpCocoNode::GetName(psVar13,(CocoLoader *)&local_140);
      this_00 = (GUIReader *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>(local_158,pcVar10);
      bVar5 = local_158[0];
      uVar12 = (ulong)((byte)local_158[0] >> 1);
      if (((byte)local_158[0] & 1) != 0) {
        uVar12 = local_150;
      }
      if (uVar12 == 7) {
        pvVar2 = (void *)((ulong)local_158 | 1);
        if (((byte)local_158[0] & 1) != 0) {
          pvVar2 = local_148;
        }
        uVar7 = memcmp(pvVar2,"version",7);
        this_00 = (GUIReader *)(ulong)uVar7;
        if (uVar7 != 0) goto LAB_00c61318;
        this_00 = (GUIReader *)stExpCocoNode::GetValue(psVar13,(CocoLoader *)&local_140);
        bVar16 = false;
        pGVar15 = this_00;
        bVar5 = local_158[0];
      }
      else {
LAB_00c61318:
        bVar16 = true;
      }
      if (((byte)bVar5 & 1) != 0) {
        operator_delete(local_148);
        this_00 = extraout_x0;
      }
      psVar13 = psVar13 + 0x10;
    } while (bVar16);
    if (pGVar15 == (GUIReader *)0x0) {
      this_01 = operator_new(0x40,(nothrow_t *)&std::nothrow);
      cocos2d::Ref::Ref(this_01);
LAB_00c61418:
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      uVar14 = 0;
      *(undefined ***)this_01 = &PTR__WidgetPropertiesReader_016ca698;
    }
    else {
      iVar6 = getVersionInteger(this_00,(char *)pGVar15);
      this_01 = operator_new(0x40,(nothrow_t *)&std::nothrow);
      if (iVar6 < 0xfa) {
        cocos2d::Ref::Ref(this_01);
        goto LAB_00c61418;
      }
      cocos2d::Ref::Ref(this_01);
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      *(undefined ***)this_01 = &PTR__WidgetPropertiesReader_016ca788;
      uVar14 = WidgetPropertiesReader0300::createWidgetFromBinary
                         ((WidgetPropertiesReader0300 *)this_01,(CocoLoader *)&local_140,psVar3,
                          param_1);
    }
    (**(code **)(*(long *)this_01 + 8))(this_01);
  }
  CocoLoader::~CocoLoader((CocoLoader *)&local_140);
LAB_00c61488:
  cocos2d::Data::~Data(aDStack_120);
  if ((local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_e0);
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}

