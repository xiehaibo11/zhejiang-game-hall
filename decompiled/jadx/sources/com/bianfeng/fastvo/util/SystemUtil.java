package com.bianfeng.fastvo.util;

import java.security.MessageDigest;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class SystemUtil {
    public static String md5(String str) {
        try {
            return bytesToHexString(MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(str.getBytes("utf-8")));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String bytesToHexString(byte[] bArr) {
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
