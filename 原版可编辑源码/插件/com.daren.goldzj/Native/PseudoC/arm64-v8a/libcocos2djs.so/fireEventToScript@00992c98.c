
/* JSB_SocketIODelegate::fireEventToScript(cocos2d::network::SIOClient*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
JSB_SocketIODelegate::fireEventToScript
          (JSB_SocketIODelegate *this,SIOClient *param_1,basic_string *param_2,basic_string *param_3
          )

{
  basic_string bVar1;
  long lVar2;
  Value *pVVar3;
  int iVar4;
  Isolate *pIVar5;
  long lVar6;
  long lVar7;
  Object *pOVar8;
  ulong uVar9;
  Object *pOVar10;
  basic_string *__s1;
  Value *pVVar11;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00992cc0 to 00a92d27 has its CatchHandler @ 00992ec8 */
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar5);
  if (cocos2d::Application::_instance != 0) {
    lVar6 = se::NativePtrToObjectMap::find(param_1);
    lVar7 = se::NativePtrToObjectMap::end();
    if (lVar6 != lVar7) {
      se::Value::Value(aVStack_58);
      uVar9 = (ulong)((byte)*param_3 >> 1);
      if (((byte)*param_3 & 1) != 0) {
        uVar9 = *(ulong *)(param_3 + 8);
      }
      if (uVar9 == 0) {
        se::Value::setNull(aVStack_58);
      }
      else {
                    /* try { // try from 00992d2c to 00a92d6f has its CatchHandler @ 00992e90 */
        se::Value::setString(aVStack_58,param_3);
      }
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>>>>
                          *)(this + 0x18),param_2);
      if ((lVar6 != 0) && (pVVar11 = *(Value **)(lVar6 + 0x28), pVVar11[8] == (Value)0x5)) {
        pOVar8 = (Object *)se::Value::toObject(pVVar11);
        uVar9 = se::Object::isFunction(pOVar8);
                    /* try { // try from 00992d74 to 00a92db7 has its CatchHandler @ 00992e8c */
        if (((uVar9 & 1) != 0) && (pVVar11[0x18] == (Value)0x5)) {
          local_88 = (Value *)0x0;
          local_80 = (Value *)0x0;
          local_78 = 0;
          std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
          __push_back_slow_path<se::Value_const&>
                    ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,aVStack_58);
          pOVar8 = (Object *)se::Value::toObject(pVVar11);
          pOVar10 = (Object *)se::Value::toObject(pVVar11 + 0x10);
          se::Object::call(pOVar8,(vector *)&local_88,pOVar10,(Value *)0x0);
          pVVar3 = local_88;
          pVVar11 = local_80;
          if (local_88 != (Value *)0x0) {
            while (pVVar11 != pVVar3) {
                    /* try { // try from 00992dd8 to 00a92e13 has its CatchHandler @ 00992ec8 */
              se::Value::~Value(pVVar11 + -0x10);
              pVVar11 = pVVar11 + -0x10;
            }
            local_80 = pVVar3;
            operator_delete(local_88);
          }
        }
      }
      bVar1 = *param_2;
      uVar9 = (ulong)((byte)bVar1 >> 1);
      if (((byte)bVar1 & 1) != 0) {
        uVar9 = *(ulong *)(param_2 + 8);
      }
      if (uVar9 == 10) {
                    /* try { // try from 00992e14 to 00a92f1f has its CatchHandler @ 00992b88 */
        __s1 = *(basic_string **)(param_2 + 0x10);
        if (((byte)bVar1 & 1) == 0) {
          __s1 = param_2 + 1;
        }
        iVar4 = memcmp(__s1,"disconnect",10);
        if (iVar4 == 0) {
          cocos2d::log("disconnect ... ");
        }
      }
      se::Value::~Value(aVStack_58);
    }
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

