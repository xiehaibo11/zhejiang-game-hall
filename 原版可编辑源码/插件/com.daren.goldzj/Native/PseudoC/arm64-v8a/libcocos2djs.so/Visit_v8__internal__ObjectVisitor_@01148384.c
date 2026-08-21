
/* void v8::internal::RelocInfo::Visit<v8::internal::ObjectVisitor>(v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::RelocInfo::Visit<v8::internal::ObjectVisitor>(RelocInfo *this,ObjectVisitor *param_1)

{
  RelocInfo RVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  RVar1 = this[8];
  if (((byte)RVar1 & 0xfe) == 2) {
    uVar2 = *(undefined8 *)(this + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x50);
  }
  else if ((char)RVar1 < '\x02') {
    uVar2 = *(undefined8 *)(this + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x48);
  }
  else {
    switch(RVar1) {
    case (RelocInfo)0x6:
      uVar2 = *(undefined8 *)(this + 0x18);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x58);
      break;
    case (RelocInfo)0x7:
      uVar2 = *(undefined8 *)(this + 0x18);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x60);
      break;
    case (RelocInfo)0x8:
    case (RelocInfo)0x9:
      uVar2 = *(undefined8 *)(this + 0x18);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x70);
      break;
    case (RelocInfo)0xa:
      uVar2 = *(undefined8 *)(this + 0x18);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
      break;
    default:
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01148430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
  return;
}

