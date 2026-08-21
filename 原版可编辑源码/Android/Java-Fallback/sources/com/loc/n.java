package com.loc;

public final class n {

    private static class a {
        java.lang.String A;
        java.lang.String a;
        java.lang.String b;
        java.lang.String c;
        java.lang.String d;
        java.lang.String e;
        java.lang.String f;
        java.lang.String g;
        java.lang.String h;
        java.lang.String i;
        java.lang.String j;
        java.lang.String k;
        java.lang.String l;
        java.lang.String m;
        java.lang.String n;
        java.lang.String o;
        java.lang.String p;
        java.lang.String q;
        java.lang.String r;
        java.lang.String s;
        java.lang.String t;
        java.lang.String u;
        java.lang.String v;
        java.lang.String w;
        java.lang.String x;
        java.lang.String y;
        java.lang.String z;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static java.lang.String a() {
            r0 = 0
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "1"
            boolean r2 = com.loc.l.a()     // Catch: java.lang.Throwable -> L37
            if (r2 != 0) goto L13
            java.lang.String r1 = "0"
        L13:
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L37
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L37
            r3.<init>()     // Catch: java.lang.Throwable -> L37
            r4 = 0
            int r5 = r2 + (-2)
            java.lang.String r4 = r0.substring(r4, r5)     // Catch: java.lang.Throwable -> L37
            r3.append(r4)     // Catch: java.lang.Throwable -> L37
            r3.append(r1)     // Catch: java.lang.Throwable -> L37
            int r2 = r2 + (-1)
            java.lang.String r1 = r0.substring(r2)     // Catch: java.lang.Throwable -> L37
            r3.append(r1)     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L37
            goto L3f
        L37:
            r1 = move-exception
            java.lang.String r2 = "CI"
            java.lang.String r3 = "TS"
            com.loc.as.a(r1, r2, r3)
        L3f:
            return r0
    }

