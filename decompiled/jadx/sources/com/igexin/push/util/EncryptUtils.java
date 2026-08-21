package com.igexin.push.util;

import android.text.TextUtils;
import com.igexin.push.extension.mod.SecurityUtils;
import java.security.MessageDigest;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes2.dex */
public class EncryptUtils {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2651a = EncryptUtils.class.getName();
    private static boolean b;
    private static int c;
    private static byte[] d;
    private static byte[] e;
    public static String errorMsg;

    static {
        errorMsg = "";
        try {
            if (SecurityUtils.b) {
                d = initSocketAESKey();
                byte[] bArrInitHttpAESKey = initHttpAESKey();
                e = bArrInitHttpAESKey;
                b = (d == null || bArrInitHttpAESKey == null || getSocketAESKey() == null || getHttpAESKey() == null || getRSAKeyId() == null || getVersion() == null) ? false : true;
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2651a + "|load so error = " + th.toString(), new Object[0]);
            b = false;
            errorMsg = th.getMessage();
        }
        if (TextUtils.isEmpty(errorMsg)) {
            errorMsg = SecurityUtils.c;
        }
        if (b) {
            com.igexin.b.a.c.b.a(f2651a + "|load so success ~~~~~~~", new Object[0]);
            return;
        }
        com.igexin.b.a.c.b.a(f2651a + "|load so error ++++++++", new Object[0]);
        if (TextUtils.isEmpty(errorMsg)) {
            errorMsg = "value = null, normal error";
        }
    }

    public static byte[] aesDecHttp(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.c(e, bArr, bArr2);
    }

    public static byte[] aesDecSocket(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.g(d, bArr, bArr2);
    }

    public static byte[] aesEncHttp(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.b(e, bArr, bArr2);
    }

    public static byte[] aesEncSocket(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.f(d, bArr, bArr2);
    }

    public static byte[] altAesDecSocket(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.m(bArr, bArr2);
    }

    public static byte[] altAesEncSocket(byte[] bArr, byte[] bArr2) {
        return SecurityUtils.l(bArr, bArr2);
    }

    public static byte[] getBytesEncrypted(byte[] bArr) {
        return com.igexin.b.a.a.a.d(bArr, com.igexin.push.core.d.E);
    }

    public static byte[] getHttpAESKey() {
        return SecurityUtils.d(e);
    }

    public static String getHttpGTCV() {
        byte[] httpAESKey = getHttpAESKey();
        byte[] bytes = l.a(16).getBytes();
        byte[] bArr = new byte[bytes.length + httpAESKey.length];
        com.igexin.b.a.b.f.a(httpAESKey, 0, bArr, com.igexin.b.a.b.f.a(bytes, 0, bArr, 0, bytes.length), httpAESKey.length);
        return d.b(bArr, 2);
    }

    public static String getHttpSignature(String str, byte[] bArr) {
        byte[] bytes = str.getBytes();
        byte[] bArr2 = new byte[bytes.length + bArr.length];
        int iA = com.igexin.b.a.b.f.a(bytes, 0, bArr2, 0, bytes.length);
        if (bArr.length > 0) {
            com.igexin.b.a.b.f.a(bArr, 0, bArr2, iA, bArr.length);
        }
        return d.b(sha1(bArr2), 2);
    }

    public static byte[] getIV(byte[] bArr) {
        return md5(bArr);
    }

    public static int getPacketId() {
        int i = c;
        c = i + 1;
        return i;
    }

    public static byte[] getRSAKeyId() {
        return SecurityUtils.j();
    }

    public static byte[] getSocketAESKey() {
        return SecurityUtils.h(d);
    }

    public static byte[] getSocketSignature(com.igexin.push.d.c.a aVar, int i, int i2) {
        byte[] bArr = new byte[aVar.f2596a + 11];
        int iA = com.igexin.b.a.b.f.a(i, bArr, 0);
        int iA2 = iA + com.igexin.b.a.b.f.a(i2, bArr, iA);
        int iB = iA2 + com.igexin.b.a.b.f.b((short) aVar.f2596a, bArr, iA2);
        com.igexin.b.a.b.f.a(aVar.e, 0, bArr, iB + com.igexin.b.a.b.f.c(aVar.b, bArr, iB), aVar.f2596a);
        return sha1(bArr);
    }

    public static String getVersion() {
        byte[] bArrK = SecurityUtils.k();
        if (bArrK == null) {
            return null;
        }
        String str = new String(bArrK);
        com.igexin.b.a.c.b.a(f2651a + "| so version is " + str, new Object[0]);
        return str;
    }

    public static byte[] initHttpAESKey() {
        return SecurityUtils.a();
    }

    public static byte[] initSocketAESKey() {
        return SecurityUtils.e();
    }

    public static boolean isLoadSuccess() {
        return b;
    }

    public static byte[] md5(byte[] bArr) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(bArr);
            return messageDigest.digest();
        } catch (Exception unused) {
            return null;
        }
    }

    public static boolean reset() {
        try {
            if (SecurityUtils.b) {
                d = initSocketAESKey();
                byte[] bArrInitHttpAESKey = initHttpAESKey();
                e = bArrInitHttpAESKey;
                b = (d == null || bArrInitHttpAESKey == null || getSocketAESKey() == null || getHttpAESKey() == null || getRSAKeyId() == null || getVersion() == null) ? false : true;
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2651a + "|load so error = " + th.toString(), new Object[0]);
            b = false;
        }
        if (b) {
            com.igexin.b.a.c.b.a(f2651a + "|load so success ~~~~~~~", new Object[0]);
        } else {
            com.igexin.b.a.c.b.a(f2651a + "|load so error ++++++++", new Object[0]);
        }
        return b;
    }

    public static byte[] rsaEnc(byte[] bArr) {
        int length = bArr.length;
        if (length <= 214) {
            return SecurityUtils.i(bArr);
        }
        int i = length % 200 == 0 ? length / 200 : (length / 200) + 1;
        byte[] bArr2 = new byte[i * 256];
        int i2 = 0;
        int iA = 0;
        while (i2 < i) {
            int i3 = i2 < i + (-1) ? 200 : length - (i2 * 200);
            byte[] bArr3 = new byte[i3];
            com.igexin.b.a.b.f.a(bArr, i2 * 200, bArr3, 0, i3);
            byte[] bArrI = SecurityUtils.i(bArr3);
            iA += com.igexin.b.a.b.f.a(bArrI, 0, bArr2, iA, bArrI.length);
            i2++;
        }
        return bArr2;
    }

    public static byte[] sha1(byte[] bArr) {
        try {
            return MessageDigest.getInstance(MessageDigestAlgorithms.SHA_1).digest(bArr);
        } catch (Exception unused) {
            return null;
        }
    }
}
