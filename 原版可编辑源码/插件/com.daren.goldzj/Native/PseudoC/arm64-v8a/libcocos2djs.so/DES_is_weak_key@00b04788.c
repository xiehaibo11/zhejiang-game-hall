
int DES_is_weak_key(const_DES_cblock *key)

{
                    /* catch() { ... } // from try @ 00b04830 with catch @ 00b047ec */
                    /* try { // try from 00b04800 to 00c04803 has its CatchHandler @ 00b04868 */
                    /* try { // try from 00b04810 to 00c0482f has its CatchHandler @ 00b04874 */
                    /* try { // try from 00b04830 to 00c048a3 has its CatchHandler @ 00b047ec */
                    /* catch() { ... } // from try @ 00b04800 with catch @ 00b04868 */
                    /* catch() { ... } // from try @ 00b04810 with catch @ 00b04874 */
  if (((((*key != (const_DES_cblock)0x101010101010101) &&
        (*key != (const_DES_cblock)0xfefefefefefefefe)) &&
       (*key != (const_DES_cblock)0xe0e0e0e1f1f1f1f)) &&
      (((*key != (const_DES_cblock)0xf1f1f1f1e0e0e0e0 &&
        (*key != (const_DES_cblock)0xfe01fe01fe01fe01)) &&
       ((*key != (const_DES_cblock)0x1fe01fe01fe01fe &&
        ((*key != (const_DES_cblock)0xf10ef10ee01fe01f &&
         (*key != (const_DES_cblock)0xef10ef11fe01fe0)))))))) &&
     ((*key != (const_DES_cblock)0xf101f101e001e001 &&
      (((((*key != (const_DES_cblock)0x1f101f101e001e0 &&
          (*key != (const_DES_cblock)0xfe0efe0efe1ffe1f)) &&
         (*key != (const_DES_cblock)0xefe0efe1ffe1ffe)) &&
        ((*key != (const_DES_cblock)0xe010e011f011f01 &&
         (*key != (const_DES_cblock)0x10e010e011f011f)))) &&
       (*key != (const_DES_cblock)0xfef1fef1fee0fee0)))))) {
    return (int)(*key == (const_DES_cblock)0xf1fef1fee0fee0fe);
  }
  return 1;
}

