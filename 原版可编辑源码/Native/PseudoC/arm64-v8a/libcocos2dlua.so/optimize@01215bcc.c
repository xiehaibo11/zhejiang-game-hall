
/* btDbvtBroadphase::optimize() */

void __thiscall btDbvtBroadphase::optimize(btDbvtBroadphase *this)

{
  btDbvt::optimizeTopDown((btDbvt *)(this + 8),0x80);
  btDbvt::optimizeTopDown((btDbvt *)(this + 0x68),0x80);
  return;
}

