package com.ss.android.socialbase.appdownloader.pt;

public class df implements com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler {
    private android.content.BroadcastReceiver df;
    private java.util.List<java.lang.Integer> rg;



    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.content.BroadcastReceiver df(com.ss.android.socialbase.appdownloader.pt.df r0) {
            android.content.BroadcastReceiver r0 = r0.df
            return r0
    }

    static android.content.BroadcastReceiver rg(com.ss.android.socialbase.appdownloader.pt.df r0, android.content.BroadcastReceiver r1) {
            r0.df = r1
            return r1
    }

    static java.util.List rg(com.ss.android.socialbase.appdownloader.pt.df r0) {
            java.util.List<java.lang.Integer> r0 = r0.rg
            return r0
    }

    private void rg(android.content.Context r21, com.ss.android.socialbase.downloader.model.DownloadInfo r22, boolean r23, int r24) {
            r20 = this;
            r0 = r20
            r2 = r21
            r8 = r22
            r1 = r24
            if (r8 == 0) goto L27c
            boolean r3 = r22.isShowNotification()
            if (r3 != 0) goto L12
            goto L27c
        L12:
            int r3 = r22.getRealStatus()
            r4 = -5
            java.lang.String r6 = ", canShowNotification = "
            java.lang.String r7 = "LaunchResume"
            r9 = 4622945017495814144(0x4028000000000000, double:12.0)
            r11 = 4634766966517661696(0x4052000000000000, double:72.0)
            r13 = 4704985352480227328(0x414b774000000000, double:3600000.0)
            r15 = 0
            if (r3 != r4) goto L13d
            java.lang.String r4 = r22.getMimeType()
            java.lang.String r5 = "application/ttpatch"
            boolean r4 = r5.equalsIgnoreCase(r4)
            if (r4 != 0) goto L39
            boolean r4 = r22.isDownloaded()
            if (r4 != 0) goto L13d
        L39:
            int r2 = r22.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r3 = "failed_resume_max_count"
            int r3 = r2.optInt(r3, r15)
            java.lang.String r4 = "failed_resume_max_hours"
            double r4 = r2.optDouble(r4, r11)
            java.lang.String r11 = "failed_resume_min_hours"
            double r9 = r2.optDouble(r11, r9)
            long r11 = java.lang.System.currentTimeMillis()
            int r15 = r22.getFailedResumeCount()
            if (r15 >= r3) goto L7a
            long r17 = r22.getLastDownloadTime()
            r15 = r6
            r19 = r7
            long r6 = r11 - r17
            double r6 = (double) r6
            double r4 = r4 * r13
            int r3 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r3 >= 0) goto L7d
            long r3 = r22.getLastFailedResumeTime()
            long r3 = r11 - r3
            double r3 = (double) r3
            double r9 = r9 * r13
            int r3 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r3 <= 0) goto L7d
            r3 = 1
            goto L7e
        L7a:
            r15 = r6
            r19 = r7
        L7d:
            r3 = 0
        L7e:
            boolean r4 = r22.isPauseReserveOnWifi()
            if (r4 == 0) goto L87
            if (r23 == 0) goto L87
            r3 = 1
        L87:
            if (r3 == 0) goto L104
            java.lang.String r4 = "failed_resume_need_wifi"
            r5 = 1
            int r4 = r2.optInt(r4, r5)
            if (r4 != r5) goto L94
            r4 = r5
            goto L95
        L94:
            r4 = 0
        L95:
            java.lang.String r6 = "failed_resume_need_wait_wifi"
            r7 = 0
            int r2 = r2.optInt(r6, r7)
            if (r2 != r5) goto La0
            r2 = 1
            goto La1
        La0:
            r2 = 0
        La1:
            if (r23 != 0) goto Ld8
            if (r4 == 0) goto Ld8
            if (r2 != 0) goto La8
            goto Ld8
        La8:
            java.util.List<java.lang.Integer> r1 = r0.rg
            if (r1 != 0) goto Lb3
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.rg = r1
        Lb3:
            int r1 = r22.getId()
            java.util.List<java.lang.Integer> r2 = r0.rg
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)
            boolean r2 = r2.contains(r4)
            if (r2 != 0) goto Lcc
            java.util.List<java.lang.Integer> r2 = r0.rg
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2.add(r1)
        Lcc:
            r5 = 1
            r8.setOnlyWifi(r5)
            com.ss.android.socialbase.downloader.impls.RetryScheduler r1 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()
            r1.tryStartScheduleRetry(r8)
            goto L104
        Ld8:
            r5 = 1
            com.ss.android.socialbase.appdownloader.q.rg(r8, r5, r4)
            r8.setLastFailedResumeTime(r11)
            int r2 = r22.getFailedResumeCount()
            int r2 = r2 + r5
            r8.setFailedResumeCount(r2)
            r22.updateSpData()
            boolean r2 = r22.isPauseReserveOnWifi()
            if (r2 == 0) goto L105
            if (r23 == 0) goto L105
            r8.setDownloadFromReserveWifi(r5)
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r2 = r2.oh()
            if (r2 == 0) goto L105
            r4 = 5
            r2.onStatusChanged(r8, r4, r1)
            goto L105
        L104:
            r5 = 0
        L105:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "launchResume, name = "
            r1.append(r2)
            java.lang.String r2 = r22.getTitle()
            r1.append(r2)
            r4 = r15
            r1.append(r4)
            r1.append(r3)
            java.lang.String r2 = ", downloadResumed = "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r6 = r19
            com.ss.android.socialbase.downloader.logger.Logger.i(r6, r1)
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.fw r1 = r1.hq()
            if (r1 == 0) goto L27c
            r1.rg(r8, r5)
            goto L27c
        L13d:
            r4 = r6
            r6 = r7
            r5 = 1
            r7 = -3
            if (r3 != r7) goto L219
            boolean r7 = r0.rg(r8)
            if (r7 == 0) goto L219
            int r1 = r22.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            boolean r3 = com.ss.android.socialbase.appdownloader.q.rg(r21, r22)
            if (r3 == 0) goto L158
            return
        L158:
            java.lang.String r3 = "uninstall_resume_max_count"
            r7 = 0
            int r3 = r1.optInt(r3, r7)
            java.lang.String r7 = "uninstall_resume_max_hours"
            double r11 = r1.optDouble(r7, r11)
            java.lang.String r7 = "uninstall_resume_min_hours"
            double r9 = r1.optDouble(r7, r9)
            long r13 = java.lang.System.currentTimeMillis()
            int r1 = r22.getUninstallResumeCount()
            if (r1 >= r3) goto L196
            long r15 = r22.getLastDownloadTime()
            r19 = r6
            long r5 = r13 - r15
            double r5 = (double) r5
            r15 = 4704985352480227328(0x414b774000000000, double:3600000.0)
            double r11 = r11 * r15
            int r1 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r1 >= 0) goto L198
            long r5 = r22.getLastUninstallResumeTime()
            long r5 = r13 - r5
            double r5 = (double) r5
            double r9 = r9 * r15
            int r1 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r1 <= 0) goto L198
            r5 = 1
            goto L199
        L196:
            r19 = r6
        L198:
            r5 = 0
        L199:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "uninstallResume, name = "
            r1.append(r3)
            java.lang.String r3 = r22.getTitle()
            r1.append(r3)
            r1.append(r4)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r3 = r19
            com.ss.android.socialbase.downloader.logger.Logger.i(r3, r1)
            if (r5 == 0) goto L27c
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r3 = r22.getId()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r1 = r1.getNotificationItem(r3)
            if (r1 != 0) goto L1ef
            com.ss.android.socialbase.appdownloader.pp.rg r9 = new com.ss.android.socialbase.appdownloader.pp.rg
            int r3 = r22.getId()
            java.lang.String r4 = r22.getTitle()
            java.lang.String r5 = r22.getSavePath()
            java.lang.String r6 = r22.getName()
            java.lang.String r7 = r22.getExtra()
            r1 = r9
            r2 = r21
            r10 = 1
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r1.addNotification(r9)
            r1 = r9
            goto L1f3
        L1ef:
            r10 = 1
            r1.updateNotificationItem(r8)
        L1f3:
            long r2 = r22.getTotalBytes()
            r1.setTotalBytes(r2)
            long r2 = r22.getTotalBytes()
            r1.setCurBytes(r2)
            int r2 = r22.getStatus()
            r3 = 0
            r4 = 0
            r1.refreshStatus(r2, r3, r4, r4)
            r8.setLastUninstallResumeTime(r13)
            int r1 = r22.getUninstallResumeCount()
            int r1 = r1 + r10
            r8.setUninstallResumeCount(r1)
            r22.updateSpData()
            goto L27c
        L219:
            r10 = r5
            r4 = -2
            if (r3 != r4) goto L27c
            boolean r3 = r22.isPauseReserveOnWifi()
            if (r3 == 0) goto L279
            if (r23 == 0) goto L24a
            com.ss.android.socialbase.appdownloader.q.rg(r8, r10, r10)
            r22.updateSpData()
            r8.setDownloadFromReserveWifi(r10)
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.fw r2 = r2.hq()
            if (r2 == 0) goto L23b
            r2.rg(r8, r10)
        L23b:
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r2 = r2.oh()
            if (r2 == 0) goto L27c
            r3 = 5
            r2.onStatusChanged(r8, r3, r1)
            goto L27c
        L24a:
            java.util.List<java.lang.Integer> r1 = r0.rg
            if (r1 != 0) goto L255
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.rg = r1
        L255:
            int r1 = r22.getId()
            java.util.List<java.lang.Integer> r3 = r0.rg
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)
            boolean r3 = r3.contains(r4)
            if (r3 != 0) goto L26e
            java.util.List<java.lang.Integer> r3 = r0.rg
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3.add(r1)
        L26e:
            com.ss.android.socialbase.downloader.impls.RetryScheduler r1 = com.ss.android.socialbase.downloader.impls.RetryScheduler.getInstance()
            r1.tryStartScheduleRetry(r8)
            r0.rg(r8, r2)
            goto L27c
        L279:
            r0.rg(r8, r2)
        L27c:
            return
    }

    static void rg(com.ss.android.socialbase.appdownloader.pt.df r0, android.content.Context r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2, boolean r3, int r4) {
            r0.rg(r1, r2, r3, r4)
            return
    }

    static void rg(com.ss.android.socialbase.appdownloader.pt.df r0, java.util.List r1, int r2) {
            r0.rg(r1, r2)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r14, android.content.Context r15) {
            r13 = this;
            int r0 = r14.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 0
            java.lang.String r2 = "paused_resume_max_count"
            int r2 = r0.optInt(r2, r1)
            java.lang.String r3 = "paused_resume_max_hours"
            r4 = 4634766966517661696(0x4052000000000000, double:72.0)
            double r3 = r0.optDouble(r3, r4)
            int r0 = r14.getPausedResumeCount()
            r5 = 1
            if (r0 >= r2) goto L34
            long r6 = java.lang.System.currentTimeMillis()
            long r8 = r14.getLastDownloadTime()
            long r6 = r6 - r8
            double r6 = (double) r6
            r8 = 4704985352480227328(0x414b774000000000, double:3600000.0)
            double r3 = r3 * r8
            int r2 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r2 >= 0) goto L34
            r2 = r5
            goto L35
        L34:
            r2 = r1
        L35:
            if (r2 == 0) goto L88
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r2 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r3 = r14.getId()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r2 = r2.getNotificationItem(r3)
            if (r2 != 0) goto L68
            com.ss.android.socialbase.appdownloader.pp.rg r2 = new com.ss.android.socialbase.appdownloader.pp.rg
            int r8 = r14.getId()
            java.lang.String r9 = r14.getTitle()
            java.lang.String r10 = r14.getSavePath()
            java.lang.String r11 = r14.getName()
            java.lang.String r12 = r14.getExtra()
            r6 = r2
            r7 = r15
            r6.<init>(r7, r8, r9, r10, r11, r12)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r15 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r15.addNotification(r2)
            goto L6b
        L68:
            r2.updateNotificationItem(r14)
        L6b:
            long r3 = r14.getTotalBytes()
            r2.setTotalBytes(r3)
            long r3 = r14.getCurBytes()
            r2.setCurBytes(r3)
            int r15 = r14.getStatus()
            r3 = 0
            r2.refreshStatus(r15, r3, r1, r1)
            int r0 = r0 + r5
            r14.setPausedResumeCount(r0)
            r14.updateSpData()
        L88:
            return
    }

    private void rg(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r4, int r5) {
            r3 = this;
            if (r4 == 0) goto L61
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L61
        L9:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.fw r0 = r0.hq()
            if (r0 == 0) goto L16
            r0.rg(r4)
        L16:
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            if (r0 != 0) goto L1d
            return
        L1d:
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)
            java.util.Iterator r4 = r4.iterator()
        L25:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L35
            java.lang.Object r2 = r4.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r2
            r3.rg(r0, r2, r1, r5)
            goto L25
        L35:
            java.util.List<java.lang.Integer> r4 = r3.rg
            if (r4 == 0) goto L61
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L61
            android.content.BroadcastReceiver r4 = r3.df
            if (r4 != 0) goto L61
            com.ss.android.socialbase.appdownloader.pt.df$2 r4 = new com.ss.android.socialbase.appdownloader.pt.df$2
            r4.<init>(r3)
            r3.df = r4
            android.content.IntentFilter r4 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L5a
            r4.<init>()     // Catch: java.lang.Throwable -> L5a
            java.lang.String r5 = "android.net.conn.CONNECTIVITY_CHANGE"
            r4.addAction(r5)     // Catch: java.lang.Throwable -> L5a
            android.content.BroadcastReceiver r5 = r3.df     // Catch: java.lang.Throwable -> L5a
            r0.registerReceiver(r5, r4)     // Catch: java.lang.Throwable -> L5a
            goto L61
        L5a:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            r3.df = r4
        L61:
            return
    }

    private boolean rg(com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r3 = this;
            int r0 = r4.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 0
            java.lang.String r2 = "uninstall_can_not_resume_for_force_task"
            boolean r0 = r0.optBugFix(r2, r1)
            if (r0 == 0) goto L1a
            java.lang.String r0 = r4.getMd5()
            boolean r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isFileDownloaded(r4, r1, r0)
            return r4
        L1a:
            boolean r4 = r4.isDownloaded()
            return r4
    }

    @Override
    public java.util.List<java.lang.String> getResumeMimeTypes() {
            r1 = this;
            java.util.List r0 = com.ss.android.socialbase.appdownloader.q.q()
            return r0
    }

    @Override
    public void onLaunchResume(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r3, int r4) {
            r2 = this;
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMainThread()
            if (r0 == 0) goto L13
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.appdownloader.pt.df$1 r1 = new com.ss.android.socialbase.appdownloader.pt.df$1
            r1.<init>(r2, r3, r4)
            r0.execute(r1)
            goto L16
        L13:
            r2.rg(r3, r4)
        L16:
            return
    }
}
