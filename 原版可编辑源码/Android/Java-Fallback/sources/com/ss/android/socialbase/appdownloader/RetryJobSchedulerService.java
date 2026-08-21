package com.ss.android.socialbase.appdownloader;

public class RetryJobSchedulerService extends android.app.job.JobService {
    public RetryJobSchedulerService() {
            r0 = this;
            r0.<init>()
            return
    }

    static void rg(int r2) {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r1 = "jobscheduler"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.Throwable -> L16
            android.app.job.JobScheduler r0 = (android.app.job.JobScheduler) r0     // Catch: java.lang.Throwable -> L16
            if (r0 != 0) goto L12
            return
        L12:
            r0.cancel(r2)     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r2 = move-exception
            r2.printStackTrace()
        L1a:
            return
    }

    static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r11, long r12, boolean r14, int r15) {
            if (r11 == 0) goto Lc2
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 > 0) goto La
            goto Lc2
        La:
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r2 != 0) goto L11
            return
        L11:
            boolean r3 = r11.isPauseReserveOnWifi()
            r4 = 3
            r5 = 2
            if (r3 == 0) goto L2a
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r3 = r3.getReserveWifiStatusListener()
            if (r3 == 0) goto L2a
            r3.onStatusChanged(r11, r5, r4)
        L2a:
            java.lang.String r3 = "jobscheduler"
            java.lang.Object r3 = r2.getSystemService(r3)     // Catch: java.lang.Throwable -> Lbe
            android.app.job.JobScheduler r3 = (android.app.job.JobScheduler) r3     // Catch: java.lang.Throwable -> Lbe
            if (r3 != 0) goto L35
            return
        L35:
            int r6 = r11.getId()     // Catch: java.lang.Throwable -> L3d
            r3.cancel(r6)     // Catch: java.lang.Throwable -> L3d
            goto L41
        L3d:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> Lbe
        L41:
            if (r15 == 0) goto L4d
            if (r14 == 0) goto L48
            if (r15 == r5) goto L48
            goto L4d
        L48:
            r6 = 60000(0xea60, double:2.9644E-319)
            long r6 = r6 + r12
            goto L50
        L4d:
            r12 = 1000(0x3e8, double:4.94E-321)
            r6 = r0
        L50:
            android.app.job.JobInfo$Builder r15 = new android.app.job.JobInfo$Builder     // Catch: java.lang.Throwable -> Lbe
            int r8 = r11.getId()     // Catch: java.lang.Throwable -> Lbe
            android.content.ComponentName r9 = new android.content.ComponentName     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> Lbe
            java.lang.Class<com.ss.android.socialbase.appdownloader.RetryJobSchedulerService> r10 = com.ss.android.socialbase.appdownloader.RetryJobSchedulerService.class
            java.lang.String r10 = r10.getName()     // Catch: java.lang.Throwable -> Lbe
            r9.<init>(r2, r10)     // Catch: java.lang.Throwable -> Lbe
            r15.<init>(r8, r9)     // Catch: java.lang.Throwable -> Lbe
            android.app.job.JobInfo$Builder r12 = r15.setMinimumLatency(r12)     // Catch: java.lang.Throwable -> Lbe
            if (r14 == 0) goto L6f
            goto L70
        L6f:
            r5 = 1
        L70:
            android.app.job.JobInfo$Builder r12 = r12.setRequiredNetworkType(r5)     // Catch: java.lang.Throwable -> Lbe
            r13 = 0
            android.app.job.JobInfo$Builder r12 = r12.setRequiresCharging(r13)     // Catch: java.lang.Throwable -> Lbe
            android.app.job.JobInfo$Builder r12 = r12.setRequiresDeviceIdle(r13)     // Catch: java.lang.Throwable -> Lbe
            int r13 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r13 <= 0) goto L84
            r12.setOverrideDeadline(r6)     // Catch: java.lang.Throwable -> Lbe
        L84:
            android.app.job.JobInfo r12 = r12.build()     // Catch: java.lang.Throwable -> Lbe
            int r12 = r3.schedule(r12)     // Catch: java.lang.Throwable -> Lbe
            if (r12 <= 0) goto La5
            boolean r13 = r11.isPauseReserveOnWifi()     // Catch: java.lang.Throwable -> Lbe
            if (r13 == 0) goto La5
            android.content.Context r13 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> Lbe
            com.ss.android.socialbase.downloader.downloader.Downloader r13 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r13)     // Catch: java.lang.Throwable -> Lbe
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r13 = r13.getReserveWifiStatusListener()     // Catch: java.lang.Throwable -> Lbe
            if (r13 == 0) goto La5
            r13.onStatusChanged(r11, r4, r4)     // Catch: java.lang.Throwable -> Lbe
        La5:
            if (r12 > 0) goto Lc2
            java.lang.String r11 = "RetrySchedulerService"
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbe
            r13.<init>()     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r14 = "schedule err errCode = "
            r13.append(r14)     // Catch: java.lang.Throwable -> Lbe
            r13.append(r12)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r12 = r13.toString()     // Catch: java.lang.Throwable -> Lbe
            com.ss.android.socialbase.downloader.logger.Logger.w(r11, r12)     // Catch: java.lang.Throwable -> Lbe
            goto Lc2
        Lbe:
            r11 = move-exception
            r11.printStackTrace()
        Lc2:
            return
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r0)
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            int r1 = super.onStartCommand(r1, r2, r3)
            boolean r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.notAutoRebootService()
            if (r2 == 0) goto Lb
            r1 = 2
        Lb:
            return r1
    }

    @Override
    public boolean onStartJob(android.app.job.JobParameters r3) {
            r2 = this;
            if (r3 == 0) goto L23
            int r3 = r3.getJobId()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onStartJob, id = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RetrySchedulerService"
            com.ss.android.socialbase.downloader.logger.Logger.i(r1, r0)
            com.ss.android.socialbase.downloader.impls.RetryScheduler r0 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()
            r0.doSchedulerRetry(r3)
        L23:
            r3 = 0
            return r3
    }

    @Override
    public boolean onStopJob(android.app.job.JobParameters r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
