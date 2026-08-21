
uint etc1_get_encoded_data_size(int param_1,int param_2)

{
                    /* try { // try from 00fcb770 to 010cb773 has its CatchHandler @ 00fcb7a4 */
  return (param_2 + 3U & 0xfffffffc) * (param_1 + 3U & 0xfffffffc) >> 1;
}

