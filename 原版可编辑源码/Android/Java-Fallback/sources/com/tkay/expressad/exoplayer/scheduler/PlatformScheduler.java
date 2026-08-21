package com.tkay.expressad.exoplayer.scheduler;

public final class PlatformScheduler implements com.tkay.expressad.exoplayer.scheduler.c {
    private static final java.lang.String b = "PlatformScheduler";
    private static final java.lang.String c = "service_action";
    private static final java.lang.String d = "service_package";
    private static final java.lang.String e = "requirements";
    private final int f;
    private final android.content.ComponentName g;
    private final android.app.job.JobScheduler h;

    public static final class PlatformSchedulerService extends android.app.job.JobService {
        public PlatformSchedulerService() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean onStartJob(android.app.job.JobParameters r5) {
                r4 = this;
                android.os.PersistableBundle r0 = r5.getExtras()
                com.tkay.expressad.exoplayer.scheduler.a r1 = new com.tkay.expressad.exoplayer.scheduler.a
                java.lang.String r2 = "requirements"
                int r2 = r0.getInt(r2)
                r1.<init>(r2)
                boolean r1 = r1.a(r4)
                if (r1 == 0) goto L40
                java.lang.String r5 = "service_action"
                java.lang.String r5 = r0.getString(r5)
                java.lang.String r1 = "service_package"
                java.lang.String r0 = r0.getString(r1)
                android.content.Intent r1 = new android.content.Intent
                r1.<init>(r5)
                android.content.Intent r1 = r1.setPackage(r0)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "Starting service action: "
                r2.<init>(r3)
                r2.append(r5)
                java.lang.String r5 = " package: "
                r2.append(r5)
                r2.append(r0)
                com.tkay.expressad.exoplayer.k.af.a(r4, r1)
                goto L44
            L40:
                r0 = 1
                r4.jobFinished(r5, r0)
            L44:
                r5 = 0
                return r5
        }

        @Override
        public final boolean onStopJob(android.app.job.JobParameters r1) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    private PlatformScheduler(android.content.Context r2, int r3) {
            r1 = this;
            r1.<init>()
            r1.f = r3
            android.content.ComponentName r3 = new android.content.ComponentName
            java.lang.Class<com.tkay.expressad.exoplayer.scheduler.PlatformScheduler$PlatformSchedulerService> r0 = com.tkay.expressad.exoplayer.scheduler.PlatformScheduler.PlatformSchedulerService.class
            r3.<init>(r2, r0)
            r1.g = r3
            java.lang.String r3 = "jobscheduler"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.job.JobScheduler r2 = (android.app.job.JobScheduler) r2
            r1.h = r2
            return
    }

    private static android.app.job.JobInfo a(int r4, android.content.ComponentName r5, com.tkay.expressad.exoplayer.scheduler.a r6, java.lang.String r7, java.lang.String r8) {
            android.app.job.JobInfo$Builder r0 = new android.app.job.JobInfo$Builder
            r0.<init>(r4, r5)
            int r4 = r6.a()
            r5 = 4
            r1 = 3
            r2 = 2
            r3 = 1
            if (r4 == 0) goto L3c
            if (r4 == r3) goto L3a
            if (r4 == r2) goto L38
            if (r4 == r1) goto L2a
            if (r4 != r5) goto L24
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            if (r4 < r1) goto L1e
            goto L3d
        L1e:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
        L24:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
        L2a:
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 24
            if (r4 < r5) goto L32
            r5 = r1
            goto L3d
        L32:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>()
            throw r4
        L38:
            r5 = r2
            goto L3d
        L3a:
            r5 = r3
            goto L3d
        L3c:
            r5 = 0
        L3d:
            r0.setRequiredNetworkType(r5)
            boolean r4 = r6.c()
            r0.setRequiresDeviceIdle(r4)
            boolean r4 = r6.b()
            r0.setRequiresCharging(r4)
            r0.setPersisted(r3)
            android.os.PersistableBundle r4 = new android.os.PersistableBundle
            r4.<init>()
            java.lang.String r5 = "service_action"
            r4.putString(r5, r7)
            java.lang.String r5 = "service_package"
            r4.putString(r5, r8)
            int r5 = r6.d()
            java.lang.String r6 = "requirements"
            r4.putInt(r6, r5)
            r0.setExtras(r4)
            android.app.job.JobInfo r4 = r0.build()
            return r4
    }

    private static void b() {
            return
    }

    private static void c() {
            return
    }

    @Override
    public final boolean a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Canceling job: "
            r0.<init>(r1)
            int r1 = r2.f
            r0.append(r1)
            android.app.job.JobScheduler r0 = r2.h
            int r1 = r2.f
            r0.cancel(r1)
            r0 = 1
            return r0
    }

    @Override
    public final boolean a(com.tkay.expressad.exoplayer.scheduler.a r8, java.lang.String r9, java.lang.String r10) {
            r7 = this;
            int r0 = r7.f
            android.content.ComponentName r1 = r7.g
            android.app.job.JobInfo$Builder r2 = new android.app.job.JobInfo$Builder
            r2.<init>(r0, r1)
            int r0 = r8.a()
            r1 = 0
            r3 = 4
            r4 = 3
            r5 = 2
            r6 = 1
            if (r0 == 0) goto L41
            if (r0 == r6) goto L3f
            if (r0 == r5) goto L3d
            if (r0 == r4) goto L2f
            if (r0 != r3) goto L29
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r4 = 26
            if (r0 < r4) goto L23
            goto L42
        L23:
            java.lang.UnsupportedOperationException r8 = new java.lang.UnsupportedOperationException
            r8.<init>()
            throw r8
        L29:
            java.lang.UnsupportedOperationException r8 = new java.lang.UnsupportedOperationException
            r8.<init>()
            throw r8
        L2f:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r3 = 24
            if (r0 < r3) goto L37
            r3 = r4
            goto L42
        L37:
            java.lang.UnsupportedOperationException r8 = new java.lang.UnsupportedOperationException
            r8.<init>()
            throw r8
        L3d:
            r3 = r5
            goto L42
        L3f:
            r3 = r6
            goto L42
        L41:
            r3 = r1
        L42:
            r2.setRequiredNetworkType(r3)
            boolean r0 = r8.c()
            r2.setRequiresDeviceIdle(r0)
            boolean r0 = r8.b()
            r2.setRequiresCharging(r0)
            r2.setPersisted(r6)
            android.os.PersistableBundle r0 = new android.os.PersistableBundle
            r0.<init>()
            java.lang.String r3 = "service_action"
            r0.putString(r3, r10)
            java.lang.String r10 = "service_package"
            r0.putString(r10, r9)
            int r8 = r8.d()
            java.lang.String r9 = "requirements"
            r0.putInt(r9, r8)
            r2.setExtras(r0)
            android.app.job.JobInfo r8 = r2.build()
            android.app.job.JobScheduler r9 = r7.h
            int r8 = r9.schedule(r8)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "Scheduling job: "
            r9.<init>(r10)
            int r10 = r7.f
            r9.append(r10)
            java.lang.String r10 = " result: "
            r9.append(r10)
            r9.append(r8)
            if (r8 != r6) goto L92
            return r6
        L92:
            return r1
    }
}
