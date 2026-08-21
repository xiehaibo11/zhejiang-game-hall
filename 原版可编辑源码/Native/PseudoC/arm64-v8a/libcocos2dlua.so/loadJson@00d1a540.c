
/* cocos2d::Bundle3D::loadJson(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Bundle3D::loadJson(Bundle3D *this,basic_string *param_1)

{
  int *__s2;
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  GenericDocument *pGVar5;
  undefined8 uVar6;
  size_t sVar7;
  Bundle3D *pBVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  Bundle3D *local_70;
  undefined8 uStack_68;
  Bundle3D *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (*(code *)**(undefined8 **)this)();
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x18))(&local_70,plVar4,param_1);
  pBVar8 = this + 0x50;
  if (((byte)*pBVar8 & 1) == 0) {
    *(undefined2 *)pBVar8 = 0;
  }
  else {
    **(undefined1 **)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    if (((byte)this[0x50] & 1) != 0) {
      operator_delete(*(void **)(this + 0x60));
      *(undefined8 *)(this + 0x50) = 0;
    }
  }
  *(Bundle3D **)(this + 0x60) = local_60;
  *(undefined8 *)(this + 0x58) = uStack_68;
  *(Bundle3D **)pBVar8 = local_70;
  if (((byte)this[0x50] & 1) == 0) {
    local_70 = this + 0x51;
  }
  else {
    local_70 = *(Bundle3D **)(this + 0x60);
  }
  uStack_68 = 0;
  local_60 = local_70;
  pGVar5 = rapidjson::
           GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
           ::
           ParseStream<1u,rapidjson::UTF8<char>,rapidjson::GenericInsituStringStream<rapidjson::UTF8<char>>>
                     ((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                       *)(this + 0x68),(GenericInsituStringStream *)&local_70);
  if (*(int *)(pGVar5 + 0x58) != 0) {
    (*(code *)**(undefined8 **)this)(this);
    uVar6 = 0;
    goto LAB_00d1a704;
  }
  uVar1 = *(uint *)(this + 0x68);
  piVar9 = *(int **)(this + 0x70);
  piVar10 = piVar9;
  if (uVar1 == 0) {
LAB_00d1a6a0:
    if (piVar10 == piVar9 + (ulong)uVar1 * 0xc) goto LAB_00d1a6d0;
    if (*(ushort *)((long)piVar10 + 0x2e) != 4) {
      piVar9 = piVar10 + 6;
      if ((*(ushort *)((long)piVar10 + 0x2e) >> 0xc & 1) == 0) goto LAB_00d1a6e0;
      goto LAB_00d1a6e4;
    }
    piVar9 = (int *)&DAT_013d2af7;
    sVar7 = 3;
  }
  else {
    lVar11 = (ulong)uVar1 * 0x30;
    do {
      iVar3 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar3 == 7) {
        __s2 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          __s2 = piVar10;
        }
        if ((__s2 == (int *)0x1472d09) || (iVar3 = memcmp("version",__s2,7), iVar3 == 0))
        goto LAB_00d1a6a0;
      }
      lVar11 = lVar11 + -0x30;
      piVar10 = piVar10 + 0xc;
    } while (lVar11 != 0);
LAB_00d1a6d0:
    piVar9 = (int *)&rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::
                     operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                     ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
LAB_00d1a6e0:
    piVar9 = *(int **)(piVar9 + 2);
LAB_00d1a6e4:
    sVar7 = strlen((char *)piVar9);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x38),(char *)piVar9,sVar7);
  uVar6 = 1;
LAB_00d1a704:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

