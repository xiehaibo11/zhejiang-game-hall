
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::internal::compiler::JSInliningHeuristic::Candidate,
   std::__ndk1::__tree_node<v8::internal::compiler::JSInliningHeuristic::Candidate, void*>*, long>,
   bool> std::__ndk1::__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,
   v8::internal::compiler::JSInliningHeuristic::CandidateCompare,
   v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>
   >::__emplace_unique_key_args<v8::internal::compiler::JSInliningHeuristic::Candidate,
   v8::internal::compiler::JSInliningHeuristic::Candidate
   const&>(v8::internal::compiler::JSInliningHeuristic::Candidate const&,
   v8::internal::compiler::JSInliningHeuristic::Candidate const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
::
__emplace_unique_key_args<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::Candidate_const&>
          (__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
           *this,Candidate *param_1,Candidate *param_2)

{
  uint uVar1;
  uint uVar2;
  Zone *this_00;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
  *p_Var6;
  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
  *p_Var7;
  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
  *p_Var8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  p_Var6 = this + 8;
  p_Var7 = *(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
             **)p_Var6;
  p_Var8 = p_Var6;
  if (p_Var7 != (__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
                 *)0x0) {
    fVar9 = *(float *)(param_1 + 0xf0);
    p_Var6 = this + 8;
    do {
      while (p_Var8 = p_Var7, fVar12 = *(float *)(p_Var8 + 0x110), NAN(fVar12)) {
        if (NAN(fVar9)) {
LAB_01741310:
          uVar1 = *(uint *)(*(long *)(param_1 + 0xe8) + 0x14) & 0xffffff;
          uVar2 = *(uint *)(*(long *)(p_Var8 + 0x108) + 0x14) & 0xffffff;
          if (uVar1 <= uVar2) {
            if (uVar1 < uVar2) goto LAB_017412e0;
            goto LAB_0174134c;
          }
        }
LAB_0174132c:
        p_Var6 = p_Var8;
        p_Var7 = *(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
                   **)p_Var8;
        if (*(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
              **)p_Var8 ==
            (__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
             *)0x0) {
          p_Var5 = *(__tree_node_base **)p_Var8;
          goto joined_r0x01741364;
        }
      }
      if (!NAN(fVar9)) {
        if (fVar12 < fVar9) goto LAB_0174132c;
        if (fVar12 <= fVar9) goto LAB_01741310;
      }
LAB_017412e0:
      p_Var6 = p_Var8 + 8;
      p_Var7 = *(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
                 **)p_Var6;
    } while (*(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
               **)p_Var6 !=
             (__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
              *)0x0);
  }
LAB_0174134c:
  p_Var5 = *(__tree_node_base **)p_Var6;
joined_r0x01741364:
  if (p_Var5 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var5 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var5) < 0x118) {
      p_Var5 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x118);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var5 + 0x118;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 0x18);
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(p_Var5 + 0x48) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(p_Var5 + 0x40) = uVar4;
    *(undefined8 *)(p_Var5 + 0x58) = uVar11;
    *(undefined8 *)(p_Var5 + 0x50) = uVar10;
    *(undefined8 *)(p_Var5 + 0x28) = uVar14;
    *(undefined8 *)(p_Var5 + 0x20) = uVar13;
    *(undefined8 *)(p_Var5 + 0x38) = uVar16;
    *(undefined8 *)(p_Var5 + 0x30) = uVar15;
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar11 = *(undefined8 *)(param_2 + 0x78);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    uVar14 = *(undefined8 *)(param_2 + 0x48);
    uVar13 = *(undefined8 *)(param_2 + 0x40);
    uVar16 = *(undefined8 *)(param_2 + 0x58);
    uVar15 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(p_Var5 + 0x88) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(p_Var5 + 0x80) = uVar4;
    *(undefined8 *)(p_Var5 + 0x98) = uVar11;
    *(undefined8 *)(p_Var5 + 0x90) = uVar10;
    *(undefined8 *)(p_Var5 + 0x68) = uVar14;
    *(undefined8 *)(p_Var5 + 0x60) = uVar13;
    *(undefined8 *)(p_Var5 + 0x78) = uVar16;
    *(undefined8 *)(p_Var5 + 0x70) = uVar15;
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar10 = *(undefined8 *)(param_2 + 0xb0);
    uVar14 = *(undefined8 *)(param_2 + 0x88);
    uVar13 = *(undefined8 *)(param_2 + 0x80);
    uVar16 = *(undefined8 *)(param_2 + 0x98);
    uVar15 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(p_Var5 + 200) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(p_Var5 + 0xc0) = uVar4;
    *(undefined8 *)(p_Var5 + 0xd8) = uVar11;
    *(undefined8 *)(p_Var5 + 0xd0) = uVar10;
    *(undefined8 *)(p_Var5 + 0xa8) = uVar14;
    *(undefined8 *)(p_Var5 + 0xa0) = uVar13;
    *(undefined8 *)(p_Var5 + 0xb8) = uVar16;
    *(undefined8 *)(p_Var5 + 0xb0) = uVar15;
    uVar11 = *(undefined8 *)(param_2 + 200);
    uVar10 = *(undefined8 *)(param_2 + 0xc0);
    uVar14 = *(undefined8 *)(param_2 + 0xd8);
    uVar13 = *(undefined8 *)(param_2 + 0xd0);
    uVar16 = *(undefined8 *)(param_2 + 0xe8);
    uVar15 = *(undefined8 *)(param_2 + 0xe0);
    uVar4 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
      **)(p_Var5 + 0x10) = p_Var8;
    *(undefined8 *)(p_Var5 + 0xf8) = uVar14;
    *(undefined8 *)(p_Var5 + 0xf0) = uVar13;
    *(undefined8 *)(p_Var5 + 0x108) = uVar16;
    *(undefined8 *)(p_Var5 + 0x100) = uVar15;
    *(undefined8 *)(p_Var5 + 0x110) = uVar4;
    *(undefined8 *)(p_Var5 + 0xe8) = uVar11;
    *(undefined8 *)(p_Var5 + 0xe0) = uVar10;
    *(__tree_node_base **)p_Var6 = p_Var5;
    p_Var3 = p_Var5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var3 = *(__tree_node_base **)p_Var6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    uVar4 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar4 = 0;
  }
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = p_Var5;
  return auVar17;
}

