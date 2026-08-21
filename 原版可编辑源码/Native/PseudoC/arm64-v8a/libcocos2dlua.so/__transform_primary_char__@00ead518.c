
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__transform_primary<char*>
          (regex_traits<char> *this,char *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  byte *in_x8;
  ulong uVar9;
  char *pcVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
                    /* try { // try from 00ead524 to 00fad52b has its CatchHandler @ 00ead594 */
                    /* try { // try from 00ead52c to 00fad54b has its CatchHandler @ 00ead434 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar14 = (long)param_2 - (long)param_1;
                    /* try { // try from 00ead54c to 00fad557 has its CatchHandler @ 00ead594 */
  local_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00ead558 to 00fad59b has its CatchHandler @ 00ead434 */
  if (uVar14 < 0x17) {
    uVar3 = (int)uVar14 << 1;
    uVar9 = (ulong)uVar3;
    local_70 = (ulong)(byte)uVar3;
    pcVar7 = (char *)((ulong)&local_70 | 1);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ead4fc with catch @ 00ead594
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead524 with catch @ 00ead594
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead54c with catch @ 00ead594
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ead49c with catch @ 00ead598
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead4c8 with catch @ 00ead598
                        */
    uVar9 = uVar14 + 0x10 & 0xfffffffffffffff0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ead60c with catch @ 00ead59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead63c with catch @ 00ead59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead66c with catch @ 00ead59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead694 with catch @ 00ead59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ead6c0 with catch @ 00ead59c
                        */
    pcVar7 = operator_new(uVar9);
    uVar9 = uVar9 | 1;
    local_68 = uVar14;
    local_70 = uVar9;
    local_60 = pcVar7;
  }
  if (param_1 != param_2) {
    pcVar8 = pcVar7;
    if (0x1f < uVar14) {
      uVar12 = uVar14 & 0xffffffffffffffe0;
      pcVar8 = pcVar7 + 0x10;
      pcVar7 = pcVar7 + uVar12;
      pcVar10 = param_1 + 0x10;
      uVar13 = uVar12;
      do {
        pcVar5 = pcVar10 + -8;
        uVar15 = *(undefined8 *)(pcVar10 + -0x10);
        uVar17 = *(undefined8 *)(pcVar10 + 8);
        uVar16 = *(undefined8 *)pcVar10;
        uVar13 = uVar13 - 0x20;
        pcVar10 = pcVar10 + 0x20;
        *(undefined8 *)(pcVar8 + -8) = *(undefined8 *)pcVar5;
        *(undefined8 *)(pcVar8 + -0x10) = uVar15;
        *(undefined8 *)(pcVar8 + 8) = uVar17;
        *(undefined8 *)pcVar8 = uVar16;
        pcVar8 = pcVar8 + 0x20;
      } while (uVar13 != 0);
      pcVar8 = pcVar7;
      param_1 = param_1 + uVar12;
      if (uVar14 == uVar12) goto LAB_00ead604;
    }
    do {
      pcVar10 = param_1 + 1;
      pcVar7 = pcVar8 + 1;
      *pcVar8 = *param_1;
      pcVar8 = pcVar7;
      param_1 = pcVar10;
    } while (param_2 != pcVar10);
  }
LAB_00ead604:
                    /* try { // try from 00ead604 to 00fad60b has its CatchHandler @ 00ead700 */
  *pcVar7 = '\0';
                    /* try { // try from 00ead60c to 00fad62f has its CatchHandler @ 00ead59c */
  bVar6 = (uVar9 & 1) != 0;
  pcVar7 = (char *)((ulong)&local_70 | 1);
  if (bVar6) {
    pcVar7 = local_60;
  }
  uVar14 = (ulong)((uint)uVar9 >> 1 & 0x7f);
  if (bVar6) {
    uVar14 = local_68;
  }
                    /* try { // try from 00ead630 to 00fad63b has its CatchHandler @ 00ead700 */
  (**(code **)(**(long **)(this + 0x10) + 0x20))(*(long **)(this + 0x10),pcVar7,pcVar7 + uVar14);
                    /* try { // try from 00ead63c to 00fad663 has its CatchHandler @ 00ead59c */
  bVar2 = *in_x8;
  uVar14 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar14 = *(ulong *)(in_x8 + 8);
  }
  if (uVar14 != 1) {
    if (uVar14 == 0xc) {
      pbVar11 = *(byte **)(in_x8 + 0x10);
                    /* try { // try from 00ead664 to 00fad66b has its CatchHandler @ 00ead6fc */
      bVar6 = (bVar2 & 1) != 0;
                    /* try { // try from 00ead66c to 00fad68b has its CatchHandler @ 00ead59c */
      pbVar1 = in_x8 + 4;
      if (bVar6) {
        pbVar1 = pbVar11 + 3;
      }
      if (!bVar6) {
        pbVar11 = in_x8 + 1;
      }
      pbVar11[0xb] = *pbVar1;
    }
    else if ((bVar2 & 1) == 0) {
                    /* try { // try from 00ead6c0 to 00fad703 has its CatchHandler @ 00ead59c */
      in_x8[0] = 0;
      in_x8[1] = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      in_x8[8] = 0;
      in_x8[9] = 0;
      in_x8[10] = 0;
      in_x8[0xb] = 0;
      in_x8[0xc] = 0;
      in_x8[0xd] = 0;
      in_x8[0xe] = 0;
      in_x8[0xf] = 0;
    }
  }
  if ((local_70 & 1) != 0) {
                    /* try { // try from 00ead68c to 00fad693 has its CatchHandler @ 00ead6fc */
    operator_delete(local_60);
  }
                    /* try { // try from 00ead694 to 00fad6b3 has its CatchHandler @ 00ead59c */
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00ead6b4 to 00fad6bf has its CatchHandler @ 00ead6fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

