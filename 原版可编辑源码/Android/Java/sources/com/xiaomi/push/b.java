package com.xiaomi.push;

import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.InputStream;
import java.util.Vector;
import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;

public final class b {
    private int a;
    private final InputStream a;
    private final byte[] a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;

    private b(InputStream inputStream) {
        this.f = Integer.MAX_VALUE;
        this.h = 64;
        this.i = DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS;
        this.a = new byte[4096];
        this.a = 0;
        this.c = 0;
        this.a = inputStream;
    }

    private b(byte[] bArr, int i, int i2) {
        this.f = Integer.MAX_VALUE;
        this.h = 64;
        this.i = DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS;
        this.a = bArr;
        this.a = i2 + i;
        this.c = i;
        this.a = null;
    }

    public static b a(InputStream inputStream) {
        return new b(inputStream);
    }

    public static b a(byte[] bArr, int i, int i2) {
        return new b(bArr, i, i2);
    }

    private boolean a(boolean z) throws d {
        int i = this.c;
        int i2 = this.a;
        if (i < i2) {
            throw new IllegalStateException("refillBuffer() called when buffer wasn't empty.");
        }
        int i3 = this.e;
        if (i3 + i2 == this.f) {
            if (z) {
                throw d.a();
            }
            return false;
        }
        this.e = i3 + i2;
        this.c = 0;
        InputStream inputStream = this.a;
        int i4 = inputStream == null ? -1 : inputStream.read(this.a);
        this.a = i4;
        if (i4 == 0 || i4 < -1) {
            throw new IllegalStateException("InputStream#read(byte[]) returned invalid result: " + this.a + "\nThe InputStream implementation is buggy.");
        }
        if (i4 == -1) {
            this.a = 0;
            if (z) {
                throw d.a();
            }
            return false;
        }
        b();
        int i5 = this.e + this.a + this.b;
        if (i5 > this.i || i5 < 0) {
            throw d.h();
        }
        return true;
    }

    private void b() {
        int i = this.a + this.b;
        this.a = i;
        int i2 = this.e + i;
        int i3 = this.f;
        if (i2 <= i3) {
            this.b = 0;
            return;
        }
        int i4 = i2 - i3;
        this.b = i4;
        this.a = i - i4;
    }

    public byte a() throws d {
        if (this.c == this.a) {
            a(true);
        }
        byte[] bArr = this.a;
        int i = this.c;
        this.c = i + 1;
        return bArr[i];
    }

    public int a() throws d {
        if (b()) {
            this.d = 0;
            return 0;
        }
        int iD = d();
        this.d = iD;
        if (iD != 0) {
            return iD;
        }
        throw d.d();
    }

    public int a(int i) throws d {
        if (i < 0) {
            throw d.b();
        }
        int i2 = i + this.e + this.c;
        int i3 = this.f;
        if (i2 > i3) {
            throw d.a();
        }
        this.f = i2;
        b();
        return i3;
    }

    public long a() {
        return c();
    }

    public a a() throws d {
        int iD = d();
        int i = this.a;
        int i2 = this.c;
        if (iD > i - i2 || iD <= 0) {
            return a.a(a(iD));
        }
        a aVarA = a.a(this.a, i2, iD);
        this.c += iD;
        return aVarA;
    }

    public String a() throws d {
        int iD = d();
        if (iD > this.a - this.c || iD <= 0) {
            return new String(a(iD), "UTF-8");
        }
        String str = new String(this.a, this.c, iD, "UTF-8");
        this.c += iD;
        return str;
    }

    public void a() throws d {
        int iA;
        do {
            iA = a();
            if (iA == 0) {
                return;
            }
        } while (a(iA));
    }

    public void a(int i) throws d {
        if (this.d != i) {
            throw d.e();
        }
    }

    public void a(e eVar) throws d {
        int iD = d();
        if (this.g >= this.h) {
            throw d.g();
        }
        int iA = a(iD);
        this.g++;
        eVar.a(this);
        a(0);
        this.g--;
        b(iA);
    }

    public boolean a() {
        return d() != 0;
    }

    public boolean a(int i) throws d {
        int iA = f.a(i);
        if (iA == 0) {
            b();
            return true;
        }
        if (iA == 1) {
            d();
            return true;
        }
        if (iA == 2) {
            c(d());
            return true;
        }
        if (iA == 3) {
            a();
            a(f.a(f.b(i), 4));
            return true;
        }
        if (iA == 4) {
            return false;
        }
        if (iA != 5) {
            throw d.f();
        }
        e();
        return true;
    }

