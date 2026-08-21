
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
  ulong uVar9;
  void *__ptr;
  long lVar10;
  void *local_70;
  long local_68;
  undefined1 local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) != 0) {
    if (((byte)this[0x9c] >> 4 & 1) == 0) {
      uVar9 = *(ulong *)(this + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      if (uVar9 < 9) {
        pvVar7 = (void *)0x0;
        lVar10 = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x38) = 0;
      }
      else {
        if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
          pvVar7 = *(void **)(this + 0x68);
          uVar9 = *(ulong *)(this + 0x70);
        }
        else {
          pvVar7 = *(void **)(this + 0x40);
        }
        lVar10 = (long)pvVar7 + (uVar9 - 1);
        *(void **)(this + 0x28) = pvVar7;
        *(void **)(this + 0x30) = pvVar7;
        *(long *)(this + 0x38) = lVar10;
      }
      *(undefined4 *)(this + 0x9c) = 0x10;
    }
    else {
      pvVar7 = *(void **)(this + 0x28);
      lVar10 = *(long *)(this + 0x38);
    }
    puVar8 = *(undefined1 **)(this + 0x30);
    __ptr = pvVar7;
    if (param_1 != -1) {
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = local_5c;
        *(undefined1 **)(this + 0x28) = puVar8;
        *(undefined1 **)(this + 0x30) = puVar8;
        *(ulong *)(this + 0x38) = (ulong)puVar8 | 1;
      }
      *puVar8 = (char)param_1;
      __ptr = *(void **)(this + 0x28);
      puVar8 = (undefined1 *)(*(long *)(this + 0x30) + 1);
      *(undefined1 **)(this + 0x30) = puVar8;
    }
    sVar6 = (long)puVar8 - (long)__ptr;
    if (sVar6 == 0) {
LAB_00cc7ad0:
      iVar3 = 0;
      if (param_1 != -1) {
        iVar3 = param_1;
      }
      goto LAB_00cc7bb4;
    }
    if (this[0xa2] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) {
      local_68 = *(long *)(this + 0x40);
      plVar5 = *(long **)(this + 0x80);
      if (plVar5 == (long *)0x0) {
LAB_00cc7bfc:
                    /* WARNING: Subroutine does not return */
        FUN_00cc7c00();
      }
      uVar2 = (**(code **)(*plVar5 + 0x18))
                        (plVar5,this + 0x88,__ptr,puVar8,&local_70,local_68,
                         local_68 + *(long *)(this + 0x60),&local_68);
      __ptr = *(void **)(this + 0x28);
      if (local_70 != __ptr) {
        do {
          if (uVar2 == 3) {
            __s = *(FILE **)(this + 0x78);
            sVar6 = *(long *)(this + 0x30) - (long)__ptr;
            goto LAB_00cc7ab8;
          }
          if ((1 < uVar2) ||
             (sVar4 = local_68 - (long)*(void **)(this + 0x40),
             sVar6 = fwrite(*(void **)(this + 0x40),1,sVar4,*(FILE **)(this + 0x78)), sVar6 != sVar4
             )) break;
          if (uVar2 != 1) goto LAB_00cc7ac8;
          plVar5 = *(long **)(this + 0x80);
          *(void **)(this + 0x28) = local_70;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
          if (plVar5 == (long *)0x0) goto LAB_00cc7bfc;
          uVar2 = (**(code **)(*plVar5 + 0x18))
                            (plVar5,this + 0x88,local_70,*(undefined8 *)(this + 0x30),&local_70,
                             *(long *)(this + 0x40),*(long *)(this + 0x40) + *(long *)(this + 0x60),
                             &local_68);
          __ptr = *(void **)(this + 0x28);
        } while (local_70 != __ptr);
      }
    }
    else {
      __s = *(FILE **)(this + 0x78);
LAB_00cc7ab8:
      sVar4 = fwrite(__ptr,1,sVar6,__s);
      if (sVar4 == sVar6) {
LAB_00cc7ac8:
        *(void **)(this + 0x28) = pvVar7;
        *(void **)(this + 0x30) = pvVar7;
        *(long *)(this + 0x38) = lVar10;
        goto LAB_00cc7ad0;
      }
    }
  }
  iVar3 = -1;
LAB_00cc7bb4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

