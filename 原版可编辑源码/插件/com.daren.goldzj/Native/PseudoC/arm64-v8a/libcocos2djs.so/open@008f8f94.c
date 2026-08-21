
/* XMLHttpRequest::open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
XMLHttpRequest::open(XMLHttpRequest *this,basic_string *param_1,basic_string *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  ulong uVar1;
  basic_string *pbVar2;
  XMLHttpRequest XVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  XMLHttpRequest *pXVar8;
  
  if (this[0x263] == (XMLHttpRequest)0x0) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x1c8) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x1c8),(char *)pbVar2,uVar1);
    }
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x1b0);
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar2,uVar1);
    }
    XVar3 = this[0x1c8];
    uVar1 = (ulong)((byte)XVar3 >> 1);
    if (((byte)XVar3 & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x1d0);
    }
    if (uVar1 == 6) {
      pXVar8 = *(XMLHttpRequest **)(this + 0x1d8);
      if (((byte)XVar3 & 1) == 0) {
        pXVar8 = this + 0x1c9;
      }
      iVar4 = memcmp(pXVar8,"delete",6);
      uVar6 = 3;
      if ((iVar4 != 0) && (iVar4 = memcmp(pXVar8,"DELETE",6), iVar4 != 0)) {
        uVar6 = 4;
      }
    }
    else if (uVar1 == 4) {
      pXVar8 = *(XMLHttpRequest **)(this + 0x1d8);
      if (((byte)XVar3 & 1) == 0) {
        pXVar8 = this + 0x1c9;
      }
      if (*(int *)pXVar8 == 0x74736f70) {
        uVar6 = 1;
      }
      else {
        uVar6 = 4;
        if (*(int *)pXVar8 == 0x54534f50) {
          uVar6 = 1;
        }
      }
    }
    else if (uVar1 == 3) {
      pXVar8 = *(XMLHttpRequest **)(this + 0x1d8);
      if (((byte)XVar3 & 1) == 0) {
        pXVar8 = this + 0x1c9;
      }
      iVar4 = memcmp(pXVar8,"get",3);
      if ((iVar4 == 0) || (iVar4 = memcmp(pXVar8,&DAT_01866a45,3), iVar4 == 0)) {
        uVar6 = 0;
      }
      else {
        iVar4 = memcmp(pXVar8,"put",3);
        uVar6 = 2;
        if (iVar4 != 0) {
          iVar4 = memcmp(pXVar8,"PUT",3);
          uVar6 = 2;
          if (iVar4 != 0) {
            uVar6 = 4;
          }
        }
      }
    }
    else {
      uVar6 = 4;
    }
    this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)(this + 0x250) + 0x10);
    *(undefined4 *)(*(long *)(this + 0x250) + 0xc) = uVar6;
    if (this_01 != this_00) {
      uVar1 = *(ulong *)(this + 0x1b8);
      pXVar8 = *(XMLHttpRequest **)(this + 0x1c0);
      if (((byte)this[0x1b0] & 1) == 0) {
        pXVar8 = this + 0x1b1;
        uVar1 = (ulong)((byte)this[0x1b0] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_01,(char *)pXVar8,uVar1);
    }
    uVar5 = 1;
    *(undefined2 *)(this + 0x260) = 0;
    this[0x266] = (XMLHttpRequest)0x0;
    this[0x26a] = (XMLHttpRequest)0x0;
    if (this[0x263] != (XMLHttpRequest)0x1) {
      plVar7 = *(long **)(this + 0xc0);
      this[0x263] = (XMLHttpRequest)0x1;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

