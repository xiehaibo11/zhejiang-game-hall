
/* dragonBones::Animation::setAnimations(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   dragonBones::AnimationData*> > > const&) */

void __thiscall dragonBones::Animation::setAnimations(Animation *this,map *param_1)

{
  basic_string *pbVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  map *pmVar8;
  byte *pbVar9;
  map *pmVar10;
  byte *pbVar11;
  void *__dest;
  undefined8 uVar12;
  void *__src;
  ulong uVar13;
  basic_string *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 0x60) != *(long *)(param_1 + 0x10)) ||
     (uVar6 = FUN_00d1e11c(*(undefined8 *)(this + 0x50),this + 0x58,*(undefined8 *)param_1),
     (uVar6 & 1) == 0)) {
    pbVar9 = *(byte **)(this + 0x20);
    pbVar11 = *(byte **)(this + 0x28);
    while (pbVar4 = pbVar11, pbVar4 != pbVar9) {
      pbVar11 = pbVar4 + -0x18;
      if ((*pbVar11 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
    }
    *(byte **)(this + 0x28) = pbVar9;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
    ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
               *)(this + 0x50),*(__tree_node **)(this + 0x58));
    *(Animation **)(this + 0x50) = this + 0x58;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    pmVar10 = *(map **)param_1;
joined_r0x00d1d84c:
    if (pmVar10 != param_1 + 8) {
      do {
        puVar2 = *(ulong **)(this + 0x28);
        pbVar1 = (basic_string *)(pmVar10 + 0x20);
        if (puVar2 == *(ulong **)(this + 0x30)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(this + 0x20),pbVar1);
        }
        else {
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          if (((byte)*pbVar1 & 1) == 0) {
            uVar13 = *(ulong *)(pmVar10 + 0x28);
            uVar6 = *(ulong *)pbVar1;
            puVar2[2] = *(ulong *)(pmVar10 + 0x30);
            puVar2[1] = uVar13;
            *puVar2 = uVar6;
          }
          else {
            uVar6 = *(ulong *)(pmVar10 + 0x28);
            if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            __src = *(void **)(pmVar10 + 0x30);
            if (uVar6 < 0x17) {
              __dest = (void *)((long)puVar2 + 1);
              *(char *)puVar2 = (char)((int)uVar6 << 1);
              if (uVar6 != 0) goto LAB_00d1d904;
            }
            else {
              uVar13 = uVar6 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar13);
              puVar2[1] = uVar6;
              puVar2[2] = (ulong)__dest;
              *puVar2 = uVar13 | 1;
LAB_00d1d904:
              memcpy(__dest,__src,uVar6);
            }
            *(undefined1 *)((long)__dest + uVar6) = 0;
          }
          *(long *)(this + 0x28) = *(long *)(this + 0x28) + 0x18;
        }
        uVar12 = *(undefined8 *)(pmVar10 + 0x38);
        local_70 = pbVar1;
        lVar7 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                ::
                __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                          ((basic_string *)(this + 0x50),(piecewise_construct_t *)pbVar1,
                           (tuple *)&DAT_01948326,(tuple *)&local_70);
        *(undefined8 *)(lVar7 + 0x38) = uVar12;
        pmVar8 = *(map **)(pmVar10 + 8);
        if (*(map **)(pmVar10 + 8) == (map *)0x0) {
          pmVar8 = pmVar10 + 0x10;
          bVar5 = *(map **)*(map **)pmVar8 == pmVar10;
          pmVar10 = *(map **)pmVar8;
          if (bVar5) goto joined_r0x00d1d84c;
          do {
            lVar7 = *(long *)pmVar8;
            pmVar8 = (map *)(lVar7 + 0x10);
            pmVar10 = *(map **)pmVar8;
          } while (*(long *)pmVar10 != lVar7);
        }
        else {
          do {
            pmVar10 = pmVar8;
            pmVar8 = *(map **)pmVar10;
          } while (*(map **)pmVar10 != (map *)0x0);
        }
        if (pmVar10 == param_1 + 8) break;
      } while( true );
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

