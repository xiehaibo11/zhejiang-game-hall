
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::underflow() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::underflow
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  basic_filebuf<char,std::__ndk1::char_traits<char>> *__ptr;
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  void *__src;
  long lVar7;
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *local_58;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    uVar11 = 0xffffffff;
    goto LAB_00cc7930;
  }
  if (((byte)this[0x9c] >> 3 & 1) == 0) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    lVar7 = 0x70;
    if (this[0xa2] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      lVar7 = 0x60;
    }
    *(undefined8 *)(this + 0x38) = 0;
    lVar10 = 0x68;
    if (this[0xa2] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      lVar10 = 0x40;
    }
    lVar10 = *(long *)(this + lVar10);
    lVar7 = *(long *)(this + lVar7);
    *(undefined4 *)(this + 0x9c) = 8;
    bVar2 = true;
    pbVar9 = (byte *)(lVar10 + lVar7);
    *(long *)(this + 0x10) = lVar10;
    *(byte **)(this + 0x18) = pbVar9;
    *(byte **)(this + 0x20) = pbVar9;
    bVar3 = bVar2;
    if (pbVar9 == (byte *)0x0) goto LAB_00cc779c;
LAB_00cc7770:
    if (!bVar2) goto LAB_00cc77b0;
LAB_00cc7774:
    uVar11 = 0;
    if (pbVar9 != *(byte **)(this + 0x20)) goto LAB_00cc7914;
LAB_00cc77dc:
    memmove(*(void **)(this + 0x10),pbVar9 + -uVar11,uVar11);
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      __src = *(void **)(this + 0x48);
      sVar5 = *(long *)(this + 0x50) - (long)__src;
      if (sVar5 != 0) {
        memmove(*(void **)(this + 0x40),__src,sVar5);
      }
      pbVar8 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
      __ptr = pbVar8 + (*(long *)(this + 0x50) - *(long *)(this + 0x48));
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x48) = __ptr;
      if (pbVar8 == this + 0x58) {
        lVar7 = 8;
      }
      else {
        lVar7 = *(long *)(this + 0x60);
      }
      sVar5 = (long)(pbVar8 + lVar7) - (long)__ptr;
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x50) = pbVar8 + lVar7;
      *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x88);
      if (*(long *)(this + 0x70) - uVar11 <= sVar5) {
        sVar5 = *(long *)(this + 0x70) - uVar11;
      }
      sVar5 = fread(__ptr,1,sVar5,*(FILE **)(this + 0x78));
      if (sVar5 != 0) {
        plVar6 = *(long **)(this + 0x80);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00cc7c00();
        }
        *(size_t *)(this + 0x50) = *(long *)(this + 0x48) + sVar5;
        iVar4 = (**(code **)(*plVar6 + 0x20))
                          (plVar6,this + 0x88,*(undefined8 *)(this + 0x40),
                           *(long *)(this + 0x48) + sVar5,this + 0x48,
                           *(long *)(this + 0x10) + uVar11,
                           *(long *)(this + 0x10) + *(long *)(this + 0x70),&local_58);
        if (iVar4 == 3) {
          pbVar9 = *(byte **)(this + 0x40);
          local_58 = *(byte **)(this + 0x50);
          *(byte **)(this + 0x10) = pbVar9;
        }
        else {
          pbVar9 = (byte *)(*(long *)(this + 0x10) + uVar11);
          if (local_58 == pbVar9) goto LAB_00cc7958;
        }
LAB_00cc7910:
        *(byte **)(this + 0x18) = pbVar9;
        *(byte **)(this + 0x20) = local_58;
        goto LAB_00cc7914;
      }
    }
    else {
      sVar5 = fread((void *)(*(long *)(this + 0x10) + uVar11),1,
                    (*(long *)(this + 0x20) - uVar11) - *(long *)(this + 0x10),
                    *(FILE **)(this + 0x78));
      if (sVar5 != 0) {
        pbVar9 = (byte *)(*(long *)(this + 0x10) + uVar11);
        local_58 = pbVar9 + sVar5;
        goto LAB_00cc7910;
      }
    }
LAB_00cc7958:
    uVar11 = 0xffffffff;
  }
  else {
    pbVar9 = *(byte **)(this + 0x18);
    bVar2 = false;
    bVar3 = false;
    if (pbVar9 != (byte *)0x0) goto LAB_00cc7770;
LAB_00cc779c:
    pbVar9 = (byte *)((ulong)auStack_4c | 1);
    *(undefined1 **)(this + 0x10) = auStack_4c;
    *(byte **)(this + 0x18) = pbVar9;
    *(byte **)(this + 0x20) = pbVar9;
    if (bVar3) goto LAB_00cc7774;
LAB_00cc77b0:
    lVar7 = (long)*(byte **)(this + 0x20) - *(long *)(this + 0x10);
    if (lVar7 < 0) {
      lVar7 = lVar7 + 1;
    }
    uVar11 = lVar7 >> 1;
    if (3 < uVar11) {
      uVar11 = 4;
    }
    if (pbVar9 == *(byte **)(this + 0x20)) goto LAB_00cc77dc;
LAB_00cc7914:
    uVar11 = (ulong)*pbVar9;
  }
  if (*(undefined1 **)(this + 0x10) == auStack_4c) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
LAB_00cc7930:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}

