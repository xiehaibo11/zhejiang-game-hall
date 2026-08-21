package com.vivo.push.util;

import android.content.Context;
import android.util.Base64;
import java.io.UnsupportedEncodingException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: loaded from: classes4.dex */
public class a {
    private static volatile a c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f7944a;
    private byte[] b;

    private a(Context context) {
        w.b().a(ContextDelegate.getContext(context));
        w wVarB = w.b();
        this.f7944a = wVarB.c();
        this.b = wVarB.d();
    }

    public static a a(Context context) {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a(context.getApplicationContext());
                }
            }
        }
        return c;
    }

    private byte[] a() {
        byte[] bArr = this.f7944a;
        return (bArr == null || bArr.length <= 0) ? w.b().c() : bArr;
    }

    private byte[] b() {
        byte[] bArr = this.b;
        return (bArr == null || bArr.length <= 0) ? w.b().d() : bArr;
    }

    public final String a(String str) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidKeyException, UnsupportedEncodingException, InvalidAlgorithmParameterException {
        String strA = f.a(a());
        String strA2 = f.a(b());
        byte[] bytes = str.getBytes("utf-8");
        SecretKeySpec secretKeySpec = new SecretKeySpec(strA2.getBytes("utf-8"), "AES");
        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        cipher.init(1, secretKeySpec, new IvParameterSpec(strA.getBytes("utf-8")));
        return Base64.encodeToString(cipher.doFinal(bytes), 2);
    }

    public final String b(String str) {
        return new String(f.a(f.a(a()), f.a(b()), Base64.decode(str, 2)), "utf-8");
    }
}
