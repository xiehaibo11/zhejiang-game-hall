package com.sigmob.sdk.archives.tar;

public class a implements com.sigmob.sdk.archives.a, com.sigmob.sdk.archives.tar.e {
    public static final int b = 31;
    public static final int c = 16877;
    public static final int d = 33188;
    public static final int e = 1000;
    private java.lang.String ac;
    private int ad;
    private int ae;
    private int af;
    private long ag;
    private long ah;
    private byte ai;
    private java.lang.String aj;
    private java.lang.String ak;
    private java.lang.String al;
    private java.lang.String am;
    private java.lang.String an;
    private int ao;
    private int ap;
    private boolean aq;
    private long ar;
    private java.io.File as;

    private a() {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "ustar\u0000"
            r5.ak = r0
            java.lang.String r0 = "00"
            r5.al = r0
            java.lang.String r0 = ""
            r5.ac = r0
            r5.aj = r0
            java.lang.String r1 = "user.name"
            java.lang.String r1 = java.lang.System.getProperty(r1, r0)
            int r2 = r1.length()
            r3 = 31
            r4 = 0
            if (r2 <= r3) goto L24
            java.lang.String r1 = r1.substring(r4, r3)
        L24:
            r5.ae = r4
            r5.af = r4
            r5.am = r1
            r5.an = r0
            r0 = 0
            r5.as = r0
            return
    }

    public a(java.io.File r3) {
            r2 = this;
            java.lang.String r0 = r3.getPath()
            r1 = 0
            java.lang.String r0 = a(r0, r1)
            r2.<init>(r3, r0)
            return
    }

    public a(java.io.File r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            r2.as = r3
            java.lang.String r0 = ""
            r2.aj = r0
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L3f
            r0 = 16877(0x41ed, float:2.365E-41)
            r2.ad = r0
            r0 = 53
            r2.ai = r0
            int r0 = r4.length()
            if (r0 == 0) goto L27
            int r0 = r0 + (-1)
            char r0 = r4.charAt(r0)
            r1 = 47
            if (r0 == r1) goto L38
        L27:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = "/"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L38:
            r2.ac = r4
            r0 = 0
            r2.ag = r0
            goto L50
        L3f:
            r0 = 33188(0x81a4, float:4.6506E-41)
            r2.ad = r0
            r0 = 48
            r2.ai = r0
            long r0 = r3.length()
            r2.ag = r0
            r2.ac = r4
        L50:
            long r3 = r3.lastModified()
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r0
            r2.ah = r3
            r3 = 0
            r2.ao = r3
            r2.ap = r3
            return
    }

    public a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public a(java.lang.String r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            r0.ai = r2
            r1 = 76
            if (r2 != r1) goto L11
            java.lang.String r1 = "ustar "
            r0.ak = r1
            java.lang.String r1 = " \u0000"
            r0.al = r1
        L11:
            return
    }

    public a(java.lang.String r4, boolean r5) {
            r3 = this;
            r3.<init>()
            java.lang.String r4 = a(r4, r5)
            java.lang.String r5 = "/"
            boolean r5 = r4.endsWith(r5)
            r0 = 0
            r3.ao = r0
            r3.ap = r0
            r3.ac = r4
            if (r5 == 0) goto L19
            r4 = 16877(0x41ed, float:2.365E-41)
            goto L1c
        L19:
            r4 = 33188(0x81a4, float:4.6506E-41)
        L1c:
            r3.ad = r4
            if (r5 == 0) goto L23
            r4 = 53
            goto L25
        L23:
            r4 = 48
        L25:
            r3.ai = r4
            r3.ae = r0
            r3.af = r0
            r4 = 0
            r3.ag = r4
            java.util.Date r4 = new java.util.Date
            r4.<init>()
            long r4 = r4.getTime()
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 / r1
            r3.ah = r4
            java.lang.String r4 = ""
            r3.aj = r4
            r3.am = r4
            r3.an = r4
            r3.ao = r0
            r3.ap = r0
            return
    }

    public a(byte[] r1) {
            r0 = this;
            r0.<init>()
            r0.b(r1)
            return
    }

