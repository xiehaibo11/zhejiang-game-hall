
/* WARNING: Removing unreachable block (ram,0x00111754) */
/* WARNING: Removing unreachable block (ram,0x00111850) */
/* WARNING: Removing unreachable block (ram,0x001118a8) */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string<decltype(nullptr)>(char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
basic_string<decltype(nullptr)>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  size_t sVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  bVar6 = (~((x_14 + -1) * x_14) | 0xfffffffeU) != 0xffffffff;
  bVar1 = 9 < y_15;
  iVar3 = -0x6775b33c;
  uVar10 = 0x739ebeec;
joined_r0x00111640:
  do {
    if (0x28c0e9ea < (int)uVar10) {
      do {
        if (uVar10 == 0x28c0e9eb) {
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          uVar10 = (x_66 + -1) * x_66;
          bVar8 = ((uVar10 ^ 0xfffffffe) & uVar10) != 0;
          iVar2 = 0x9e59aaf;
          if (9 < y_67 == bVar8 && (9 < y_67 || bVar8)) {
            iVar2 = iVar3;
          }
          iVar12 = -0x7c1d2e1e;
          do {
            if (iVar12 == -0x7c1d2e1e) {
              iVar5 = -0x66b7d91c;
              if (bVar8 != 9 < y_67 || !bVar8 && 9 >= y_67) goto joined_r0x0011187c;
              iVar5 = iVar3;
              goto joined_r0x0011187c;
            }
            iVar5 = iVar12;
            if (iVar12 != -0x6775b33c) goto joined_r0x0011187c;
            iVar12 = -0x66b7d91c;
            do {
              iVar5 = iVar2;
              if ((iVar12 != -0x66b7d91c) && (iVar5 = iVar12, iVar12 == 0x9e59aaf)) {
                sVar9 = strlen(param_1);
                __init(this,param_1,sVar9);
                uVar10 = 0x200b28e;
                goto LAB_00111644;
              }
joined_r0x0011187c:
              iVar12 = iVar5;
            } while (-0x66b7d91d < iVar12);
          } while( true );
        }
        if (uVar10 != 0x739ebeec) goto joined_r0x00111640;
        uVar10 = 0x200b28e;
        if (bVar6 == bVar1 && (bVar6 || bVar1)) {
          uVar10 = 0x28c0e9eb;
        }
      } while (0x28c0e9ea < uVar10);
    }
LAB_00111644:
    if (uVar10 == 0xc6c8def0) {
      if (*(long *)(lVar4 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (uVar10 == 0x200b28e) {
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      uVar10 = (x_66 + -1) * x_66;
      bVar7 = ((uVar10 ^ 0xfffffffe) & uVar10) == 0;
      bVar8 = y_67 < 10;
      iVar2 = 0x9e59aaf;
      if (bVar8 == bVar7 && (9 < y_67 || !bVar7)) {
        iVar2 = iVar3;
      }
      iVar12 = -0x7c1d2e1e;
      do {
        if (iVar12 == -0x7c1d2e1e) {
          iVar5 = -0x66b7d91c;
          if (bVar7 && bVar8 || bVar7 != bVar8) goto joined_r0x00111778;
          iVar5 = iVar3;
          goto joined_r0x00111778;
        }
        iVar5 = iVar12;
        if (iVar12 != -0x6775b33c) goto joined_r0x00111778;
        iVar12 = -0x66b7d91c;
        do {
          iVar5 = iVar2;
          if ((iVar12 != -0x66b7d91c) && (iVar5 = iVar12, iVar12 == 0x9e59aaf)) {
            sVar9 = strlen(param_1);
            __init(this,param_1,sVar9);
            bVar8 = (~((x_14 + 0x6b64a33b) * x_14) | 0xfffffffeU) == 0xffffffff;
            uVar10 = 0xc6c8def0;
            if ((y_15 >= 10 || !bVar8) && y_15 < 10 == bVar8) {
              uVar10 = 0x28c0e9eb;
            }
            goto joined_r0x00111640;
          }
joined_r0x00111778:
          iVar12 = iVar5;
        } while (-0x66b7d91d < iVar12);
      } while( true );
    }
  } while( true );
}

