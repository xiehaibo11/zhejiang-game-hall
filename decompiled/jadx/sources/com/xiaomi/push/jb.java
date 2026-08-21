package com.xiaomi.push;

import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import kotlin.UByte;

/* JADX INFO: loaded from: classes4.dex */
public class jb extends jf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final jk f8246a = new jk();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected int f816a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected boolean f817a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte[] f818a;
    protected boolean b;

    /* JADX INFO: renamed from: b, reason: collision with other field name */
    private byte[] f819b;
    protected boolean c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    private byte[] f820c;
    private byte[] d;
    private byte[] e;
    private byte[] f;
    private byte[] g;
    private byte[] h;

    public class a implements jh {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected int f8247a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        protected boolean f821a;
        protected boolean b;

        public a() {
            this(false, true);
        }

        public a(boolean z, boolean z2) {
            this(z, z2, 0);
        }

        public a(boolean z, boolean z2, int i) {
            this.f821a = false;
            this.b = true;
            this.f821a = z;
            this.b = z2;
            this.f8247a = i;
        }

        @Override // com.xiaomi.push.jh
        public jf a(jp jpVar) {
            jb jbVar = new jb(jpVar, this.f821a, this.b);
            int i = this.f8247a;
            if (i != 0) {
                jbVar.b(i);
            }
            return jbVar;
        }
    }

    public jb(jp jpVar, boolean z, boolean z2) {
        super(jpVar);
        this.f817a = false;
        this.b = true;
        this.c = false;
        this.f818a = new byte[1];
        this.f819b = new byte[2];
        this.f820c = new byte[4];
        this.d = new byte[8];
        this.e = new byte[1];
        this.f = new byte[2];
        this.g = new byte[4];
        this.h = new byte[8];
        this.f817a = z;
        this.b = z2;
    }

    private int a(byte[] bArr, int i, int i2) throws iz {
        c(i2);
        return this.f8251a.b(bArr, i, i2);
    }

    @Override // com.xiaomi.push.jf
    public byte a() throws iz {
        if (this.f8251a.b() < 1) {
            a(this.e, 0, 1);
            return this.e[0];
        }
        byte b = this.f8251a.mo570a()[this.f8251a.a()];
        this.f8251a.a(1);
        return b;
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public double mo555a() {
        return Double.longBitsToDouble(mo557a());
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public int mo556a() throws iz {
        byte[] bArrMo570a = this.g;
        int iA = 0;
        if (this.f8251a.b() >= 4) {
            bArrMo570a = this.f8251a.mo570a();
            iA = this.f8251a.a();
            this.f8251a.a(4);
        } else {
            a(this.g, 0, 4);
        }
        return (bArrMo570a[iA + 3] & UByte.MAX_VALUE) | ((bArrMo570a[iA] & UByte.MAX_VALUE) << 24) | ((bArrMo570a[iA + 1] & UByte.MAX_VALUE) << 16) | ((bArrMo570a[iA + 2] & UByte.MAX_VALUE) << 8);
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public long mo557a() throws iz {
        byte[] bArrMo570a = this.h;
        int iA = 0;
        if (this.f8251a.b() >= 8) {
            bArrMo570a = this.f8251a.mo570a();
            iA = this.f8251a.a();
            this.f8251a.a(8);
        } else {
            a(this.h, 0, 8);
        }
        return ((long) (bArrMo570a[iA + 7] & UByte.MAX_VALUE)) | (((long) (bArrMo570a[iA] & UByte.MAX_VALUE)) << 56) | (((long) (bArrMo570a[iA + 1] & UByte.MAX_VALUE)) << 48) | (((long) (bArrMo570a[iA + 2] & UByte.MAX_VALUE)) << 40) | (((long) (bArrMo570a[iA + 3] & UByte.MAX_VALUE)) << 32) | (((long) (bArrMo570a[iA + 4] & UByte.MAX_VALUE)) << 24) | (((long) (bArrMo570a[iA + 5] & UByte.MAX_VALUE)) << 16) | (((long) (bArrMo570a[iA + 6] & UByte.MAX_VALUE)) << 8);
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public jc mo558a() throws iz {
        byte bA = a();
        return new jc("", bA, bA == 0 ? (short) 0 : mo565a());
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public jd mo559a() {
        return new jd(a(), mo556a());
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public je mo560a() {
        return new je(a(), a(), mo556a());
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public jj mo561a() {
        return new jj(a(), mo556a());
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public jk mo562a() {
        return f8246a;
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public String mo563a() throws iz {
        int iMo556a = mo556a();
        if (this.f8251a.b() < iMo556a) {
            return a(iMo556a);
        }
        try {
            String str = new String(this.f8251a.mo570a(), this.f8251a.a(), iMo556a, "UTF-8");
            this.f8251a.a(iMo556a);
            return str;
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    public String a(int i) throws iz {
        try {
            c(i);
            byte[] bArr = new byte[i];
            this.f8251a.b(bArr, 0, i);
            return new String(bArr, "UTF-8");
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public ByteBuffer mo564a() throws iz {
        int iMo556a = mo556a();
        c(iMo556a);
        if (this.f8251a.b() >= iMo556a) {
            ByteBuffer byteBufferWrap = ByteBuffer.wrap(this.f8251a.mo570a(), this.f8251a.a(), iMo556a);
            this.f8251a.a(iMo556a);
            return byteBufferWrap;
        }
        byte[] bArr = new byte[iMo556a];
        this.f8251a.b(bArr, 0, iMo556a);
        return ByteBuffer.wrap(bArr);
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public short mo565a() throws iz {
        byte[] bArrMo570a = this.f;
        int iA = 0;
        if (this.f8251a.b() >= 2) {
            bArrMo570a = this.f8251a.mo570a();
            iA = this.f8251a.a();
            this.f8251a.a(2);
        } else {
            a(this.f, 0, 2);
        }
        return (short) ((bArrMo570a[iA + 1] & UByte.MAX_VALUE) | ((bArrMo570a[iA] & UByte.MAX_VALUE) << 8));
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo566a() {
    }

    @Override // com.xiaomi.push.jf
    public void a(byte b) {
        this.f818a[0] = b;
        this.f8251a.mo569a(this.f818a, 0, 1);
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo567a(int i) {
        byte[] bArr = this.f820c;
        bArr[0] = (byte) ((i >> 24) & 255);
        bArr[1] = (byte) ((i >> 16) & 255);
        bArr[2] = (byte) ((i >> 8) & 255);
        bArr[3] = (byte) (i & 255);
        this.f8251a.mo569a(this.f820c, 0, 4);
    }

    @Override // com.xiaomi.push.jf
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
        this.f8251a.mo569a(this.d, 0, 8);
    }

    @Override // com.xiaomi.push.jf
    public void a(jc jcVar) {
        a(jcVar.f8248a);
        a(jcVar.f823a);
    }

    @Override // com.xiaomi.push.jf
    public void a(jd jdVar) {
        a(jdVar.f8249a);
        mo567a(jdVar.f824a);
    }

    @Override // com.xiaomi.push.jf
    public void a(je jeVar) {
        a(jeVar.f8250a);
        a(jeVar.b);
        mo567a(jeVar.f825a);
    }

    @Override // com.xiaomi.push.jf
    public void a(jk jkVar) {
    }

    @Override // com.xiaomi.push.jf
    public void a(String str) throws iz {
        try {
            byte[] bytes = str.getBytes("UTF-8");
            mo567a(bytes.length);
            this.f8251a.mo569a(bytes, 0, bytes.length);
        } catch (UnsupportedEncodingException unused) {
            throw new iz("JVM DOES NOT SUPPORT UTF-8");
        }
    }

    @Override // com.xiaomi.push.jf
    public void a(ByteBuffer byteBuffer) {
        int iLimit = (byteBuffer.limit() - byteBuffer.position()) - byteBuffer.arrayOffset();
        mo567a(iLimit);
        this.f8251a.mo569a(byteBuffer.array(), byteBuffer.position() + byteBuffer.arrayOffset(), iLimit);
    }

    @Override // com.xiaomi.push.jf
    public void a(short s) {
        byte[] bArr = this.f819b;
        bArr[0] = (byte) ((s >> 8) & 255);
        bArr[1] = (byte) (s & 255);
        this.f8251a.mo569a(this.f819b, 0, 2);
    }

    @Override // com.xiaomi.push.jf
    public void a(boolean z) {
        a(z ? (byte) 1 : (byte) 0);
    }

    @Override // com.xiaomi.push.jf
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean mo568a() {
        return a() == 1;
    }

    @Override // com.xiaomi.push.jf
    public void b() {
    }

    public void b(int i) {
        this.f816a = i;
        this.c = true;
    }

    @Override // com.xiaomi.push.jf
    public void c() {
        a((byte) 0);
    }

    protected void c(int i) throws iz {
        if (i < 0) {
            throw new iz("Negative length: " + i);
        }
        if (this.c) {
            int i2 = this.f816a - i;
            this.f816a = i2;
            if (i2 >= 0) {
                return;
            }
            throw new iz("Message length exceeded: " + i);
        }
    }

    @Override // com.xiaomi.push.jf
    public void d() {
    }

    @Override // com.xiaomi.push.jf
    public void e() {
    }

    @Override // com.xiaomi.push.jf
    public void f() {
    }

    @Override // com.xiaomi.push.jf
    public void g() {
    }

    @Override // com.xiaomi.push.jf
    public void h() {
    }

    @Override // com.xiaomi.push.jf
    public void i() {
    }

    @Override // com.xiaomi.push.jf
    public void j() {
    }
}
