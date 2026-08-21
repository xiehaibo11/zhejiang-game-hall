package com.czhj.sdk.common.utils;

import android.text.TextUtils;
import android.util.Base64;
import java.io.UnsupportedEncodingException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: classes.dex */
public class AESUtil {
    public static String DecryptString(String str, String str2) {
        try {
            System.nanoTime();
            System.currentTimeMillis();
            if (str2.length() != 16) {
                return null;
            }
            SecretKeySpec secretKeySpec = new SecretKeySpec(str2.getBytes("utf-8"), "AES");
            Cipher cipher = Cipher.getInstance("AES/ECB/PKCS5Padding");
            cipher.init(2, secretKeySpec);
            try {
                return new String(cipher.doFinal(Base64.decode(str, 2)), "utf-8");
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        } catch (Exception e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public static byte[] Encrypt(byte[] bArr, String str) throws Exception {
        if (bArr.length == 0 || TextUtils.isEmpty(str)) {
            return bArr;
        }
        SecretKeySpec secretKeySpec = new SecretKeySpec(str.getBytes("utf-8"), "AES");
        Cipher cipher = Cipher.getInstance("AES/ECB/PKCS5Padding");
        cipher.init(1, secretKeySpec);
        return cipher.doFinal(bArr);
    }

    public static String EncryptString(String str, String str2) {
        Cipher cipher;
        System.nanoTime();
        System.currentTimeMillis();
        byte[] bytes = str.getBytes();
        if (bytes.length != 0 && !TextUtils.isEmpty(str2)) {
            byte[] bytes2 = new byte[0];
            try {
                bytes2 = str2.getBytes("utf-8");
            } catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }
            SecretKeySpec secretKeySpec = new SecretKeySpec(bytes2, "AES");
            try {
                cipher = Cipher.getInstance("AES/ECB/PKCS5Padding");
            } catch (NoSuchAlgorithmException e2) {
                e2.printStackTrace();
                cipher = null;
            } catch (NoSuchPaddingException e3) {
                e3.printStackTrace();
                return null;
            }
            try {
                cipher.init(1, secretKeySpec);
                try {
                    return Base64.encodeToString(cipher.doFinal(bytes), 2);
                } catch (Exception e4) {
                    e4.printStackTrace();
                    return null;
                }
            } catch (InvalidKeyException e5) {
                e5.printStackTrace();
            }
        }
        return null;
    }
}
