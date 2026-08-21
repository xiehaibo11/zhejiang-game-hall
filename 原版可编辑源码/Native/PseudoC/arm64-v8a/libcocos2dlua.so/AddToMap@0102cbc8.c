
/* p2t::SweepContext::AddToMap(p2t::Triangle*) */

void __thiscall p2t::SweepContext::AddToMap(SweepContext *this,Triangle *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(0x18);
  plVar1[1] = (long)(this + 0x68);
  plVar1[2] = (long)param_1;
  lVar2 = *(long *)(this + 0x68);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
                    /* try { // try from 0102cbfc to 0112cc2f has its CatchHandler @ 0102cbfc
                       catch() { ... } // from try @ 0102cbfc with catch @ 0102cbfc
                       catch() { ... } // from try @ 0102cc34 with catch @ 0102cbfc */
  *(long **)(this + 0x68) = plVar1;
  *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
  return;
}

