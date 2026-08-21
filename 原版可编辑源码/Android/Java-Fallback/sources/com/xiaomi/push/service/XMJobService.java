package com.xiaomi.push.service;

public class XMJobService extends android.app.Service {
    static android.app.Service a;
    private android.os.IBinder a;

    class a extends android.app.job.JobService {
        android.os.Binder a;
        private android.os.Handler a;

        class a extends android.os.Handler {
            android.app.job.JobService a;

            a(android.app.job.JobService r2) {
                    r1 = this;
                    android.os.Looper r0 = r2.getMainLooper()
                    r1.<init>(r0)
                    r1.a = r2
                    return
            }

            @Override
            public void handleMessage(android.os.Message r4) {
                    r3 = this;
                    int r0 = r4.what
                    r1 = 1
                    if (r0 == r1) goto L6
                    goto L31
                L6:
                    java.lang.Object r4 = r4.obj
                    android.app.job.JobParameters r4 = (android.app.job.JobParameters) r4
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.String r2 = "Job finished "
                    r0.append(r2)
                    int r2 = r4.getJobId()
                    r0.append(r2)
                    java.lang.String r0 = r0.toString()
                    com.xiaomi.channel.commonutils.logger.b.a(r0)
                    android.app.job.JobService r0 = r3.a
                    r2 = 0
                    r0.jobFinished(r4, r2)
                    int r4 = r4.getJobId()
                    if (r4 != r1) goto L31
                    com.xiaomi.push.eu.a(r2)
                L31:
                    return
            }
        }

        a(android.app.Service r5) {
                r4 = this;
                r4.<init>()
                r0 = 0
                r4.a = r0
                r0 = 1
                java.lang.Object[] r1 = new java.lang.Object[r0]
                android.content.Intent r2 = new android.content.Intent
                r2.<init>()
                r3 = 0
                r1[r3] = r2
                java.lang.String r2 = "onBind"
                java.lang.Object r1 = com.xiaomi.push.bk.a(r4, r2, r1)
                android.os.Binder r1 = (android.os.Binder) r1
                r4.a = r1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r0[r3] = r5
                java.lang.String r5 = "attachBaseContext"
                com.xiaomi.push.bk.a(r4, r5, r0)
                return
        }

        @Override
        public boolean onStartJob(android.app.job.JobParameters r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Job started "
                r0.append(r1)
                int r1 = r3.getJobId()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.a(r0)
                android.content.Intent r0 = new android.content.Intent
                java.lang.Class<com.xiaomi.push.service.XMPushService> r1 = com.xiaomi.push.service.XMPushService.class
                r0.<init>(r2, r1)
                java.lang.String r1 = "com.xiaomi.push.timer"
                r0.setAction(r1)
                java.lang.String r1 = r2.getPackageName()
                r0.setPackage(r1)
                r2.startService(r0)
                android.os.Handler r0 = r2.a
                if (r0 != 0) goto L39
                com.xiaomi.push.service.XMJobService$a$a r0 = new com.xiaomi.push.service.XMJobService$a$a
                r0.<init>(r2)
                r2.a = r0
            L39:
                android.os.Handler r0 = r2.a
                r1 = 1
                android.os.Message r3 = android.os.Message.obtain(r0, r1, r3)
                r0.sendMessage(r3)
                return r1
        }

        @Override
        public boolean onStopJob(android.app.job.JobParameters r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Job stop "
                r0.append(r1)
                int r3 = r3.getJobId()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                com.xiaomi.channel.commonutils.logger.b.a(r3)
                r3 = 0
                return r3
        }
    }

    static {
            return
    }

    public XMJobService() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            android.os.IBinder r1 = r0.a
            if (r1 == 0) goto L5
            return r1
        L5:
            android.os.Binder r1 = new android.os.Binder
            r1.<init>()
            return r1
    }

    @Override
    public void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L12
            com.xiaomi.push.service.XMJobService$a r0 = new com.xiaomi.push.service.XMJobService$a
            r0.<init>(r2)
            android.os.Binder r0 = r0.a
            r2.a = r0
        L12:
            com.xiaomi.push.service.XMJobService.a = r2
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            com.xiaomi.push.service.XMJobService.a = r0
            return
    }
}
