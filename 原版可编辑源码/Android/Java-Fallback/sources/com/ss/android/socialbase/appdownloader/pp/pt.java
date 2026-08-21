package com.ss.android.socialbase.appdownloader.pp;

public class pt {
    private static java.util.List<com.ss.android.socialbase.appdownloader.q.f> df;
    private static android.app.AlertDialog pt;
    private static com.ss.android.socialbase.appdownloader.view.rg q;
    private static final java.lang.String rg = null;




    static {
            java.lang.Class<com.ss.android.socialbase.appdownloader.pp.pt> r0 = com.ss.android.socialbase.appdownloader.pp.pt.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.appdownloader.pp.pt.rg = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.ss.android.socialbase.appdownloader.pp.pt.df = r0
            return
    }

    public pt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void df(android.app.Activity r3, com.ss.android.socialbase.appdownloader.q.f r4) {
            if (r3 == 0) goto L3d
            boolean r0 = r3.isFinishing()     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L9
            goto L3d
        L9:
            android.app.FragmentManager r3 = r3.getFragmentManager()     // Catch: java.lang.Throwable -> L41
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.pp.pt.rg     // Catch: java.lang.Throwable -> L41
            android.app.Fragment r0 = r3.findFragmentByTag(r0)     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.appdownloader.view.rg r0 = (com.ss.android.socialbase.appdownloader.view.rg) r0     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.appdownloader.pp.pt.q = r0     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto L37
            com.ss.android.socialbase.appdownloader.view.rg r0 = new com.ss.android.socialbase.appdownloader.view.rg     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.appdownloader.pp.pt.q = r0     // Catch: java.lang.Throwable -> L41
            android.app.FragmentTransaction r0 = r3.beginTransaction()     // Catch: java.lang.Throwable -> L41
            com.ss.android.socialbase.appdownloader.view.rg r1 = com.ss.android.socialbase.appdownloader.pp.pt.q     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.pp.pt.rg     // Catch: java.lang.Throwable -> L41
            android.app.FragmentTransaction r0 = r0.add(r1, r2)     // Catch: java.lang.Throwable -> L41
            r0.commitAllowingStateLoss()     // Catch: java.lang.Throwable -> L41
            r3.executePendingTransactions()     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L41
        L37:
            com.ss.android.socialbase.appdownloader.view.rg r3 = com.ss.android.socialbase.appdownloader.pp.pt.q     // Catch: java.lang.Throwable -> L41
            r3.rg()     // Catch: java.lang.Throwable -> L41
            goto L4d
        L3d:
            r4.rg()     // Catch: java.lang.Throwable -> L41
            return
        L41:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L49
            r4.rg()     // Catch: java.lang.Throwable -> L49
            goto L4d
        L49:
            r3 = move-exception
            r3.printStackTrace()
        L4d:
            return
    }

    static android.app.AlertDialog rg(android.app.AlertDialog r0) {
            com.ss.android.socialbase.appdownloader.pp.pt.pt = r0
            return r0
    }

