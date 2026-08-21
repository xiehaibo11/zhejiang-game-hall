package com.cmic.gen.sdk.e;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.security.SecureRandom;
import java.util.UUID;

/* JADX INFO: compiled from: UmcUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final char[] f1679a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    static String a(byte[] bArr) {
        if (bArr == null) {
            return "";
        }
        char[] cArr = new char[bArr.length * 2];
        int i = 0;
        for (byte b : bArr) {
            int i2 = i + 1;
            char[] cArr2 = f1679a;
            cArr[i] = cArr2[(b >>> 4) & 15];
            i = i2 + 1;
            cArr[i2] = cArr2[b & 15];
        }
        return new String(cArr);
    }

    public static byte[] a() {
        byte[] bArr = new byte[16];
        new SecureRandom().nextBytes(bArr);
        return bArr;
    }

    public static String b() {
        return UUID.randomUUID().toString().replaceAll(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
    }

    public static String c() {
        return d().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
    }

    private static String d() {
        return UUID.randomUUID().toString();
    }

    public static void a(com.cmic.gen.sdk.a aVar, String str) {
        if (TextUtils.isEmpty(aVar.b("interfaceType", ""))) {
            aVar.a("interfaceType", str);
            return;
        }
        aVar.a("interfaceType", aVar.b("interfaceType") + ";" + str);
    }

    public static void b(com.cmic.gen.sdk.a aVar, String str) {
        if (TextUtils.isEmpty(aVar.b("interfaceCode", ""))) {
            aVar.a("interfaceCode", str);
            return;
        }
        aVar.a("interfaceCode", aVar.b("interfaceCode") + ";" + str);
    }

    public static void c(com.cmic.gen.sdk.a aVar, String str) {
        if (TextUtils.isEmpty(aVar.b("interfaceElasped", ""))) {
            aVar.a("interfaceElasped", str);
            return;
        }
        aVar.a("interfaceElasped", aVar.b("interfaceElasped") + ";" + str);
    }

    public static boolean a(com.cmic.gen.sdk.a.a aVar) {
        return k.a("logCloseTime", 0L) + ((long) (((aVar.l() * 60) * 60) * 1000)) >= System.currentTimeMillis();
    }
}
