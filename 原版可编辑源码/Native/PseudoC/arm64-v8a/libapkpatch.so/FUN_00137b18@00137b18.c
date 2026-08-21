
void FUN_00137b18(int param_1,code *param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  runtime_error *prVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  pthread_t local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0 < param_1) {
    iVar1 = param_1 + -1 + param_5;
    do {
      if ((param_1 == 1) && (param_4 != 0)) {
        (*param_2)(iVar1,param_3);
      }
      else {
        puVar4 = operator_new(0x18);
        *puVar4 = param_2;
        puVar4[1] = 0;
        *(int *)(puVar4 + 1) = param_5;
        puVar4[2] = param_3;
        local_70 = 0;
        iVar3 = pthread_create(&local_70,(pthread_attr_t *)0x0,FUN_00137dc4,puVar4);
        if (iVar3 != 0) {
          operator_delete(puVar4);
          prVar5 = (runtime_error *)__cxa_allocate_exception(0x10);
          FUN_00136f64(abStack_c8,iVar3);
          puVar4 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   insert(abStack_c8,0,"pthread_create() return ");
          local_a0 = puVar4[2];
          uStack_a8 = puVar4[1];
          local_b0 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_b0," error!");
          local_80 = puVar4[2];
          uStack_88 = puVar4[1];
          local_90 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          std::runtime_error::runtime_error(prVar5,(basic_string *)&local_90);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(prVar5,&std::runtime_error::typeinfo,std::underflow_error::~underflow_error);
        }
        iVar3 = pthread_detach(local_70);
        if (iVar3 != 0) {
          prVar5 = (runtime_error *)__cxa_allocate_exception(0x10);
          FUN_00136f64(abStack_c8,iVar3);
          puVar4 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   insert(abStack_c8,0,"pthread_detach() return ");
          local_a0 = puVar4[2];
          uStack_a8 = puVar4[1];
          local_b0 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          puVar4 = (undefined8 *)
                   std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)&local_b0," error!");
          local_80 = puVar4[2];
          uStack_88 = puVar4[1];
          local_90 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          std::runtime_error::runtime_error(prVar5,(basic_string *)&local_90);
                    /* WARNING: Subroutine does not return */
          __cxa_throw(prVar5,&std::runtime_error::typeinfo,std::underflow_error::~underflow_error);
        }
      }
      param_1 = param_1 + -1;
      param_5 = param_5 + 1;
    } while (param_1 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

