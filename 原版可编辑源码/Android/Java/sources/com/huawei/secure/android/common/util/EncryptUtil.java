package com.huawei.secure.android.common.util;

import android.os.Build;
import android.util.Base64;
import android.util.Log;
import java.security.GeneralSecurityException;
import java.security.KeyFactory;
import java.security.NoSuchAlgorithmException;
import java.security.PrivateKey;
import java.security.SecureRandom;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.X509EncodedKeySpec;

public class EncryptUtil {
    private static final String a = "EncryptUtil";
    private static final String b = "RSA";

    @Deprecated
    public static byte[] generateSecureRandom(int i) {
        byte[] bArr = new byte[i];
        try {
            (Build.VERSION.SDK_INT >= 26 ? SecureRandom.getInstanceStrong() : SecureRandom.getInstance("SHA1PRNG")).nextBytes(bArr);
            return bArr;
        } catch (NoSuchAlgorithmException unused) {
            Log.e(a, "getSecureRandomBytes: NoSuchAlgorithmException");
            return new byte[0];
        }
    }

    @Deprecated
    public static String generateSecureRandomStr(int i) {
        return HexUtil.byteArray2HexStr(generateSecureRandom(i));
    }

    @Deprecated
    public static PrivateKey getPrivateKey(String str) {
        try {
            try {
                return KeyFactory.getInstance("RSA").generatePrivate(new PKCS8EncodedKeySpec(Base64.decode(str, 0)));
            } catch (GeneralSecurityException e) {
                LogsUtil.e(a, "load Key Exception:" + e.getMessage(), true);
                return null;
            }
        } catch (IllegalArgumentException unused) {
            LogsUtil.e(a, "base64 decode IllegalArgumentException", true);
            return null;
        } catch (Exception unused2) {
            LogsUtil.e(a, "base64 decode Exception", true);
            return null;
        }
    }

    @Deprecated
    public static RSAPublicKey getPublicKey(String str) {
        try {
            try {
                return (RSAPublicKey) KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode(str, 0)));
            } catch (GeneralSecurityException e) {
                LogsUtil.e(a, "load Key Exception:" + e.getMessage(), true);
                return null;
            }
        } catch (IllegalArgumentException unused) {
            LogsUtil.e(a, "base64 decode IllegalArgumentException", true);
            return null;
        } catch (Exception unused2) {
            LogsUtil.e(a, "base64 decode Exception", true);
            return null;
        }
    }
}
