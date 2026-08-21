
int DES_check_key_parity(const_DES_cblock *key)

{
  if (((((*key)[0] == (&DAT_013db504)[(*key)[0]]) && ((*key)[1] == (&DAT_013db504)[(*key)[1]])) &&
      ((*key)[2] == (&DAT_013db504)[(*key)[2]])) &&
     ((((*key)[3] == (&DAT_013db504)[(*key)[3]] && ((*key)[4] == (&DAT_013db504)[(*key)[4]])) &&
      (((*key)[5] == (&DAT_013db504)[(*key)[5]] && ((*key)[6] == (&DAT_013db504)[(*key)[6]])))))) {
    return (int)((*key)[7] == (&DAT_013db504)[(*key)[7]]);
  }
  return 0;
}

