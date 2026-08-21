
/* cocos2d::Label::getLetter(int) */

Sprite * __thiscall cocos2d::Label::getLetter(Label *this,int param_1)

{
  Label *pLVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  Texture2D *pTVar6;
  Sprite *this_00;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  piecewise_construct_t *local_80;
  float local_78;
  float fStack_74;
  int local_6c [3];
  int *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_6c[0] = param_1;
  if ((this[0x39c] == (Label)0x0) && (*(int *)(this + 0x308) != 3)) {
    if (this[0x30c] != (Label)0x0) {
      (**(code **)(*(long *)this + 0x5c8))(this);
    }
    if (((*(long *)(this + 0x3c0) == 0) && (param_1 < *(int *)(this + 0x420))) &&
       (lVar13 = *(long *)(this + 0x3f0), *(char *)(lVar13 + (long)param_1 * 0x18 + 4) != '\0')) {
      uVar14 = (ulong)param_1;
      piVar15 = (int *)(lVar13 + uVar14 * 0x18 + 0x10);
      if (-1 < *piVar15) {
        uVar7 = *(ulong *)(this + 0x648);
        pLVar1 = this + 0x640;
        if (uVar7 != 0) {
          uVar18 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar7 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar7 >> 8)),
                                                                  POPCOUNT((char)uVar7))))))));
          uVar16 = NEON_uaddlv(uVar18,1);
          uVar9 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar16) & 0xffffffff;
          if (uVar9 < 2) {
            uVar10 = uVar7 - 1 & uVar14;
          }
          else {
            uVar10 = uVar14;
            if (uVar7 <= uVar14) {
              uVar10 = 0;
              if (uVar7 != 0) {
                uVar10 = uVar14 / uVar7;
              }
              uVar10 = uVar14 - uVar10 * uVar7;
            }
          }
          plVar11 = *(long **)(*(long *)pLVar1 + uVar10 * 8);
                    /* try { // try from 00f0e40c to 0100e427 has its CatchHandler @ 00f0e438 */
          if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
            do {
              uVar12 = plVar11[1];
              if (uVar12 == uVar14) {
                if ((int)plVar11[2] == param_1) {
                  local_80 = (piecewise_construct_t *)local_6c;
                    /* try { // try from 00f0e470 to 0100e4bf has its CatchHandler @ 00f0e470
                       catch() { ... } // from try @ 00f0e470 with catch @ 00f0e470
                       catch() { ... } // from try @ 00f0e4cc with catch @ 00f0e470
                       catch() { ... } // from try @ 00f0e4f8 with catch @ 00f0e470
                       catch() { ... } // from try @ 00f0e5cc with catch @ 00f0e470
                       catch() { ... } // from try @ 00f0e620 with catch @ 00f0e470 */
                  lVar5 = std::__ndk1::
                          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>>>
                          ::
                          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                                    ((int *)pLVar1,(piecewise_construct_t *)local_6c,
                                     (tuple *)&DAT_0143a8f1,(tuple *)&local_80);
                  this_00 = *(Sprite **)(lVar5 + 0x18);
                  if (this_00 != (Sprite *)0x0) goto LAB_00f0e3c4;
                  break;
                }
              }
              else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0e40c with catch @ 00f0e438
                        */
                if (uVar9 < 2) {
                  uVar12 = uVar12 & uVar7 - 1;
                }
                else if (uVar7 <= uVar12) {
                  uVar3 = 0;
                  if (uVar7 != 0) {
                    uVar3 = uVar12 / uVar7;
                  }
                  uVar12 = uVar12 - uVar3 * uVar7;
                }
                if (uVar12 != uVar10) break;
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
        local_80 = (piecewise_construct_t *)(lVar13 + uVar14 * 0x18);
        lVar5 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                ::
                __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                          ((wchar32 *)(*(long *)(this + 0x3d0) + 0x50),local_80,
                           (tuple *)&DAT_0143a8f1,(tuple *)&local_80);
        iVar2 = *(int *)(lVar5 + 0x2c);
                    /* try { // try from 00f0e4c0 to 0100e4cb has its CatchHandler @ 00f0e78c */
        Rect::Rect((Rect *)&local_80);
        local_78 = *(float *)(lVar5 + 0x1c);
        fStack_74 = *(float *)(lVar5 + 0x20);
                    /* try { // try from 00f0e4cc to 0100e4eb has its CatchHandler @ 00f0e470 */
        local_80 = *(piecewise_construct_t **)(lVar5 + 0x14);
                    /* try { // try from 00f0e4ec to 0100e4f7 has its CatchHandler @ 00f0e788 */
        if ((fStack_74 <= 0.0) || (local_78 <= 0.0)) {
                    /* try { // try from 00f0e5cc to 0100e617 has its CatchHandler @ 00f0e470 */
          this_00 = operator_new(0x530,(nothrow_t *)&std::nothrow);
          if (this_00 != (Sprite *)0x0) {
            Sprite::Sprite(this_00);
            *(undefined8 *)(this_00 + 0x300) = 0;
            *(undefined ***)this_00 = &PTR__Sprite_016fd9f8;
            *(undefined ***)(this_00 + 0x2f8) = &PTR__LabelLetter_016fe078;
            this_00[0x52d] = (Sprite)0x1;
            uVar14 = Sprite::init(this_00);
            if ((uVar14 & 1) == 0) {
              (**(code **)(*(long *)this_00 + 8))(this_00);
              this_00 = (Sprite *)0x0;
            }
            else {
                    /* try { // try from 00f0e618 to 0100e61f has its CatchHandler @ 00f0e768 */
              Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00f0e620 to 0100e7af has its CatchHandler @ 00f0e470 */
            }
          }
        }
        else {
                    /* try { // try from 00f0e4f8 to 0100e5c3 has its CatchHandler @ 00f0e470 */
          (**(code **)(*(long *)this + 0x608))(this);
          pTVar6 = (Texture2D *)FontAtlas::getTexture(*(FontAtlas **)(this + 0x3d0),iVar2);
          this_00 = (Sprite *)LabelLetter::createWithTexture(pTVar6,(Rect *)&local_80,false);
          *(undefined8 *)(this_00 + 0x300) =
               *(undefined8 *)(*(long *)(*(long *)(this + 0x3d8) + (long)iVar2 * 8) + 0x300);
          *(long *)(this_00 + 0x308) = (long)*piVar15;
          lVar13 = lVar13 + uVar14 * 0x18;
          (**(code **)(*(long *)this_00 + 200))
                    (*(float *)(lVar13 + 8) + *(float *)(this + 0x680) * local_78 * 0.5 +
                     *(float *)(*(long *)(this + 0x478) + (long)*(int *)(lVar13 + 0x14) * 4),
                     *(float *)(this + 0x490) +
                     (*(float *)(lVar13 + 0xc) - *(float *)(this + 0x680) * fStack_74 * 0.5));
          (**(code **)(*(long *)this_00 + 0x490))(this_00,this[0x219]);
          if ((*(int *)(this + 0x308) != 1) || (*(float *)(this + 0x67c) <= 0.0)) {
            pcVar8 = *(code **)(*(long *)this_00 + 0x80);
            if (1.1920929e-07 <= ABS(*(float *)(this + 0x67c))) {
              uVar17 = 0x3f800000;
            }
            else {
              uVar17 = 0;
            }
          }
          else {
            uVar17 = *(undefined4 *)(this + 0x680);
            pcVar8 = *(code **)(*(long *)this_00 + 0x80);
                    /* try { // try from 00f0e5c4 to 0100e5cb has its CatchHandler @ 00f0e76c */
          }
          (*pcVar8)(uVar17,this_00);
        }
        (**(code **)(*(long *)this + 0x208))(this,this_00);
        local_60 = local_6c;
        lVar13 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Sprite*>>>
                 ::
                 __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                           ((int *)pLVar1,(piecewise_construct_t *)local_6c,(tuple *)&DAT_0143a8f1,
                            (tuple *)&local_60);
        *(Sprite **)(lVar13 + 0x18) = this_00;
        goto LAB_00f0e3c4;
      }
    }
  }
  this_00 = (Sprite *)0x0;
LAB_00f0e3c4:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

