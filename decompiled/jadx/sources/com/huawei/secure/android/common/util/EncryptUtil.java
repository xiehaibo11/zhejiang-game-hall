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

/* JADX INFO: loaded from: classes2.dex */
public class EncryptUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2267a = "EncryptUtil";
    private static final String b = "RSA";

    @Deprecated
    public static byte[] generateSecureRandom(int i) {
        byte[] bArr = new byte[i];
        try {
            (Build.VERSION.SDK_INT >= 26 ? SecureRandom.getInstanceStrong() : SecureRandom.getInstance("SHA1PRNG")).nextBytes(bArr);
            return bArr;
        } catch (NoSuchAlgorithmException unused) {
            Log.e(f2267a, "getSecureRandomBytes: NoSuchAlgorithmException");
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
                LogsUtil.e(f2267a, "load Key Exception:" + e.getMessage(), true);
                return null;
            }
        } catch (IllegalArgumentException unused) {
            LogsUtil.e(f2267a, "base64 decode IllegalArgumentException", true);
            return null;
        } catch (Exception unused2) {
            LogsUtil.e(f2267a, "base64 decode Exception", true);
            return null;
        }
    }

    @Deprecated
    public static RSAPublicKey getPublicKey(String str) {
        try {
            try {
                return (RSAPublicKey) KeyFactory.getInstance("RSA").generatePublic(new X509EncodedKeySpec(Base64.decode(str, 0)));
            } catch (GeneralSecurityException e) {
                LogsUtil.e(f2267a, "load Key Exception:" + e.getMessage(), true);
                return null;
            }
        } catch (IllegalArgumentException unused) {
            LogsUtil.e(f2267a, "base64 decode IllegalArgumentException", true);
            return null;
        } catch (Exception unused2) {
            LogsUtil.e(f2267a, "base64 decode Exception", true);
            return null;
        }
    }
}
