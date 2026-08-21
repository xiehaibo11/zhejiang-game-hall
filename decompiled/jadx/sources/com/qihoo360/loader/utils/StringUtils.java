package com.qihoo360.loader.utils;

import android.util.Base64;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class StringUtils {
    private static final char[] HEX_DIGITS = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    public static final String toHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder(bArr.length * 2);
        for (byte b : bArr) {
            sb.append(HEX_DIGITS[(b & 240) >> 4]);
            sb.append(HEX_DIGITS[b & 15]);
        }
        return sb.toString();
    }

    public static final String md5base64(byte[] bArr) throws NoSuchAlgorithmException {
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        messageDigest.update(bArr);
        return Base64.encodeToString(messageDigest.digest(), 19);
    }

    public static final String utf8md5base64(String str) throws NoSuchAlgorithmException {
        return md5base64(str.getBytes());
    }

    public static String toStringWithLines(List<?> list) {
        return list.toString().replace(", ", ", \n");
    }

    public static char lastChar(String str) {
        return str.charAt(str.length() - 1);
    }
}
