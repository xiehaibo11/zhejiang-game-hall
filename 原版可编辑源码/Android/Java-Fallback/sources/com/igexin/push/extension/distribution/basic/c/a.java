package com.igexin.push.extension.distribution.basic.c;

public class a {
    private static com.igexin.push.extension.distribution.basic.c.a a;

    static {
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized com.igexin.push.extension.distribution.basic.c.a a() {
            java.lang.Class<com.igexin.push.extension.distribution.basic.c.a> r0 = com.igexin.push.extension.distribution.basic.c.a.class
            monitor-enter(r0)
            com.igexin.push.extension.distribution.basic.c.a r1 = com.igexin.push.extension.distribution.basic.c.a.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.igexin.push.extension.distribution.basic.c.a r1 = new com.igexin.push.extension.distribution.basic.c.a     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.igexin.push.extension.distribution.basic.c.a.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.igexin.push.extension.distribution.basic.c.a r1 = com.igexin.push.extension.distribution.basic.c.a.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public boolean a(android.content.Context r9, android.content.Intent r10, int r11) {
            r8 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "JobSender| JobSender.runJob()"
            com.igexin.b.a.c.b.a(r2, r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto Lf
            return r0
        Lf:
            if (r9 != 0) goto L12
            return r0
        L12:
            if (r10 == 0) goto L8c
            android.content.ComponentName r1 = r10.getComponent()
            if (r1 != 0) goto L1b
            goto L8c
        L1b:
            java.lang.String r1 = "jobscheduler"
            java.lang.Object r9 = r9.getSystemService(r1)     // Catch: java.lang.Throwable -> L71
            android.app.job.JobScheduler r9 = (android.app.job.JobScheduler) r9     // Catch: java.lang.Throwable -> L71
            android.app.job.JobInfo$Builder r1 = new android.app.job.JobInfo$Builder     // Catch: java.lang.Throwable -> L71
            android.content.ComponentName r2 = r10.getComponent()     // Catch: java.lang.Throwable -> L71
            r1.<init>(r11, r2)     // Catch: java.lang.Throwable -> L71
            r2 = 0
            android.app.job.JobInfo$Builder r11 = r1.setOverrideDeadline(r2)     // Catch: java.lang.Throwable -> L71
            android.app.job.JobInfo r11 = r11.build()     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "android.app.job.JobWorkItem"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L71
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L71
            java.lang.Class<android.content.Intent> r4 = android.content.Intent.class
            r3[r0] = r4     // Catch: java.lang.Throwable -> L71
            java.lang.reflect.Constructor r3 = r1.getConstructor(r3)     // Catch: java.lang.Throwable -> L71
            java.lang.Object[] r4 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L71
            r4[r0] = r10     // Catch: java.lang.Throwable -> L71
            java.lang.Object r10 = r3.newInstance(r4)     // Catch: java.lang.Throwable -> L71
            java.lang.Class<android.app.job.JobScheduler> r3 = android.app.job.JobScheduler.class
            java.lang.String r4 = "enqueue"
            r5 = 2
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L71
            java.lang.Class<android.app.job.JobInfo> r7 = android.app.job.JobInfo.class
            r6[r0] = r7     // Catch: java.lang.Throwable -> L71
            r6[r2] = r1     // Catch: java.lang.Throwable -> L71
            java.lang.reflect.Method r1 = r3.getDeclaredMethod(r4, r6)     // Catch: java.lang.Throwable -> L71
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L71
            r3[r0] = r11     // Catch: java.lang.Throwable -> L71
            r3[r2] = r10     // Catch: java.lang.Throwable -> L71
            r1.invoke(r9, r3)     // Catch: java.lang.Throwable -> L71
            java.lang.String r9 = "JobSender| started by JobSender"
            java.lang.Object[] r10 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L71
            com.igexin.b.a.c.b.a(r9, r10)     // Catch: java.lang.Throwable -> L71
            return r2
        L71:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "JobSender|"
            r10.append(r11)
            java.lang.String r9 = r9.toString()
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            java.lang.Object[] r10 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r9, r10)
        L8c:
            return r0
    }
}
