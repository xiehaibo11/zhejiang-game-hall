
/* cocos2d::CSLoader::createNode(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

long cocos2d::CSLoader::createNode(basic_string *param_1,function *param_2)

{
  ulong __n;
  void *pvVar1;
  long lVar2;
  int iVar3;
  CSLoader *pCVar4;
  long lVar5;
  Ref *this;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void *__dest;
  ulong local_88;
  ulong local_80;
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,param_1);
  pvVar1 = (void *)((ulong)local_70 | 1);
  uVar8 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    pvVar1 = local_60;
    uVar8 = local_68;
  }
  uVar6 = uVar8;
  if (uVar8 == 0) {
LAB_00cb01b4:
    uVar6 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar6 == 0) goto LAB_00cb01b4;
      lVar7 = uVar6 - 1;
      uVar6 = uVar6 - 1;
    } while (*(char *)((long)pvVar1 + lVar7) != '.');
  }
  uVar6 = uVar6 + 1;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar8 - uVar6;
  if (uVar8 <= uVar8 - uVar6) {
    __n = uVar8;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00cb022c;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_88 = uVar8 | 1;
    local_80 = __n;
    local_78 = __dest;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar6),__n);
LAB_00cb022c:
  pCVar4 = DAT_01786980;
  *(undefined1 *)((long)__dest + __n) = 0;
  if (pCVar4 == (CSLoader *)0x0) {
    pCVar4 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
    if (pCVar4 != (CSLoader *)0x0) {
      CSLoader(pCVar4);
    }
    DAT_01786980 = pCVar4;
    init(pCVar4);
    pCVar4 = DAT_01786980;
  }
  uVar8 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    uVar8 = local_80;
  }
  if (uVar8 == 3) {
    pvVar1 = (void *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      pvVar1 = local_78;
    }
    iVar3 = memcmp(pvVar1,&DAT_01412b23,3);
    if (iVar3 == 0) {
      lVar7 = nodeWithFlatBuffersFile(pCVar4,param_1,param_2);
      if ((lVar7 != 0) &&
         (lVar5 = __dynamic_cast(lVar7,&Node::typeinfo,
                                 &cocostudio::WidgetCallBackHandlerProtocol::typeinfo,
                                 0xfffffffffffffffe), lVar5 != 0)) {
        this = *(Ref **)(*(long *)(pCVar4 + 0x98) + -8);
        *(undefined8 **)(pCVar4 + 0x98) = (undefined8 *)(*(long *)(pCVar4 + 0x98) + -8);
        Ref::release(this);
        if (*(long *)(pCVar4 + 0x90) == *(long *)(pCVar4 + 0x98)) {
          *(undefined8 *)(pCVar4 + 0x88) = 0;
        }
        else {
          *(undefined8 *)(pCVar4 + 0x88) = *(undefined8 *)(*(long *)(pCVar4 + 0x98) + -8);
        }
      }
    }
    else {
      lVar7 = 0;
    }
  }
  else {
    lVar7 = 0;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}

