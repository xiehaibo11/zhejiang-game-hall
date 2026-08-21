package com.huawei.hms.framework.network.grs.c;

public class j extends com.huawei.hms.framework.network.grs.c.b implements java.util.concurrent.Callable<com.huawei.hms.framework.network.grs.c.f> {
    private static final java.lang.String i = "j";

    public j(java.lang.String r1, int r2, com.huawei.hms.framework.network.grs.c.a r3, android.content.Context r4, java.lang.String r5, com.huawei.hms.framework.network.grs.GrsBaseInfo r6, com.huawei.hms.framework.network.grs.a.c r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    @Override
    public com.huawei.hms.framework.network.grs.c.f call() {
            r19 = this;
            r1 = r19
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.j.i
            java.lang.String r2 = "Post call execute"
            com.huawei.hms.framework.common.Logger.i(r0, r2)
            r2 = 0
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> La3
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> L9c
            java.lang.String r0 = r19.c()     // Catch: java.io.IOException -> L9c
            android.content.Context r6 = r19.b()     // Catch: java.io.IOException -> L9c
            java.lang.String r7 = r19.e()     // Catch: java.io.IOException -> L9c
            javax.net.ssl.HttpsURLConnection r0 = com.huawei.hms.framework.network.grs.d.a.a.a(r0, r6, r7)     // Catch: java.io.IOException -> L9c
            r6 = 0
            if (r0 != 0) goto L2e
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.j.i     // Catch: java.io.IOException -> L9c
            java.lang.String r7 = "create HttpsURLConnection instance by url return null."
            com.huawei.hms.framework.common.Logger.w(r0, r7)     // Catch: java.io.IOException -> L9c
            return r6
        L2e:
            java.lang.String r7 = "Content-Type"
            java.lang.String r8 = "application/json; charset=UTF-8"
            r0.setRequestProperty(r7, r8)     // Catch: java.io.IOException -> L9c
            java.lang.String r7 = "POST"
            r0.setRequestMethod(r7)     // Catch: java.io.IOException -> L9c
            r7 = 1
            r0.setDoOutput(r7)     // Catch: java.io.IOException -> L9c
            r0.setDoInput(r7)     // Catch: java.io.IOException -> L9c
            r0.connect()     // Catch: java.io.IOException -> L9c
            java.io.OutputStream r7 = r0.getOutputStream()     // Catch: java.io.IOException -> L9c
            com.huawei.hms.framework.network.grs.a.c r8 = r19.f()     // Catch: java.io.IOException -> L9c
            java.lang.String r9 = "services"
            java.lang.String r10 = ""
            java.lang.String r8 = r8.a(r9, r10)     // Catch: java.io.IOException -> L9c
            java.lang.String r9 = "UTF-8"
            byte[] r8 = r8.getBytes(r9)     // Catch: java.io.IOException -> L9c
            r7.write(r8)     // Catch: java.io.IOException -> L9c
            r7.close()     // Catch: java.io.IOException -> L9c
            int r10 = r0.getResponseCode()     // Catch: java.io.IOException -> L9c
            r7 = 200(0xc8, float:2.8E-43)
            if (r10 != r7) goto L7a
            java.io.InputStream r6 = r0.getInputStream()     // Catch: java.lang.Throwable -> L75
            byte[] r7 = com.huawei.hms.framework.common.IoUtils.toByteArray(r6)     // Catch: java.lang.Throwable -> L75
            com.huawei.hms.framework.common.IoUtils.closeSecure(r6)     // Catch: java.io.IOException -> L9c
            r6 = r7
            goto L7a
        L75:
            r0 = move-exception
            com.huawei.hms.framework.common.IoUtils.closeSecure(r6)     // Catch: java.io.IOException -> L9c
            throw r0     // Catch: java.io.IOException -> L9c
        L7a:
            java.util.Map r11 = r0.getHeaderFields()     // Catch: java.io.IOException -> L9c
            r0.disconnect()     // Catch: java.io.IOException -> L9c
            long r7 = android.os.SystemClock.elapsedRealtime()     // Catch: java.io.IOException -> L9c
            long r15 = java.lang.System.currentTimeMillis()     // Catch: java.io.IOException -> L9c
            if (r6 != 0) goto L90
            r0 = 0
            byte[] r0 = new byte[r0]     // Catch: java.io.IOException -> L9c
            r12 = r0
            goto L91
        L90:
            r12 = r6
        L91:
            com.huawei.hms.framework.network.grs.c.f r0 = new com.huawei.hms.framework.network.grs.c.f     // Catch: java.io.IOException -> L9c
            long r13 = r7 - r4
            r9 = r0
            r9.<init>(r10, r11, r12, r13)     // Catch: java.io.IOException -> L9c
            r1.a = r0     // Catch: java.io.IOException -> L9c
            goto Lbd
        L9c:
            r0 = move-exception
            r17 = r2
            r2 = r4
            r4 = r17
            goto La5
        La3:
            r0 = move-exception
            r4 = r2
        La5:
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r15 = java.lang.System.currentTimeMillis()
            java.lang.String r8 = com.huawei.hms.framework.network.grs.c.j.i
            java.lang.String r9 = "RequestCallableV2 run task catch IOException"
            com.huawei.hms.framework.common.Logger.w(r8, r9, r0)
            com.huawei.hms.framework.network.grs.c.f r8 = new com.huawei.hms.framework.network.grs.c.f
            long r6 = r6 - r2
            r8.<init>(r0, r6)
            r1.a = r8
            r2 = r4
        Lbd:
            r4 = r15
            com.huawei.hms.framework.network.grs.c.f r0 = r1.a
            java.lang.String r6 = r19.c()
            r0.a(r6)
            com.huawei.hms.framework.network.grs.c.f r0 = r1.a
            int r6 = r19.d()
            r0.a(r6)
            com.huawei.hms.framework.network.grs.c.f r0 = r1.a
            r0.b(r2)
            com.huawei.hms.framework.network.grs.c.f r0 = r1.a
            r0.a(r4)
            com.huawei.hms.framework.network.grs.c.a r0 = r19.a()
            if (r0 == 0) goto Le9
            com.huawei.hms.framework.network.grs.c.a r0 = r19.a()
            com.huawei.hms.framework.network.grs.c.f r2 = r1.a
            r0.a(r2)
        Le9:
            com.huawei.hms.framework.network.grs.c.f r0 = r1.a
            return r0
    }

    @Override
    public com.huawei.hms.framework.network.grs.c.f call() {
            r1 = this;
            com.huawei.hms.framework.network.grs.c.f r0 = r1.call()
            return r0
    }
}
