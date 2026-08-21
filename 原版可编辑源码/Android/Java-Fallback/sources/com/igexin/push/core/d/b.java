package com.igexin.push.core.d;

class b implements com.igexin.push.core.d.c {
    private java.lang.String a;
    private long b;

    b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            return
    }

    private boolean a() {
            r6 = this;
            java.lang.String r0 = r6.a     // Catch: java.lang.Throwable -> L2f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2f
            r1 = 1
            if (r0 != 0) goto L26
            long r2 = r6.b     // Catch: java.lang.Throwable -> L2f
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L12
            goto L26
        L12:
            java.lang.String r0 = r6.a     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> L2f
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L26
            long r2 = r6.b     // Catch: java.lang.Throwable -> L2f
            long r4 = com.igexin.push.core.d.t     // Catch: java.lang.Throwable -> L2f
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L25
            goto L26
        L25:
            r1 = 0
        L26:
            java.lang.String r0 = com.igexin.push.core.d.u
            r6.a = r0
            long r2 = com.igexin.push.core.d.t
            r6.b = r2
            return r1
        L2f:
            r0 = move-exception
            java.lang.String r1 = com.igexin.push.core.d.u
            r6.a = r1
            long r1 = com.igexin.push.core.d.t
            r6.b = r1
            throw r0
    }

    @Override
    public java.lang.String a(android.content.Context r6) {
            r5 = this;
            java.lang.String r6 = "BasicSDStorage|get device id from file : "
            r0 = 0
            r1 = 0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4b
            r2.<init>()     // Catch: java.lang.Exception -> L4b
            r2.append(r6)     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = com.igexin.push.core.d.S     // Catch: java.lang.Exception -> L4b
            r2.append(r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L4b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L4b
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r2 = com.igexin.push.core.d.S     // Catch: java.lang.Exception -> L4b
            byte[] r2 = com.igexin.push.util.c.a(r2)     // Catch: java.lang.Exception -> L4b
            if (r2 != 0) goto L2a
            java.lang.String r2 = "BasicSDStorage|read file device id = null"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L4b
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> L4b
            return r0
        L2a:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L4b
            java.lang.String r4 = "UTF-8"
            r3.<init>(r2, r4)     // Catch: java.lang.Exception -> L4b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L48
            r0.<init>()     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "BasicSDStorage|read file device id = "
            r0.append(r2)     // Catch: java.lang.Exception -> L48
            r0.append(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L48
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L48
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Exception -> L48
            goto L65
        L48:
            r2 = move-exception
            r0 = r3
            goto L4c
        L4b:
            r2 = move-exception
        L4c:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r6 = r2.toString()
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r6, r1)
            r3 = r0
        L65:
            return r3
    }

    @Override
    public void a(android.content.Context r1, long r2) {
            r0 = this;
            boolean r1 = r0.a()
            if (r1 == 0) goto L9
            com.igexin.push.util.c.a()
        L9:
            return
    }

    @Override
    public void a(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            boolean r5 = android.text.TextUtils.isEmpty(r6)
            if (r5 == 0) goto L7
            return
        L7:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "BasicSDStorage|save device id to file : "
            r5.append(r0)
            java.lang.String r0 = com.igexin.push.core.d.S
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r1)
            r5 = 0
            java.util.concurrent.locks.ReentrantReadWriteLock r1 = new java.util.concurrent.locks.ReentrantReadWriteLock
            r1.<init>()
            java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock r1 = r1.writeLock()
            boolean r2 = r1.tryLock()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            if (r2 == 0) goto L81
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r3 = com.igexin.push.core.d.S     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            if (r3 != 0) goto L69
            boolean r3 = r2.createNewFile()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            if (r3 != 0) goto L69
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            r6.<init>()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r3 = "BasicSDStorage|create file : "
            r6.append(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            r6.append(r2)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r2 = " failed !!!"
            r6.append(r2)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            com.igexin.b.a.c.b.a(r6, r2)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            com.igexin.push.util.h.a(r5)
            r1.unlock()
            return
        L69:
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r3 = com.igexin.push.core.d.S     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8a
            java.lang.String r5 = "UTF-8"
            byte[] r5 = r6.getBytes(r5)     // Catch: java.lang.Throwable -> L7b java.lang.Exception -> L7e
            r2.write(r5)     // Catch: java.lang.Throwable -> L7b java.lang.Exception -> L7e
            r5 = r2
            goto L81
        L7b:
            r6 = move-exception
            r5 = r2
            goto La7
        L7e:
            r6 = move-exception
            r5 = r2
            goto L8b
        L81:
            com.igexin.push.util.h.a(r5)
            r1.unlock()
            goto La6
        L88:
            r6 = move-exception
            goto La7
        L8a:
            r6 = move-exception
        L8b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88
            r2.<init>()     // Catch: java.lang.Throwable -> L88
            java.lang.String r3 = "BasicSDStorage|"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L88
            r2.append(r6)     // Catch: java.lang.Throwable -> L88
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L88
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L88
            com.igexin.b.a.c.b.a(r6, r0)     // Catch: java.lang.Throwable -> L88
            goto L81
        La6:
            return
        La7:
            com.igexin.push.util.h.a(r5)
            r1.unlock()
            throw r6
    }

    @Override
    public java.lang.String b(android.content.Context r5) {
            r4 = this;
            r5 = 0
            r0 = 0
            java.lang.String r1 = com.igexin.push.core.d.R     // Catch: java.lang.Exception -> L35
            byte[] r1 = com.igexin.push.util.c.a(r1)     // Catch: java.lang.Exception -> L35
            if (r1 != 0) goto L12
            java.lang.String r1 = "BasicSDStorage | read file cid id = null"
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L35
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Exception -> L35
            return r0
        L12:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = com.igexin.push.core.d.E     // Catch: java.lang.Exception -> L35
            byte[] r1 = com.igexin.b.a.a.a.c(r1, r3)     // Catch: java.lang.Exception -> L35
            r2.<init>(r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "\\|"
            java.lang.String[] r1 = r2.split(r1)     // Catch: java.lang.Exception -> L35
            int r2 = r1.length     // Catch: java.lang.Exception -> L35
            r3 = 2
            if (r2 <= r3) goto L35
            r1 = r1[r3]     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L34
            java.lang.String r2 = "null"
            boolean r2 = r1.equals(r2)     // Catch: java.lang.Exception -> L34
            if (r2 == 0) goto L34
            goto L35
        L34:
            r0 = r1
        L35:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BasicSDStorage|get cid from file cid = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r5 = new java.lang.Object[r5]
            com.igexin.b.a.c.b.a(r1, r5)
            return r0
    }

    @Override
    public void b(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            boolean r1 = r0.a()
            if (r1 == 0) goto L9
            com.igexin.push.util.c.a()
        L9:
            return
    }

    @Override
    public long c(android.content.Context r6) {
            r5 = this;
            r0 = 0
            r6 = 0
            java.lang.String r2 = com.igexin.push.core.d.R     // Catch: java.lang.Exception -> L48
            byte[] r2 = com.igexin.push.util.c.a(r2)     // Catch: java.lang.Exception -> L48
            if (r2 != 0) goto L13
            java.lang.String r2 = "BasicSDStorage|read session from file, not exist"
            java.lang.Object[] r3 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L48
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Exception -> L48
            return r0
        L13:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = com.igexin.push.core.d.E     // Catch: java.lang.Exception -> L48
            byte[] r2 = com.igexin.b.a.a.a.c(r2, r4)     // Catch: java.lang.Exception -> L48
            r3.<init>(r2)     // Catch: java.lang.Exception -> L48
            java.lang.String r2 = "null"
            boolean r2 = r3.contains(r2)     // Catch: java.lang.Exception -> L48
            if (r2 == 0) goto L2c
            r2 = 7
            java.lang.String r2 = r3.substring(r2)     // Catch: java.lang.Exception -> L48
            goto L32
        L2c:
            r2 = 20
            java.lang.String r2 = r3.substring(r2)     // Catch: java.lang.Exception -> L48
        L32:
            java.lang.String r3 = "|"
            int r3 = r2.indexOf(r3)     // Catch: java.lang.Exception -> L48
            if (r3 < 0) goto L3e
            java.lang.String r2 = r2.substring(r6, r3)     // Catch: java.lang.Exception -> L48
        L3e:
            long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L48
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 == 0) goto L63
            r0 = r2
            goto L63
        L48:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "BasicSDStorage|"
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.Object[] r3 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r2, r3)
        L63:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "BasicSDStorage|session : "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r6 = new java.lang.Object[r6]
            com.igexin.b.a.c.b.a(r2, r6)
            return r0
    }
}
