
/* p2t::Sweep::BasinAngle(p2t::Node const&) const */

void __thiscall p2t::Sweep::BasinAngle(Sweep *this,Node *param_1)

{
  atan2((*(double **)param_1)[1] - ((double *)**(long **)(*(long *)(param_1 + 0x10) + 0x10))[1],
        **(double **)param_1 - *(double *)**(long **)(*(long *)(param_1 + 0x10) + 0x10));
  return;
}

