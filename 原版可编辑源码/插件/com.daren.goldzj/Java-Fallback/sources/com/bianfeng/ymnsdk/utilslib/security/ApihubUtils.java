package com.bianfeng.ymnsdk.utilslib.security;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class ApihubUtils {
    public ApihubUtils() {
    }

    public static String getSign(String r5, String r6, String r7, String r8, String r9, byte[] r10) {
        String r102 = SHA256Utils.getSHA256(r10);     // Catch: Exception -> L5
        String r1 = getRfc339();     // Catch: Exception -> L5
        String r2 = SystemUtils.createTransactionId();     // Catch: Exception -> L5
        StringBuffer r3 = new StringBuffer("Shield");     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r7);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r1);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r2);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r5);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r9);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r6);     // Catch: Exception -> L5
        r3.append("\n");     // Catch: Exception -> L5
        r3.append(r102);     // Catch: Exception -> L5
        String r52 = SHA256Utils.sha256_HMAC(r3.toString().getBytes(), r8);     // Catch: Exception -> L5
        StringBuffer r62 = new StringBuffer("Shield");     // Catch: Exception -> L5
        r62.append(" ");     // Catch: Exception -> L5
        r62.append("RequestKey=");     // Catch: Exception -> L5
        r62.append(r7);     // Catch: Exception -> L5
        r62.append(", RequestTime=");     // Catch: Exception -> L5
        r62.append(r1);     // Catch: Exception -> L5
        r62.append(", Nonce=");     // Catch: Exception -> L5
        r62.append(r2);     // Catch: Exception -> L5
        r62.append(", Signature=");     // Catch: Exception -> L5
        r62.append(r52);     // Catch: Exception -> L5
        return r62.toString();
    L5:
        e = move-exception;
        e.printStackTrace();
        return "";
    }

    private static String getRfc339() {
        return SystemUtils.getRFC3339(Long.valueOf(System.currentTimeMillis()));
    L4:
        e = move-exception;
        e.printStackTrace();
        return "";
    }
}
