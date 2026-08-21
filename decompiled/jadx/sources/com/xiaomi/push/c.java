package com.xiaomi.push;

import java.io.IOException;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes4.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f8072a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final OutputStream f170a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final byte[] f171a;
    private int b;

    public class a extends IOException {
        a() {
            super("CodedOutputStream was writing to a flat byte array and ran out of space.");
        }
    }

    private c(OutputStream outputStream, byte[] bArr) {
        this.f170a = outputStream;
        this.f171a = bArr;
        this.b = 0;
        this.f8072a = bArr.length;
    }

    private c(byte[] bArr, int i, int i2) {
        this.f170a = null;
        this.f171a = bArr;
        this.b = i;
        this.f8072a = i + i2;
    }

    public static int a(int i) {
        if (i >= 0) {
            return d(i);
        }
        return 10;
    }

    public static int a(int i, int i2) {
        return c(i) + a(i2);
    }

    public static int a(int i, long j) {
        return c(i) + a(j);
    }

    public static int a(int i, com.xiaomi.push.a aVar) {
        return c(i) + a(aVar);
    }

    public static int a(int i, e eVar) {
        return c(i) + a(eVar);
    }

    public static int a(int i, String str) {
        return c(i) + a(str);
    }

    public static int a(int i, boolean z) {
        return c(i) + a(z);
    }

    public static int a(long j) {
        return c(j);
    }

    public static int a(com.xiaomi.push.a aVar) {
        return d(aVar.a()) + aVar.a();
    }

    public static int a(e eVar) {
        int iB = eVar.b();
        return d(iB) + iB;
    }

    public static int a(String str) {
        try {
            byte[] bytes = str.getBytes("UTF-8");
            return d(bytes.length) + bytes.length;
        } catch (UnsupportedEncodingException unused) {
            throw new RuntimeException("UTF-8 not supported.");
        }
    }

    public static int a(boolean z) {
        return 1;
    }

    public static c a(OutputStream outputStream) {
        return a(outputStream, 4096);
    }

    public static c a(OutputStream outputStream, int i) {
        return new c(outputStream, new byte[i]);
    }

    public static c a(byte[] bArr, int i, int i2) {
        return new c(bArr, i, i2);
    }

    public static int b(int i) {
        return d(i);
    }

    public static int b(int i, int i2) {
        return c(i) + b(i2);
    }

    public static int b(int i, long j) {
        return c(i) + b(j);
    }

    public static int b(long j) {
        return c(j);
    }

    public static int c(int i) {
        return d(f.a(i, 0));
    }

    public static int c(long j) {
        if (((-128) & j) == 0) {
            return 1;
        }
        if (((-16384) & j) == 0) {
            return 2;
        }
        if (((-2097152) & j) == 0) {
            return 3;
        }
        if (((-268435456) & j) == 0) {
            return 4;
        }
        if (((-34359738368L) & j) == 0) {
            return 5;
        }
        if (((-4398046511104L) & j) == 0) {
            return 6;
        }
        if (((-562949953421312L) & j) == 0) {
            return 7;
        }
        if (((-72057594037927936L) & j) == 0) {
            return 8;
        }
        return (j & Long.MIN_VALUE) == 0 ? 9 : 10;
    }

    private void c() throws IOException {
        OutputStream outputStream = this.f170a;
        if (outputStream == null) {
            throw new a();
        }
        outputStream.write(this.f171a, 0, this.b);
        this.b = 0;
    }

    public static int d(int i) {
        if ((i & com.alipay.sdk.m.n.a.g) == 0) {
            return 1;
        }
        if ((i & (-16384)) == 0) {
            return 2;
        }
        if (((-2097152) & i) == 0) {
            return 3;
        }
        return (i & (-268435456)) == 0 ? 4 : 5;
    }

    public int a() {
        if (this.f170a == null) {
            return this.f8072a - this.b;
        }
        throw new UnsupportedOperationException("spaceLeft() can only be called on CodedOutputStreams that are writing to a flat array.");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m171a() throws IOException {
        if (this.f170a != null) {
            c();
        }
    }

    public void a(byte b) throws IOException {
        if (this.b == this.f8072a) {
            c();
        }
        byte[] bArr = this.f171a;
        int i = this.b;
        this.b = i + 1;
        bArr[i] = b;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m172a(int i) throws IOException {
        if (i >= 0) {
            m191d(i);
        } else {
            m190c(i);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m173a(int i, int i2) throws IOException {
        c(i, 0);
        m172a(i2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m174a(int i, long j) throws IOException {
        c(i, 0);
        m179a(j);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m175a(int i, com.xiaomi.push.a aVar) throws IOException {
        c(i, 2);
        m180a(aVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m176a(int i, e eVar) throws IOException {
        c(i, 2);
        m181a(eVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m177a(int i, String str) throws IOException {
        c(i, 2);
        m182a(str);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m178a(int i, boolean z) throws IOException {
        c(i, 0);
        m183a(z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m179a(long j) throws IOException {
        m190c(j);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m180a(com.xiaomi.push.a aVar) throws IOException {
        byte[] bArrM114a = aVar.m114a();
        m191d(bArrM114a.length);
        a(bArrM114a);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m181a(e eVar) throws IOException {
        m191d(eVar.a());
        eVar.a(this);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m182a(String str) throws IOException {
        byte[] bytes = str.getBytes("UTF-8");
        m191d(bytes.length);
        a(bytes);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m183a(boolean z) throws IOException {
        m189c(z ? 1 : 0);
    }

    public void a(byte[] bArr) throws IOException {
        m184a(bArr, 0, bArr.length);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m184a(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this.f8072a;
        int i4 = this.b;
        if (i3 - i4 >= i2) {
            System.arraycopy(bArr, i, this.f171a, i4, i2);
            this.b += i2;
            return;
        }
        int i5 = i3 - i4;
        System.arraycopy(bArr, i, this.f171a, i4, i5);
        int i6 = i + i5;
        int i7 = i2 - i5;
        this.b = this.f8072a;
        c();
        if (i7 > this.f8072a) {
            this.f170a.write(bArr, i6, i7);
        } else {
            System.arraycopy(bArr, i6, this.f171a, 0, i7);
            this.b = i7;
        }
    }

    public void b() {
        if (a() != 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m185b(int i) throws IOException {
        m191d(i);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m186b(int i, int i2) throws IOException {
        c(i, 0);
        m185b(i2);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m187b(int i, long j) throws IOException {
        c(i, 0);
        m188b(j);
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m188b(long j) throws IOException {
        m190c(j);
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public void m189c(int i) throws IOException {
        a((byte) i);
    }

    public void c(int i, int i2) throws IOException {
        m191d(f.a(i, i2));
    }

    /* JADX INFO: renamed from: c, reason: collision with other method in class */
    public void m190c(long j) throws IOException {
        while (((-128) & j) != 0) {
            m189c((((int) j) & 127) | 128);
            j >>>= 7;
        }
        m189c((int) j);
    }

    /* JADX INFO: renamed from: d, reason: collision with other method in class */
    public void m191d(int i) throws IOException {
        while ((i & com.alipay.sdk.m.n.a.g) != 0) {
            m189c((i & 127) | 128);
            i >>>= 7;
        }
        m189c(i);
    }
}
