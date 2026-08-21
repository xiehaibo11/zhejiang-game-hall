package com.bianfeng.ymnsdk.utilslib.security;

import java.security.MessageDigest;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public class SecurityUtils {
    static String md5(String str) {
        try {
            return bytesToHexString(MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(str.getBytes("utf-8")));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static String bytesToHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b & 255);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }

    static String getSHA256(byte[] bArr) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update(bArr);
            return bytesToHexString(messageDigest.digest());
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    static String sha256_HMAC(byte[] bArr, String str) {
        try {
            Mac mac = Mac.getInstance("HmacSHA256");
            mac.init(new SecretKeySpec(str.getBytes(), "HmacSHA256"));
            return bytesToHexString(mac.doFinal(bArr));
        } catch (Exception e) {
            e.printStackTrace();
            System.out.println("Error HmacSHA256 ===========" + e.getMessage());
            return null;
        }
    }
}
