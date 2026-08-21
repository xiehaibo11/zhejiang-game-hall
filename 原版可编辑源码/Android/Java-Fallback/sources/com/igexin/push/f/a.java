package com.igexin.push.f;

public class a extends com.igexin.b.a.d.e {
    private static com.igexin.push.f.a e;
    private java.util.ArrayList<java.lang.String> a;
    private java.util.ArrayList<java.lang.String> b;
    private long c;
    private java.lang.String d;

    private a() {
            r2 = this;
            r0 = -2147483637(0xffffffff8000000b, float:-1.5E-44)
            r2.<init>(r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.b = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.c = r0
            return
    }

    public static com.igexin.push.f.a i() {
            com.igexin.push.f.a r0 = com.igexin.push.f.a.e
            if (r0 != 0) goto L21
            java.lang.Class<com.igexin.push.f.a> r0 = com.igexin.push.f.a.class
            monitor-enter(r0)
            com.igexin.push.f.a r1 = com.igexin.push.f.a.e     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1c
            com.igexin.push.f.a r1 = new com.igexin.push.f.a     // Catch: java.lang.Throwable -> L1e
            r1.<init>()     // Catch: java.lang.Throwable -> L1e
            com.igexin.push.f.a.e = r1     // Catch: java.lang.Throwable -> L1e
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()     // Catch: java.lang.Throwable -> L1e
            com.igexin.push.f.a r2 = com.igexin.push.f.a.e     // Catch: java.lang.Throwable -> L1e
            r3 = 1
            r1.a(r2, r3, r3)     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            goto L21
        L1e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r1
        L21:
            com.igexin.push.f.a r0 = com.igexin.push.f.a.e
            return r0
    }

    public static void k() {
            com.igexin.push.f.a r0 = com.igexin.push.f.a.e
            if (r0 == 0) goto L7
            r0.j()
        L7:
            return
    }

    private long u() {
            r8 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.c
            long r0 = r0 - r2
            r2 = 60000(0xea60, double:2.9644E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = 0
            if (r4 < 0) goto L19
            java.util.ArrayList<java.lang.String> r4 = r8.a
            int r4 = r4.size()
            if (r4 <= 0) goto L19
            return r5
        L19:
            java.util.ArrayList<java.lang.String> r4 = r8.a
            int r4 = r4.size()
            r7 = 10
            if (r4 < r7) goto L24
            return r5
        L24:
            java.util.ArrayList<java.lang.String> r4 = r8.a
            int r4 = r4.size()
            if (r4 > 0) goto L32
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            return r0
        L32:
            long r2 = r2 - r0
            return r2
    }

    private void v() {
            r6 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            if (r0 == 0) goto Lfd
            java.lang.String r0 = com.igexin.push.core.d.E
            if (r0 != 0) goto La
            goto Lfd
        La:
            monitor-enter(r6)
            java.util.ArrayList<java.lang.String> r0 = r6.b     // Catch: java.lang.Throwable -> Lfa
            java.util.ArrayList<java.lang.String> r1 = r6.a     // Catch: java.lang.Throwable -> Lfa
            r0.addAll(r1)     // Catch: java.lang.Throwable -> Lfa
            java.util.ArrayList<java.lang.String> r0 = r6.a     // Catch: java.lang.Throwable -> Lfa
            r0.clear()     // Catch: java.lang.Throwable -> Lfa
            monitor-exit(r6)     // Catch: java.lang.Throwable -> Lfa
            r6.w()
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.d
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L2f
            boolean r0 = r0.mkdirs()
            if (r0 != 0) goto L2f
            return
        L2f:
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r2 = "yyyy-MM-dd"
            r0.<init>(r2, r1)
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            java.lang.String r0 = r0.format(r1)
            java.lang.String r1 = com.igexin.push.core.d.e
            r2 = 0
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.<init>()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r5 = r6.d     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.append(r5)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r5 = "/"
            r4.append(r5)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.append(r1)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r1 = "."
            r4.append(r1)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.append(r0)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r0 = ".log"
            r4.append(r0)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r3.<init>(r0)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            boolean r0 = r3.exists()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            if (r0 != 0) goto L7e
            boolean r0 = r3.createNewFile()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            if (r0 != 0) goto L7b
            return
        L7b:
            com.igexin.b.a.c.a.a()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
        L7e:
            byte[] r0 = com.igexin.b.a.c.a.b()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            if (r0 != 0) goto L8a
            com.igexin.b.a.c.a.a()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r3.delete()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
        L8a:
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L98
            byte[] r1 = com.igexin.push.core.d.ao     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = "AES"
            r0.<init>(r1, r4)     // Catch: java.lang.Throwable -> L98
            javax.crypto.CipherOutputStream r0 = com.igexin.b.a.c.a.a(r3, r0)     // Catch: java.lang.Throwable -> L98
            goto L9e
        L98:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r1 = 1
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
        L9e:
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r0.<init>()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.util.ArrayList<java.lang.String> r1 = r6.b     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
        Laa:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            if (r3 == 0) goto Lcb
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.<init>()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r4.append(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r3 = "\r\n"
            r4.append(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r0.append(r3)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            goto Laa
        Lcb:
            int r1 = r0.length()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            if (r1 <= 0) goto Lde
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
            r2.write(r0)     // Catch: java.lang.Throwable -> Le4 java.lang.Exception -> Leb
        Lde:
            if (r2 == 0) goto Lee
        Le0:
            r2.close()     // Catch: java.io.IOException -> Lee
            goto Lee
        Le4:
            r0 = move-exception
            if (r2 == 0) goto Lea
            r2.close()     // Catch: java.io.IOException -> Lea
        Lea:
            throw r0
        Leb:
            if (r2 == 0) goto Lee
            goto Le0
        Lee:
            long r0 = java.lang.System.currentTimeMillis()
            r6.c = r0
            java.util.ArrayList<java.lang.String> r0 = r6.b
            r0.clear()
            return
        Lfa:
            r0 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> Lfa
            throw r0
        Lfd:
            return
    }

    private void w() {
            r1 = this;
            java.lang.String r0 = r1.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r0 = com.igexin.push.util.c.c(r0)
            r1.d = r0
        L10:
            return
    }

    public synchronized void a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.ArrayList<java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> L1e
            r0.add(r2)     // Catch: java.lang.Throwable -> L1e
            java.util.ArrayList<java.lang.String> r2 = r1.a     // Catch: java.lang.Throwable -> L1c
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L1c
            r0 = 1
            if (r2 <= r0) goto L19
            java.util.ArrayList<java.lang.String> r2 = r1.a     // Catch: java.lang.Throwable -> L1c
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L1c
            r0 = 10
            if (r2 < r0) goto L1c
        L19:
            r1.notify()     // Catch: java.lang.Throwable -> L1c
        L1c:
            monitor-exit(r1)
            return
        L1e:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public void b() {
            r4 = this;
            super.b()
        L3:
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L1a
        L4:
            long r0 = r4.u()     // Catch: java.lang.Throwable -> L17
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L12
            r4.wait(r0)     // Catch: java.lang.Throwable -> L17
            goto L4
        L12:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L17
            r4.v()     // Catch: java.lang.Throwable -> L1a
            goto L3
        L17:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L17
            throw r0     // Catch: java.lang.Throwable -> L1a
        L1a:
            r4.v()
            return
    }

    @Override
    public int b_() {
            r1 = this;
            r0 = -2147483637(0xffffffff8000000b, float:-1.5E-44)
            return r0
    }

    @Override
    public void d() {
            r1 = this;
            super.d()
            r0 = 1
            r1.n = r0
            return
    }

    @Override
    protected void e() {
            r0 = this;
            return
    }

    @Override
    protected void e_() {
            r1 = this;
            super.e_()
            r0 = 0
            com.igexin.push.f.a.e = r0
            return
    }

    public void j() {
            r1 = this;
            java.lang.Thread r0 = r1.s()
            if (r0 == 0) goto Ld
            java.lang.Thread r0 = r1.s()
            r0.interrupt()
        Ld:
            return
    }
}
