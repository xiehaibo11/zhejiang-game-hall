package com.bianfeng.ymnsdk.utilslib.security;

import android.os.Build;
import android.util.Log;
import java.io.ByteArrayOutputStream;
import java.io.UnsupportedEncodingException;
import javax.crypto.Cipher;
import javax.crypto.spec.GCMParameterSpec;
import javax.crypto.spec.SecretKeySpec;

public class AESGCM256 {
    private static String hexString = "0123456789abcdef";
    private static String a = "66633064336";
    private static String b = "3032396433616535343";
    private static String c = "136636666313737323138";
    private static String d = "1363333366261";

    public static String encrypt(String plaintext, String key) throws Exception {
        String key2 = getString(key);
        byte[] iv = generateRandomIV();
        byte[] plaintextBytes = plaintext.getBytes("UTF-8");
        Cipher cipher = Cipher.getInstance("AES/GCM/NoPadding");
        SecretKeySpec secretKeySpec = new SecretKeySpec(key2.getBytes("UTF-8"), "AES");
        if (Build.VERSION.SDK_INT >= 19) {
            GCMParameterSpec gcmParameterSpec = new GCMParameterSpec(128, iv);
            cipher.init(1, secretKeySpec, gcmParameterSpec);
            byte[] encryptedBytes = cipher.doFinal(plaintextBytes);
            byte[] combinedBytes = new byte[iv.length + encryptedBytes.length];
            System.arraycopy(iv, 0, combinedBytes, 0, iv.length);
            System.arraycopy(encryptedBytes, 0, combinedBytes, iv.length, encryptedBytes.length);
            return android.util.Base64.encodeToString(combinedBytes, 0).trim().replace("\n", "");
        }
        Log.e("ymnsdk", "--------------------\n母包miniversion请设置为19及以上!!!!!!!!!!!!!!!\n--------------------");
        return "母包miniversion请设置为19及以上";
    }

    public static String decrypt(String ciphertext, String key) throws Exception {
        String key2 = getString(key);
        byte[] combinedBytes = android.util.Base64.decode(ciphertext, 0);
        byte[] iv = new byte[12];
        byte[] encryptedBytes = new byte[combinedBytes.length - 12];
        System.arraycopy(combinedBytes, 0, iv, 0, 12);
        System.arraycopy(combinedBytes, 12, encryptedBytes, 0, encryptedBytes.length);
        Cipher cipher = Cipher.getInstance("AES/GCM/NoPadding");
        SecretKeySpec secretKeySpec = new SecretKeySpec(key2.getBytes("UTF-8"), "AES");
        if (Build.VERSION.SDK_INT >= 19) {
            GCMParameterSpec gcmParameterSpec = new GCMParameterSpec(128, iv);
            cipher.init(2, secretKeySpec, gcmParameterSpec);
            byte[] decryptedBytes = cipher.doFinal(encryptedBytes);
            return new String(decryptedBytes, "UTF-8");
        }
        Log.e("ymnsdk", "--------------------\n母包miniversion请设置为19及以上!!!!!!!!!!!!!!!\n--------------------");
        return "母包miniversion请设置为19及以上";
    }

    private static byte[] generateRandomIV() {
        byte[] iv = new byte[12];
        return iv;
    }

    public static String encode(String str) {
        byte[] bytes = str.getBytes();
        StringBuilder sb = new StringBuilder(bytes.length * 2);
        for (int i = 0; i < bytes.length; i++) {
            sb.append(hexString.charAt((bytes[i] & 240) >> 4));
            sb.append(hexString.charAt(bytes[i] & 15));
        }
        return sb.toString();
    }

    public static String decode(String bytes) throws UnsupportedEncodingException {
        ByteArrayOutputStream baos = new ByteArrayOutputStream(bytes.length() / 2);
        for (int i = 0; i < bytes.length(); i += 2) {
            baos.write((hexString.indexOf(bytes.charAt(i)) << 4) | hexString.indexOf(bytes.charAt(i + 1)));
        }
        return new String(baos.toByteArray(), "GBK");
    }

    private static String getString(String bytes) throws UnsupportedEncodingException {
        if (bytes == null || bytes.isEmpty()) {
            return decode(a + c + b + d);
        }
        return bytes;
    }
}
