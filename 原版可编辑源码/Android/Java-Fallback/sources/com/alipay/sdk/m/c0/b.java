package com.alipay.sdk.m.c0;

public final class b {
    public java.io.File a;
    public com.alipay.sdk.m.g0.a b;

    public b(java.lang.String r2, com.alipay.sdk.m.g0.a r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.a = r0
            r1.b = r3
            return
    }

    public static java.lang.String a(java.lang.String r3) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "type"
            java.lang.String r2 = "id"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = "error"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L16
            java.lang.String r3 = r0.toString()
            return r3
        L16:
            java.lang.String r3 = ""
            return r3
    }

    public static void a(com.alipay.sdk.m.c0.b r0) {
            r0.b()
            return
    }

    private synchronized void b() {
            r7 = this;
            monitor-enter(r7)
            java.io.File r0 = r7.a     // Catch: java.lang.Throwable -> Lbc
            if (r0 != 0) goto L7
            monitor-exit(r7)
            return
        L7:
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> Lbc
            if (r0 == 0) goto Lba
            java.io.File r0 = r7.a     // Catch: java.lang.Throwable -> Lbc
            boolean r0 = r0.isDirectory()     // Catch: java.lang.Throwable -> Lbc
            if (r0 == 0) goto Lba
            java.io.File r0 = r7.a     // Catch: java.lang.Throwable -> Lbc
            java.lang.String[] r0 = r0.list()     // Catch: java.lang.Throwable -> Lbc
            int r0 = r0.length     // Catch: java.lang.Throwable -> Lbc
            if (r0 != 0) goto L20
            goto Lba
        L20:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lbc
            r0.<init>()     // Catch: java.lang.Throwable -> Lbc
            java.io.File r1 = r7.a     // Catch: java.lang.Throwable -> Lbc
            java.lang.String[] r1 = r1.list()     // Catch: java.lang.Throwable -> Lbc
            int r2 = r1.length     // Catch: java.lang.Throwable -> Lbc
            r3 = 0
            r4 = 0
        L2e:
            if (r4 >= r2) goto L38
            r5 = r1[r4]     // Catch: java.lang.Throwable -> Lbc
            r0.add(r5)     // Catch: java.lang.Throwable -> Lbc
            int r4 = r4 + 1
            goto L2e
        L38:
            java.util.Collections.sort(r0)     // Catch: java.lang.Throwable -> Lbc
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lbc
            int r1 = r1 + (-1)
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lbc
            int r2 = r0.size()     // Catch: java.lang.Throwable -> Lbc
            java.util.Calendar r4 = java.util.Calendar.getInstance()     // Catch: java.lang.Throwable -> Lbc
            java.util.Date r4 = r4.getTime()     // Catch: java.lang.Throwable -> Lbc
            java.text.SimpleDateFormat r5 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r6 = "yyyyMMdd"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r5.format(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbc
            r5.<init>()     // Catch: java.lang.Throwable -> Lbc
            r5.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = ".log"
            r5.append(r4)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> Lbc
            boolean r4 = r1.equals(r4)     // Catch: java.lang.Throwable -> Lbc
            if (r4 == 0) goto L8b
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lbc
            r4 = 2
            if (r1 >= r4) goto L7e
            monitor-exit(r7)
            return
        L7e:
            int r1 = r0.size()     // Catch: java.lang.Throwable -> Lbc
            int r1 = r1 - r4
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lbc
            int r2 = r2 + (-1)
        L8b:
            java.io.File r4 = r7.a     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r4 = r4.getAbsolutePath()     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = com.alipay.sdk.m.z.b.a(r4, r1)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = a(r1)     // Catch: java.lang.Throwable -> Lbc
            com.alipay.sdk.m.g0.a r4 = r7.b     // Catch: java.lang.Throwable -> Lbc
            boolean r1 = r4.logCollect(r1)     // Catch: java.lang.Throwable -> Lbc
            if (r1 != 0) goto La3
            int r2 = r2 + (-1)
        La3:
            if (r3 >= r2) goto Lb8
            java.lang.Object r1 = r0.get(r3)     // Catch: java.lang.Throwable -> Lbc
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lbc
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> Lbc
            java.io.File r5 = r7.a     // Catch: java.lang.Throwable -> Lbc
            r4.<init>(r5, r1)     // Catch: java.lang.Throwable -> Lbc
            r4.delete()     // Catch: java.lang.Throwable -> Lbc
            int r3 = r3 + 1
            goto La3
        Lb8:
            monitor-exit(r7)
            return
        Lba:
            monitor-exit(r7)
            return
        Lbc:
            r0 = move-exception
            monitor-exit(r7)
            goto Lc0
        Lbf:
            throw r0
        Lc0:
            goto Lbf
    }

    public final void a() {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.alipay.sdk.m.c0.c r1 = new com.alipay.sdk.m.c0.c
            r1.<init>(r2)
            r0.<init>(r1)
            r0.start()
            return
    }
}
