
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
  basic_filebuf<char,std::__ndk1::char_traits<char>> *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte *local_58;
  undefined1 auStack_4c [4];
  long local_48;
  
                    /* catch() { ... } // from try @ 00a5af98 with catch @ 00a5b004 */
                    /* catch() { ... } // from try @ 00a5af64 with catch @ 00a5b008 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) == 0) {
    uVar11 = 0xffffffff;
    goto LAB_00a5b258;
  }
  if (((byte)this[0x9c] >> 3 & 1) == 0) {
    lVar9 = 0x70;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (this[0xa2] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      lVar9 = 0x60;
    }
    *(undefined8 *)(this + 0x38) = 0;
    lVar10 = 0x68;
    if (this[0xa2] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      lVar10 = 0x40;
    }
    lVar10 = *(long *)(this + lVar10);
    lVar9 = *(long *)(this + lVar9);
    *(undefined4 *)(this + 0x9c) = 8;
    bVar2 = true;
    pbVar8 = (byte *)(lVar10 + lVar9);
    *(long *)(this + 0x10) = lVar10;
    *(byte **)(this + 0x18) = pbVar8;
    *(byte **)(this + 0x20) = pbVar8;
    bVar3 = bVar2;
    if (pbVar8 != (byte *)0x0) goto LAB_00a5b084;
LAB_00a5b0b8:
    pbVar8 = (byte *)((ulong)auStack_4c | 1);
    *(undefined1 **)(this + 0x10) = auStack_4c;
    *(byte **)(this + 0x18) = pbVar8;
    *(byte **)(this + 0x20) = pbVar8;
    if (!bVar3) goto LAB_00a5b0cc;
LAB_00a5b088:
    uVar11 = 0;
    if (pbVar8 != *(byte **)(this + 0x20)) goto LAB_00a5b098;
LAB_00a5b0f8:
    memmove(*(void **)(this + 0x10),pbVar8 + -uVar11,uVar11);
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      __src = *(void **)(this + 0x48);
      lVar9 = *(long *)(this + 0x50);
      if (lVar9 - (long)__src != 0) {
        memmove(*(void **)(this + 0x40),__src,lVar9 - (long)__src);
        __src = *(void **)(this + 0x48);
        lVar9 = *(long *)(this + 0x50);
      }
      pbVar7 = *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
      __ptr = pbVar7 + (lVar9 - (long)__src);
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x48) = __ptr;
      if (pbVar7 == this + 0x58) {
        lVar9 = 8;
      }
      else {
                    /* try { // try from 00a5b184 to 00b5b1b3 has its CatchHandler @ 00a5b228 */
        lVar9 = *(long *)(this + 0x60);
      }
      sVar5 = (long)(pbVar7 + lVar9) - (long)__ptr;
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x50) = pbVar7 + lVar9;
      *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x88);
                    /* try { // try from 00a5b1b8 to 00b5b1bf has its CatchHandler @ 00a5b224 */
      if (*(long *)(this + 0x70) - uVar11 <= sVar5) {
        sVar5 = *(long *)(this + 0x70) - uVar11;
      }
      sVar5 = fread(__ptr,1,sVar5,*(FILE **)(this + 0x78));
                    /* try { // try from 00a5b1c0 to 00b5b243 has its CatchHandler @ 00a5b0d4 */
      if (sVar5 == 0) goto LAB_00a5b23c;
      plVar6 = *(long **)(this + 0x80);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00a5b54c();
      }
      *(size_t *)(this + 0x50) = *(long *)(this + 0x48) + sVar5;
      iVar4 = (**(code **)(*plVar6 + 0x20))
                        (plVar6,this + 0x88,*(undefined8 *)(this + 0x40),
                         *(long *)(this + 0x48) + sVar5,this + 0x48,*(long *)(this + 0x10) + uVar11,
                         *(long *)(this + 0x10) + *(long *)(this + 0x70),&local_58);
      if (iVar4 == 3) {
        pbVar8 = *(byte **)(this + 0x40);
        local_58 = *(byte **)(this + 0x50);
        *(byte **)(this + 0x10) = pbVar8;
      }
      else {
                    /* catch() { ... } // from try @ 00a5b1b8 with catch @ 00a5b224 */
        pbVar8 = (byte *)(*(long *)(this + 0x10) + uVar11);
                    /* catch() { ... } // from try @ 00a5b184 with catch @ 00a5b228 */
        if (local_58 == pbVar8) goto LAB_00a5b23c;
      }
LAB_00a5b230:
      *(byte **)(this + 0x18) = pbVar8;
      *(byte **)(this + 0x20) = local_58;
      uVar11 = (ulong)*pbVar8;
    }
    else {
      sVar5 = fread((void *)(*(long *)(this + 0x10) + uVar11),1,
                    (*(long *)(this + 0x20) - uVar11) - *(long *)(this + 0x10),
                    *(FILE **)(this + 0x78));
      if (sVar5 != 0) {
        pbVar8 = (byte *)(*(long *)(this + 0x10) + uVar11);
        local_58 = pbVar8 + sVar5;
        goto LAB_00a5b230;
      }
LAB_00a5b23c:
      uVar11 = 0xffffffff;
    }
  }
  else {
    pbVar8 = *(byte **)(this + 0x18);
    bVar2 = false;
    bVar3 = false;
    if (pbVar8 == (byte *)0x0) goto LAB_00a5b0b8;
LAB_00a5b084:
    if (bVar2) goto LAB_00a5b088;
LAB_00a5b0cc:
                    /* try { // try from 00a5b0d4 to 00b5b183 has its CatchHandler @ 00a5b0d4
                       catch() { ... } // from try @ 00a5b0d4 with catch @ 00a5b0d4
                       catch() { ... } // from try @ 00a5b1c0 with catch @ 00a5b0d4 */
    lVar9 = (long)*(byte **)(this + 0x20) - *(long *)(this + 0x10);
    if (lVar9 < 0) {
      lVar9 = lVar9 + 1;
    }
    uVar11 = lVar9 >> 1;
    if (3 < uVar11) {
      uVar11 = 4;
    }
    if (pbVar8 == *(byte **)(this + 0x20)) goto LAB_00a5b0f8;
LAB_00a5b098:
    uVar11 = (ulong)*pbVar8;
  }
  if (*(undefined1 **)(this + 0x10) == auStack_4c) {
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
LAB_00a5b258:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

