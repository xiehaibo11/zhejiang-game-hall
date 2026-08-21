
void FUN_0097ac38(long param_1,basic_string *param_2,int *param_3,undefined8 *param_4,float *param_5
                 )

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  size_t __n;
  Object *pOVar6;
  Object *this;
  ulong uVar7;
  char *__s;
  void *__dest;
  float fVar8;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 0097ac40 to 00a7adef has its CatchHandler @ 0097ac40
                       catch() { ... } // from try @ 0097ac40 with catch @ 0097ac40
                       catch() { ... } // from try @ 0097ae2c with catch @ 0097ac40 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_3;
  __s = (char *)*param_4;
  fVar8 = *param_5;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_88,pIVar5);
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,4);
  std_string_to_seval(param_2,local_a0);
  int32_to_seval(iVar1,local_a0 + 0x10);
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0097ae20 to 00a7ae2b has its CatchHandler @ 0097b0a0 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0097ad28;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_70 = uVar7 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_0097ad28:
  *(undefined1 *)((long)__dest + __n) = 0;
  std_string_to_seval((basic_string *)&local_70,local_a0 + 0x20);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  float_to_seval(fVar8,local_a0 + 0x30);
  se::Value::Value((Value *)&local_70);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar6 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar6 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar7 = se::Object::call(this,(vector *)&local_a0,pOVar6,(Value *)&local_70);
  if ((uVar7 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value((Value *)&local_70);
  pVVar4 = local_a0;
  pVVar3 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_98 = pVVar4;
    operator_delete(local_a0);
  }
                    /* try { // try from 0097adf0 to 00a7adf7 has its CatchHandler @ 0097b09c */
  v8::HandleScope::~HandleScope(aHStack_88);
                    /* try { // try from 0097ae00 to 00a7ae0b has its CatchHandler @ 0097b08c */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

