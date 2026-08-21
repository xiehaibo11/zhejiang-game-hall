
/* btClock::TEMPNAMEPLACEHOLDERVALUE(btClock const&) */

void __thiscall btClock::operator=(btClock *this,btClock *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)this;
  uVar2 = **(undefined8 **)param_1;
  puVar1[1] = (*(undefined8 **)param_1)[1];
  *puVar1 = uVar2;
  return;
}

