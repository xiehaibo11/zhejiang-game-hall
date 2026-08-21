package com.igexin.push.d.a;

public class b extends com.igexin.b.a.b.b {
    public static final java.lang.String a = null;
    public static int b;
    private byte[] g;

    static {
            java.lang.Class<com.igexin.push.d.a.b> r0 = com.igexin.push.d.a.b.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.d.a.b.a = r0
            r0 = -1
            com.igexin.push.d.a.b.b = r0
            return
    }

    b(java.lang.String r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            return
    }

    private byte a(com.igexin.b.a.b.a.a.o r2) {
            r1 = this;
            r0 = 1
            int r2 = r1.b(r2, r0)
            byte r2 = (byte) r2
            return r2
    }

    public static com.igexin.b.a.b.b a() {
            com.igexin.push.d.a.b r0 = new com.igexin.push.d.a.b
            java.lang.String r1 = "socketProtocol"
            r0.<init>(r1)
            com.igexin.push.d.a.a r1 = new com.igexin.push.d.a.a
            java.lang.String r2 = "command"
            r1.<init>(r2, r0)
            return r0
    }

    private com.igexin.b.a.d.a.e a(com.igexin.b.a.b.e r10, com.igexin.b.a.b.d r11, com.igexin.b.a.b.a.a.o r12, com.igexin.push.d.c.e r13) {
            r9 = this;
            byte r0 = r13.h
            r1 = 48
            r2 = 0
            if (r0 != r1) goto L8
            return r2
        L8:
            byte r0 = r9.a(r12)
            if (r0 <= 0) goto L11
            r9.a(r12, r0)
        L11:
            byte r0 = r9.a(r12)
            r13.f = r0
            byte r0 = r9.a(r12)
            r13.o = r0
            int r0 = r13.o
            if (r0 <= 0) goto L29
            int r0 = r13.o
            byte[] r0 = r9.a(r12, r0)
            r13.n = r0
        L29:
            int r0 = r13.e
            if (r0 != 0) goto L41
            com.igexin.b.a.b.c r10 = com.igexin.b.a.b.c.b()
            com.igexin.push.d.c.f r11 = new com.igexin.push.d.c.f
            r11.<init>()
            r10.a(r11)
            com.igexin.b.a.b.c r10 = com.igexin.b.a.b.c.b()
            r10.c()
            return r2
        L41:
            r0 = 11
            byte[] r0 = r9.a(r12, r0)
            r3 = 0
            int r4 = com.igexin.b.a.b.f.d(r0, r3)
            int r5 = com.igexin.push.d.a.b.b
            if (r4 <= r5) goto L116
            com.igexin.push.d.a.b.b = r4
            r5 = 4
            int r5 = com.igexin.b.a.b.f.d(r0, r5)
            r6 = 8
            short r6 = com.igexin.b.a.b.f.b(r0, r6)
            r7 = 10
            int r0 = com.igexin.b.a.b.f.a(r0, r7)
            com.igexin.push.d.c.a r7 = new com.igexin.push.d.c.a
            r7.<init>()
            r7.a = r6
            byte r8 = (byte) r0
            r7.b = r8
            int r8 = r13.c
            r7.f = r8
            byte r8 = r13.h
            r7.g = r8
            if (r6 <= 0) goto Le0
            byte[] r12 = r9.a(r12, r6)
            byte r6 = r13.h
            r8 = 16
            if (r6 != r8) goto L8e
            byte[] r0 = com.igexin.b.a.b.f.b(r5)
            byte[] r0 = com.igexin.push.util.EncryptUtils.getIV(r0)
            byte[] r12 = com.igexin.push.util.EncryptUtils.aesDecSocket(r12, r0)
            goto La6
        L8e:
            byte r6 = r13.h
            r8 = 32
            if (r6 != r8) goto La2
            r1 = 26
            if (r0 == r1) goto L99
            return r2
        L99:
            byte[] r0 = com.igexin.b.a.b.f.b(r5)
            byte[] r12 = com.igexin.push.util.EncryptUtils.altAesDecSocket(r12, r0)
            goto La6
        La2:
            byte r0 = r13.h
            if (r0 != 0) goto Ldd
        La6:
            byte r0 = r13.g
            r1 = -128(0xffffffffffffff80, float:NaN)
            if (r0 != r1) goto Lb1
            byte[] r12 = com.igexin.b.a.b.f.d(r12)
            goto Lb5
        Lb1:
            byte r0 = r13.g
            if (r0 != 0) goto Ldc
        Lb5:
            r7.a(r12)
            byte[] r12 = r13.n
            byte[] r13 = com.igexin.push.util.EncryptUtils.getSocketSignature(r7, r4, r5)
            boolean r12 = java.util.Arrays.equals(r12, r13)
            if (r12 != 0) goto Lfd
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = com.igexin.push.d.a.b.a
            r10.append(r11)
            java.lang.String r11 = "|decode signature error!!!!"
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.Object[] r11 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r10, r11)
        Ldc:
            return r2
        Ldd:
            byte r10 = r13.h
            return r2
        Le0:
            int r12 = r7.a
            if (r12 >= 0) goto Lfd
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = com.igexin.push.d.a.b.a
            r10.append(r11)
            java.lang.String r11 = "|data len < 0, error"
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            java.lang.Object[] r11 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r10, r11)
            return r2
        Lfd:
            com.igexin.b.a.b.b r12 = r9.d
            if (r12 == 0) goto L10e
            com.igexin.b.a.b.c r12 = com.igexin.b.a.b.c.b()
            com.igexin.b.a.b.b r13 = r9.d
            java.lang.Object r10 = r13.c(r10, r11, r7)
            r12.a(r10)
        L10e:
            com.igexin.b.a.b.c r10 = com.igexin.b.a.b.c.b()
            r10.c()
            return r2
        L116:
            r10 = -1
            com.igexin.push.d.a.b.b = r10
            java.lang.Exception r10 = new java.lang.Exception
            java.lang.String r11 = "server packetId can't be less than previous"
            r10.<init>(r11)
            throw r10
    }

    static com.igexin.push.d.c.e a(com.igexin.push.d.c.a r5) {
            com.igexin.push.d.c.e r0 = new com.igexin.push.d.c.e
            r0.<init>()
            r1 = 1944742139(0x73ea68fb, float:3.714376E31)
            r0.a = r1
            byte r1 = r5.c
            r0.a(r1)
            byte r1 = r5.b
            r2 = 0
            if (r1 <= 0) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = r2
        L17:
            r0.e = r1
            r1 = 7
            r0.c = r1
            r1 = 11
            r0.b = r1
            byte r1 = r5.d
            r0.f = r1
            int r1 = r0.b
            byte[] r3 = com.igexin.push.util.EncryptUtils.getRSAKeyId()
            int r3 = r3.length
            int r1 = r1 + r3
            r0.b = r1
            int r1 = r5.a
            if (r1 <= 0) goto L59
            int r1 = com.igexin.push.util.EncryptUtils.getPacketId()
            r0.p = r1
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r1 = (int) r1
            r0.q = r1
            int r1 = r0.p
            int r2 = r0.q
            byte[] r5 = com.igexin.push.util.EncryptUtils.getSocketSignature(r5, r1, r2)
            r0.n = r5
            byte[] r5 = r0.n
            int r5 = r5.length
            r0.o = r5
        L51:
            int r5 = r0.b
            int r1 = r0.o
            int r5 = r5 + r1
            r0.b = r5
            goto L60
        L59:
            byte r5 = r0.h
            if (r5 != 0) goto L60
            r0.o = r2
            goto L51
        L60:
            com.igexin.b.a.b.c.d()
            return r0
    }

    private byte[] a(com.igexin.b.a.b.a.a.o r1, int r2) {
            r0 = this;
            byte[] r2 = new byte[r2]
            r1.a(r2)
            return r2
    }

    private int b(com.igexin.b.a.b.a.a.o r3, int r4) {
            r2 = this;
            byte[] r3 = r2.a(r3, r4)
            r0 = 0
            r1 = 1
            if (r4 != r1) goto Ld
            int r3 = com.igexin.b.a.b.f.a(r3, r0)
            return r3
        Ld:
            r1 = 2
            if (r4 != r1) goto L15
            short r3 = com.igexin.b.a.b.f.b(r3, r0)
            return r3
        L15:
            r1 = 4
            if (r4 != r1) goto L1d
            int r3 = com.igexin.b.a.b.f.d(r3, r0)
            return r3
        L1d:
            return r0
    }

    private com.igexin.b.a.d.a.e b(com.igexin.b.a.b.e r7, com.igexin.b.a.b.d r8, com.igexin.b.a.b.a.a.o r9, com.igexin.push.d.c.e r10) {
            r6 = this;
            byte r0 = r10.h
            r1 = 48
            if (r0 != r1) goto L12
            byte r0 = r6.a(r9)
            if (r0 <= 0) goto L12
            byte[] r0 = r6.a(r9, r0)
            r6.g = r0
        L12:
            int r0 = r10.e
            r2 = 0
            if (r0 != 0) goto L2b
            com.igexin.b.a.b.c r7 = com.igexin.b.a.b.c.b()
            com.igexin.push.d.c.f r8 = new com.igexin.push.d.c.f
            r8.<init>()
            r7.a(r8)
        L23:
            com.igexin.b.a.b.c r7 = com.igexin.b.a.b.c.b()
            r7.c()
            return r2
        L2b:
            r0 = 3
            byte[] r0 = r6.a(r9, r0)
            r3 = 0
            short r3 = com.igexin.b.a.b.f.b(r0, r3)
            r4 = 2
            int r0 = com.igexin.b.a.b.f.a(r0, r4)
            com.igexin.push.d.c.a r4 = new com.igexin.push.d.c.a
            r4.<init>()
            r4.a = r3
            byte r5 = (byte) r0
            r4.b = r5
            int r5 = r10.c
            r4.f = r5
            r5 = 26
            if (r0 == r5) goto L4d
            return r2
        L4d:
            int r0 = r4.a
            if (r0 <= 0) goto L85
            byte[] r9 = r6.a(r9, r3)
            byte r0 = r10.h
            if (r0 != r1) goto L6f
            byte[] r0 = r6.g
            if (r0 != 0) goto L66
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            byte[] r0 = r0.a()
            goto L6a
        L66:
            byte[] r0 = com.igexin.b.b.a.a(r0)
        L6a:
            byte[] r9 = com.igexin.b.a.a.a.a(r9, r0)
            goto L71
        L6f:
            byte r0 = r10.h
        L71:
            byte r0 = r10.g
            r1 = -128(0xffffffffffffff80, float:NaN)
            if (r0 != r1) goto L7c
            byte[] r9 = com.igexin.b.a.b.f.d(r9)
            goto L80
        L7c:
            byte r10 = r10.g
            if (r10 != 0) goto L84
        L80:
            r4.a(r9)
            goto L85
        L84:
            return r2
        L85:
            com.igexin.b.a.b.b r9 = r6.d
            if (r9 == 0) goto L23
            com.igexin.b.a.b.c r9 = com.igexin.b.a.b.c.b()
            com.igexin.b.a.b.b r10 = r6.d
            java.lang.Object r7 = r10.c(r7, r8, r4)
            r9.a(r7)
            goto L23
    }

    @Override
    public java.lang.Object a(com.igexin.b.a.b.e r5, com.igexin.b.a.b.d r6, java.lang.Object r7) {
            r4 = this;
            boolean r5 = r7 instanceof com.igexin.push.d.c.a
            r6 = 0
            if (r5 == 0) goto L141
            com.igexin.push.d.c.a r7 = (com.igexin.push.d.c.a) r7
            com.igexin.push.d.c.e r5 = a(r7)
            byte r0 = r7.b
            r1 = 0
            if (r0 <= 0) goto Lb0
            int r0 = r7.a
            if (r0 <= 0) goto Lb0
            byte r0 = r5.g
            r0 = r0 & 192(0xc0, float:2.69E-43)
            r2 = 128(0x80, float:1.8E-43)
            if (r0 != r2) goto L25
            byte[] r0 = r7.e
            byte[] r0 = com.igexin.b.a.b.f.c(r0)
            r7.a(r0)
        L25:
            byte r0 = r5.h
            r2 = 48
            r0 = r0 & r2
            r3 = 16
            if (r0 != r3) goto L48
            int r6 = r5.q
            byte[] r6 = com.igexin.b.a.b.f.b(r6)
            byte[] r6 = com.igexin.push.util.EncryptUtils.getIV(r6)
            int r0 = r5.f
            r0 = r0 & r3
            if (r0 != r3) goto L3e
            goto Lb0
        L3e:
            byte[] r0 = r7.e
            byte[] r6 = com.igexin.push.util.EncryptUtils.aesEncSocket(r0, r6)
            r7.a(r6)
            goto Lb0
        L48:
            byte r0 = r5.h
            r0 = r0 & r2
            if (r0 != 0) goto L4e
            goto Lb0
        L4e:
            byte r0 = r5.h
            r0 = r0 & r2
            if (r0 != r2) goto L6c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = com.igexin.push.d.a.b.a
            r5.append(r7)
            java.lang.String r7 = "|encry type = 0x30 not support"
            r5.append(r7)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r7 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r5, r7)
            return r6
        L6c:
            byte r0 = r5.h
            r0 = r0 & r2
            r3 = 32
            if (r0 != r3) goto L8c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = com.igexin.push.d.a.b.a
            r6.append(r0)
            java.lang.String r0 = "|encry type = 0x20 reserved"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r6, r0)
            goto Lb0
        L8c:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.push.d.a.b.a
            r7.append(r0)
            java.lang.String r0 = "|encry type = "
            r7.append(r0)
            byte r5 = r5.h
            r5 = r5 & r2
            r7.append(r5)
            java.lang.String r5 = " not support"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            java.lang.Object[] r7 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r5, r7)
            return r6
        Lb0:
            int r6 = r5.b
            byte r0 = r7.b
            if (r0 <= 0) goto Lbb
            int r0 = r7.a
            int r0 = r0 + 11
            goto Lbc
        Lbb:
            r0 = r1
        Lbc:
            int r6 = r6 + r0
            byte[] r6 = new byte[r6]
            r0 = 1944742139(0x73ea68fb, float:3.714376E31)
            int r0 = com.igexin.b.a.b.f.a(r0, r6, r1)
            int r2 = r5.b
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            int r2 = r5.c
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            int r2 = r5.a()
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            int r2 = r5.e
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            byte[] r2 = com.igexin.push.util.EncryptUtils.getRSAKeyId()
            int r3 = r2.length
            int r3 = com.igexin.b.a.b.f.c(r3, r6, r0)
            int r0 = r0 + r3
            int r3 = r2.length
            int r2 = com.igexin.b.a.b.f.a(r2, r1, r6, r0, r3)
            int r0 = r0 + r2
            int r2 = r5.b()
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            int r2 = r7.a
            if (r2 <= 0) goto L111
            int r2 = r5.o
            int r2 = com.igexin.b.a.b.f.c(r2, r6, r0)
            int r0 = r0 + r2
            byte[] r2 = r5.n
            int r3 = r5.o
            int r2 = com.igexin.b.a.b.f.a(r2, r1, r6, r0, r3)
            goto L115
        L111:
            int r2 = com.igexin.b.a.b.f.c(r1, r6, r0)
        L115:
            int r0 = r0 + r2
            byte r2 = r7.b
            if (r2 <= 0) goto L141
            int r2 = r5.p
            int r2 = com.igexin.b.a.b.f.a(r2, r6, r0)
            int r0 = r0 + r2
            int r5 = r5.q
            int r5 = com.igexin.b.a.b.f.a(r5, r6, r0)
            int r0 = r0 + r5
            int r5 = r7.a
            int r5 = com.igexin.b.a.b.f.b(r5, r6, r0)
            int r0 = r0 + r5
            byte r5 = r7.b
            int r5 = com.igexin.b.a.b.f.c(r5, r6, r0)
            int r0 = r0 + r5
            int r5 = r7.a
            if (r5 <= 0) goto L141
            byte[] r5 = r7.e
            int r7 = r7.a
            com.igexin.b.a.b.f.a(r5, r1, r6, r0, r7)
        L141:
            return r6
    }

    public com.igexin.b.a.d.a.e b(com.igexin.b.a.b.e r6, com.igexin.b.a.b.d r7, java.lang.Object r8) {
            r5 = this;
            boolean r0 = r8 instanceof com.igexin.b.a.b.a.a.o
            r1 = 0
            if (r0 == 0) goto L8
            com.igexin.b.a.b.a.a.o r8 = (com.igexin.b.a.b.a.a.o) r8
            goto L9
        L8:
            r8 = r1
        L9:
            r0 = 0
            if (r8 != 0) goto L25
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = com.igexin.push.d.a.b.a
            r6.append(r7)
            java.lang.String r7 = "|syncIns is null"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r7 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r7)
            return r1
        L25:
            r2 = 8
            byte[] r2 = r5.a(r8, r2)
            int r3 = com.igexin.b.a.b.f.d(r2, r0)
            r4 = 1944742139(0x73ea68fb, float:3.714376E31)
            if (r3 == r4) goto L35
            return r1
        L35:
            com.igexin.push.d.c.e r3 = new com.igexin.push.d.c.e
            r3.<init>()
            r4 = 4
            r4 = r2[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3.b = r4
            r4 = 5
            r4 = r2[r4]
            r4 = r4 & 255(0xff, float:3.57E-43)
            r3.c = r4
            r4 = 6
            r4 = r2[r4]
            r3.a(r4)
            r4 = 7
            r2 = r2[r4]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r3.e = r2
            int r2 = r3.c
            if (r2 != r4) goto L5e
            com.igexin.b.a.d.a.e r6 = r5.a(r6, r7, r8, r3)
            return r6
        L5e:
            int r2 = r3.c
            r4 = 1
            if (r2 != r4) goto L68
            com.igexin.b.a.d.a.e r6 = r5.b(r6, r7, r8, r3)
            return r6
        L68:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = com.igexin.push.d.a.b.a
            r6.append(r7)
            java.lang.String r7 = "|server socket resp version = "
            r6.append(r7)
            int r7 = r3.c
            r6.append(r7)
            java.lang.String r7 = ", not support !!!"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r7 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r7)
            return r1
    }

    @Override
    public java.lang.Object c(com.igexin.b.a.b.e r1, com.igexin.b.a.b.d r2, java.lang.Object r3) {
            r0 = this;
            com.igexin.b.a.d.a.e r1 = r0.b(r1, r2, r3)
            return r1
    }
}
