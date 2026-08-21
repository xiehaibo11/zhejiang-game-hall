package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.security.Base64;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;

public class AESUtils {
    private static final String MODE = "AES/ECB/NoPadding";

    public static String encrypt(String str, String str2) throws Exception {
        if (str2 == null) {
            SeppellitaLogger.i("Key为空null");
            return null;
        }
        if (str2.length() != 16) {
            SeppellitaLogger.i("Key长度不是16位");
            return null;
        }
        byte[] bytes = str.getBytes();
        Cipher cipher = Cipher.getInstance(MODE);
        int blockSize = cipher.getBlockSize();
        int length = bytes.length;
        int i = length % blockSize;
        if (i != 0) {
            length += blockSize - i;
        }
        byte[] bArr = new byte[length];
        System.arraycopy(bytes, 0, bArr, 0, bytes.length);
        cipher.init(1, getSecretKeySpec(str2));
        return Base64.encode(cipher.doFinal(bArr));
    }

    private static SecretKeySpec getSecretKeySpec(String str) {
        byte[] bytes = str.getBytes();
        int length = bytes.length;
        int i = length % 16;
        if (i != 0) {
            length += 16 - i;
        }
        byte[] bArr = new byte[length];
        System.arraycopy(bytes, 0, bArr, 0, bytes.length);
        return new SecretKeySpec(bArr, "AES");
    }
}
