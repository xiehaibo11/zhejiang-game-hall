
uint etc1_get_encoded_data_size(int param_1,int param_2)

{
  return (param_2 + 3U & 0xfffffffc) * (param_1 + 3U & 0xfffffffc) >> 1;
}

