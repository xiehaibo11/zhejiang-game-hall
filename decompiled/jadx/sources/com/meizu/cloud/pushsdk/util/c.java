package com.meizu.cloud.pushsdk.util;

import android.text.TextUtils;
import com.meizu.cloud.pushinternal.DebugLogger;
import java.nio.charset.Charset;
import java.security.InvalidKeyException;
import java.security.KeyFactory;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.X509EncodedKeySpec;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Charset f4638a = Charset.forName("UTF-8");

    public static String a(String str, String str2) {
        if (str == null) {
            return null;
        }
        try {
            if (TextUtils.isEmpty(str2)) {
                return null;
            }
            return new String(a(a(str), b(str2)), f4638a);
        } catch (Exception e) {
            DebugLogger.e("RSAUtils", "decrypt " + e.getMessage());
            return null;
        }
    }

    private static RSAPublicKey a(String str) {
        StringBuilder sb;
        String message;
        try {
            return (RSAPublicKey) KeyFactory.getInstance(com.alipay.sdk.m.n.d.f1221a).generatePublic(new X509EncodedKeySpec(b(str)));
        } catch (NoSuchAlgorithmException e) {
            sb = new StringBuilder();
            sb.append("loadPublicKey NoSuchAlgorithmException ");
            message = e.getMessage();
            sb.append(message);
            DebugLogger.e("RSAUtils", sb.toString());
            return null;
        } catch (InvalidKeySpecException e2) {
            sb = new StringBuilder();
            sb.append("loadPublicKey InvalidKeySpecException ");
            message = e2.getMessage();
            sb.append(message);
            DebugLogger.e("RSAUtils", sb.toString());
            return null;
        }
    }

    private static byte[] a(PublicKey publicKey, byte[] bArr) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidKeyException {
        Cipher cipher = Cipher.getInstance("RSA/ECB/PKCS1Padding");
        cipher.init(2, publicKey);
        return cipher.doFinal(bArr);
    }

    private static byte[] b(String str) {
        return com.meizu.cloud.pushsdk.c.g.a.a(str);
    }
}
