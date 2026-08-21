package com.xiaomi.push;

import java.io.IOException;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;

public final class c {
    private final int a;
    private final OutputStream a;
    private final byte[] a;
    private int b;

    public class a extends IOException {
        a() {
            super("CodedOutputStream was writing to a flat byte array and ran out of space.");
        }
    }

    private c(OutputStream outputStream, byte[] bArr) {
        this.a = outputStream;
        this.a = bArr;
        this.b = 0;
        this.a = bArr.length;
    }

    private c(byte[] bArr, int i, int i2) {
        this.a = null;
        this.a = bArr;
        this.b = i;
        this.a = i + i2;
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
        OutputStream outputStream = this.a;
        if (outputStream == null) {
            throw new a();
        }
        outputStream.write(this.a, 0, this.b);
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
        if (this.a == null) {
            return this.a - this.b;
        }
        throw new UnsupportedOperationException("spaceLeft() can only be called on CodedOutputStreams that are writing to a flat array.");
    }

    public void a() throws IOException {
        if (this.a != null) {
            c();
        }
    }

    public void a(byte b) throws IOException {
        if (this.b == this.a) {
            c();
        }
        byte[] bArr = this.a;
        int i = this.b;
        this.b = i + 1;
        bArr[i] = b;
    }

    public void a(int i) throws IOException {
        if (i >= 0) {
            d(i);
        } else {
            c(i);
        }
    }

    public void a(int i, int i2) throws IOException {
        c(i, 0);
        a(i2);
    }

    public void a(int i, long j) throws IOException {
        c(i, 0);
        a(j);
    }

    public void a(int i, com.xiaomi.push.a aVar) throws IOException {
        c(i, 2);
        a(aVar);
    }

    public void a(int i, e eVar) throws IOException {
        c(i, 2);
        a(eVar);
    }

    public void a(int i, String str) throws IOException {
        c(i, 2);
        a(str);
    }

    public void a(int i, boolean z) throws IOException {
        c(i, 0);
        a(z);
    }

    public void a(long j) throws IOException {
        c(j);
    }

    public void a(com.xiaomi.push.a aVar) throws IOException {
        byte[] bArrA = aVar.a();
        d(bArrA.length);
        a(bArrA);
    }

    public void a(e eVar) throws IOException {
        d(eVar.a());
        eVar.a(this);
    }

    public void a(String str) throws IOException {
        byte[] bytes = str.getBytes("UTF-8");
        d(bytes.length);
        a(bytes);
    }

    public void a(boolean z) throws IOException {
        c(z ? 1 : 0);
    }

    public void a(byte[] bArr) throws IOException {
        a(bArr, 0, bArr.length);
    }

    public void a(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this.a;
        int i4 = this.b;
        if (i3 - i4 >= i2) {
            System.arraycopy(bArr, i, this.a, i4, i2);
            this.b += i2;
            return;
        }
        int i5 = i3 - i4;
        System.arraycopy(bArr, i, this.a, i4, i5);
        int i6 = i + i5;
        int i7 = i2 - i5;
        this.b = this.a;
        c();
        if (i7 > this.a) {
            this.a.write(bArr, i6, i7);
        } else {
            System.arraycopy(bArr, i6, this.a, 0, i7);
            this.b = i7;
        }
    }

    public void b() {
        if (a() != 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
    }

    public void b(int i) throws IOException {
        d(i);
    }

    public void b(int i, int i2) throws IOException {
        c(i, 0);
        b(i2);
    }

    public void b(int i, long j) throws IOException {
        c(i, 0);
        b(j);
    }

    public void b(long j) throws IOException {
        c(j);
    }

    public void c(int i) throws IOException {
        a((byte) i);
    }

    public void c(int i, int i2) throws IOException {
        d(f.a(i, i2));
    }

    public void c(long j) throws IOException {
        while (((-128) & j) != 0) {
            c((((int) j) & 127) | 128);
            j >>>= 7;
        }
        c((int) j);
    }

    public void d(int i) throws IOException {
        while ((i & com.alipay.sdk.m.n.a.g) != 0) {
            c((i & 127) | 128);
            i >>>= 7;
        }
        c(i);
    }
}
