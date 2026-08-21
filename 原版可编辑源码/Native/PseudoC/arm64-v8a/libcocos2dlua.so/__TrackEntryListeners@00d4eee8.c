
/* spine::_TrackEntryListeners::~_TrackEntryListeners() */

void __thiscall spine::_TrackEntryListeners::~_TrackEntryListeners(_TrackEntryListeners *this)

{
  _TrackEntryListeners *p_Var1;
  code *UNRECOVERED_JUMPTABLE;
  
  p_Var1 = *(_TrackEntryListeners **)(this + 0x110);
  if (this + 0xf0 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d4ef20:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d4ef20;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0xe0);
  if (this + 0xc0 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d4ef4c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d4ef4c;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0xb0);
  if (this + 0x90 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d4ef78:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d4ef78;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0x80);
  if (this + 0x60 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d4efa4:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d4efa4;
  }
                    /* catch() { ... } // from try @ 00d4eea0 with catch @ 00d4efa8 */
  p_Var1 = *(_TrackEntryListeners **)(this + 0x50);
  if (this + 0x30 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (_TrackEntryListeners *)0x0) goto LAB_00d4efd4;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
                    /* catch() { ... } // from try @ 00d4f004 with catch @ 00d4efc4 */
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00d4efd4:
  p_Var1 = *(_TrackEntryListeners **)(this + 0x20);
  if (this == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (_TrackEntryListeners *)0x0) {
                    /* try { // try from 00d4f004 to 00e4f113 has its CatchHandler @ 00d4efc4 */
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
  }
                    /* try { // try from 00d4effc to 00e4f003 has its CatchHandler @ 00d4f0f8 */
                    /* WARNING: Could not recover jumptable at 0x00d4f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

