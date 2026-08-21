
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::overflow(int) */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::overflow
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  size_t sVar6;
  void *pvVar7;
  undefined1 *puVar8;
  FILE *__s;
  undefined8 uVar9;
  ulong uVar10;
  void *__ptr;
  long lVar11;
  void *local_80;
  long local_78;
  undefined1 local_6c [4];
  long local_68;
  
                    /* try { // try from 00a5b2ec to 00b5b347 has its CatchHandler @ 00a5b2ec
                       catch() { ... } // from try @ 00a5b2ec with catch @ 00a5b2ec
                       catch() { ... } // from try @ 00a5b378 with catch @ 00a5b2ec */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) != 0) {
    if (((byte)this[0x9c] >> 4 & 1) == 0) {
      uVar10 = *(ulong *)(this + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (uVar10 < 9) {
        *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 00a5b370 to 00b5b377 has its CatchHandler @ 00a5b3c8 */
        pvVar7 = (void *)0x0;
        lVar11 = 0;
                    /* try { // try from 00a5b378 to 00b5b3e7 has its CatchHandler @ 00a5b2ec */
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
      }
      else {
        if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
          pvVar7 = *(void **)(this + 0x68);
          uVar10 = *(ulong *)(this + 0x70);
        }
        else {
                    /* try { // try from 00a5b348 to 00b5b36b has its CatchHandler @ 00a5b3cc */
          pvVar7 = *(void **)(this + 0x40);
        }
        lVar11 = (long)pvVar7 + (uVar10 - 1);
        *(void **)(this + 0x28) = pvVar7;
        *(void **)(this + 0x30) = pvVar7;
        *(long *)(this + 0x38) = lVar11;
      }
      *(undefined4 *)(this + 0x9c) = 0x10;
    }
    else {
      pvVar7 = *(void **)(this + 0x28);
      lVar11 = *(long *)(this + 0x38);
    }
    puVar8 = *(undefined1 **)(this + 0x30);
    __ptr = pvVar7;
    if (param_1 != -1) {
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = local_6c;
        *(undefined1 **)(this + 0x28) = puVar8;
        *(undefined1 **)(this + 0x30) = puVar8;
                    /* catch() { ... } // from try @ 00a5b370 with catch @ 00a5b3c8 */
        *(ulong *)(this + 0x38) = (ulong)puVar8 | 1;
      }
                    /* catch() { ... } // from try @ 00a5b348 with catch @ 00a5b3cc */
      *puVar8 = (char)param_1;
      __ptr = *(void **)(this + 0x28);
      puVar8 = (undefined1 *)(*(long *)(this + 0x30) + 1);
      *(undefined1 **)(this + 0x30) = puVar8;
    }
    sVar6 = (long)puVar8 - (long)__ptr;
    if (sVar6 == 0) {
LAB_00a5b414:
      iVar3 = 0;
      if (param_1 != -1) {
        iVar3 = param_1;
      }
      goto LAB_00a5b4fc;
    }
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      local_78 = *(long *)(this + 0x40);
      plVar5 = *(long **)(this + 0x80);
      if (plVar5 == (long *)0x0) {
LAB_00a5b548:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a5b548 to 00b5b577 has its CatchHandler @ 00a5b5ec */
        FUN_00a5b54c();
      }
      uVar2 = (**(code **)(*plVar5 + 0x18))
                        (plVar5,this + 0x88,__ptr,puVar8,&local_80,local_78,
                         local_78 + *(long *)(this + 0x60),&local_78);
      __ptr = *(void **)(this + 0x28);
      if (local_80 != __ptr) {
        do {
          if (uVar2 == 3) {
            __s = *(FILE **)(this + 0x78);
            sVar6 = *(long *)(this + 0x30) - (long)__ptr;
            goto LAB_00a5b3f8;
          }
                    /* try { // try from 00a5b498 to 00b5b547 has its CatchHandler @ 00a5b498
                       catch() { ... } // from try @ 00a5b498 with catch @ 00a5b498
                       catch() { ... } // from try @ 00a5b584 with catch @ 00a5b498 */
          if ((1 < uVar2) ||
             (sVar4 = local_78 - (long)*(void **)(this + 0x40),
             sVar6 = fwrite(*(void **)(this + 0x40),1,sVar4,*(FILE **)(this + 0x78)), sVar6 != sVar4
             )) break;
          if (uVar2 != 1) goto LAB_00a5b408;
          uVar9 = *(undefined8 *)(this + 0x30);
          *(void **)(this + 0x28) = local_80;
          *(undefined8 *)(this + 0x38) = uVar9;
          plVar5 = *(long **)(this + 0x80);
          *(undefined8 *)(this + 0x30) = uVar9;
          if (plVar5 == (long *)0x0) goto LAB_00a5b548;
          uVar2 = (**(code **)(*plVar5 + 0x18))
                            (plVar5,this + 0x88,local_80,uVar9,&local_80,*(long *)(this + 0x40),
                             *(long *)(this + 0x40) + *(long *)(this + 0x60),&local_78);
          __ptr = *(void **)(this + 0x28);
        } while (local_80 != __ptr);
      }
    }
    else {
      __s = *(FILE **)(this + 0x78);
LAB_00a5b3f8:
      sVar4 = fwrite(__ptr,1,sVar6,__s);
      if (sVar4 == sVar6) {
LAB_00a5b408:
        *(void **)(this + 0x30) = pvVar7;
        *(void **)(this + 0x28) = pvVar7;
        *(long *)(this + 0x38) = lVar11;
        goto LAB_00a5b414;
      }
    }
  }
  iVar3 = -1;
LAB_00a5b4fc:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

