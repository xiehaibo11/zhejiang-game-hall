package com.xiaomi.push;

import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import kotlin.UByte;

public class jb extends jf {
    private static final jk a = new jk();
    protected int a;
    protected boolean a;
    private byte[] a;
    protected boolean b;
    private byte[] b;
    protected boolean c;
    private byte[] c;
    private byte[] d;
    private byte[] e;
    private byte[] f;
    private byte[] g;
    private byte[] h;

    public class a implements jh {
        protected int a;
        protected boolean a;
        protected boolean b;

        public a() {
            this(false, true);
        }

        public a(boolean z, boolean z2) {
            this(z, z2, 0);
        }

        public a(boolean z, boolean z2, int i) {
            this.a = false;
            this.b = true;
            this.a = z;
            this.b = z2;
            this.a = i;
        }

        @Override
        public jf a(jp jpVar) {
            jb jbVar = new jb(jpVar, this.a, this.b);
            int i = this.a;
            if (i != 0) {
                jbVar.b(i);
            }
            return jbVar;
        }
    }

    public jb(jp jpVar, boolean z, boolean z2) {
        super(jpVar);
        this.a = false;
        this.b = true;
        this.c = false;
        this.a = new byte[1];
        this.b = new byte[2];
        this.c = new byte[4];
        this.d = new byte[8];
        this.e = new byte[1];
        this.f = new byte[2];
        this.g = new byte[4];
        this.h = new byte[8];
        this.a = z;
        this.b = z2;
    }

    private int a(byte[] bArr, int i, int i2) throws iz {
        c(i2);
        return this.a.b(bArr, i, i2);
    }

    @Override
    public byte a() throws iz {
        if (this.a.b() < 1) {
            a(this.e, 0, 1);
            return this.e[0];
        }
        byte b = this.a.a()[this.a.a()];
        this.a.a(1);
        return b;
    }

    @Override
    public double a() {
        return Double.longBitsToDouble(a());
    }

    @Override
    public int a() throws iz {
        byte[] bArrA = this.g;
        int iA = 0;
        if (this.a.b() >= 4) {
            bArrA = this.a.a();
            iA = this.a.a();
            this.a.a(4);
        } else {
            a(this.g, 0, 4);
        }
        return (bArrA[iA + 3] & UByte.MAX_VALUE) | ((bArrA[iA] & UByte.MAX_VALUE) << 24) | ((bArrA[iA + 1] & UByte.MAX_VALUE) << 16) | ((bArrA[iA + 2] & UByte.MAX_VALUE) << 8);
    }

    @Override
    public long a() throws iz {
        byte[] bArrA = this.h;
        int iA = 0;
        if (this.a.b() >= 8) {
            bArrA = this.a.a();
            iA = this.a.a();
            this.a.a(8);
        } else {
            a(this.h, 0, 8);
        }
        return ((long) (bArrA[iA + 7] & UByte.MAX_VALUE)) | (((long) (bArrA[iA] & UByte.MAX_VALUE)) << 56) | (((long) (bArrA[iA + 1] & UByte.MAX_VALUE)) << 48) | (((long) (bArrA[iA + 2] & UByte.MAX_VALUE)) << 40) | (((long) (bArrA[iA + 3] & UByte.MAX_VALUE)) << 32) | (((long) (bArrA[iA + 4] & UByte.MAX_VALUE)) << 24) | (((long) (bArrA[iA + 5] & UByte.MAX_VALUE)) << 16) | (((long) (bArrA[iA + 6] & UByte.MAX_VALUE)) << 8);
    }

    @Override
    public jc a() throws iz {
        byte bA = a();
        return new jc("", bA, bA == 0 ? (short) 0 : a());
    }

    @Override
    public jd a() {
        return new jd(a(), a());
    }

    @Override
    public je a() {
        return new je(a(), a(), a());
    }

    @Override
    public jj a() {
        return new jj(a(), a());
    }

    @Override
    public jk a() {
        return a;
    }

