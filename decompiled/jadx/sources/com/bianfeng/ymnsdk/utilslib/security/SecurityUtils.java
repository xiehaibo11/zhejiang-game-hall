package com.bianfeng.ymnsdk.utilslib.security;

import java.security.MessageDigest;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;
import kotlin.UByte;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes.dex */
public class SecurityUtils {
    static String md5(String input) {
        try {
            String algorithm = System.getProperty("MD5.algorithm", "MD5");
            MessageDigest md = MessageDigest.getInstance(algorithm);
            byte[] bs = md.digest(input.getBytes("utf-8"));
            return bytesToHexString(bs);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static String bytesToHexString(byte[] src) {
        StringBuilder sb = new StringBuilder();
        if (src == null || src.length <= 0) {
            return null;
        }
        for (byte b : src) {
            int v = b & UByte.MAX_VALUE;
            String hv = Integer.toHexString(v);
            if (hv.length() < 2) {
                sb.append(0);
            }
            sb.append(hv);
        }
        return sb.toString();
    }

    static String getSHA256(byte[] str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256);
            messageDigest.update(str);
            return bytesToHexString(messageDigest.digest());
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    static String sha256_HMAC(byte[] message, String secret) {
        try {
            Mac sha256_HMAC = Mac.getInstance("HmacSHA256");
            SecretKeySpec secret_key = new SecretKeySpec(secret.getBytes(), "HmacSHA256");
            sha256_HMAC.init(secret_key);
            return bytesToHexString(sha256_HMAC.doFinal(message));
        } catch (Exception var5) {
            var5.printStackTrace();
            System.out.println("Error HmacSHA256 ===========" + var5.getMessage());
            return null;
        }
    }
}
