
/* v8::internal::wasm::WasmCode::Disassemble(char const*, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned long) const */

void __thiscall
v8::internal::wasm::WasmCode::Disassemble
          (WasmCode *this,char *param_1,basic_ostream *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  basic_ostream *pbVar6;
  size_t sVar7;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  HandlerTable aHStack_a8 [12];
  uint local_9c;
  int aiStack_98 [2];
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_80;
  char local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 != (char *)0x0) {
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"name: ",6);
    sVar7 = strlen(param_1);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar6,param_1,sVar7);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
  }
  if (*(int *)(this + 0x38) != -1) {
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"index: ",7);
    pbVar6 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                        *(uint *)(this + 0x38));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"kind: ",6);
  if (*(uint *)(this + 0x3c) < 5) {
    pcVar14 = *(char **)(&DAT_01cbc370 + (long)(int)*(uint *)(this + 0x3c) * 8);
  }
  else {
    pcVar14 = "unknown kind";
  }
  sVar7 = strlen(pcVar14);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar6,pcVar14,sVar7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"compiler: ",10);
  pcVar14 = "Liftoff";
  if (this[0x88] != (WasmCode)0x2) {
    pcVar14 = "TurboFan";
  }
  uVar12 = 7;
  if (this[0x88] != (WasmCode)0x2) {
    uVar12 = 8;
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar6,pcVar14,uVar12);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
  lVar10 = *(long *)(this + 8);
  lVar11 = *(long *)(this + 0x68);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"Body (size = ",0xd);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                      *(ulong *)(this + 8));
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar6," = ",3);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                      *(ulong *)(this + 0x68));
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar6," + ",3);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,lVar10 - lVar11);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar6," padding)\n",10);
  uVar12 = *(ulong *)(this + 0x40);
  if (*(ulong *)(this + 0x68) <= *(ulong *)(this + 0x40)) {
    uVar12 = *(ulong *)(this + 0x68);
  }
  uVar15 = *(ulong *)(this + 0x50);
  if (uVar12 <= uVar15 || uVar15 == 0) {
    uVar15 = uVar12;
  }
  uVar12 = *(ulong *)(this + 0x58);
  if (uVar15 <= *(ulong *)(this + 0x58)) {
    uVar12 = uVar15;
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"Instructions (size = ",0x15);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,uVar12);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,")\n",2);
  Disassembler::Decode
            ((Disassembler *)0x0,param_2,*(long *)this,*(long *)this + uVar12,2,this,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  iVar5 = *(int *)(this + 0x40) - (int)*(long *)(this + 0x58);
  if (iVar5 != 0) {
    HandlerTable::HandlerTable(aHStack_a8,*(long *)this + *(long *)(this + 0x58),iVar5,1);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"Exception Handler Table (size = ",0x20);
    iVar5 = HandlerTable::NumberOfReturnEntries(aHStack_a8);
    pbVar6 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"):\n",3);
    HandlerTable::HandlerTableReturnPrint(aHStack_a8,param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  if (*(long *)(this + 0x80) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2,"Protected instructions:\n pc offset  land pad\n",0x2d);
    if (*(long *)(this + 0x80) != 0) {
      puVar13 = *(uint **)(this + 0x78);
      puVar1 = puVar13 + *(long *)(this + 0x80) * 2;
      do {
        *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 10;
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar8 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,*puVar13);
        *(undefined8 *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 0x18) = 10;
        *(uint *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 8) =
             *(uint *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           (pbVar8,puVar13[1]);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  if (*(long *)(this + 0x28) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_2,"Source positions:\n pc offset  position\n",0x27);
    SourcePositionTableIterator::SourcePositionTableIterator
              ((SourcePositionTableIterator *)aHStack_a8,*(undefined8 *)(this + 0x20),
               *(undefined8 *)(this + 0x28),0);
    if (local_90 != -1) {
      do {
        *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 10;
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar8 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,local_88);
        *(uint *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 8) =
             *(uint *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 8) & 0xffffffb5 | 2;
        *(undefined8 *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 0x18) = 10;
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           (pbVar8,(local_80 >> 1 & 0x3fffffff) - 1);
        pcVar14 = "";
        if (local_78 != '\0') {
          pcVar14 = "  statement";
        }
        uVar12 = 0;
        if (local_78 != '\0') {
          uVar12 = 0xb;
        }
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,pcVar14,uVar12);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\n",1);
        SourcePositionTableIterator::Advance((SourcePositionTableIterator *)aHStack_a8);
      } while (local_90 != -1);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  if (*(ulong *)(this + 0x50) != 0) {
    SafepointTable::SafepointTable
              ((SafepointTable *)aHStack_a8,*(ulong *)this,*(ulong *)(this + 0x50),
               *(uint *)(this + 0x48),false);
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"Safepoints (size = ",0x13);
    pbVar6 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                        (aiStack_98[0] + 0xc) * local_9c + 8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,")\n",2);
    if (local_9c != 0) {
      uVar15 = 0;
      uVar12 = 0;
      do {
        uVar16 = (ulong)*(uint *)(CONCAT44(uStack_8c,local_90) + (uVar15 & 0xfffffffc));
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,
                   (void *)(*(long *)this + uVar16));
        *(undefined8 *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 0x18) = 6;
        *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) =
             *(uint *)(param_2 + *(long *)(*(long *)param_2 + -0x18) + 8) & 0xffffffb5 | 8;
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,uVar16);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6,"  ",2);
        *(uint *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 8) =
             *(uint *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 8) & 0xffffffb5 | 2;
        SafepointTable::PrintEntry((SafepointTable *)aHStack_a8,(uint)uVar12,param_2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_2," (sp -> fp)",0xb);
        lVar10 = CONCAT44(uStack_8c,local_90) + (uVar15 & 0xfffffffc);
        iVar5 = *(int *)(lVar10 + 4);
        if (((char)local_80 != '\0') && (iVar2 = *(int *)(lVar10 + 8), iVar2 != -1)) {
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_2," trampoline: ",0xd);
          *(uint *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 8) =
               *(uint *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 8) & 0xffffffb5 | 8;
          plVar9 = (long *)std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::
                           operator<<((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                                      iVar2);
          *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 8) =
               *(uint *)((long)plVar9 + *(long *)(*plVar9 + -0x18) + 8) & 0xffffffb5 | 2;
        }
        if (iVar5 != -1) {
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_2," deopt: ",8);
          *(undefined8 *)(pbVar6 + *(long *)(*(long *)pbVar6 + -0x18) + 0x18) = 6;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar5);
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
        uVar12 = uVar12 + 1;
        uVar15 = uVar15 + 0xc;
      } while (uVar12 < local_9c);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_2,"RelocInfo (size = ",0x12);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                      *(ulong *)(this + 0x18));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,")\n",2);
  RelocIterator::RelocIterator
            ((RelocIterator *)aHStack_a8,*(undefined8 *)this,*(undefined8 *)(this + 8),
             *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),0,0xffffffff);
  if (local_70 == '\0') {
    do {
      RelocInfo::Print((RelocInfo *)aiStack_98,(Isolate *)0x0,param_2);
      RelocIterator::next((RelocIterator *)aHStack_a8);
    } while (local_70 == '\0');
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  uVar3 = *(int *)(this + 0x68) - (int)*(long *)(this + 0x60);
  if (uVar3 != 0) {
    PrintCodeCommentsSection(param_2,*(long *)this + *(long *)(this + 0x60),uVar3);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

