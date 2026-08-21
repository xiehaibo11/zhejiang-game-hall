
/* v8::internal::Map::MapPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
    */

void __thiscall v8::internal::Map::MapPrint(Map *this,basic_ostream *param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  basic_ostream *pbVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  ulong local_78;
  ulong local_70;
  undefined8 uStack_68;
  ulong local_60;
  ulong local_58;
  int local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  HeapObject::PrintHeader((HeapObject *)this,param_1,"Map");
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - type: ",10);
  internal::operator<<(pbVar5,*(undefined2 *)(*(long *)this + 7));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - instance size: ",0x13);
  if (*(char *)(*(long *)this + 3) == '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"variable",8)
    ;
  }
  else {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
               (uint)*(byte *)(*(long *)this + 3) << 2);
  }
  if (0xa9 < *(ushort *)(*(long *)this + 7)) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - inobject properties: ",0x19);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
               (uint)*(byte *)(*(long *)this + 3) - (uint)*(byte *)(*(long *)this + 4));
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - elements kind: ",0x13);
  pcVar6 = (char *)ElementsKindToString(*(byte *)(*(long *)this + 10) >> 3);
  sVar7 = strlen(pcVar6);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar6,sVar7);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - unused property fields: ",0x1c);
  bVar1 = *(byte *)(*(long *)this + 5);
  uVar10 = (uint)bVar1;
  if (2 < bVar1) {
    uVar10 = (uint)*(byte *)(*(long *)this + 3) - (uint)bVar1;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar10);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - enum length: ",0x11);
  if ((~*(uint *)(*(long *)this + 0xb) & 0x3ff) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"invalid",7);
  }
  else {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
               *(uint *)(*(long *)this + 0xb) & 0x3ff);
  }
  lVar8 = *(long *)this;
  if ((*(uint *)(lVar8 + 0xb) >> 0x18 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - deprecated_map",0x12);
    lVar8 = *(long *)this;
  }
  puVar11 = (uint *)(lVar8 + 0xb);
  if ((*(uint *)(lVar8 + 0xb) >> 0x19 & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - stable_map",0xe);
    lVar8 = *(long *)this;
    puVar11 = (uint *)(lVar8 + 0xb);
    if ((*puVar11 >> 0x1a & 1) != 0) goto LAB_00f35fc0;
LAB_00f35ec8:
    if ((*puVar11 >> 0x15 & 1) == 0) goto LAB_00f35ed0;
LAB_00f35fe4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - dictionary_map",0x12);
    lVar8 = *(long *)this;
    if ((*(byte *)(lVar8 + 9) >> 2 & 1) != 0) goto LAB_00f36004;
LAB_00f35ed8:
    if ((*(byte *)(lVar8 + 9) >> 3 & 1) == 0) goto LAB_00f35ee0;
LAB_00f36024:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - indexed_interceptor",0x17);
    lVar8 = *(long *)this;
    uVar10 = *(uint *)(lVar8 + 0xb);
  }
  else {
    if ((*puVar11 >> 0x1a & 1) == 0) goto LAB_00f35ec8;
LAB_00f35fc0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - migration_target",0x14);
    lVar8 = *(long *)this;
    if ((*(uint *)(lVar8 + 0xb) >> 0x15 & 1) != 0) goto LAB_00f35fe4;
LAB_00f35ed0:
    if ((*(byte *)(lVar8 + 9) >> 2 & 1) == 0) goto LAB_00f35ed8;
LAB_00f36004:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - named_interceptor",0x15);
    lVar8 = *(long *)this;
    if ((*(byte *)(lVar8 + 9) >> 3 & 1) != 0) goto LAB_00f36024;
LAB_00f35ee0:
    uVar10 = *(uint *)(lVar8 + 0xb);
  }
  if ((uVar10 >> 0x1c & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - may_have_interesting_symbols",0x20);
    lVar8 = *(long *)this;
  }
  pbVar12 = (byte *)(lVar8 + 9);
  if ((*pbVar12 >> 4 & 1) == 0) {
    if ((*(byte *)(lVar8 + 9) >> 1 & 1) == 0) goto LAB_00f35f14;
LAB_00f3606c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - callable",0xc);
    lVar8 = *(long *)this;
    pbVar12 = (byte *)(lVar8 + 9);
    bVar1 = *pbVar12;
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - undetectable",0x10);
    lVar8 = *(long *)this;
    pbVar12 = (byte *)(lVar8 + 9);
    if ((*(byte *)(lVar8 + 9) >> 1 & 1) != 0) goto LAB_00f3606c;
LAB_00f35f14:
    bVar1 = *pbVar12;
  }
  if ((bVar1 >> 6 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - constructor",0xf);
    lVar8 = *(long *)this;
    pbVar12 = (byte *)(lVar8 + 9);
  }
  if ((char)*pbVar12 < '\0') {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - has_prototype_slot",0x16);
    lVar8 = *(long *)this;
    if ((*(byte *)(lVar8 + 9) & 1) != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1," (non-instance prototype)",0x19);
      lVar8 = *(long *)this;
    }
    if ((*(byte *)(lVar8 + 9) >> 5 & 1) != 0) goto LAB_00f36128;
LAB_00f35f4c:
    uVar10 = *(uint *)(lVar8 + 0xb);
  }
  else {
    if ((*pbVar12 >> 5 & 1) == 0) goto LAB_00f35f4c;
LAB_00f36128:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - access_check_needed",0x17);
    lVar8 = *(long *)this;
    uVar10 = *(uint *)(lVar8 + 0xb);
  }
  if ((uVar10 >> 0x1b & 1) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - non-extensible",0x12);
    lVar8 = *(long *)this;
  }
  if (*(ushort *)(lVar8 + 7) - 0x88 < 10) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - native context: ",0x14);
    uVar9 = *(ulong *)this;
    uVar10 = *(uint *)(uVar9 + 0x13);
LAB_00f3617c:
    local_70 = uVar9 & 0xffffffff00000000 | (ulong)uVar10;
  }
  else {
    if ((*(uint *)(lVar8 + 0xb) >> 0x14 & 1) != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\n - prototype_map",0x11);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - prototype info: ",0x14);
      uVar9 = *(ulong *)this;
      uVar10 = *(uint *)(uVar9 + 0x23);
      goto LAB_00f3617c;
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - back pointer: ",0x12);
    uVar10 = *(uint *)(*(ulong *)this + 0x13);
    uVar9 = *(ulong *)this & 0xffffffff00000000;
    if (((uVar10 & 1) == 0) ||
       (local_70 = uVar9 | uVar10, *(short *)((uVar9 | 7) + (ulong)*(uint *)(local_70 - 1)) != 0xa2)
       ) {
      local_70 = *(ulong *)(uVar9 + 0xa0);
    }
  }
  internal::operator<<(pbVar5,(Brief *)&local_70);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - prototype_validity cell: ",0x1d);
  local_70 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1f);
  internal::operator<<(pbVar5,(Brief *)&local_70);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - instance descriptors ",0x19);
  bVar3 = (*(uint *)(*(long *)this + 0xb) & 0x400000) != 0;
  pcVar6 = "";
  if (bVar3) {
    pcVar6 = "(own) ";
  }
  uVar9 = 0;
  if (bVar3) {
    uVar9 = 6;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,pcVar6,uVar9);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"#",1);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                      *(uint *)(*(long *)this + 0xb) >> 10 & 0x3ff);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,": ",2)
  ;
  local_70 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar5,(Brief *)&local_70);
  uVar9 = *(ulong *)this;
  if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 5 & 1) != 0) goto LAB_00f363a0;
  local_70 = uVar9 & 0xffffffff00000000;
  uStack_68 = 0;
  uVar10 = *(uint *)(uVar9 + 0x23);
  local_58 = local_70 | uVar10;
  local_60 = uVar9;
  if ((uVar10 == 3) || ((uVar10 & 1) == 0)) {
    local_50 = 1;
  }
  else {
    uVar9 = (ulong)uVar10 & 3;
    if (uVar9 == 1) {
      if (*(short *)((local_70 | 7) + (ulong)*(uint *)(local_58 - 1)) == 0x98) {
        local_50 = 4;
      }
      else if (*(short *)((local_70 | 7) + (ulong)*(uint *)(local_58 - 1)) == 100) {
        local_50 = 0;
      }
      else {
        local_50 = 2;
      }
    }
    else {
      if (uVar9 != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_50 = 3;
    }
  }
  iVar4 = TransitionsAccessor::NumberOfTransitions((TransitionsAccessor *)&local_70);
  if (iVar4 < 1) goto LAB_00f363a0;
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - transitions #",0x11);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,": ",2);
  uVar10 = *(uint *)(*(ulong *)this + 0x23);
  uVar9 = (ulong)uVar10;
  if ((uVar10 & 1) == 0) {
LAB_00f36304:
    local_78 = *(ulong *)this & 0xffffffff00000000 | uVar9;
    internal::operator<<(param_1,(Brief *)&local_78);
  }
  else if (uVar10 != 3) {
    uVar9 = uVar9 & 0xfffffffffffffffd;
    goto LAB_00f36304;
  }
  if (local_50 == 4) {
    local_78 = local_58;
    TransitionArray::PrintInternal((TransitionArray *)&local_78,param_1);
  }
  else if (local_50 == 3) {
    TransitionsAccessor::PrintOneTransition
              (param_1,local_58 & 0xffffffff00000000 |
                       (ulong)*(uint *)((local_58 & 0xffffffff00000000 |
                                        (ulong)*(uint *)((local_58 & 0xfffffffffffffffd) + 0x17)) +
                                        ((long)(int)((*(uint *)((local_58 & 0xfffffffffffffffd) +
                                                               0xb) >> 10 & 0x3ff) - 1) *
                                         0xc00000000 + 0x1000000000 >> 0x20) + -1));
  }
LAB_00f363a0:
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - prototype: ",0xf);
  local_70 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar5,(Brief *)&local_70);
  if (9 < *(ushort *)(*(long *)this + 7) - 0x88) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - constructor: ",0x11);
    uVar10 = *(uint *)(*(ulong *)this + 0x13);
    uVar9 = *(ulong *)this & 0xffffffff00000000;
    local_70 = uVar9 | uVar10;
    if ((uVar10 & 1) != 0) {
      do {
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(local_70 - 1)) != 0xa2) break;
        puVar11 = (uint *)(local_70 + 0x13);
        local_70 = uVar9 | *puVar11;
      } while ((*puVar11 & 1) != 0);
    }
    internal::operator<<(pbVar5,(Brief *)&local_70);
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - dependent code: ",0x14);
  local_70 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
  internal::operator<<(pbVar5,(Brief *)&local_70);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - construction counter: ",0x1a);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
             *(uint *)(*(long *)this + 0xb) >> 0x1d);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

