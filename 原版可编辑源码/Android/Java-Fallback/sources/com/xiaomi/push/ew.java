package com.xiaomi.push;

public class ew implements com.xiaomi.push.eu.a {
    android.app.job.JobScheduler a;
    android.content.Context a;
    private boolean a;

    ew(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r2
            java.lang.String r0 = "jobscheduler"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.app.job.JobScheduler r2 = (android.app.job.JobScheduler) r2
            r1.a = r2
            return
    }

    @Override
    public void a() {
            r2 = this;
            r0 = 0
            r2.a = r0
            android.app.job.JobScheduler r0 = r2.a
            r1 = 1
            r0.cancel(r1)
            return
    }

    void a(long r5) {
            r4 = this;
            android.app.job.JobInfo$Builder r0 = new android.app.job.JobInfo$Builder
            android.content.ComponentName r1 = new android.content.ComponentName
            android.content.Context r2 = r4.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.Class<com.xiaomi.push.service.XMJobService> r3 = com.xiaomi.push.service.XMJobService.class
            java.lang.String r3 = r3.getName()
            r1.<init>(r2, r3)
            r2 = 1
            r0.<init>(r2, r1)
            r0.setMinimumLatency(r5)
            r0.setOverrideDeadline(r5)
            r0.setRequiredNetworkType(r2)
            r1 = 0
            r0.setPersisted(r1)
            android.app.job.JobInfo r1 = r0.build()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "schedule Job = "
            r2.append(r3)
            int r1 = r1.getId()
            r2.append(r1)
            java.lang.String r1 = " in "
            r2.append(r1)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            android.app.job.JobScheduler r5 = r4.a
            android.app.job.JobInfo r6 = r0.build()
            r5.schedule(r6)
            return
    }

    @Override
    public void a(boolean r5) {
            r4 = this;
            if (r5 != 0) goto L7
            boolean r0 = r4.a
            if (r0 != 0) goto L7
            return
        L7:
            int r0 = com.xiaomi.push.gc.b()
            long r0 = (long) r0
            if (r5 == 0) goto L17
            r4.a()
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r2 = r2 % r0
            long r0 = r0 - r2
        L17:
            r5 = 1
            r4.a = r5
            r4.a(r0)
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }
}
