
/* p2t::Sweep::IsShallow(p2t::SweepContext&, p2t::Node&) */

bool __thiscall p2t::Sweep::IsShallow(Sweep *this,SweepContext *param_1,Node *param_2)

{
  SweepContext *pSVar1;
  
  pSVar1 = param_1 + 0x28;
  if (param_1[0x38] != (SweepContext)0x0) {
    pSVar1 = param_1 + 0x18;
  }
  return *(double *)(**(long **)pSVar1 + 8) - *(double *)(*(long *)param_2 + 8) <
         *(double *)(param_1 + 0x30);
}

