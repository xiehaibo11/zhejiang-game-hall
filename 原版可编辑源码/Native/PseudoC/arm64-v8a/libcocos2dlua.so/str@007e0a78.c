
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str() const */

void std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
     ::str(void)

{
  undefined8 *puVar1;
  long in_x0;
  ulong *in_x8;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((*(uint *)(in_x0 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(in_x0 + 0x60) >> 3 & 1) == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      return;
    }
    puVar11 = *(undefined1 **)(in_x0 + 0x10);
    puVar9 = *(undefined1 **)(in_x0 + 0x20);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    uVar10 = (long)puVar9 - (long)puVar11;
    if (uVar10 < 0xfffffffffffffff0) {
      if (uVar10 < 0x17) {
        puVar6 = (undefined1 *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar10 << 1);
      }
      else {
        uVar8 = uVar10 + 0x10 & 0xfffffffffffffff0;
        puVar6 = operator_new(uVar8);
        in_x8[1] = uVar10;
        in_x8[2] = (ulong)puVar6;
        *in_x8 = uVar8 | 1;
      }
      if (puVar11 != puVar9) {
        puVar7 = puVar6;
        if ((0x1f < uVar10) && ((puVar9 <= puVar6 || (puVar6 + uVar10 <= puVar11)))) {
          uVar3 = uVar10 & 0xffffffffffffffe0;
          puVar4 = (undefined8 *)(puVar6 + 0x10);
          puVar6 = puVar6 + uVar3;
          puVar5 = (undefined8 *)(puVar11 + 0x10);
          uVar8 = uVar3;
          do {
            puVar1 = puVar5 + -1;
            uVar12 = puVar5[-2];
            uVar14 = puVar5[1];
            uVar13 = *puVar5;
            uVar8 = uVar8 - 0x20;
            puVar5 = puVar5 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar12;
            puVar4[1] = uVar14;
            *puVar4 = uVar13;
            puVar4 = puVar4 + 4;
          } while (uVar8 != 0);
          puVar11 = puVar11 + uVar3;
          puVar7 = puVar6;
          if (uVar10 == uVar3) goto LAB_007e0c68;
        }
        do {
          puVar2 = puVar11 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar11;
          puVar11 = puVar2;
          puVar7 = puVar6;
        } while (puVar9 != puVar2);
      }
      goto LAB_007e0c68;
    }
  }
  else {
    puVar9 = *(undefined1 **)(in_x0 + 0x30);
    puVar11 = *(undefined1 **)(in_x0 + 0x58);
    if (*(undefined1 **)(in_x0 + 0x58) < puVar9) {
      *(undefined1 **)(in_x0 + 0x58) = puVar9;
      puVar11 = puVar9;
    }
    puVar9 = *(undefined1 **)(in_x0 + 0x28);
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    uVar10 = (long)puVar11 - (long)puVar9;
    if (uVar10 < 0xfffffffffffffff0) {
      if (uVar10 < 0x17) {
        puVar6 = (undefined1 *)((long)in_x8 + 1);
        *(char *)in_x8 = (char)((int)uVar10 << 1);
      }
      else {
        uVar8 = uVar10 + 0x10 & 0xfffffffffffffff0;
        puVar6 = operator_new(uVar8);
        in_x8[1] = uVar10;
        in_x8[2] = (ulong)puVar6;
        *in_x8 = uVar8 | 1;
      }
      if (puVar9 != puVar11) {
        puVar7 = puVar6;
        if ((0x1f < uVar10) && ((puVar11 <= puVar6 || (puVar6 + uVar10 <= puVar9)))) {
          uVar3 = uVar10 & 0xffffffffffffffe0;
          puVar4 = (undefined8 *)(puVar6 + 0x10);
          puVar6 = puVar6 + uVar3;
          puVar5 = (undefined8 *)(puVar9 + 0x10);
          uVar8 = uVar3;
          do {
            puVar1 = puVar5 + -1;
            uVar12 = puVar5[-2];
            uVar14 = puVar5[1];
            uVar13 = *puVar5;
            uVar8 = uVar8 - 0x20;
            puVar5 = puVar5 + 4;
            puVar4[-1] = *puVar1;
            puVar4[-2] = uVar12;
            puVar4[1] = uVar14;
            *puVar4 = uVar13;
            puVar4 = puVar4 + 4;
          } while (uVar8 != 0);
          puVar9 = puVar9 + uVar3;
          puVar7 = puVar6;
          if (uVar3 == uVar10) goto LAB_007e0c68;
        }
        do {
          puVar2 = puVar9 + 1;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar9;
          puVar9 = puVar2;
          puVar7 = puVar6;
        } while (puVar11 != puVar2);
      }
LAB_007e0c68:
      *puVar6 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_length_error();
}

