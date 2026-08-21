package com.mbridge.msdk.playercommon.exoplayer2.scheduler;

public final class PlatformScheduler implements com.mbridge.msdk.playercommon.exoplayer2.scheduler.Scheduler {
    private static final java.lang.String KEY_REQUIREMENTS = "requirements";
    private static final java.lang.String KEY_SERVICE_ACTION = "service_action";
    private static final java.lang.String KEY_SERVICE_PACKAGE = "service_package";
    private static final java.lang.String TAG = "PlatformScheduler";
    private final int jobId;
    private final android.app.job.JobScheduler jobScheduler;
    private final android.content.ComponentName jobServiceComponentName;

    public static final class PlatformSchedulerService extends android.app.job.JobService {
        public PlatformSchedulerService() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean onStartJob(android.app.job.JobParameters r5) {
                r4 = this;
                java.lang.String r0 = "PlatformSchedulerService started"
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler.access$000(r0)
                android.os.PersistableBundle r0 = r5.getExtras()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r1 = new com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements
                java.lang.String r2 = "requirements"
                int r2 = r0.getInt(r2)
                r1.<init>(r2)
                boolean r1 = r1.checkRequirements(r4)
                if (r1 == 0) goto L54
                java.lang.String r5 = "Requirements are met"
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler.access$000(r5)
                java.lang.String r5 = "service_action"
                java.lang.String r5 = r0.getString(r5)
                java.lang.String r1 = "service_package"
                java.lang.String r0 = r0.getString(r1)
                android.content.Intent r1 = new android.content.Intent
                r1.<init>(r5)
                android.content.Intent r1 = r1.setPackage(r0)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Starting service action: "
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = " package: "
                r2.append(r5)
                r2.append(r0)
                java.lang.String r5 = r2.toString()
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler.access$000(r5)
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.startForegroundService(r4, r1)
                goto L5d
            L54:
                java.lang.String r0 = "Requirements are not met"
                com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler.access$000(r0)
                r0 = 1
                r4.jobFinished(r5, r0)
            L5d:
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

    public PlatformScheduler(android.content.Context r2, int r3) {
            r1 = this;
            r1.<init>()
            r1.jobId = r3
            android.content.ComponentName r3 = new android.content.ComponentName
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler$PlatformSchedulerService> r0 = com.mbridge.msdk.playercommon.exoplayer2.scheduler.PlatformScheduler.PlatformSchedulerService.class
            r3.<init>(r2, r0)
            r1.jobServiceComponentName = r3
            java.lang.String r3 = "jobscheduler"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.job.JobScheduler r2 = (android.app.job.JobScheduler) r2
            r1.jobScheduler = r2
            return
    }

    static void access$000(java.lang.String r0) {
            logd(r0)
            return
    }

    private static android.app.job.JobInfo buildJobInfo(int r4, android.content.ComponentName r5, com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r6, java.lang.String r7, java.lang.String r8) {
            android.app.job.JobInfo$Builder r0 = new android.app.job.JobInfo$Builder
            r0.<init>(r4, r5)
            int r4 = r6.getRequiredNetworkType()
            r5 = 4
            r1 = 3
            r2 = 2
            r3 = 1
            if (r4 == 0) goto L3c
            if (r4 == r3) goto L3a
            if (r4 == r2) goto L38
            if (r4 == r1) goto L2a
            if (r4 != r5) goto L24
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
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
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
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
            boolean r4 = r6.isIdleRequired()
            r0.setRequiresDeviceIdle(r4)
            boolean r4 = r6.isChargingRequired()
            r0.setRequiresCharging(r4)
            r0.setPersisted(r3)
            android.os.PersistableBundle r4 = new android.os.PersistableBundle
            r4.<init>()
            java.lang.String r5 = "service_action"
            r4.putString(r5, r7)
            java.lang.String r5 = "service_package"
            r4.putString(r5, r8)
            int r5 = r6.getRequirementsData()
            java.lang.String r6 = "requirements"
            r4.putInt(r6, r5)
            r0.setExtras(r4)
            android.app.job.JobInfo r4 = r0.build()
            return r4
    }

    private static void logd(java.lang.String r0) {
            return
    }

    @Override
    public final boolean cancel() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Canceling job: "
            r0.append(r1)
            int r1 = r2.jobId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            logd(r0)
            android.app.job.JobScheduler r0 = r2.jobScheduler
            int r1 = r2.jobId
            r0.cancel(r1)
            r0 = 1
            return r0
    }

    @Override
    public final boolean schedule(com.mbridge.msdk.playercommon.exoplayer2.scheduler.Requirements r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            int r0 = r2.jobId
            android.content.ComponentName r1 = r2.jobServiceComponentName
            android.app.job.JobInfo r3 = buildJobInfo(r0, r1, r3, r5, r4)
            android.app.job.JobScheduler r4 = r2.jobScheduler
            int r3 = r4.schedule(r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Scheduling job: "
            r4.append(r5)
            int r5 = r2.jobId
            r4.append(r5)
            java.lang.String r5 = " result: "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            logd(r4)
            r4 = 1
            if (r3 != r4) goto L30
            goto L31
        L30:
            r4 = 0
        L31:
            return r4
    }
}
