
/* v8::base::TimeDelta::InHours() const */

int __thiscall v8::base::TimeDelta::InHours(TimeDelta *this)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  auVar2 = SEXT816(*(long *)this) * ZEXT816(0x98b5bf2c03e529c5);
  iVar1 = 0x7fffffff;
  if (*(long *)this != 0x7fffffffffffffff) {
    iVar1 = (int)(auVar2._8_8_ >> 0x1f) - (auVar2._12_4_ >> 0x1f);
  }
  return iVar1;
}

