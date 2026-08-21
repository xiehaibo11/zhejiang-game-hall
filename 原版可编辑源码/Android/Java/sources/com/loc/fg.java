package com.loc;

import java.security.KeyFactory;
import java.security.PublicKey;
import java.security.spec.X509EncodedKeySpec;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

public final class fg {
    private static final char[] a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    private static final byte[] b = {61, 61, 81, 65, 65, 69, 119, 65, 67, com.sigmob.sdk.archives.tar.e.H, 74, 80, 115, 116, com.sigmob.sdk.archives.tar.e.N, 75, 104, com.sigmob.sdk.archives.tar.e.P, 122, 97, com.sigmob.sdk.archives.tar.e.S, 99, com.sigmob.sdk.archives.tar.e.M, 71, com.sigmob.sdk.archives.tar.e.I, 122, 68, 70, 79, 104, 113, 113, 65, 97, com.sigmob.sdk.archives.tar.e.P, com.sigmob.sdk.archives.tar.e.N, 65, 66, 87, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.T, 85, 84, 113, 71, 68, 69, com.sigmob.sdk.archives.tar.e.P, 80, 82, 106, com.sigmob.sdk.archives.tar.e.K, 66, 75, 75, 69, 98, com.sigmob.sdk.archives.tar.e.O, 84, 108, 115, 122, com.sigmob.sdk.archives.tar.e.K, 106, com.sigmob.sdk.archives.tar.e.P, com.sigmob.sdk.archives.tar.e.O, com.sigmob.sdk.archives.tar.e.S, 122, 70, 121, 73, 75, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.J, 43, 101, 70, 121, 56, 105, 115, 105, 89, com.sigmob.sdk.archives.tar.e.R, 117, 112, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.P, 81, 70, 86, 108, 110, 73, 65, 66, 74, 65, com.sigmob.sdk.archives.tar.e.Q, 119, 65, 119, com.sigmob.sdk.archives.tar.e.Q, 68, 65, 81, 66, 66, 69, 81, 65, 78, 99, 118, 104, 73, 90, 111, 75, 74, 89, 81, 68, 119, 119, 70, 77};
    private static final byte[] c = {0, 1, 1, 2, 3, 5, 8, 13, 8, 7, 6, 5, 4, 3, 2, 1};
    private static final IvParameterSpec d = new IvParameterSpec(c);

    public static String a(String str) {
        if (str != null) {
            try {
                if (str.length() != 0) {
                    return a("MD5", a("SHA1", str) + str);
                }
            } catch (Throwable th) {
                fr.a(th, "Encrypt", "generatorKey");
            }
        }
        return null;
    }

    public static String a(String str, String str2) {
        if (str2 == null) {
            return null;
        }
        try {
            return c(s.a(str2.getBytes("UTF-8"), str));
        } catch (Throwable th) {
            fr.a(th, "Encrypt", "encode");
            return null;
        }
    }

    private static byte[] a() {
        return x.c();
    }

    public static byte[] a(byte[] bArr) throws Exception {
        PublicKey publicKeyGeneratePublic = KeyFactory.getInstance(com.alipay.sdk.m.n.d.a).generatePublic(new X509EncodedKeySpec(en.a(new StringBuilder(new String(b)).reverse().toString().getBytes())));
        Cipher cipher = Cipher.getInstance(x.c("WUlNBL0VDQi9PQUVQV0lUSFNIQS0xQU5ETUdGMVBBRERJTkc"));
        cipher.init(1, publicKeyGeneratePublic);
        return cipher.doFinal(bArr);
    }

    public static byte[] a(byte[] bArr, String str) {
        try {
            SecretKeySpec secretKeySpecB = b(str);
            IvParameterSpec ivParameterSpec = new IvParameterSpec(a());
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(1, secretKeySpecB, ivParameterSpec);
            return cipher.doFinal(bArr);
        } catch (Throwable th) {
            fr.a(th, "Encrypt", "aesEncrypt");
            return null;
        }
    }

    private static SecretKeySpec b(String str) {
        byte[] bytes;
        if (str == null) {
            str = "";
        }
        StringBuffer stringBuffer = new StringBuffer(16);
        while (true) {
            stringBuffer.append(str);
            if (stringBuffer.length() >= 16) {
                break;
            }
            str = "0";
        }
        if (stringBuffer.length() > 16) {
            stringBuffer.setLength(16);
        }
        try {
            bytes = stringBuffer.toString().getBytes("UTF-8");
        } catch (Throwable th) {
            fr.a(th, "Encrypt", "createKey");
            bytes = null;
        }
        return new SecretKeySpec(bytes, "AES");
    }

    public static byte[] b(byte[] bArr) {
        try {
            byte[] bArr2 = new byte[16];
            byte[] bArr3 = new byte[bArr.length - 16];
            System.arraycopy(bArr, 0, bArr2, 0, 16);
            System.arraycopy(bArr, 16, bArr3, 0, bArr.length - 16);
            SecretKeySpec secretKeySpec = new SecretKeySpec(bArr2, "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, secretKeySpec, new IvParameterSpec(x.c()));
            return cipher.doFinal(bArr3);
        } catch (Throwable th) {
            fr.a(th, "Encrypt", "decryptRsponse length = ".concat(String.valueOf(bArr != null ? bArr.length : 0)));
            return null;
        }
    }

    public static byte[] b(byte[] bArr, String str) {
        try {
            SecretKeySpec secretKeySpecB = b(str);
            IvParameterSpec ivParameterSpec = new IvParameterSpec(a());
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(2, secretKeySpecB, ivParameterSpec);
            return cipher.doFinal(bArr);
        } catch (Throwable th) {
            fr.a(th, "Encrypt", "aesDecrypt");
            return null;
        }
    }

    private static String c(byte[] bArr) {
        int length = bArr.length;
        StringBuilder sb = new StringBuilder(length * 2);
        for (int i = 0; i < length; i++) {
            sb.append(a[(bArr[i] >> 4) & 15]);
            sb.append(a[bArr[i] & 15]);
        }
        return sb.toString();
    }
}
