
/* v8::base::TimeDelta::InMinutes() const */

int __thiscall v8::base::TimeDelta::InMinutes(TimeDelta *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2 = SEXT816(*(long *)this) * ZEXT816(0x8f2a633943a6d729);
  iVar1 = 0x7fffffff;
  if (*(long *)this != 0x7fffffffffffffff) {
    iVar1 = (int)(auVar2._8_8_ >> 0x19) - (auVar2._12_4_ >> 0x1f);
  }
  return iVar1;
}

