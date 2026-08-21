
/* btVoronoiSimplexSolver::reset() */

void __thiscall btVoronoiSimplexSolver::reset(btVoronoiSimplexSolver *this)

{
  this[0x164] = (btVoronoiSimplexSolver)0x1;
  *(undefined4 *)(this + 0x124) = 0x5d5e0b6b;
  *(undefined8 *)(this + 0x128) = 0x5d5e0b6b5d5e0b6b;
  this[0x138] = (btVoronoiSimplexSolver)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x130) = 0;
  this[0x160] = (btVoronoiSimplexSolver)0x0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  this[0x14c] = (btVoronoiSimplexSolver)((byte)this[0x14c] & 0xf0);
  return;
}

