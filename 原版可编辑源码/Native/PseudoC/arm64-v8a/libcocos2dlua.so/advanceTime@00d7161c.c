
/* dragonBones::Animation::advanceTime(float) */

void __thiscall dragonBones::Animation::advanceTime(Animation *this,float param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>> *this_00
  ;
  BaseObject *pBVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 00d71620 to 00e7162f has its CatchHandler @ 00d730ac */
                    /* try { // try from 00d71630 to 00e7163f has its CatchHandler @ 00d7309c */
  lVar3 = *(long *)(this + 0x68);
                    /* try { // try from 00d71640 to 00e7164f has its CatchHandler @ 00d7308c */
  fVar16 = -param_1;
  if (0.0 <= param_1) {
    fVar16 = param_1;
  }
                    /* try { // try from 00d71650 to 00e7165f has its CatchHandler @ 00d7307c */
  if ((*(char *)(lVar3 + 0xd) == '\0') || (*(long *)(lVar3 + 0x30) == 0)) {
    fVar15 = *(float *)(this + 0x10);
    *(float *)(this + 0x18) = fVar15;
  }
  else {
    fVar15 = *(float *)(*(long *)(*(long *)(*(long *)(lVar3 + 0x30) + 0x68) + 0xa8) + 0x18) *
             *(float *)(this + 0x10);
    *(float *)(this + 0x18) = fVar15;
  }
                    /* try { // try from 00d71688 to 00e71697 has its CatchHandler @ 00d73078 */
  this_00 = (vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>
             *)(this + 0x38);
  puVar4 = *(undefined8 **)this_00;
  fVar1 = fVar16 * fVar15;
  if (fVar15 == 1.0) {
    fVar1 = fVar16;
  }
  uVar9 = *(long *)(this + 0x40) - (long)puVar4 >> 3;
  if (uVar9 != 0) {
    if (uVar9 == 1) {
      pBVar8 = (BaseObject *)*puVar4;
      if ((0 < *(int *)(pBVar8 + 100)) && (0 < *(int *)(pBVar8 + 0x68))) {
        DragonBones::bufferObject(*(DragonBones **)(lVar3 + 0x28),pBVar8);
        *(undefined8 *)(this + 0x78) = 0;
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
        return;
      }
      lVar12 = *(long *)(pBVar8 + 0x80);
      fVar16 = *(float *)(lVar12 + 0x30);
      if ((0.0 < fVar16) && (this[0x14] != (Animation)0x0)) {
        this[0x14] = (Animation)0x0;
        plVar11 = *(long **)(lVar3 + 0x68);
        if (*(long **)(lVar3 + 0x60) != plVar11) {
          plVar10 = *(long **)(lVar3 + 0x60);
          do {
            plVar6 = plVar10 + 1;
            lVar14 = *plVar10;
            lVar2 = std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                                *)(lVar12 + 0xb0),(basic_string *)(*(long *)(lVar14 + 0xa8) + 0x18))
            ;
            lVar3 = 0;
            if (lVar12 + 0xb8 != lVar2) {
              lVar3 = lVar2 + 0x38;
            }
            *(long *)(lVar14 + 0xb0) = lVar3;
            plVar10 = plVar6;
          } while (plVar11 != plVar6);
          lVar3 = *(long *)(this + 0x68);
        }
        plVar11 = *(long **)(lVar3 + 0x78);
        plVar10 = *(long **)(lVar3 + 0x80);
        if (plVar11 != plVar10) {
          do {
            lVar3 = *plVar11;
            plVar6 = *(long **)(lVar3 + 0x158);
            if ((plVar6 == (long *)0x0) || ((long *)*plVar6 == (long *)plVar6[1])) {
LAB_00d7187c:
              lVar2 = 0;
            }
            else {
              lVar14 = *(long *)*plVar6;
              lVar2 = 0;
              if (lVar14 != 0) {
                if (*(long *)(lVar14 + 0x60) !=
                    *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x138)) goto LAB_00d7187c;
                lVar14 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                         ::
                         find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<int,std::__ndk1::allocator<int>>>>>
                                     *)(lVar12 + 200),
                                    (basic_string *)(*(long *)(lVar3 + 200) + 0x20));
                lVar2 = 0;
                if (lVar12 + 0xd0 != lVar14) {
                  lVar2 = lVar14 + 0x38;
                }
              }
            }
            plVar11 = plVar11 + 1;
            *(long *)(lVar3 + 0xf0) = lVar2;
          } while (plVar10 != plVar11);
        }
      }
      AnimationState::advanceTime((AnimationState *)pBVar8,fVar1,fVar16);
      return;
    }
    if (*(long *)(this + 0x40) - (long)puVar4 != 0) {
      lVar3 = 0;
      uVar13 = 0;
      while( true ) {
        pBVar8 = (BaseObject *)puVar4[uVar13];
                    /* try { // try from 00d71708 to 00e71717 has its CatchHandler @ 00d732e0 */
        if ((*(int *)(pBVar8 + 100) < 1) || (*(int *)(pBVar8 + 0x68) < 1)) {
          if (lVar3 != 0) {
            puVar4[uVar13 - lVar3] = pBVar8;
          }
          AnimationState::advanceTime((AnimationState *)pBVar8,fVar1,0.0);
        }
        else {
                    /* try { // try from 00d7171c to 00e7172b has its CatchHandler @ 00d732f0 */
          lVar3 = lVar3 + 1;
          DragonBones::bufferObject(*(DragonBones **)(*(long *)(this + 0x68) + 0x28),pBVar8);
          this[0x14] = (Animation)0x1;
          if (*(BaseObject **)(this + 0x78) == pBVar8) {
            *(undefined8 *)(this + 0x78) = 0;
          }
        }
        if ((uVar9 - 1 == uVar13) && (lVar3 != 0)) {
          uVar5 = uVar9 - lVar3;
          uVar7 = *(long *)(this + 0x40) - *(long *)(this + 0x38) >> 3;
          if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
            if (uVar5 < uVar7) {
              *(ulong *)(this + 0x40) = *(long *)(this + 0x38) + uVar5 * 8;
            }
            lVar12 = *(long *)(this + 0x78);
          }
          else {
            std::__ndk1::
            vector<dragonBones::AnimationState*,std::__ndk1::allocator<dragonBones::AnimationState*>>
            ::__append(this_00,uVar5 - uVar7);
            lVar12 = *(long *)(this + 0x78);
          }
                    /* try { // try from 00d717b8 to 00e71863 has its CatchHandler @ 00d73170 */
          if ((lVar12 == 0) && (*(long *)(this + 0x38) != *(long *)(this + 0x40))) {
            *(undefined8 *)(this + 0x78) = *(undefined8 *)(*(long *)(this + 0x40) + -8);
          }
        }
        uVar13 = uVar13 + 1;
        if (uVar9 <= uVar13) break;
        puVar4 = *(undefined8 **)this_00;
      }
      lVar3 = *(long *)(this + 0x68);
    }
  }
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
  return;
}

