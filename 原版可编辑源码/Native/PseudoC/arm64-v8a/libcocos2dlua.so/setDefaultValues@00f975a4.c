
/* cocos2d::Director::setDefaultValues() */

void __thiscall cocos2d::Director::setDefaultValues(Director *this)

{
  short *psVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  Configuration *this_00;
  Value *pVVar7;
  undefined4 uVar8;
  double dVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  short *local_80;
  Value aVStack_78 [16];
  Value local_68 [16];
  void *local_58;
  Value local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  this_00 = (Configuration *)Configuration::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"cocos2d.x.fps");
  cocos2d::Value::Value(local_50,0x3c);
  pVVar7 = (Value *)Configuration::getValue(this_00,(basic_string *)local_90,local_50);
  dVar9 = (double)cocos2d::Value::asDouble(pVVar7);
  cocos2d::Value::~Value(local_50);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  *(float *)(this + 0x118) = (float)(1.0 / dVar9);
  *(float *)(this + 0x11c) = (float)(1.0 / dVar9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"cocos2d.x.display_fps");
  cocos2d::Value::Value(local_50,false);
  pVVar7 = (Value *)Configuration::getValue(this_00,(basic_string *)local_90,local_50);
  bVar5 = cocos2d::Value::asBool(pVVar7);
  this[0x120] = (Director)(bVar5 & 1);
  cocos2d::Value::~Value(local_50);
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_50,"cocos2d.x.gl.projection");
  cocos2d::Value::Value(local_68,"3d");
  Configuration::getValue(this_00,(basic_string *)local_50,local_68);
  cocos2d::Value::asString();
  cocos2d::Value::~Value(local_68);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  uVar2 = (ulong)((byte)local_90[0] >> 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar2 = local_88;
  }
  if (uVar2 == 6) {
    psVar1 = (short *)((ulong)local_90 | 1);
    if (((byte)local_90[0] & 1) != 0) {
      psVar1 = local_80;
    }
    iVar6 = memcmp(psVar1,"custom",6);
    if (iVar6 != 0) goto LAB_00f9776c;
    uVar8 = 2;
  }
  else {
    if (uVar2 != 2) goto LAB_00f9776c;
    psVar1 = (short *)((ulong)local_90 | 1);
    if (((byte)local_90[0] & 1) != 0) {
      psVar1 = local_80;
    }
    if (*psVar1 != 0x6433) {
      if (*psVar1 == 0x6432) {
        *(undefined4 *)(this + 0x194) = 0;
      }
      goto LAB_00f9776c;
    }
    uVar8 = 1;
  }
  *(undefined4 *)(this + 0x194) = uVar8;
LAB_00f9776c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,"cocos2d.x.texture.pixel_format_for_png");
  cocos2d::Value::Value(aVStack_78,"rgba8888");
  Configuration::getValue(this_00,(basic_string *)local_68,aVStack_78);
  cocos2d::Value::asString();
  cocos2d::Value::~Value(aVStack_78);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  uVar2 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar2 = local_48;
  }
  if (uVar2 == 8) {
    plVar3 = (long *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      plVar3 = local_40;
    }
    if (*plVar3 == 0x3838383861626772) {
      Texture2D::setDefaultAlphaPixelFormat(2);
    }
    else if (*plVar3 == 0x3434343461626772) {
      Texture2D::setDefaultAlphaPixelFormat(8);
    }
    else if (*plVar3 == 0x3135353561626772) {
      Texture2D::setDefaultAlphaPixelFormat(9);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,"cocos2d.x.texture.pvrv2_has_alpha_premultiplied");
  cocos2d::Value::Value(aVStack_78,false);
  pVVar7 = (Value *)Configuration::getValue(this_00,(basic_string *)local_68,aVStack_78);
  bVar5 = cocos2d::Value::asBool(pVVar7);
  cocos2d::Value::~Value(aVStack_78);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  Image::setPVRImagesHavePremultipliedAlpha((bool)(bVar5 & 1));
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

