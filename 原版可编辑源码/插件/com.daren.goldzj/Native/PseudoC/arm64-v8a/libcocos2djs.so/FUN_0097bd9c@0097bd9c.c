
void FUN_0097bd9c(long param_1,basic_string *param_2,basic_string *param_3,int *param_4,
                 undefined8 *param_5)

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
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  HandleScope aHStack_78 [24];
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_4;
  __s = (char *)*param_5;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_78,pIVar5);
  local_90 = (Value *)0x0;
  local_88 = (Value *)0x0;
  local_80 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,4);
  std_string_to_seval(param_2,local_90);
  std_string_to_seval(param_3,local_90 + 0x10);
                    /* try { // try from 0097be20 to 00a7be27 has its CatchHandler @ 0097bfcc */
                    /* try { // try from 0097be28 to 00a7bebb has its CatchHandler @ 0097bd90 */
  int32_to_seval(iVar1,local_90 + 0x20);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0097be98;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    local_60 = uVar7 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_0097be98:
  *(undefined1 *)((long)__dest + __n) = 0;
  std_string_to_seval((basic_string *)&local_60,local_90 + 0x30);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0097bebc to 00a7bec3 has its CatchHandler @ 0097bfc8 */
  se::Value::Value((Value *)&local_60);
                    /* try { // try from 0097bec4 to 00a7bf0f has its CatchHandler @ 0097bd90 */
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar6 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar6 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar7 = se::Object::call(this,(vector *)&local_90,pOVar6,(Value *)&local_60);
  if ((uVar7 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value((Value *)&local_60);
  pVVar4 = local_90;
                    /* try { // try from 0097bf10 to 00a7bf17 has its CatchHandler @ 0097bfc4 */
  pVVar3 = local_88;
  if (local_90 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_88 = pVVar4;
    operator_delete(local_90);
  }
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0097bf68 to 00a7bf6f has its CatchHandler @ 0097bfc0 */
                    /* try { // try from 0097bf70 to 00a7bfe7 has its CatchHandler @ 0097bd90 */
  return;
}

