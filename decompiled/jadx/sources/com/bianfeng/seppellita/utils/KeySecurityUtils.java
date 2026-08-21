package com.bianfeng.seppellita.utils;

import com.bianfeng.ymnsdk.utilslib.security.Md5Utils;
import com.bianfeng.ymnsdk.utilslib.security.SHA256Utils;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class KeySecurityUtils {
    public static String getApihubSecret(String str) {
        String sha256 = SHA256Utils.getSHA256(str);
        byte[] bytes = Md5Utils.md5(Md5Utils.md5(str)).getBytes();
        byte[] bytes2 = sha256.getBytes();
        int length = bytes2.length;
        byte[] bArr = new byte[length];
        byte[] bArr2 = new byte[length];
        int length2 = bytes.length;
        for (int i = 0; i < length; i++) {
            bArr[i] = bytes[i % length2];
        }
        for (int i2 = 0; i2 < length; i2++) {
            bArr2[i2] = (byte) ((bytes2[i2] + bArr[i2]) % 256);
        }
        return Md5Utils.md5(bytesToHexString(bArr2));
    }

    public static String getEncryptKey(String str) {
        byte[] bytes = Md5Utils.md5(SHA256Utils.getSHA256(str)).getBytes();
        int length = bytes.length;
        int i = length / 2;
        byte[] bArr = new byte[i];
        for (int i2 = 0; i2 < i; i2++) {
            int i3 = i2 * 2;
            if (i3 < length) {
                bArr[i2] = bytes[i3];
            }
        }
        return new String(bArr);
    }

    private static String bytesToHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b & UByte.MAX_VALUE);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }
}
