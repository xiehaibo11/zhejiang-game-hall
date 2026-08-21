
/* v8::internal::AreSameFormat(v8::internal::VRegister const&, v8::internal::VRegister const&,
   v8::internal::VRegister const&, v8::internal::VRegister const&) */

bool v8::internal::AreSameFormat
               (VRegister *param_1,VRegister *param_2,VRegister *param_3,VRegister *param_4)

{
  if (((*(int *)param_2 == -1) ||
      ((*(int *)(param_2 + 4) == *(int *)(param_1 + 4) &&
       (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc))))) &&
     ((*(int *)param_3 == -1 ||
      ((*(int *)(param_3 + 4) == *(int *)(param_1 + 4) &&
       (*(int *)(param_3 + 0xc) == *(int *)(param_1 + 0xc))))))) {
    if (*(int *)param_4 == -1) {
      return true;
    }
    if (*(int *)(param_4 + 4) == *(int *)(param_1 + 4)) {
      return *(int *)(param_4 + 0xc) == *(int *)(param_1 + 0xc);
    }
  }
  return false;
}

