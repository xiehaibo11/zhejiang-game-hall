
/* spine::_TrackEntryListeners::~_TrackEntryListeners() */

void __thiscall spine::_TrackEntryListeners::~_TrackEntryListeners(_TrackEntryListeners *this)

{
  _TrackEntryListeners *p_Var1;
  code *UNRECOVERED_JUMPTABLE;
  
  p_Var1 = *(_TrackEntryListeners **)(this + 0x110);
  if (this + 0xf0 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d0e1f8:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d0e1f8;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0xe0);
  if (this + 0xc0 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d0e224:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d0e224;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0xb0);
  if (this + 0x90 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d0e250:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d0e250;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0x80);
  if (this + 0x60 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
LAB_00d0e27c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (p_Var1 != (_TrackEntryListeners *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
    goto LAB_00d0e27c;
  }
  p_Var1 = *(_TrackEntryListeners **)(this + 0x50);
  if (this + 0x30 == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (_TrackEntryListeners *)0x0) goto LAB_00d0e2ac;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00d0e2ac:
  p_Var1 = *(_TrackEntryListeners **)(this + 0x20);
  if (this == p_Var1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (_TrackEntryListeners *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)p_Var1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00d0e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

