
/* fairygui::UIPackage::addPackage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

UIPackage * fairygui::UIPackage::addPackage(basic_string *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Image *this;
  Texture2D *this_00;
  long *plVar5;
  char *pcVar6;
  Ref *pRVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  ulong uVar8;
  UIPackage *pUVar9;
  Ref *local_a8;
  ByteBuffer local_a0 [16];
  void *local_90;
  int local_78 [2];
  Data aDStack_70 [16];
  basic_string *local_60;
  Data *pDStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                      *)&_packageInstById,param_1);
  if (lVar4 == 0) {
    if (_emptyTexture == (Texture2D *)0x0) {
      this = operator_new(0x170);
      cocos2d::Image::Image(this);
      cocos2d::Image::initWithRawData(this,emptyTextureData,0x10,2,2,4,false);
      this_00 = operator_new(0x88);
      cocos2d::Texture2D::Texture2D(this_00);
      _emptyTexture = this_00;
      cocos2d::Texture2D::initWithImage(this_00,this);
      (**(code **)(*(long *)this + 8))(this);
    }
    cocos2d::Data::Data(aDStack_70);
    plVar5 = (long *)cocos2d::FileUtils::getInstance();
    FUN_007c1fb0(local_a0,param_1,&DAT_013ce024);
    pDStack_58 = aDStack_70;
    local_60 = (basic_string *)&PTR__ResizableBuffer_016a7778;
    iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,local_a0,&local_60);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if (iVar3 == 0) {
      pcVar6 = (char *)cocos2d::Data::takeBuffer(aDStack_70,(long *)local_78);
      ByteBuffer::ByteBuffer(local_a0,pcVar6,0,local_78[0],true);
      pRVar7 = operator_new(0x168);
      cocos2d::Ref::Ref(pRVar7);
      *(undefined8 *)(pRVar7 + 0x30) = 0;
      *(undefined8 *)(pRVar7 + 0x28) = 0;
      *(undefined ***)pRVar7 = &PTR__UIPackage_016a7740;
      this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (pRVar7 + 0x58);
      *(undefined8 *)(pRVar7 + 0x60) = 0;
      *(undefined8 *)this_01 = 0;
      *(undefined4 *)(pRVar7 + 0xa8) = 0x3f800000;
      *(undefined4 *)(pRVar7 + 0xd0) = 0x3f800000;
      *(undefined4 *)(pRVar7 + 0xf8) = 0x3f800000;
      *(undefined8 *)(pRVar7 + 0x40) = 0;
      *(undefined8 *)(pRVar7 + 0x38) = 0;
      *(undefined8 *)(pRVar7 + 0x50) = 0;
      *(undefined8 *)(pRVar7 + 0x48) = 0;
      *(undefined8 *)(pRVar7 + 0x70) = 0;
      *(undefined8 *)(pRVar7 + 0x68) = 0;
      *(undefined8 *)(pRVar7 + 0x80) = 0;
      *(undefined8 *)(pRVar7 + 0x78) = 0;
      *(undefined8 *)(pRVar7 + 0x90) = 0;
      *(undefined8 *)(pRVar7 + 0x88) = 0;
      *(undefined8 *)(pRVar7 + 0xa0) = 0;
      *(undefined8 *)(pRVar7 + 0x98) = 0;
      *(undefined8 *)(pRVar7 + 0xb8) = 0;
      *(undefined8 *)(pRVar7 + 0xb0) = 0;
      *(undefined8 *)(pRVar7 + 200) = 0;
      *(undefined8 *)(pRVar7 + 0xc0) = 0;
      *(undefined8 *)(pRVar7 + 0xe0) = 0;
      *(undefined8 *)(pRVar7 + 0xd8) = 0;
      *(undefined8 *)(pRVar7 + 0xf0) = 0;
      *(undefined8 *)(pRVar7 + 0xe8) = 0;
      *(undefined8 *)(pRVar7 + 0x148) = 0;
      *(undefined8 *)(pRVar7 + 0x140) = 0;
      *(undefined8 *)(pRVar7 + 0x158) = 0;
      *(undefined8 *)(pRVar7 + 0x150) = 0;
      *(undefined8 *)(pRVar7 + 0x128) = 0;
      *(undefined8 *)(pRVar7 + 0x120) = 0;
      *(undefined8 *)(pRVar7 + 0x138) = 0;
      *(undefined8 *)(pRVar7 + 0x130) = 0;
      *(undefined8 *)(pRVar7 + 0x108) = 0;
      *(undefined8 *)(pRVar7 + 0x100) = 0;
      *(undefined8 *)(pRVar7 + 0x118) = 0;
      *(undefined8 *)(pRVar7 + 0x110) = 0;
      *(undefined4 *)(pRVar7 + 0x160) = 0xffffffff;
      local_a8 = pRVar7;
      if (this_01 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)
      {
        uVar8 = *(ulong *)(param_1 + 8);
        pbVar1 = *(basic_string **)(param_1 + 0x10);
        if (((byte)*param_1 & 1) == 0) {
          pbVar1 = param_1 + 1;
          uVar8 = (ulong)((byte)*param_1 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(this_01,(char *)pbVar1,uVar8);
      }
      pRVar7 = local_a8;
      uVar8 = loadPackage((UIPackage *)local_a8,local_a0);
      if ((uVar8 & 1) == 0) {
        if (pRVar7 != (Ref *)0x0) {
          (**(code **)(*(long *)pRVar7 + 8))(pRVar7);
        }
        pUVar9 = (UIPackage *)0x0;
      }
      else {
        local_60 = (basic_string *)(pRVar7 + 0x28);
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)&_packageInstById,(piecewise_construct_t *)local_60,
                           (tuple *)&DAT_013ce052,(tuple *)&local_60);
        local_60 = (basic_string *)(pRVar7 + 0x40);
        *(Ref **)(lVar4 + 0x28) = pRVar7;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)&_packageInstByName,(piecewise_construct_t *)local_60,
                           (tuple *)&DAT_013ce052,(tuple *)&local_60);
        *(Ref **)(lVar4 + 0x28) = pRVar7;
        local_60 = param_1;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::UIPackage*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)&_packageInstById,(piecewise_construct_t *)param_1,
                           (tuple *)&DAT_013ce052,(tuple *)&local_60);
        *(Ref **)(lVar4 + 0x28) = pRVar7;
        if (DAT_01782970 == DAT_01782978) {
          std::__ndk1::vector<fairygui::UIPackage*,std::__ndk1::allocator<fairygui::UIPackage*>>::
          __push_back_slow_path<fairygui::UIPackage*const&>
                    ((vector<fairygui::UIPackage*,std::__ndk1::allocator<fairygui::UIPackage*>> *)
                     &_packageList,(UIPackage **)&local_a8);
          pUVar9 = (UIPackage *)local_a8;
        }
        else {
          *DAT_01782970 = pRVar7;
          pUVar9 = (UIPackage *)local_a8;
          DAT_01782970 = DAT_01782970 + 1;
        }
      }
      ByteBuffer::~ByteBuffer(local_a0);
    }
    else {
      pUVar9 = (UIPackage *)0x0;
    }
    cocos2d::Data::~Data(aDStack_70);
  }
  else {
    pUVar9 = *(UIPackage **)(lVar4 + 0x28);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pUVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

