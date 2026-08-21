package com.tkay.expressad.exoplayer.k;

import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import kotlin.UByte;
import okio.Utf8;

/* JADX INFO: loaded from: classes3.dex */
public final class s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6774a;
    private int b;
    private int c;

    public s() {
    }

    public s(int i) {
        this.f6774a = new byte[i];
        this.c = i;
    }

    public s(byte[] bArr) {
        this.f6774a = bArr;
        this.c = bArr.length;
    }

    public s(byte[] bArr, int i) {
        this.f6774a = bArr;
        this.c = i;
    }

    public final void a(byte[] bArr, int i) {
        this.f6774a = bArr;
        this.c = i;
        this.b = 0;
    }

    private void q() {
        this.b = 0;
        this.c = 0;
    }

    public final int a() {
        return this.c - this.b;
    }

    public final int b() {
        return this.c;
    }

    public final void b(int i) {
        a.a(i >= 0 && i <= this.f6774a.length);
        this.c = i;
    }

    public final int c() {
        return this.b;
    }

    private int r() {
        byte[] bArr = this.f6774a;
        if (bArr == null) {
            return 0;
        }
        return bArr.length;
    }

    public final void c(int i) {
        a.a(i >= 0 && i <= this.c);
        this.b = i;
    }

    public final void d(int i) {
        c(this.b + i);
    }

    private void a(r rVar, int i) {
        a(rVar.f6773a, 0, i);
        rVar.a(0);
    }

    public final void a(byte[] bArr, int i, int i2) {
        System.arraycopy(this.f6774a, this.b, bArr, i, i2);
        this.b += i2;
    }

    private void a(ByteBuffer byteBuffer, int i) {
        byteBuffer.put(this.f6774a, this.b, i);
        this.b += i;
    }

    private int s() {
        return this.f6774a[this.b] & UByte.MAX_VALUE;
    }

    private char t() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        return (char) ((bArr[i + 1] & UByte.MAX_VALUE) | ((bArr[i] & UByte.MAX_VALUE) << 8));
    }

    public final int d() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        this.b = i + 1;
        return bArr[i] & UByte.MAX_VALUE;
    }

    public final int e() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = (bArr[i] & UByte.MAX_VALUE) << 8;
        this.b = i2 + 1;
        return (bArr[i2] & UByte.MAX_VALUE) | i3;
    }

    private int u() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        this.b = i2 + 1;
        return ((bArr[i2] & UByte.MAX_VALUE) << 8) | i3;
    }

    public final short f() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = (bArr[i] & UByte.MAX_VALUE) << 8;
        this.b = i2 + 1;
        return (short) ((bArr[i2] & UByte.MAX_VALUE) | i3);
    }

    private short v() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        this.b = i2 + 1;
        return (short) (((bArr[i2] & UByte.MAX_VALUE) << 8) | i3);
    }

    public final int g() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = (bArr[i] & UByte.MAX_VALUE) << 16;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        this.b = i4 + 1;
        return (bArr[i4] & UByte.MAX_VALUE) | i5;
    }

    private int w() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = ((bArr[i] & UByte.MAX_VALUE) << 24) >> 8;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        this.b = i4 + 1;
        return (bArr[i4] & UByte.MAX_VALUE) | i5;
    }

    private int x() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        this.b = i4 + 1;
        return ((bArr[i4] & UByte.MAX_VALUE) << 16) | i5;
    }

    private int y() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        this.b = i4 + 1;
        return ((bArr[i4] & UByte.MAX_VALUE) << 16) | i5;
    }

    public final long h() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        long j = (((long) bArr[i]) & 255) << 24;
        int i3 = i2 + 1;
        this.b = i3;
        long j2 = j | ((((long) bArr[i2]) & 255) << 16);
        int i4 = i3 + 1;
        this.b = i4;
        long j3 = j2 | ((((long) bArr[i3]) & 255) << 8);
        this.b = i4 + 1;
        return j3 | (((long) bArr[i4]) & 255);
    }

    private long z() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        long j = ((long) bArr[i]) & 255;
        int i3 = i2 + 1;
        this.b = i3;
        long j2 = j | ((((long) bArr[i2]) & 255) << 8);
        int i4 = i3 + 1;
        this.b = i4;
        long j3 = j2 | ((((long) bArr[i3]) & 255) << 16);
        this.b = i4 + 1;
        return j3 | ((((long) bArr[i4]) & 255) << 24);
    }

    public final int i() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = (bArr[i] & UByte.MAX_VALUE) << 24;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 16);
        int i6 = i4 + 1;
        this.b = i6;
        int i7 = i5 | ((bArr[i4] & UByte.MAX_VALUE) << 8);
        this.b = i6 + 1;
        return (bArr[i6] & UByte.MAX_VALUE) | i7;
    }

    private int A() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        int i6 = i4 + 1;
        this.b = i6;
        int i7 = i5 | ((bArr[i4] & UByte.MAX_VALUE) << 16);
        this.b = i6 + 1;
        return ((bArr[i6] & UByte.MAX_VALUE) << 24) | i7;
    }

    public final long j() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        long j = (((long) bArr[i]) & 255) << 56;
        int i3 = i2 + 1;
        this.b = i3;
        long j2 = j | ((((long) bArr[i2]) & 255) << 48);
        int i4 = i3 + 1;
        this.b = i4;
        long j3 = j2 | ((((long) bArr[i3]) & 255) << 40);
        int i5 = i4 + 1;
        this.b = i5;
        long j4 = j3 | ((((long) bArr[i4]) & 255) << 32);
        int i6 = i5 + 1;
        this.b = i6;
        long j5 = j4 | ((((long) bArr[i5]) & 255) << 24);
        int i7 = i6 + 1;
        this.b = i7;
        long j6 = j5 | ((((long) bArr[i6]) & 255) << 16);
        int i8 = i7 + 1;
        this.b = i8;
        long j7 = j6 | ((((long) bArr[i7]) & 255) << 8);
        this.b = i8 + 1;
        return j7 | (((long) bArr[i8]) & 255);
    }

    private long B() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        long j = ((long) bArr[i]) & 255;
        int i3 = i2 + 1;
        this.b = i3;
        long j2 = j | ((((long) bArr[i2]) & 255) << 8);
        int i4 = i3 + 1;
        this.b = i4;
        long j3 = j2 | ((((long) bArr[i3]) & 255) << 16);
        int i5 = i4 + 1;
        this.b = i5;
        long j4 = j3 | ((((long) bArr[i4]) & 255) << 24);
        int i6 = i5 + 1;
        this.b = i6;
        long j5 = j4 | ((((long) bArr[i5]) & 255) << 32);
        int i7 = i6 + 1;
        this.b = i7;
        long j6 = j5 | ((((long) bArr[i6]) & 255) << 40);
        int i8 = i7 + 1;
        this.b = i8;
        long j7 = j6 | ((((long) bArr[i7]) & 255) << 48);
        this.b = i8 + 1;
        return j7 | ((((long) bArr[i8]) & 255) << 56);
    }

    public final int k() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = (bArr[i] & UByte.MAX_VALUE) << 8;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = (bArr[i2] & UByte.MAX_VALUE) | i3;
        this.b = i4 + 2;
        return i5;
    }

    public final int l() {
        return (d() << 21) | (d() << 14) | (d() << 7) | d();
    }

    public final int m() {
        int i = i();
        if (i >= 0) {
            return i;
        }
        throw new IllegalStateException("Top bit not zero: ".concat(String.valueOf(i)));
    }

    public final long n() {
        long j = j();
        if (j >= 0) {
            return j;
        }
        throw new IllegalStateException("Top bit not zero: ".concat(String.valueOf(j)));
    }

    private float D() {
        return Float.intBitsToFloat(i());
    }

    private double E() {
        return Double.longBitsToDouble(j());
    }

    public final String o() {
        String str = new String(this.f6774a, this.b, 4, Charset.forName("UTF-8"));
        this.b += 4;
        return str;
    }

    private String a(Charset charset) {
        String str = new String(this.f6774a, this.b, 4, charset);
        this.b += 4;
        return str;
    }

    public final String e(int i) {
        if (i == 0) {
            return "";
        }
        int i2 = (this.b + i) - 1;
        String strA = af.a(this.f6774a, this.b, (i2 >= this.c || this.f6774a[i2] != 0) ? i : i - 1);
        this.b += i;
        return strA;
    }

    public final String p() {
        if (a() == 0) {
            return null;
        }
        int i = this.b;
        while (i < this.c && this.f6774a[i] != 0) {
            i++;
        }
        byte[] bArr = this.f6774a;
        int i2 = this.b;
        String strA = af.a(bArr, i2, i - i2);
        this.b = i;
        if (i < this.c) {
            this.b = i + 1;
        }
        return strA;
    }

    private String F() {
        if (a() == 0) {
            return null;
        }
        int i = this.b;
        while (i < this.c && !af.a((int) this.f6774a[i])) {
            i++;
        }
        int i2 = this.b;
        if (i - i2 >= 3) {
            byte[] bArr = this.f6774a;
            if (bArr[i2] == -17 && bArr[i2 + 1] == -69 && bArr[i2 + 2] == -65) {
                this.b = i2 + 3;
            }
        }
        byte[] bArr2 = this.f6774a;
        int i3 = this.b;
        String strA = af.a(bArr2, i3, i - i3);
        this.b = i;
        int i4 = this.c;
        if (i == i4) {
            return strA;
        }
        if (this.f6774a[i] == 13) {
            int i5 = i + 1;
            this.b = i5;
            if (i5 == i4) {
                return strA;
            }
        }
        byte[] bArr3 = this.f6774a;
        int i6 = this.b;
        if (bArr3[i6] == 10) {
            this.b = i6 + 1;
        }
        return strA;
    }

    private long G() {
        int i;
        int i2;
        long j = this.f6774a[this.b];
        int i3 = 7;
        while (true) {
            if (i3 < 0) {
                break;
            }
            int i4 = 1 << i3;
            if ((((long) i4) & j) != 0) {
                i3--;
            } else if (i3 < 6) {
                j &= (long) (i4 - 1);
                i2 = 7 - i3;
            } else if (i3 == 7) {
                i2 = 1;
            }
        }
        i2 = 0;
        if (i2 == 0) {
            throw new NumberFormatException("Invalid UTF-8 sequence first byte: ".concat(String.valueOf(j)));
        }
        for (i = 1; i < i2; i++) {
            byte b = this.f6774a[this.b + i];
            if ((b & 192) != 128) {
                throw new NumberFormatException("Invalid UTF-8 sequence continuation byte: ".concat(String.valueOf(j)));
            }
            j = (j << 6) | ((long) (b & Utf8.REPLACEMENT_BYTE));
        }
        this.b += i2;
        return j;
    }

    public final void a(int i) {
        byte[] bArr = this.f6774a;
        a((bArr == null ? 0 : bArr.length) < i ? new byte[i] : this.f6774a, i);
    }

    private int C() {
        byte[] bArr = this.f6774a;
        int i = this.b;
        int i2 = i + 1;
        this.b = i2;
        int i3 = bArr[i] & UByte.MAX_VALUE;
        int i4 = i2 + 1;
        this.b = i4;
        int i5 = i3 | ((bArr[i2] & UByte.MAX_VALUE) << 8);
        int i6 = i4 + 1;
        this.b = i6;
        int i7 = i5 | ((bArr[i4] & UByte.MAX_VALUE) << 16);
        this.b = i6 + 1;
        int i8 = ((bArr[i6] & UByte.MAX_VALUE) << 24) | i7;
        if (i8 >= 0) {
            return i8;
        }
        throw new IllegalStateException("Top bit not zero: ".concat(String.valueOf(i8)));
    }
}
