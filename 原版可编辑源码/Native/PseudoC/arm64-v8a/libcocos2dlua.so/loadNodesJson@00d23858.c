
/* cocos2d::Bundle3D::loadNodesJson(cocos2d::NodeDatas&) */

void __thiscall cocos2d::Bundle3D::loadNodesJson(Bundle3D *this,NodeDatas *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  GenericValue *pGVar13;
  long lVar14;
  int *piVar15;
  NodeData *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  piVar15 = *(int **)(this + 0x70);
  uVar4 = *(uint *)(this + 0x68);
  uVar12 = (ulong)uVar4;
  piVar8 = piVar15 + uVar12 * 0xc;
  piVar10 = piVar15;
  if (uVar4 == 0) {
LAB_00d23910:
    if (piVar8 != piVar10) {
      if (uVar4 == 0) {
LAB_00d2397c:
        if (piVar15 != piVar8) {
          if (*(short *)((long)piVar15 + 0x2e) == 4) {
            if (piVar15[6] != 0) {
              uVar12 = 0;
              do {
                pGVar13 = (GenericValue *)(*(long *)(piVar15 + 8) + uVar12 * 0x18);
                piVar8 = *(int **)(pGVar13 + 8);
                uVar4 = *(uint *)pGVar13;
                piVar10 = piVar8;
                if (uVar4 == 0) {
LAB_00d23a6c:
                  if (piVar10 == piVar8 + (ulong)uVar4 * 0xc) goto LAB_00d23a8c;
                  piVar8 = piVar10 + 6;
                  if ((*(byte *)((long)piVar10 + 0x2f) >> 4 & 1) == 0) goto LAB_00d23a9c;
                }
                else {
                  lVar14 = (ulong)uVar4 * 0x30;
                  do {
                    iVar6 = *piVar10;
                    if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                      iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
                    }
                    if (iVar6 == 2) {
                      piVar1 = *(int **)(piVar10 + 2);
                      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                        piVar1 = piVar10;
                      }
                      if ((piVar1 == (int *)0x143a510) || ((short)*piVar1 == 0x6469))
                      goto LAB_00d23a6c;
                    }
                    lVar14 = lVar14 + -0x30;
                    piVar10 = piVar10 + 0xc;
                  } while (lVar14 != 0);
LAB_00d23a8c:
                  piVar8 = (int *)&rapidjson::
                                   GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                   ::
                                   operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                                   ::buffer;
                  rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::
                  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                  ::buffer = 0;
                  DAT_01785a58 = 0;
                  DAT_01785a60 = 0;
LAB_00d23a9c:
                  piVar8 = *(int **)(piVar8 + 2);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>(local_80,(char *)piVar8);
                local_88 = (NodeData *)parseNodesRecursivelyJson(this,pGVar13,piVar15[6] == 1);
                uVar4 = *(uint *)pGVar13;
                plVar9 = *(long **)(pGVar13 + 8);
                plVar11 = plVar9;
                if (uVar4 == 0) {
LAB_00d23b34:
                  if (plVar11 == plVar9 + (ulong)uVar4 * 6) goto LAB_00d23b70;
                  if (*(short *)((long)plVar11 + 0x2e) != 10) goto LAB_00d23b80;
                  puVar3 = *(undefined8 **)(param_1 + 0x10);
                  if (puVar3 == *(undefined8 **)(param_1 + 0x18)) {
                    std::__ndk1::
                    vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
                    __push_back_slow_path<cocos2d::NodeData*const&>
                              ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>
                                *)(param_1 + 8),&local_88);
                  }
                  else {
                    *puVar3 = local_88;
                    *(undefined8 **)(param_1 + 0x10) = puVar3 + 1;
                  }
                }
                else {
                  lVar14 = (ulong)uVar4 * 0x30;
                  do {
                    iVar6 = (int)*plVar11;
                    if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
                      iVar6 = 0x15 - *(char *)((long)plVar11 + 0x15);
                    }
                    if (iVar6 == 8) {
                      plVar2 = (long *)plVar11[1];
                      if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
                        plVar2 = plVar11;
                      }
                      if ((plVar2 == (long *)"skeleton") || (*plVar2 == 0x6e6f74656c656b73))
                      goto LAB_00d23b34;
                    }
                    lVar14 = lVar14 + -0x30;
                    plVar11 = plVar11 + 6;
                  } while (lVar14 != 0);
LAB_00d23b70:
                  rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::
                  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                  ::buffer = 0;
                  DAT_01785a58 = 0;
                  DAT_01785a60 = 0;
LAB_00d23b80:
                  puVar3 = *(undefined8 **)(param_1 + 0x28);
                  if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
                    std::__ndk1::
                    vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
                    __push_back_slow_path<cocos2d::NodeData*const&>
                              ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>
                                *)(param_1 + 0x20),&local_88);
                  }
                  else {
                    *puVar3 = local_88;
                    *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
                  }
                }
                if (((byte)local_80[0] & 1) != 0) {
                  operator_delete(local_70);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < (uint)piVar15[6]);
            }
            uVar7 = 1;
            goto LAB_00d23c04;
          }
          goto LAB_00d23bf4;
        }
      }
      else {
        lVar14 = uVar12 * 0x30;
        do {
          iVar6 = *piVar15;
          if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
            iVar6 = 0x15 - *(char *)((long)piVar15 + 0x15);
          }
          if (iVar6 == 5) {
            piVar10 = *(int **)(piVar15 + 2);
            if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar15;
            }
            if ((piVar10 == (int *)"nodes") || (iVar6 = memcmp("nodes",piVar10,5), iVar6 == 0))
            goto LAB_00d2397c;
          }
          lVar14 = lVar14 + -0x30;
          piVar15 = piVar15 + 0xc;
        } while (lVar14 != 0);
      }
      uVar7 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d23c04;
    }
  }
  else {
    lVar14 = uVar12 * 0x30;
    do {
      iVar6 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar6 == 5) {
        piVar1 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar10;
        }
        if ((piVar1 == (int *)"nodes") || (iVar6 = memcmp("nodes",piVar1,5), iVar6 == 0))
        goto LAB_00d23910;
      }
      lVar14 = lVar14 + -0x30;
      piVar10 = piVar10 + 0xc;
    } while (lVar14 != 0);
  }
LAB_00d23bf4:
  uVar7 = 0;
LAB_00d23c04:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

