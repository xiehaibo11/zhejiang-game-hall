
/* cocos2d::EventDispatcher::updateDirtyFlagForSceneGraph() */

void __thiscall cocos2d::EventDispatcher::updateDirtyFlagForSceneGraph(EventDispatcher *this)

{
  EventDispatcher *pEVar1;
  basic_string *pbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  EventDispatcher *pEVar6;
  long lVar7;
  ulong uVar8;
  EventDispatcher *pEVar9;
  ulong uVar10;
  EventDispatcher *pEVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined4 local_6c;
  long local_68;
  
                    /* try { // try from 00f9ff9c to 010a006f has its CatchHandler @ 00f9ff9c
                       catch() { ... } // from try @ 00f9ff9c with catch @ 00f9ff9c
                       catch() { ... } // from try @ 00fa0078 with catch @ 00f9ff9c */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0x130) != 0) {
    pEVar1 = this + 0x128;
    if (*(EventDispatcher **)(this + 0x120) != pEVar1) {
      uVar8 = *(ulong *)(this + 0x80);
      pEVar6 = *(EventDispatcher **)(this + 0x120);
      do {
        if (uVar8 != 0) {
          uVar10 = *(ulong *)(pEVar6 + 0x20);
          uVar18 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar8 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar8 >> 8)),
                                                                  POPCOUNT((char)uVar8))))))));
          uVar17 = NEON_uaddlv(uVar18,1);
          uVar12 = ((ulong)(uint)((int)uVar10 << 3) + 8 ^ uVar10 >> 0x20) * -0x622015f714c7d297;
          uVar13 = (uVar12 ^ uVar10 >> 0x20 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
          uVar12 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
          uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
          if (uVar12 < 2) {
                    /* try { // try from 00fa0070 to 010a0077 has its CatchHandler @ 00fa0100 */
            uVar14 = uVar13 & uVar8 - 1;
          }
          else {
            uVar14 = uVar13;
            if (uVar8 <= uVar13) {
              uVar14 = 0;
              if (uVar8 != 0) {
                uVar14 = uVar13 / uVar8;
              }
              uVar14 = uVar13 - uVar14 * uVar8;
            }
          }
                    /* try { // try from 00fa0078 to 010a016b has its CatchHandler @ 00f9ff9c */
          plVar15 = *(long **)(*(long *)(this + 0x78) + uVar14 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
LAB_00fa00a4:
            uVar16 = plVar15[1];
            if (uVar16 == uVar13) {
              if (plVar15[2] != uVar10) goto LAB_00fa009c;
              plVar3 = (long *)((long *)plVar15[3])[1];
              for (plVar15 = *(long **)plVar15[3]; plVar15 != plVar3; plVar15 = plVar15 + 1) {
                local_6c = 2;
                pbVar2 = (basic_string *)(*plVar15 + 0x68);
                lVar7 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                        ::
                        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                                    *)(this + 0x50),pbVar2);
                if (lVar7 == 0) {
                  std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                  ::
                  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::EventDispatcher::DirtyFlag&>
                            ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                              *)(this + 0x50),pbVar2,pbVar2,(DirtyFlag *)&local_6c);
                }
                else {
                  *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | 2;
                }
              }
            }
            else {
              if (uVar12 < 2) {
                uVar16 = uVar16 & uVar8 - 1;
              }
              else if (uVar8 <= uVar16) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar16 / uVar8;
                }
                uVar16 = uVar16 - uVar4 * uVar8;
              }
              if (uVar16 == uVar14) goto LAB_00fa009c;
            }
          }
        }
LAB_00fa00ec:
        pEVar9 = *(EventDispatcher **)(pEVar6 + 8);
        if (*(EventDispatcher **)(pEVar6 + 8) == (EventDispatcher *)0x0) {
          pEVar9 = pEVar6 + 0x10;
          pEVar11 = *(EventDispatcher **)pEVar9;
          if (*(EventDispatcher **)pEVar11 != pEVar6) {
            do {
              lVar7 = *(long *)pEVar9;
                    /* try { // try from 00fa016c to 010a01cf has its CatchHandler @ 00fa016c
                       catch() { ... } // from try @ 00fa016c with catch @ 00fa016c
                       catch() { ... } // from try @ 00fa0264 with catch @ 00fa016c */
              pEVar9 = (EventDispatcher *)(lVar7 + 0x10);
              pEVar11 = *(EventDispatcher **)pEVar9;
            } while (*(long *)pEVar11 != lVar7);
          }
        }
        else {
          do {
            pEVar11 = pEVar9;
            pEVar9 = *(EventDispatcher **)pEVar11;
          } while (*(EventDispatcher **)pEVar11 != (EventDispatcher *)0x0);
        }
        if (pEVar11 == pEVar1) break;
        uVar8 = *(ulong *)(this + 0x80);
        pEVar6 = pEVar11;
      } while( true );
    }
    std::__ndk1::
    __tree<cocos2d::Node*,std::__ndk1::less<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Node*>>
    ::destroy((__tree<cocos2d::Node*,std::__ndk1::less<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Node*>>
               *)(this + 0x120),*(__tree_node **)(this + 0x128));
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(EventDispatcher **)(this + 0x120) = pEVar1;
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00fa009c:
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) goto LAB_00fa00ec;
  goto LAB_00fa00a4;
}

