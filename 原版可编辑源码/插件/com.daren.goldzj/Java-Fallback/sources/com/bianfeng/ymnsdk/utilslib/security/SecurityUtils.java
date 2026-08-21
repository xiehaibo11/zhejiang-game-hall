package com.bianfeng.ymnsdk.utilslib.security;

import java.security.MessageDigest;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public class SecurityUtils {
    public SecurityUtils() {
    }

    static String md5(String r2) {
        return bytesToHexString(MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(r2.getBytes("utf-8")));
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    private static String bytesToHexString(byte[] r6) {
        StringBuilder r0 = new StringBuilder();
        if (r6 != null) goto L5;
        return null;
    L5:
        if (r6.length <= 0) goto L21;
        int r2 = 0;
    L9:
        if (r2 >= r6.length) goto L15;
        String r3 = Integer.toHexString(r6[r2] & 255);
        if (r3.length() >= 2) goto L13;
        r0.append(0);
    L13:
        r0.append(r3);
        r2 = r2 + 1;
        goto L9
    L15:
        return r0.toString();
    L21:
        return null;
    }

    static String getSHA256(byte[] r1) {
        MessageDigest r0 = MessageDigest.getInstance("SHA-256");     // Catch: Exception -> L4
        r0.update(r1);     // Catch: Exception -> L4
        return bytesToHexString(r0.digest());
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    static String sha256_HMAC(byte[] r3, String r4) {
        Mac r1 = Mac.getInstance("HmacSHA256");     // Catch: Exception -> L5
        r1.init(new SecretKeySpec(r4.getBytes(), "HmacSHA256"));     // Catch: Exception -> L5
        return bytesToHexString(r1.doFinal(r3));
    L5:
        e = move-exception;
        e.printStackTrace();
        System.out.println("Error HmacSHA256 ===========" + e.getMessage());
        return null;
    }
}