    public static java.lang.String a(android.content.Context r0) {
            java.lang.String r0 = b(r0)
            return r0
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = ":"
            java.lang.String r3 = com.loc.l.e(r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r1.<init>()     // Catch: java.lang.Throwable -> L2e
            r1.append(r3)     // Catch: java.lang.Throwable -> L2e
            r1.append(r0)     // Catch: java.lang.Throwable -> L2e
            r3 = 0
            int r2 = r4.length()     // Catch: java.lang.Throwable -> L2e
            int r2 = r2 + (-3)
            java.lang.String r3 = r4.substring(r3, r2)     // Catch: java.lang.Throwable -> L2e
            r1.append(r3)     // Catch: java.lang.Throwable -> L2e
            r1.append(r0)     // Catch: java.lang.Throwable -> L2e
            r1.append(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = com.loc.s.a(r3)     // Catch: java.lang.Throwable -> L2e
            goto L37
        L2e:
            r3 = move-exception
            java.lang.String r4 = "CI"
            java.lang.String r5 = "Sco"
            com.loc.as.a(r3, r4, r5)
            r3 = 0
        L37:
            return r3
    }

    private static java.lang.String a(com.loc.n.a r0) {
            byte[] r0 = b(r0)
            java.lang.String r0 = com.loc.p.b(r0)
            return r0
    }

    private static void a(java.io.ByteArrayOutputStream r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1f
            byte[] r0 = r3.getBytes()
            int r0 = r0.length
            r1 = 255(0xff, float:3.57E-43)
            if (r0 <= r1) goto L11
            r0 = -1
            goto L17
        L11:
            byte[] r0 = r3.getBytes()
            int r0 = r0.length
            byte r0 = (byte) r0
        L17:
            byte[] r3 = com.loc.x.a(r3)
            com.loc.x.a(r2, r0, r3)
            return
        L1f:
            r3 = 0
            byte[] r0 = new byte[r3]
            com.loc.x.a(r2, r3, r0)
            return
    }

    public static byte[] a(android.content.Context r0, boolean r1, boolean r2) {
            com.loc.n$a r0 = b(r0, r1, r2)     // Catch: java.lang.Throwable -> L9
            byte[] r0 = b(r0)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.String r1 = "CI"
            java.lang.String r2 = "gz"
            com.loc.as.a(r0, r1, r2)
            r0 = 0
            return r0
    }

    public static byte[] a(byte[] r0) throws java.security.cert.CertificateException, java.security.spec.InvalidKeySpecException, java.security.NoSuchAlgorithmException, java.lang.NullPointerException, java.io.IOException, java.security.InvalidKeyException, javax.crypto.NoSuchPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            byte[] r0 = com.loc.p.a(r0)
            return r0
    }

    private static com.loc.n.a b(android.content.Context r5, boolean r6, boolean r7) {
            com.loc.n$a r0 = new com.loc.n$a
            r1 = 0
            r0.<init>(r1)
            java.lang.String r2 = com.loc.o.k()
            r0.a = r2
            java.lang.String r2 = com.loc.o.h()
            r0.b = r2
            java.lang.String r2 = com.loc.o.f(r5)
            java.lang.String r3 = ""
            if (r2 != 0) goto L1b
            r2 = r3
        L1b:
            r0.c = r2
            java.lang.String r2 = com.loc.l.c(r5)
            r0.d = r2
            java.lang.String r2 = android.os.Build.MODEL
            r0.e = r2
            java.lang.String r2 = android.os.Build.MANUFACTURER
            r0.f = r2
            java.lang.String r2 = android.os.Build.DEVICE
            r0.g = r2
            java.lang.String r2 = com.loc.l.b(r5)
            r0.h = r2
            java.lang.String r2 = com.loc.l.d(r5)
            r0.i = r2
            int r2 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.j = r2
            java.lang.String r2 = com.loc.o.n()
            r0.k = r2
            java.lang.String r2 = com.loc.o.m(r5)
            r0.l = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r4 = com.loc.o.j(r5)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.m = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r4 = com.loc.o.i(r5)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r0.n = r2
            java.lang.String r2 = com.loc.o.s(r5)
            r0.o = r2
            java.lang.String r2 = com.loc.o.h(r5)
            r0.p = r2
            r0.q = r3
            r0.r = r3
            if (r6 == 0) goto L8a
            r0.s = r3
            r0.t = r3
            goto L97
        L8a:
            java.lang.String[] r2 = com.loc.o.i()
            r1 = r2[r1]
            r0.s = r1
            r1 = 1
            r1 = r2[r1]
            r0.t = r1
        L97:
            java.lang.String r1 = com.loc.o.a()
            r0.w = r1
            java.lang.String r1 = com.loc.o.a(r5)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Laa
            r0.x = r1
            goto Lac
        Laa:
            r0.x = r3
        Lac:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "aid="
            r1.<init>(r2)
            java.lang.String r2 = com.loc.o.g()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.y = r1
            if (r7 == 0) goto Lc6
            boolean r7 = com.loc.ag.d
            if (r7 != 0) goto Lca
        Lc6:
            boolean r7 = com.loc.ag.e
            if (r7 == 0) goto Lec
        Lca:
            java.lang.String r7 = com.loc.o.e(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto Lec
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.y
            r1.append(r2)
            java.lang.String r2 = "|oaid="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.y = r7
        Lec:
            java.lang.String r7 = com.loc.o.j()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L10e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.y
            r1.append(r2)
            java.lang.String r2 = "|multiImeis="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.y = r7
        L10e:
            java.lang.String r7 = com.loc.o.m()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L130
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.y
            r1.append(r2)
            java.lang.String r2 = "|meid="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.y = r7
        L130:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = r0.y
            r7.append(r1)
            java.lang.String r1 = "|serial="
            r7.append(r1)
            java.lang.String r1 = com.loc.o.f()
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            r0.y = r7
            java.lang.String r7 = com.loc.o.b()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L16e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.y
            r1.append(r2)
            java.lang.String r2 = "|adiuExtras="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.y = r7
        L16e:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = r0.y
            r7.append(r1)
            java.lang.String r1 = "|storage="
            r7.append(r1)
            long r1 = com.loc.o.o()
            r7.append(r1)
            java.lang.String r1 = "|ram="
            r7.append(r1)
            int r1 = com.loc.o.r(r5)
            r7.append(r1)
            java.lang.String r1 = "|arch="
            r7.append(r1)
            java.lang.String r1 = com.loc.o.p()
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            r0.y = r7
            com.loc.aq r7 = com.loc.ar.a()
            java.lang.String r7 = r7.b()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L1b3
            r0.z = r7
            goto L1b5
        L1b3:
            r0.z = r3
        L1b5:
            if (r6 == 0) goto L1c7
            com.loc.ac r5 = com.loc.ac.a(r5)
            java.lang.String r5 = r5.a()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L1c7
            r0.A = r5
        L1c7:
            return r0
    }

    private static java.lang.String b(android.content.Context r2) {
            r0 = 0
            com.loc.n$a r2 = b(r2, r0, r0)     // Catch: java.lang.Throwable -> La
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> La
            return r2
        La:
            r2 = move-exception
            java.lang.String r0 = "CI"
            java.lang.String r1 = "gCXi"
            com.loc.as.a(r2, r0, r1)
            r2 = 0
            return r2
    }

    private static byte[] b(com.loc.n.a r4) {
            r0 = 0
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> La9
            r1.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.b     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.d     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.h     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.i     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.l     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.m     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.n     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.o     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.p     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.q     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.r     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.s     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.t     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.u     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.v     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.w     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.x     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.y     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r4.z     // Catch: java.lang.Throwable -> La7
            a(r1, r2)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = r4.A     // Catch: java.lang.Throwable -> La7
            a(r1, r4)     // Catch: java.lang.Throwable -> La7
            byte[] r4 = r1.toByteArray()     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> La7
            r2.<init>(r4)     // Catch: java.lang.Throwable -> La7
            byte[] r4 = com.loc.x.b(r4)     // Catch: java.lang.Throwable -> La7
            byte[] r4 = b(r4)     // Catch: java.lang.Throwable -> La7
            r1.close()     // Catch: java.lang.Throwable -> La2
            goto La6
        La2:
            r0 = move-exception
            r0.printStackTrace()
        La6:
            return r4
        La7:
            r4 = move-exception
            goto Lab
        La9:
            r4 = move-exception
            r1 = r0
        Lab:
            java.lang.String r2 = "CI"
            java.lang.String r3 = "gzx"
            com.loc.as.a(r4, r2, r3)     // Catch: java.lang.Throwable -> Lbd
            if (r1 == 0) goto Lbc
            r1.close()     // Catch: java.lang.Throwable -> Lb8
            goto Lbc
        Lb8:
            r4 = move-exception
            r4.printStackTrace()
        Lbc:
            return r0
        Lbd:
            r4 = move-exception
            if (r1 == 0) goto Lc8
            r1.close()     // Catch: java.lang.Throwable -> Lc4
            goto Lc8
        Lc4:
            r0 = move-exception
            r0.printStackTrace()
        Lc8:
            throw r4
    }

    private static byte[] b(byte[] r5) throws java.security.cert.CertificateException, java.security.spec.InvalidKeySpecException, java.security.NoSuchAlgorithmException, java.lang.NullPointerException, java.io.IOException, java.security.InvalidKeyException, javax.crypto.NoSuchPaddingException, javax.crypto.IllegalBlockSizeException, javax.crypto.BadPaddingException {
            java.security.PublicKey r0 = com.loc.x.d()
            int r1 = r5.length
            r2 = 117(0x75, float:1.64E-43)
            if (r1 <= r2) goto L23
            byte[] r1 = new byte[r2]
            r3 = 0
            java.lang.System.arraycopy(r5, r3, r1, r3, r2)
            byte[] r0 = com.loc.p.a(r1, r0)
            int r1 = r5.length
            r4 = 128(0x80, float:1.8E-43)
            int r1 = r1 + r4
            int r1 = r1 - r2
            byte[] r1 = new byte[r1]
            java.lang.System.arraycopy(r0, r3, r1, r3, r4)
            int r0 = r5.length
            int r0 = r0 - r2
            java.lang.System.arraycopy(r5, r2, r1, r4, r0)
            goto L27
        L23:
            byte[] r1 = com.loc.p.a(r5, r0)
        L27:
            return r1
    }
}
