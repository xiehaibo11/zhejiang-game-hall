
/* rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&
   rapidjson::GenericDocument<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
   rapidjson::CrtAllocator>::ParseStream<0u, rapidjson::UTF8<char>,
   rapidjson::GenericStringStream<rapidjson::UTF8<char> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&) */

GenericDocument * __thiscall
rapidjson::
GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
::ParseStream<0u,rapidjson::UTF8<char>,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
          (GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
           *this,GenericStringStream *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(this + 0x28);
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  local_40 = 0x100;
  local_38 = 0;
  local_30 = 0;
  auVar5 = GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::
           Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>>
                     ((GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>
                       *)&local_68,param_1,(GenericDocument *)this);
  *(undefined1 (*) [16])(this + 0x58) = auVar5;
  if (auVar5._0_4_ == 0) {
    lVar2 = *(long *)(this + 0x40);
    *(long *)(this + 0x40) = lVar2 + -0x18;
    uVar4 = *(undefined8 *)(lVar2 + -0x10);
    uVar3 = *(undefined8 *)(lVar2 + -0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar2 + -8);
    *(undefined8 *)(this + 8) = uVar4;
    *(undefined8 *)this = uVar3;
    *(undefined2 *)(lVar2 + -2) = 0;
  }
  *(void **)(this + 0x40) = *(void **)(this + 0x38);
  free(*(void **)(this + 0x38));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  free(pvStack_58);
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (GenericDocument *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

