
/* v8::internal::compiler::JSInliningHeuristic::CandidateCompare::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::JSInliningHeuristic::Candidate
   const&, v8::internal::compiler::JSInliningHeuristic::Candidate const&) const */

bool __thiscall
v8::internal::compiler::JSInliningHeuristic::CandidateCompare::operator()
          (CandidateCompare *this,Candidate *param_1,Candidate *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0xf0);
  fVar1 = *(float *)(param_1 + 0xf0);
  if (!NAN(fVar2)) {
    if (!NAN(fVar1)) {
      if (fVar2 < fVar1) {
        return true;
      }
      if (fVar2 <= fVar1) goto LAB_01740fcc;
    }
    return false;
  }
  if (!NAN(fVar1)) {
    return true;
  }
LAB_01740fcc:
  return (*(uint *)(*(long *)(param_2 + 0xe8) + 0x14) & 0xffffff) <
         (*(uint *)(*(long *)(param_1 + 0xe8) + 0x14) & 0xffffff);
}

