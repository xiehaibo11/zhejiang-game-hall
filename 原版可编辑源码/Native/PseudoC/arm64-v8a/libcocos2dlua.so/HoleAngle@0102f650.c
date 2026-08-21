
/* p2t::Sweep::HoleAngle(p2t::Node const&) const */

void __thiscall p2t::Sweep::HoleAngle(Sweep *this,Node *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
                    /* try { // try from 0102f654 to 0112f65b has its CatchHandler @ 0102f6c0 */
                    /* try { // try from 0102f65c to 0112f6db has its CatchHandler @ 0102f630 */
  dVar1 = **(double **)param_1;
  dVar2 = (*(double **)param_1)[1];
  dVar3 = *(double *)**(long **)(param_1 + 0x10) - dVar1;
  dVar4 = ((double *)**(long **)(param_1 + 0x10))[1] - dVar2;
  dVar1 = *(double *)**(long **)(param_1 + 0x18) - dVar1;
  dVar2 = ((double *)**(long **)(param_1 + 0x18))[1] - dVar2;
  atan2(dVar3 * dVar2 - dVar4 * dVar1,dVar3 * dVar1 + dVar4 * dVar2);
  return;
}

