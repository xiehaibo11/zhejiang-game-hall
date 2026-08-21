
void FUN_01828644(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR__ctype_byname_01cdbaf0;
  freelocale(*(__locale_t *)(param_1 + 0x20));
  *(undefined ***)param_1 = &PTR__ctype_01cdba88;
  if ((*(void **)(param_1 + 0x10) != (void *)0x0) && (param_1[0x18] != (__shared_weak_count)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x10));
  }
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}

