
/* int 
   v8::internal::MarkCompactCollectorBase::CollectRememberedSetUpdatingItems<v8::internal::CodeLargeObjectSpace>(v8::internal::ItemParallelJob*,
   v8::internal::CodeLargeObjectSpace*, v8::internal::RememberedSetUpdatingMode) */

int __thiscall
v8::internal::MarkCompactCollectorBase::
CollectRememberedSetUpdatingItems<v8::internal::CodeLargeObjectSpace>
          (MarkCompactCollectorBase *this,
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          *param_1,long param_2,int param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  Item *local_28;
  
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      if (*(long *)(lVar3 + 0x38) == 0) {
        bVar1 = *(long *)(lVar3 + 0x80) != 0;
      }
      else {
        bVar1 = true;
      }
      if (*(long *)(lVar3 + 0x30) == 0) {
        bVar2 = *(long *)(lVar3 + 0x78) != 0;
      }
      else {
        bVar2 = true;
      }
      if ((((*(long *)(lVar3 + 0x88) != 0) || (*(long *)(lVar3 + 0x90) != 0)) ||
          ((bool)(bVar1 | bVar2 | *(long *)(lVar3 + 0x70) != 0))) &&
         ((((bool)(param_4 == 0 | bVar2) || (*(long *)(lVar3 + 0x70) != 0)) ||
          ((*(long *)(lVar3 + 0x90) != 0 || (*(long *)(lVar3 + 0x88) != 0)))))) {
        local_28 = (Item *)(**(code **)(*(long *)this + 0x70))(this,lVar3,param_4);
        if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
          std::__ndk1::
          vector<v8::internal::ItemParallelJob::Item*,std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*>>
          ::__push_back_slow_path<v8::internal::ItemParallelJob::Item*const&>(param_1,&local_28);
        }
        else {
          **(undefined8 **)(param_1 + 8) = local_28;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        }
        iVar4 = iVar4 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0xe0);
    } while (lVar3 != 0);
  }
  return iVar4;
}

