
/* v8::base::TimeDelta::InDays() const */

int __thiscall v8::base::TimeDelta::InDays(TimeDelta *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  iVar1 = 0x7fffffff;
  if (lVar2 != 0x7fffffffffffffff) {
    iVar1 = ((int)(lVar2 / 86400000000) + (int)(lVar2 >> 0x3f)) -
            (SUB164(SEXT816(lVar2) * SEXT816(0x32e73fb956a1b897),0xc) >> 0x1f);
  }
  return iVar1;
}

