
int DES_set_key_checked(const_DES_cblock *key,DES_key_schedule *schedule)

{
  int iVar1;
  
  if ((((((*key)[0] == (&DAT_013db504)[(*key)[0]]) && ((*key)[1] == (&DAT_013db504)[(*key)[1]])) &&
       ((*key)[2] == (&DAT_013db504)[(*key)[2]])) &&
      (((*key)[3] == (&DAT_013db504)[(*key)[3]] && ((*key)[4] == (&DAT_013db504)[(*key)[4]])))) &&
     (((*key)[5] == (&DAT_013db504)[(*key)[5]] &&
      (((*key)[6] == (&DAT_013db504)[(*key)[6]] && ((*key)[7] == (&DAT_013db504)[(*key)[7]])))))) {
    iVar1 = DES_is_weak_key(key);
    if (iVar1 == 0) {
      DES_set_key_unchecked(key,schedule);
      iVar1 = 0;
    }
    else {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