    public byte[] a(int i) throws d {
        if (i < 0) {
            throw d.b();
        }
        int i2 = this.e;
        int i3 = this.c;
        int i4 = i2 + i3 + i;
        int i5 = this.f;
        if (i4 > i5) {
            c((i5 - i2) - i3);
            throw d.a();
        }
        int i6 = this.a;
        if (i <= i6 - i3) {
            byte[] bArr = new byte[i];
            System.arraycopy(this.a, i3, bArr, 0, i);
            this.c += i;
            return bArr;
        }
        if (i >= 4096) {
            this.e = i2 + i6;
            this.c = 0;
            this.a = 0;
            int length = i6 - i3;
            int i7 = i - length;
            Vector vector = new Vector();
            while (i7 > 0) {
                int iMin = Math.min(i7, 4096);
                byte[] bArr2 = new byte[iMin];
                int i8 = 0;
                while (i8 < iMin) {
                    InputStream inputStream = this.a;
                    int i9 = inputStream == null ? -1 : inputStream.read(bArr2, i8, iMin - i8);
                    if (i9 == -1) {
                        throw d.a();
                    }
                    this.e += i9;
                    i8 += i9;
                }
                i7 -= iMin;
                vector.addElement(bArr2);
            }
            byte[] bArr3 = new byte[i];
            System.arraycopy(this.a, i3, bArr3, 0, length);
            for (int i10 = 0; i10 < vector.size(); i10++) {
                byte[] bArr4 = (byte[]) vector.elementAt(i10);
                System.arraycopy(bArr4, 0, bArr3, length, bArr4.length);
                length += bArr4.length;
            }
            return bArr3;
        }
        byte[] bArr5 = new byte[i];
        int i11 = i6 - i3;
        System.arraycopy(this.a, i3, bArr5, 0, i11);
        this.c = this.a;
        while (true) {
            a(true);
            int i12 = i - i11;
            int i13 = this.a;
            if (i12 <= i13) {
                System.arraycopy(this.a, 0, bArr5, i11, i12);
                this.c = i12;
                return bArr5;
            }
            System.arraycopy(this.a, 0, bArr5, i11, i13);
            int i14 = this.a;
            i11 += i14;
            this.c = i14;
        }
    }

    public int b() {
        return d();
    }

    public long b() {
        return c();
    }

    public void b(int i) {
        this.f = i;
        b();
    }

    public boolean b() {
        return this.c == this.a && !a(false);
    }

    public int c() {
        return d();
    }

    public long c() throws d {
        long j = 0;
        for (int i = 0; i < 64; i += 7) {
            byte bA = a();
            j |= ((long) (bA & ByteCompanionObject.MAX_VALUE)) << i;
            if ((bA & ByteCompanionObject.MIN_VALUE) == 0) {
                return j;
            }
        }
        throw d.c();
    }

    public void c(int i) throws d {
        if (i < 0) {
            throw d.b();
        }
        int i2 = this.e;
        int i3 = this.c;
        int i4 = i2 + i3 + i;
        int i5 = this.f;
        if (i4 > i5) {
            c((i5 - i2) - i3);
            throw d.a();
        }
        int i6 = this.a;
        if (i <= i6 - i3) {
            this.c = i3 + i;
            return;
        }
        int i7 = i6 - i3;
        this.e = i2 + i6;
        this.c = 0;
        this.a = 0;
        while (i7 < i) {
            InputStream inputStream = this.a;
            int iSkip = inputStream == null ? -1 : (int) inputStream.skip(i - i7);
            if (iSkip <= 0) {
                throw d.a();
            }
            i7 += iSkip;
            this.e += iSkip;
        }
    }

    public int d() throws d {
        int i;
        byte bA = a();
        if (bA >= 0) {
            return bA;
        }
        int i2 = bA & ByteCompanionObject.MAX_VALUE;
        byte bA2 = a();
        if (bA2 >= 0) {
            i = bA2 << 7;
        } else {
            i2 |= (bA2 & ByteCompanionObject.MAX_VALUE) << 7;
            byte bA3 = a();
            if (bA3 >= 0) {
                i = bA3 << 14;
            } else {
                i2 |= (bA3 & ByteCompanionObject.MAX_VALUE) << 14;
                byte bA4 = a();
                if (bA4 < 0) {
                    int i3 = i2 | ((bA4 & ByteCompanionObject.MAX_VALUE) << 21);
                    byte bA5 = a();
                    int i4 = i3 | (bA5 << 28);
                    if (bA5 >= 0) {
                        return i4;
                    }
                    for (int i5 = 0; i5 < 5; i5++) {
                        if (a() >= 0) {
                            return i4;
                        }
                    }
                    throw d.c();
                }
                i = bA4 << 21;
            }
        }
        return i2 | i;
    }

    public long d() throws d {
        byte bA = a();
        return ((((long) a()) & 255) << 8) | (((long) bA) & 255) | ((((long) a()) & 255) << 16) | ((((long) a()) & 255) << 24) | ((((long) a()) & 255) << 32) | ((((long) a()) & 255) << 40) | ((((long) a()) & 255) << 48) | ((((long) a()) & 255) << 56);
    }

    public int e() throws d {
        return (a() & UByte.MAX_VALUE) | ((a() & UByte.MAX_VALUE) << 8) | ((a() & UByte.MAX_VALUE) << 16) | ((a() & UByte.MAX_VALUE) << 24);
    }
}
