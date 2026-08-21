
/* cocostudio::GUIReader::widgetFromJsonFile(char const*) */

undefined8 __thiscall cocostudio::GUIReader::widgetFromJsonFile(GUIReader *this,char *param_1)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  DictionaryHelper *this_00;
  GUIReader *this_01;
  Ref *this_02;
  undefined8 uVar6;
  ulong uVar7;
  GUIReader *pGVar8;
  void *__dest;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e8;
  ulong local_e0;
  void *local_d8;
  void *local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_e8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_70 = 0x400;
  local_68 = 0;
  local_60 = 0;
  puStack_a8 = operator_new(0x28);
  puStack_a8[3] = 0;
  puStack_a8[4] = 0;
  puStack_a8[1] = 0x10000;
  puStack_a8[2] = 0;
  *puStack_a8 = 0;
  puStack_a0 = puStack_a8;
  sVar4 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_e8
         ,param_1,sVar4);
  __src = (void *)((ulong)&local_e8 | 1);
  __n = local_e8 >> 1 & 0x7f;
  if ((local_e8 & 1) != 0) {
    __src = local_d8;
    __n = local_e0;
  }
  uVar7 = __n;
  if (__n == 0) {
LAB_00c60774:
    uVar7 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar7 == 0) goto LAB_00c60774;
      lVar2 = uVar7 - 1;
      uVar7 = uVar7 - 1;
    } while (*(char *)((long)__src + lVar2) != '/');
  }
  if (uVar7 + 1 <= __n) {
    __n = uVar7 + 1;
  }
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_100 | 1);
    local_100 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00c607e4;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_100 = uVar7 | 1;
    uStack_f8 = __n;
    local_f0 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_00c607e4:
  *(undefined1 *)((long)__dest + __n) = 0;
  pGVar8 = this + 0x28;
  if (((byte)*pGVar8 & 1) == 0) {
    *(undefined2 *)pGVar8 = 0;
  }
  else {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((byte)this[0x28] & 1) != 0) {
      operator_delete(*(void **)(this + 0x38));
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  *(void **)(this + 0x38) = local_f0;
  *(ulong *)(this + 0x30) = uStack_f8;
  *(ulong *)pGVar8 = local_100;
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x18))(&local_100,plVar5,&local_e8);
  local_d0 = (void *)((ulong)&local_100 | 1);
  if ((local_100 & 1) != 0) {
    local_d0 = local_f0;
  }
  pvStack_c8 = local_d0;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
            ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              *)&local_c0,(GenericStringStream *)&local_d0);
  this_00 = (DictionaryHelper *)DictionaryHelper::getInstance();
  this_01 = (GUIReader *)
            DictionaryHelper::getStringValue_json
                      (this_00,(GenericValue *)&local_c0,"version",(char *)0x0);
  if (this_01 == (GUIReader *)0x0) {
    this_02 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (this_02 != (Ref *)0x0) {
      cocos2d::Ref::Ref(this_02);
      *(undefined8 *)(this_02 + 0x28) = 0;
      *(undefined8 *)(this_02 + 0x30) = 0;
      *(undefined8 *)(this_02 + 0x38) = 0;
      *(undefined ***)this_02 = &PTR__WidgetPropertiesReader_016ca698;
    }
    if (((byte)*pGVar8 & 1) == 0) {
      pGVar8 = this + 0x29;
    }
    else {
      pGVar8 = *(GUIReader **)(this + 0x38);
    }
    uVar6 = (**(code **)(*(long *)this_02 + 0x10))(this_02,&local_c0,pGVar8,param_1);
  }
  else {
    iVar3 = getVersionInteger(this_01,(char *)this_01);
    this_02 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (iVar3 < 0xfa) {
      if (this_02 != (Ref *)0x0) {
        cocos2d::Ref::Ref(this_02);
        *(undefined8 *)(this_02 + 0x28) = 0;
        *(undefined8 *)(this_02 + 0x30) = 0;
        *(undefined8 *)(this_02 + 0x38) = 0;
        *(undefined ***)this_02 = &PTR__WidgetPropertiesReader_016ca698;
      }
      if (((byte)*pGVar8 & 1) == 0) {
        pGVar8 = this + 0x29;
      }
      else {
        pGVar8 = *(GUIReader **)(this + 0x38);
      }
      uVar6 = (**(code **)(*(long *)this_02 + 0x10))(this_02,&local_c0,pGVar8,param_1);
    }
    else {
      if (this_02 != (Ref *)0x0) {
        cocos2d::Ref::Ref(this_02);
        *(undefined8 *)(this_02 + 0x28) = 0;
        *(undefined8 *)(this_02 + 0x30) = 0;
        *(undefined8 *)(this_02 + 0x38) = 0;
        *(undefined ***)this_02 = &PTR__WidgetPropertiesReader_016ca788;
      }
      if (((byte)*pGVar8 & 1) == 0) {
        pGVar8 = this + 0x29;
      }
      else {
        pGVar8 = *(GUIReader **)(this + 0x38);
      }
      uVar6 = (**(code **)(*(long *)this_02 + 0x10))(this_02,&local_c0,pGVar8,param_1);
    }
  }
  (**(code **)(*(long *)this_02 + 8))(this_02);
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)&local_c0);
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

