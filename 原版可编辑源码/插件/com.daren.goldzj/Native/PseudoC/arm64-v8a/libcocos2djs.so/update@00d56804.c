
/* dragonBones::CCArmatureCacheDisplay::update(float) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::update(CCArmatureCacheDisplay *this,float param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  CCFactory *this_00;
  long lVar5;
  AnimationData *this_01;
  size_t sVar6;
  CCArmatureCacheDisplay *pCVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (CCFactory::_factory == (CCFactory *)0x0) {
    this_00 = operator_new(0x70);
    CCFactory::CCFactory(this_00);
    CCFactory::_factory = this_00;
  }
  lVar5 = DragonBones::getClock(CCFactory::_dragonBonesInstance);
  puVar3 = EventObject::START;
  lVar9 = *(long *)(this + 0x50);
  if (this[0x2c] == (CCArmatureCacheDisplay)0x0) {
    if (lVar9 != 0) {
      fVar12 = *(float *)(lVar5 + 0xc);
      fVar13 = *(float *)(this + 0x18);
      if ((*(float *)(this + 0x20) <= 1e-05) && (*(int *)(this + 0x24) == 0)) {
        lVar5 = *(long *)(this + 0xe0);
        sVar6 = strlen(EventObject::START);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar5 + 0x18),puVar3,sVar6);
        uVar11 = *(undefined8 *)(this + 0xe0);
        pCVar7 = (CCArmatureCacheDisplay *)
                 std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                             *)(this + 0x58),(basic_string *)&DAT_01d3e720);
        if ((this + 0x60 != pCVar7) && (plVar8 = *(long **)(this + 0xb0), plVar8 != (long *)0x0)) {
          local_60 = uVar11;
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_60);
        }
      }
      this_01 = *(AnimationData **)(this + 0x50);
      fVar12 = fVar12 * fVar13 * param_1 + *(float *)(this + 0x20);
      *(float *)(this + 0x20) = fVar12;
      iVar10 = (int)(fVar12 / ArmatureCache::FrameTime);
      if (this_01[0x18] == (AnimationData)0x0) {
        ArmatureCache::updateToFrame
                  (*(ArmatureCache **)(this + 0xd8),(basic_string *)(this + 0x30),iVar10);
        this_01 = *(AnimationData **)(this + 0x50);
      }
      iVar4 = ArmatureCache::AnimationData::getFrameCount(this_01);
      if ((*(char *)(*(long *)(this + 0x50) + 0x18) != '\0') && (iVar4 + -1 <= iVar10)) {
        iVar1 = *(int *)(this + 0x24);
        *(undefined4 *)(this + 0x20) = 0;
        *(int *)(this + 0x24) = iVar1 + 1;
        iVar10 = 0;
        if ((0 < *(int *)(this + 0x28)) && (*(int *)(this + 0x28) <= iVar1 + 1)) {
          *(undefined4 *)(this + 0x24) = 0;
          this[0x2c] = (CCArmatureCacheDisplay)0x1;
          iVar10 = iVar4 + -1;
        }
        puVar3 = EventObject::COMPLETE;
        lVar5 = *(long *)(this + 0xe0);
        sVar6 = strlen(EventObject::COMPLETE);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar5 + 0x18),puVar3,sVar6);
        uVar11 = *(undefined8 *)(this + 0xe0);
        pCVar7 = (CCArmatureCacheDisplay *)
                 std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                             *)(this + 0x58),(basic_string *)&DAT_01d3e750);
        if ((this + 0x60 != pCVar7) && (plVar8 = *(long **)(this + 0xb0), plVar8 != (long *)0x0)) {
          local_60 = uVar11;
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_60);
        }
        puVar3 = EventObject::LOOP_COMPLETE;
        lVar5 = *(long *)(this + 0xe0);
        sVar6 = strlen(EventObject::LOOP_COMPLETE);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar5 + 0x18),puVar3,sVar6);
        uVar11 = *(undefined8 *)(this + 0xe0);
        pCVar7 = (CCArmatureCacheDisplay *)
                 std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,bool>>>
                             *)(this + 0x58),(basic_string *)&DAT_01d3e738);
        if ((this + 0x60 != pCVar7) && (plVar8 = *(long **)(this + 0xb0), plVar8 != (long *)0x0)) {
          local_60 = uVar11;
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_60);
        }
      }
      *(int *)(this + 0x1c) = iVar10;
    }
  }
  else if ((lVar9 != 0) && (*(char *)(lVar9 + 0x18) == '\0')) {
    ArmatureCache::updateToFrame(*(ArmatureCache **)(this + 0xd8),(basic_string *)(this + 0x30),-1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

