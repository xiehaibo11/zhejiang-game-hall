package com.alipay.sdk.m.h;

import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class a extends com.alipay.sdk.m.g.a {
    public static final /* synthetic */ boolean d = !a.class.desiredAssertionStatus();

    public a(byte[] bArr) {
        super(bArr);
    }

    public static a a(String str, long j, b bVar, short s, e eVar) throws Exception {
        byte[] bArrA = com.alipay.sdk.m.g.c.a((byte) 1);
        if (!d && bArrA.length != 1) {
            throw new AssertionError();
        }
        byte[] bArrA2 = com.alipay.sdk.m.g.c.a(str.charAt(0), str.charAt(1));
        if (!d && bArrA2.length != 2) {
            throw new AssertionError();
        }
        byte[] bArrA3 = com.alipay.sdk.m.g.c.a(j);
        if (!d && bArrA3.length != 8) {
            throw new AssertionError();
        }
        byte[] bArrB = com.alipay.sdk.m.g.c.b();
        if (!d && bArrB.length != 2) {
            throw new AssertionError();
        }
        bVar.a();
        byte[] bArrA4 = com.alipay.sdk.m.g.c.a(bVar.f1186a);
        if (!d && bArrA4.length != 1) {
            throw new AssertionError();
        }
        byte[] bArrA5 = com.alipay.sdk.m.g.c.a(bVar.b);
        if (!d && bArrA5.length != 1) {
            throw new AssertionError();
        }
        byte[] bArr = (byte[]) bVar.c.clone();
        if (!d && bArr.length != (bVar.b & UByte.MAX_VALUE)) {
            throw new AssertionError();
        }
        byte[] bArrA6 = com.alipay.sdk.m.g.c.a(s);
        if (!d && bArrA6.length != 2) {
            throw new AssertionError();
        }
        byte[] bArrB2 = com.alipay.sdk.m.g.c.b();
        if (!d && bArrB2.length != 2) {
            throw new AssertionError();
        }
        eVar.a();
        byte[] bArrA7 = com.alipay.sdk.m.g.c.a(eVar.f1187a);
        if (!d && bArrA7.length != 1) {
            throw new AssertionError();
        }
        byte[] bArr2 = (byte[]) eVar.b.clone();
        if (!d && bArr2.length != (eVar.f1187a & UByte.MAX_VALUE)) {
            throw new AssertionError();
        }
        byte[] bArrC = com.alipay.sdk.m.g.c.c();
        if (d || bArrC.length == 4) {
            return new a(com.alipay.sdk.m.g.c.a(bArrA, bArrA2, bArrA3, bArrB, bArrA4, bArrA5, bArr, bArrA6, bArrB2, bArrA7, bArr2, bArrC));
        }
        throw new AssertionError();
    }

    public static a c() {
        try {
            return a(com.alipay.sdk.m.g.a.c, 0L, new c(""), (short) 0, new f());
        } catch (Exception unused) {
            return null;
        }
    }
}