    public static synchronized void rg(android.app.Activity r7, com.ss.android.socialbase.appdownloader.q.f r8) {
            java.lang.Class<com.ss.android.socialbase.appdownloader.pp.pt> r0 = com.ss.android.socialbase.appdownloader.pp.pt.class
            monitor-enter(r0)
            if (r8 != 0) goto L7
            monitor-exit(r0)
            return
        L7:
            r1 = 0
            if (r7 == 0) goto L7d
            boolean r2 = r7.isFinishing()     // Catch: java.lang.Throwable -> L82
            if (r2 == 0) goto L11
            goto L7d
        L11:
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L82
            java.lang.String r3 = "tt_appdownloader_notification_request_title"
            int r2 = com.ss.android.socialbase.appdownloader.rz.rg(r2, r3)     // Catch: java.lang.Throwable -> L82
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L82
            java.lang.String r4 = "tt_appdownloader_notification_request_message"
            int r3 = com.ss.android.socialbase.appdownloader.rz.rg(r3, r4)     // Catch: java.lang.Throwable -> L82
            android.content.Context r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L82
            java.lang.String r5 = "tt_appdownloader_notification_request_btn_yes"
            int r4 = com.ss.android.socialbase.appdownloader.rz.rg(r4, r5)     // Catch: java.lang.Throwable -> L82
            android.content.Context r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L82
            java.lang.String r6 = "tt_appdownloader_notification_request_btn_no"
            int r5 = com.ss.android.socialbase.appdownloader.rz.rg(r5, r6)     // Catch: java.lang.Throwable -> L82
            java.util.List<com.ss.android.socialbase.appdownloader.q.f> r6 = com.ss.android.socialbase.appdownloader.pp.pt.df     // Catch: java.lang.Throwable -> L82
            r6.add(r8)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog r6 = com.ss.android.socialbase.appdownloader.pp.pt.pt     // Catch: java.lang.Throwable -> L82
            if (r6 == 0) goto L4a
            android.app.AlertDialog r6 = com.ss.android.socialbase.appdownloader.pp.pt.pt     // Catch: java.lang.Throwable -> L82
            boolean r6 = r6.isShowing()     // Catch: java.lang.Throwable -> L82
            if (r6 != 0) goto L89
        L4a:
            android.app.AlertDialog$Builder r6 = new android.app.AlertDialog$Builder     // Catch: java.lang.Throwable -> L82
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r2 = r6.setTitle(r2)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r2 = r2.setMessage(r3)     // Catch: java.lang.Throwable -> L82
            com.ss.android.socialbase.appdownloader.pp.pt$3 r3 = new com.ss.android.socialbase.appdownloader.pp.pt$3     // Catch: java.lang.Throwable -> L82
            r3.<init>(r7, r8)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r7 = r2.setPositiveButton(r4, r3)     // Catch: java.lang.Throwable -> L82
            com.ss.android.socialbase.appdownloader.pp.pt$2 r8 = new com.ss.android.socialbase.appdownloader.pp.pt$2     // Catch: java.lang.Throwable -> L82
            r8.<init>()     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r7 = r7.setNegativeButton(r5, r8)     // Catch: java.lang.Throwable -> L82
            com.ss.android.socialbase.appdownloader.pp.pt$1 r8 = new com.ss.android.socialbase.appdownloader.pp.pt$1     // Catch: java.lang.Throwable -> L82
            r8.<init>()     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r7 = r7.setOnKeyListener(r8)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog$Builder r7 = r7.setCancelable(r1)     // Catch: java.lang.Throwable -> L82
            android.app.AlertDialog r7 = r7.show()     // Catch: java.lang.Throwable -> L82
            com.ss.android.socialbase.appdownloader.pp.pt.pt = r7     // Catch: java.lang.Throwable -> L82
            goto L89
        L7d:
            r8.df()     // Catch: java.lang.Throwable -> L82
            monitor-exit(r0)
            return
        L82:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L8b
            rg(r1)     // Catch: java.lang.Throwable -> L8b
        L89:
            monitor-exit(r0)
            return
        L8b:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    public static synchronized void rg(boolean r3) {
            java.lang.Class<com.ss.android.socialbase.appdownloader.pp.pt> r0 = com.ss.android.socialbase.appdownloader.pp.pt.class
            monitor-enter(r0)
            android.app.AlertDialog r1 = com.ss.android.socialbase.appdownloader.pp.pt.pt     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto Lf
            android.app.AlertDialog r1 = com.ss.android.socialbase.appdownloader.pp.pt.pt     // Catch: java.lang.Throwable -> L2d
            r1.cancel()     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            com.ss.android.socialbase.appdownloader.pp.pt.pt = r1     // Catch: java.lang.Throwable -> L2d
        Lf:
            java.util.List<com.ss.android.socialbase.appdownloader.q.f> r1 = com.ss.android.socialbase.appdownloader.pp.pt.df     // Catch: java.lang.Throwable -> L2d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2d
        L15:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L31
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2d
            com.ss.android.socialbase.appdownloader.q.f r2 = (com.ss.android.socialbase.appdownloader.q.f) r2     // Catch: java.lang.Throwable -> L2d
            if (r2 == 0) goto L15
            if (r3 == 0) goto L29
            r2.rg()     // Catch: java.lang.Throwable -> L2d
            goto L15
        L29:
            r2.df()     // Catch: java.lang.Throwable -> L2d
            goto L15
        L2d:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r0)
            return
        L33:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static boolean rg() {
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> Ld
            android.support.v4.app.NotificationManagerCompat r0 = android.support.v4.app.NotificationManagerCompat.from(r0)     // Catch: java.lang.Throwable -> Ld
            boolean r0 = r0.areNotificationsEnabled()     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 1
            return r0
    }
}