    private static java.lang.String a(java.lang.String r5, boolean r6) {
            java.lang.String r0 = "os.name"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.util.Locale r1 = java.util.Locale.ENGLISH
            java.lang.String r0 = r0.toLowerCase(r1)
            r1 = 1
            if (r0 == 0) goto L54
            java.lang.String r2 = "windows"
            boolean r2 = r0.startsWith(r2)
            r3 = 58
            if (r2 == 0) goto L40
            int r0 = r5.length()
            r2 = 2
            if (r0 <= r2) goto L54
            r0 = 0
            char r0 = r5.charAt(r0)
            char r4 = r5.charAt(r1)
            if (r4 != r3) goto L54
            r3 = 97
            if (r0 < r3) goto L33
            r3 = 122(0x7a, float:1.71E-43)
            if (r0 <= r3) goto L3b
        L33:
            r3 = 65
            if (r0 < r3) goto L54
            r3 = 90
            if (r0 > r3) goto L54
        L3b:
            java.lang.String r5 = r5.substring(r2)
            goto L54
        L40:
            java.lang.String r2 = "netware"
            int r0 = r0.indexOf(r2)
            r2 = -1
            if (r0 <= r2) goto L54
            int r0 = r5.indexOf(r3)
            if (r0 == r2) goto L54
            int r0 = r0 + r1
            java.lang.String r5 = r5.substring(r0)
        L54:
            char r0 = java.io.File.separatorChar
            r2 = 47
            java.lang.String r5 = r5.replace(r0, r2)
        L5c:
            if (r6 != 0) goto L6b
            java.lang.String r0 = "/"
            boolean r0 = r5.startsWith(r0)
            if (r0 == 0) goto L6b
            java.lang.String r5 = r5.substring(r1)
            goto L5c
        L6b:
            return r5
    }

