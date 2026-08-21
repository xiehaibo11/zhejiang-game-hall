
/* cocos2d::FontAtlas::addLetterDef(unsigned long, std::__ndk1::shared_ptr<cocos2d::GlyphBitmap>,
   cocos2d::Rect const&) */

void __thiscall
cocos2d::FontAtlas::addLetterDef
          (FontAtlas *this,undefined8 param_1,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *local_68 [2];
  undefined8 local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68[0] = local_58;
  local_58[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::FontLetterDefinition>>>
          ::
          __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                    ((ulong *)(this + 8),(piecewise_construct_t *)local_58,(tuple *)&DAT_0188d858,
                     (tuple *)local_68);
  *(undefined1 *)(lVar2 + 0x44) = 1;
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(this + 0xa0);
  lVar3 = *param_3;
  *(float *)(lVar2 + 0x3c) = (float)*(int *)(lVar3 + 0x38);
  Rect::Rect((Rect *)local_68,(Rect *)(lVar3 + 0x28));
  Rect::operator=((Rect *)(lVar2 + 0x28),(Rect *)local_68);
  uVar6 = *param_4;
  uVar4 = NEON_scvtf(*(undefined8 *)(this + 100),4);
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  *(ulong *)(lVar2 + 0x20) =
       CONCAT44(((float)((ulong)param_4[1] >> 0x20) + 1.0) / fVar5,
                ((float)param_4[1] + 1.0) / (float)uVar4);
  *(ulong *)(lVar2 + 0x18) =
       CONCAT44(((float)((ulong)uVar6 >> 0x20) + -0.5) / fVar5,((float)uVar6 + -0.5) / (float)uVar4)
  ;
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(*param_3 + 8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

