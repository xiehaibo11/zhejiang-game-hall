
/* std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */

bool __thiscall
std::__ndk1::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  return *(error_category **)(param_1 + 8) == this && *(int *)param_1 == param_2;
}