    private int c(byte[] r3) {
            r2 = this;
            r0 = 257(0x101, float:3.6E-43)
            r1 = 6
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3, r0, r1)
            java.lang.String r0 = "ustar "
            byte[] r0 = r0.getBytes()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0)
            int r0 = r3.compareTo(r0)
            if (r0 != 0) goto L19
            r3 = 2
            return r3
        L19:
            java.lang.String r0 = "ustar\u0000"
            byte[] r0 = r0.getBytes()
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.wrap(r0)
            int r3 = r3.compareTo(r0)
            if (r3 != 0) goto L2b
            r3 = 3
            return r3
        L2b:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.ac
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public void a(int r1, int r2) {
            r0 = this;
            r0.b(r1)
            r0.c(r2)
            return
    }

    public void a(long r3) {
            r2 = this;
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r0
            r2.ah = r3
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.String r2 = a(r2, r0)
            r1.ac = r2
            return
    }

    public void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.c(r1)
            r0.d(r2)
            return
    }

    public void a(java.util.Date r5) {
            r4 = this;
            long r0 = r5.getTime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            r4.ah = r0
            return
    }

    public void a(byte[] r9) {
            r8 = this;
            java.lang.String r0 = r8.ac
            r1 = 100
            r2 = 0
            int r0 = com.sigmob.sdk.archives.tar.f.a(r0, r9, r2, r1)
            int r3 = r8.ad
            long r3 = (long) r3
            r5 = 8
            int r0 = com.sigmob.sdk.archives.tar.f.b(r3, r9, r0, r5)
            int r3 = r8.ae
            long r3 = (long) r3
            int r0 = com.sigmob.sdk.archives.tar.f.b(r3, r9, r0, r5)
            int r3 = r8.af
            long r3 = (long) r3
            int r0 = com.sigmob.sdk.archives.tar.f.b(r3, r9, r0, r5)
            long r3 = r8.ag
            r6 = 12
            int r0 = com.sigmob.sdk.archives.tar.f.c(r3, r9, r0, r6)
            long r3 = r8.ah
            int r0 = com.sigmob.sdk.archives.tar.f.c(r3, r9, r0, r6)
            r4 = r0
            r3 = r2
        L30:
            r6 = 32
            if (r3 >= r5) goto L3c
            int r7 = r4 + 1
            r9[r4] = r6
            int r3 = r3 + 1
            r4 = r7
            goto L30
        L3c:
            int r3 = r4 + 1
            byte r7 = r8.ai
            r9[r4] = r7
            java.lang.String r4 = r8.aj
            int r1 = com.sigmob.sdk.archives.tar.f.a(r4, r9, r3, r1)
            java.lang.String r3 = r8.ak
            r4 = 6
            int r1 = com.sigmob.sdk.archives.tar.f.a(r3, r9, r1, r4)
            java.lang.String r3 = r8.al
            r4 = 2
            int r1 = com.sigmob.sdk.archives.tar.f.a(r3, r9, r1, r4)
            java.lang.String r3 = r8.am
            int r1 = com.sigmob.sdk.archives.tar.f.a(r3, r9, r1, r6)
            java.lang.String r3 = r8.an
            int r1 = com.sigmob.sdk.archives.tar.f.a(r3, r9, r1, r6)
            int r3 = r8.ao
            long r3 = (long) r3
            int r1 = com.sigmob.sdk.archives.tar.f.b(r3, r9, r1, r5)
            int r3 = r8.ap
            long r3 = (long) r3
            int r1 = com.sigmob.sdk.archives.tar.f.b(r3, r9, r1, r5)
        L70:
            int r3 = r9.length
            if (r1 >= r3) goto L79
            int r3 = r1 + 1
            r9[r1] = r2
            r1 = r3
            goto L70
        L79:
            long r1 = com.sigmob.sdk.archives.tar.f.a(r9)
            com.sigmob.sdk.archives.tar.f.d(r1, r9, r0, r5)
            return
    }

    public boolean a(com.sigmob.sdk.archives.tar.a r2) {
            r1 = this;
            java.lang.String r0 = r1.a()
            java.lang.String r2 = r2.a()
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    public long b() {
            r2 = this;
            long r0 = r2.ag
            return r0
    }

    public void b(int r1) {
            r0 = this;
            r0.ae = r1
            return
    }

    public void b(long r4) {
            r3 = this;
            r0 = 8589934591(0x1ffffffff, double:4.2439915814E-314)
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 > 0) goto L12
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L12
            r3.ag = r4
            return
        L12:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Size is out of range: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    public void b(byte[] r6) {
            r5 = this;
            r0 = 100
            r1 = 0
            java.lang.String r1 = com.sigmob.sdk.archives.tar.f.b(r6, r1, r0)
            r5.ac = r1
            r1 = 8
            long r2 = com.sigmob.sdk.archives.tar.f.a(r6, r0, r1)
            int r2 = (int) r2
            r5.ad = r2
            r2 = 108(0x6c, float:1.51E-43)
            long r2 = com.sigmob.sdk.archives.tar.f.a(r6, r2, r1)
            int r2 = (int) r2
            r5.ae = r2
            r2 = 116(0x74, float:1.63E-43)
            long r2 = com.sigmob.sdk.archives.tar.f.a(r6, r2, r1)
            int r2 = (int) r2
            r5.af = r2
            r2 = 12
            r3 = 124(0x7c, float:1.74E-43)
            long r3 = com.sigmob.sdk.archives.tar.f.a(r6, r3, r2)
            r5.ag = r3
            r3 = 136(0x88, float:1.9E-43)
            long r3 = com.sigmob.sdk.archives.tar.f.a(r6, r3, r2)
            r5.ah = r3
            r3 = 156(0x9c, float:2.19E-43)
            r3 = r6[r3]
            r5.ai = r3
            r3 = 157(0x9d, float:2.2E-43)
            java.lang.String r0 = com.sigmob.sdk.archives.tar.f.b(r6, r3, r0)
            r5.aj = r0
            r0 = 257(0x101, float:3.6E-43)
            r3 = 6
            java.lang.String r0 = com.sigmob.sdk.archives.tar.f.b(r6, r0, r3)
            r5.ak = r0
            r0 = 2
            r3 = 263(0x107, float:3.69E-43)
            java.lang.String r3 = com.sigmob.sdk.archives.tar.f.b(r6, r3, r0)
            r5.al = r3
            r3 = 32
            r4 = 265(0x109, float:3.71E-43)
            java.lang.String r4 = com.sigmob.sdk.archives.tar.f.b(r6, r4, r3)
            r5.am = r4
            r4 = 297(0x129, float:4.16E-43)
            java.lang.String r3 = com.sigmob.sdk.archives.tar.f.b(r6, r4, r3)
            r5.an = r3
            r3 = 329(0x149, float:4.61E-43)
            long r3 = com.sigmob.sdk.archives.tar.f.a(r6, r3, r1)
            int r3 = (int) r3
            r5.ao = r3
            r3 = 337(0x151, float:4.72E-43)
            long r3 = com.sigmob.sdk.archives.tar.f.a(r6, r3, r1)
            int r1 = (int) r3
            r5.ap = r1
            int r1 = r5.c(r6)
            if (r1 == r0) goto Lc8
            r0 = 155(0x9b, float:2.17E-43)
            r1 = 345(0x159, float:4.83E-43)
            java.lang.String r6 = com.sigmob.sdk.archives.tar.f.b(r6, r1, r0)
            boolean r0 = r5.c()
            java.lang.String r1 = "/"
            if (r0 == 0) goto Lab
            java.lang.String r0 = r5.ac
            boolean r0 = r0.endsWith(r1)
            if (r0 != 0) goto Lab
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r5.ac
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.ac = r0
        Lab:
            int r0 = r6.length()
            if (r0 <= 0) goto Ld8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r6)
            r0.append(r1)
            java.lang.String r6 = r5.ac
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r5.ac = r6
            goto Ld8
        Lc8:
            r0 = 482(0x1e2, float:6.75E-43)
            boolean r0 = com.sigmob.sdk.archives.tar.f.a(r6, r0)
            r5.aq = r0
            r0 = 483(0x1e3, float:6.77E-43)
            long r0 = com.sigmob.sdk.archives.tar.f.a(r6, r0, r2)
            r5.ar = r0
        Ld8:
            return
    }

    public boolean b(com.sigmob.sdk.archives.tar.a r2) {
            r1 = this;
            java.lang.String r2 = r2.a()
            java.lang.String r0 = r1.a()
            boolean r2 = r2.startsWith(r0)
            return r2
    }

    public void c(int r1) {
            r0 = this;
            r0.af = r1
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.am = r1
            return
    }

    @Override
    public boolean c() {
            r2 = this;
            java.io.File r0 = r2.as
            if (r0 == 0) goto L9
            boolean r0 = r0.isDirectory()
            return r0
        L9:
            byte r0 = r2.ai
            r1 = 53
            if (r0 != r1) goto L11
            r0 = 1
            return r0
        L11:
            java.lang.String r0 = r2.a()
            java.lang.String r1 = "/"
            boolean r0 = r0.endsWith(r1)
            return r0
    }

    @Override
    public java.util.Date d() {
            r1 = this;
            java.util.Date r0 = r1.j()
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.aj
            java.lang.String r0 = r0.toString()
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r3 == 0) goto L14
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto Ld
            goto L14
        Ld:
            com.sigmob.sdk.archives.tar.a r3 = (com.sigmob.sdk.archives.tar.a) r3
            boolean r3 = r2.a(r3)
            return r3
        L14:
            r3 = 0
            return r3
    }

    public int f() {
            r1 = this;
            int r0 = r1.ae
            return r0
    }

    public int g() {
            r1 = this;
            int r0 = r1.af
            return r0
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.am
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.a()
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.an
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.util.Date j() {
            r5 = this;
            java.util.Date r0 = new java.util.Date
            long r1 = r5.ah
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r0.<init>(r1)
            return r0
    }

    public java.io.File k() {
            r1 = this;
            java.io.File r0 = r1.as
            return r0
    }

    public int l() {
            r1 = this;
            int r0 = r1.ad
            return r0
    }

    public boolean m() {
            r1 = this;
            boolean r0 = r1.aq
            return r0
    }

    public long n() {
            r2 = this;
            long r0 = r2.ar
            return r0
    }

    public boolean o() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 83
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean p() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 76
            if (r0 != r1) goto L16
            java.lang.String r0 = r2.ac
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "././@LongLink"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public boolean q() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 120(0x78, float:1.68E-43)
            if (r0 == r1) goto Ld
            r1 = 88
            if (r0 != r1) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public boolean r() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 103(0x67, float:1.44E-43)
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean s() {
            r3 = this;
            java.io.File r0 = r3.as
            if (r0 == 0) goto L9
            boolean r0 = r0.isFile()
            return r0
        L9:
            byte r0 = r3.ai
            r1 = 1
            if (r0 == 0) goto L1f
            r2 = 48
            if (r0 != r2) goto L13
            goto L1f
        L13:
            java.lang.String r0 = r3.a()
            java.lang.String r2 = "/"
            boolean r0 = r0.endsWith(r2)
            r0 = r0 ^ r1
            return r0
        L1f:
            return r1
    }

    public boolean t() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 50
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean u() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 49
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean v() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 51
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean w() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 52
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public boolean x() {
            r2 = this;
            byte r0 = r2.ai
            r1 = 54
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public com.sigmob.sdk.archives.tar.a[] y() {
            r7 = this;
            java.io.File r0 = r7.as
            r1 = 0
            if (r0 == 0) goto L2c
            boolean r0 = r0.isDirectory()
            if (r0 != 0) goto Lc
            goto L2c
        Lc:
            java.io.File r0 = r7.as
            java.lang.String[] r0 = r0.list()
            int r2 = r0.length
            com.sigmob.sdk.archives.tar.a[] r2 = new com.sigmob.sdk.archives.tar.a[r2]
        L15:
            int r3 = r0.length
            if (r1 >= r3) goto L2b
            com.sigmob.sdk.archives.tar.a r3 = new com.sigmob.sdk.archives.tar.a
            java.io.File r4 = new java.io.File
            java.io.File r5 = r7.as
            r6 = r0[r1]
            r4.<init>(r5, r6)
            r3.<init>(r4)
            r2[r1] = r3
            int r1 = r1 + 1
            goto L15
        L2b:
            return r2
        L2c:
            com.sigmob.sdk.archives.tar.a[] r0 = new com.sigmob.sdk.archives.tar.a[r1]
            return r0
    }
}