    @Override
    public String a() throws iz {
        int iA = a();
        if (this.a.b() < iA) {
            return a(iA);
        }
        try {
            String str = new String(this.a.a(), this.a.a(), iA, "UTF-8");
            this.a.a(iA);
            return str;
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    public String a(int i) throws iz {
        try {
            c(i);
            byte[] bArr = new byte[i];
            this.a.b(bArr, 0, i);
            return new String(bArr, "UTF-8");
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    @Override
    public ByteBuffer a() throws iz {
        int iA = a();
        c(iA);
        if (this.a.b() >= iA) {
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(this.a.a(), this.a.a(), iA);
            this.a.a(iA);
            return byteBufferWrap;
        }
        byte[] bArr = new byte[iA];
        this.a.b(bArr, 0, iA);
        return ByteBuffer.wrap(bArr);
    }

    @Override
    public short a() throws iz {
        byte[] bArrA = this.f;
        int iA = 0;
        if (this.a.b() >= 2) {
            bArrA = this.a.a();
            iA = this.a.a();
            this.a.a(2);
        } else {
            a(this.f, 0, 2);
        }
        return (short) ((bArrA[iA + 1] & UByte.MAX_VALUE) | ((bArrA[iA] & UByte.MAX_VALUE) << 8));
    }

    @Override
    public void a() {
    }

    @Override
    public void a(byte b) {
        this.a[0] = b;
        this.a.a(this.a, 0, 1);
    }

    @Override
    public void a(int i) {
        byte[] bArr = this.c;
        bArr[0] = (byte) ((i >> 24) & 255);
        bArr[1] = (byte) ((i >> 16) & 255);
        bArr[2] = (byte) ((i >> 8) & 255);
        bArr[3] = (byte) (i & 255);
        this.a.a(this.c, 0, 4);
    }

    @Override
    public void a(long j) {
        byte[] bArr = this.d;
        bArr[0] = (byte) ((j >> 56) & 255);
        bArr[1] = (byte) ((j >> 48) & 255);
        bArr[2] = (byte) ((j >> 40) & 255);
        bArr[3] = (byte) ((j >> 32) & 255);
        bArr[4] = (byte) ((j >> 24) & 255);
        bArr[5] = (byte) ((j >> 16) & 255);
        bArr[6] = (byte) ((j >> 8) & 255);
        bArr[7] = (byte) (j & 255);
        this.a.a(this.d, 0, 8);
    }

    @Override
    public void a(jc jcVar) {
        a(jcVar.a);
        a(jcVar.a);
    }

    @Override
    public void a(jd jdVar) {
        a(jdVar.a);
        a(jdVar.a);
    }

    @Override
    public void a(je jeVar) {
        a(jeVar.a);
        a(jeVar.b);
        a(jeVar.a);
    }

    @Override
    public void a(jk jkVar) {
    }

    @Override
    public void a(String str) throws iz {
        try {
            byte[] bytes = str.getBytes("UTF-8");
            a(bytes.length);
            this.a.a(bytes, 0, bytes.length);
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    @Override
    public void a(ByteBuffer byteBuffer) {
        int iLimit = (byteBuffer.limit() - byteBuffer.position()) - byteBuffer.arrayOffset();
        a(iLimit);
        this.a.a(byteBuffer.array(), byteBuffer.position() + byteBuffer.arrayOffset(), iLimit);
    }

    @Override
    public void a(short s) {
        byte[] bArr = this.b;
        bArr[0] = (byte) ((s >> 8) & 255);
        bArr[1] = (byte) (s & 255);
        this.a.a(this.b, 0, 2);
    }

    @Override
    public void a(boolean z) {
        a(z ? (byte) 1 : (byte) 0);
    }

    @Override
    public boolean a() {
        return a() == 1;
    }

    @Override
    public void b() {
    }

    public void b(int i) {
        this.a = i;
        this.c = true;
    }

    @Override
    public void c() {
        a((byte) 0);
    }

    protected void c(int i) throws iz {
        if (i < 0) {
            throw new iz("Negative length: " + i);
        }
        if (this.c) {
            int i2 = this.a - i;
            this.a = i2;
            if (i2 >= 0) {
                return;
            }
            throw new iz("Message length exceeded: " + i);
        }
    }

    @Override
    public void d() {
    }

    @Override
    public void e() {
    }

    @Override
    public void f() {
    }

    @Override
    public void g() {
    }

    @Override
    public void h() {
    }

    @Override
    public void i() {
    }

    @Override
    public void j() {
    }
}
