
void FUN_00ffc540(basic_string *param_1,long param_2)

{
  long lVar1;
  Value *pVVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  __String *this;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  char *__s;
  Value **local_a8;
  Value *local_a0;
  Value *local_98;
  void *local_90;
  Value aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  if ((param_2 != 0) && (*(char **)(param_2 + 0x30) != (char *)0x0)) {
    __s = *(char **)(param_2 + 0x30);
    do {
      pcVar9 = *(char **)(__s + 0x120);
      lVar10 = *(long *)(__s + 0x108);
      cocos2d::Value::Value(aVStack_78);
      if (lVar10 != 0) {
        this = (__String *)
               __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&cocos2d::__String::typeinfo,0);
        if (this == (__String *)0x0) {
          lVar7 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&cocos2d::__Dictionary::typeinfo,0);
          if (lVar7 == 0) {
            lVar7 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&cocos2d::__Array::typeinfo,0);
                    /* try { // try from 00ffc6f8 to 010fc787 has its CatchHandler @ 00ffc6f8
                       catch() { ... } // from try @ 00ffc6f8 with catch @ 00ffc6f8
                       catch() { ... } // from try @ 00ffc868 with catch @ 00ffc6f8
                       catch() { ... } // from try @ 00ffc8bc with catch @ 00ffc6f8 */
            if (lVar7 == 0) {
              lVar7 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&cocos2d::__Double::typeinfo,0);
              if (lVar7 == 0) {
                    /* try { // try from 00ffc788 to 010fc7df has its CatchHandler @ 00ffc93c */
                lVar7 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,&cocos2d::__Float::typeinfo,0)
                ;
                if (lVar7 == 0) {
                  lVar7 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,
                                         &cocos2d::__Integer::typeinfo,0);
                  if (lVar7 == 0) {
                    lVar10 = __dynamic_cast(lVar10,&cocos2d::Ref::typeinfo,
                                            &cocos2d::__Bool::typeinfo,0);
                    if (lVar10 == 0) goto LAB_00ffc60c;
                    /* try { // try from 00ffc818 to 010fc81b has its CatchHandler @ 00ffc938 */
                    if (*(char *)(lVar10 + 0x30) == '\0') {
                      cocos2d::Value::Value((Value *)&local_a0,false);
                    }
                    else {
                    /* try { // try from 00ffc820 to 010fc82f has its CatchHandler @ 00ffc934 */
                      cocos2d::Value::Value((Value *)&local_a0,true);
                    }
                    cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                  }
                  else {
                    cocos2d::Value::Value((Value *)&local_a0,*(int *)(lVar7 + 0x30));
                    cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                  }
                }
                else {
                  cocos2d::Value::Value((Value *)&local_a0,*(float *)(lVar7 + 0x30));
                  cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
                }
              }
              else {
                cocos2d::Value::Value((Value *)&local_a0,*(double *)(lVar7 + 0x30));
                cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
              }
              goto LAB_00ffc604;
            }
            FUN_00ffcd78(&local_a0);
            cocos2d::Value::operator=(aVStack_78,(vector *)&local_a0);
            pVVar4 = local_a0;
            pVVar2 = local_98;
            if (local_a0 != (Value *)0x0) {
              while (pVVar2 != pVVar4) {
                cocos2d::Value::~Value(pVVar2 + -0x10);
                pVVar2 = pVVar2 + -0x10;
              }
              local_98 = pVVar4;
              operator_delete(local_a0);
            }
          }
          else {
            FUN_00ffc540(&local_a0);
            cocos2d::Value::operator=(aVStack_78,(unordered_map *)&local_a0);
            pVVar2 = local_a0;
            puVar3 = local_90;
            while (puVar3 != (void *)0x0) {
              pvVar8 = (void *)*puVar3;
              local_a0 = pVVar2;
              cocos2d::Value::~Value((Value *)(puVar3 + 5));
              if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                operator_delete((void *)puVar3[4]);
              }
              operator_delete(puVar3);
              pVVar2 = local_a0;
              puVar3 = pvVar8;
            }
            local_a0 = (Value *)0x0;
            if (pVVar2 != (Value *)0x0) {
              operator_delete(pVVar2);
            }
          }
        }
        else {
          pcVar5 = (char *)cocos2d::__String::getCString(this);
          cocos2d::Value::Value((Value *)&local_a0,pcVar5);
          cocos2d::Value::operator=(aVStack_78,(Value *)&local_a0);
LAB_00ffc604:
          cocos2d::Value::~Value((Value *)&local_a0);
        }
      }
LAB_00ffc60c:
      sVar6 = strlen(__s);
      if (sVar6 != 0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_a0,__s);
        local_a8 = &local_a0;
        lVar10 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                           (param_1,(piecewise_construct_t *)&local_a0,(tuple *)&DAT_01456b5c,
                            (tuple *)&local_a8);
        cocos2d::Value::operator=((Value *)(lVar10 + 0x28),aVStack_78);
        if (((ulong)local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      cocos2d::Value::~Value(aVStack_78);
      __s = pcVar9;
    } while (pcVar9 != (char *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00ffc85c to 010fc867 has its CatchHandler @ 00ffc8e8 */
                    /* try { // try from 00ffc868 to 010fc8af has its CatchHandler @ 00ffc6f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

