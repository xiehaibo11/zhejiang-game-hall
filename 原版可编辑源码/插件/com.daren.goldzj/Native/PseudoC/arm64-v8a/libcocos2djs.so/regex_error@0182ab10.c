
/* std::__ndk1::regex_error::regex_error(std::__ndk1::regex_constants::error_type) */

void __thiscall std::__ndk1::regex_error::regex_error(regex_error *this,int param_2)

{
  char *pcVar1;
  
  if (param_2 - 1U < 0xf) {
    pcVar1 = (&PTR_s_The_expression_contained_an_inva_01cde7a8)[(int)(param_2 - 1U)];
  }
  else {
    pcVar1 = "Unknown error type";
  }
  runtime_error::runtime_error((runtime_error *)this,pcVar1);
  *(int *)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__regex_error_01cddf98;
  return;
}

