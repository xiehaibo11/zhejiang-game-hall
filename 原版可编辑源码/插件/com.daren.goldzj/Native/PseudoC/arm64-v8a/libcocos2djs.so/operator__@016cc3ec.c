
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::GraphAsJSON const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,GraphAsJSON *param_2)

{
  Node *pNVar1;
  uint uVar2;
  Graph *pGVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  long lVar9;
  Node *pNVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  basic_ostream *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  AllNodes local_108 [72];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  Zone aZStack_a8 [64];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_170 = &PTR__AccountingAllocator_01cbced0;
  uStack_168 = 0;
  local_160 = 0;
  Zone::Zone(aZStack_a8,(AccountingAllocator *)&local_170,
             "../../src/compiler/graph-visualizer.cc:408");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"{\n\"nodes\":[",0xb);
  pGVar3 = *(Graph **)param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  local_158 = param_1;
  AllNodes::AllNodes((AllNodes *)&local_150,aZStack_a8,pGVar3,false);
  AllNodes::AllNodes(local_108,aZStack_a8,pGVar3,true);
  puVar7 = local_148;
  local_b0 = 1;
  local_c0 = uVar4;
  uStack_b8 = uVar12;
  for (puVar11 = local_150; puVar11 != puVar7; puVar11 = puVar11 + 1) {
    JSONGraphNodeWriter::PrintNode((JSONGraphNodeWriter *)&local_158,(Node *)*puVar11);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(local_158,"\n",1);
  if (local_150 != (undefined8 *)0x0) {
    local_148 = local_150;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"],\n\"edges\":[",0xc);
  local_158 = param_1;
  AllNodes::AllNodes((AllNodes *)&local_150,aZStack_a8,*(Graph **)param_2,false);
  puVar7 = local_148;
  local_108[0] = (AllNodes)0x1;
  for (puVar11 = local_150; puVar11 != puVar7; puVar11 = puVar11 + 1) {
    pNVar10 = (Node *)*puVar11;
    lVar9 = 0;
    pNVar1 = pNVar10 + 0x20;
    while( true ) {
      uVar2 = *(uint *)(pNVar10 + 0x14) & 0xf000000;
      if (uVar2 == 0xf000000) {
        uVar5 = *(uint *)(*(long *)pNVar1 + 8);
      }
      else {
        uVar5 = *(uint *)(pNVar10 + 0x14) >> 0x18 & 0xf;
      }
      if ((int)uVar5 <= lVar9) break;
      pNVar8 = pNVar1;
      if (uVar2 == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      if (*(Node **)(pNVar8 + lVar9 * 8) != (Node *)0x0) {
        JSONGraphEdgeWriter::PrintEdge
                  ((JSONGraphEdgeWriter *)&local_158,pNVar10,(int)lVar9,
                   *(Node **)(pNVar8 + lVar9 * 8));
      }
      lVar9 = lVar9 + 1;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(local_158,"\n",1);
  if (local_150 != (undefined8 *)0x0) {
    local_148 = local_150;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]}",2);
  Zone::~Zone(aZStack_a8);
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_170);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

