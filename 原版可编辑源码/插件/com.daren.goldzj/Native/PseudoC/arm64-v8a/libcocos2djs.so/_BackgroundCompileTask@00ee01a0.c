
/* v8::internal::BackgroundCompileTask::~BackgroundCompileTask() */

void __thiscall
v8::internal::BackgroundCompileTask::~BackgroundCompileTask(BackgroundCompileTask *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  Parser *this_00;
  ParseInfo *this_01;
  
  puVar2 = *(undefined8 **)(this + 0x18);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    plVar3 = (long *)puVar2[1];
    puVar2[1] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    operator_delete(puVar2);
    puVar2 = puVar1;
  }
  plVar3 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  this_00 = *(Parser **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (this_00 != (Parser *)0x0) {
    Parser::~Parser(this_00);
    operator_delete(this_00);
  }
  this_01 = *(ParseInfo **)this;
  *(undefined8 *)this = 0;
  if (this_01 != (ParseInfo *)0x0) {
    ParseInfo::~ParseInfo(this_01);
    operator_delete(this_01);
    return;
  }
  return;
}

