package com.ss.android.downloadlib.addownload;

public class rg implements com.ss.android.downloadlib.utils.hq.rg {
    private static com.ss.android.downloadlib.addownload.rg df;
    private static final java.lang.String rg = null;
    private long pt;
    private com.ss.android.downloadlib.utils.hq q;

    static {
            java.lang.Class<com.ss.android.downloadlib.addownload.rg> r0 = com.ss.android.downloadlib.addownload.rg.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.addownload.rg.rg = r0
            return
    }

    private rg() {
            r2 = this;
            r2.<init>()
            com.ss.android.downloadlib.utils.hq r0 = new com.ss.android.downloadlib.utils.hq
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.q = r0
            return
    }

    public static com.ss.android.downloadlib.addownload.rg rg() {
            com.ss.android.downloadlib.addownload.rg r0 = com.ss.android.downloadlib.addownload.rg.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.rg> r0 = com.ss.android.downloadlib.addownload.rg.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.rg r1 = com.ss.android.downloadlib.addownload.rg.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.rg r1 = new com.ss.android.downloadlib.addownload.rg     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.rg.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.rg r0 = com.ss.android.downloadlib.addownload.rg.df
            return r0
    }

    private void rg(com.ss.android.downloadlib.addownload.model.rg r6, int r7) {
            r5 = this;
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            if (r0 != 0) goto L7
            return
        L7:
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            boolean r0 = r0.rg()
            if (r0 == 0) goto L12
            return
        L12:
            if (r6 != 0) goto L15
            return
        L15:
            r0 = 2
            if (r0 != r7) goto L66
            com.ss.android.downloadlib.addownload.model.c r7 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r0 = r6.df
            com.ss.android.downloadad.api.rg.df r7 = r7.pt(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r1 = -1
            java.lang.String r2 = "ttdownloader_type"
            java.lang.String r3 = "miui_silent_install"
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L4a
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = r6.pt     // Catch: java.lang.Exception -> L4a
            boolean r2 = com.ss.android.downloadlib.utils.b.pt(r2, r3)     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = "ttdownloader_message"
            if (r2 == 0) goto L44
            java.lang.String r2 = "miui_silent_install_succeed"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L4a
            r1 = 4
            goto L4a
        L44:
            java.lang.String r2 = "miui_silent_install_failed: has started service"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L4a
            r1 = 5
        L4a:
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r3 = r0.toString()
            r2.<init>(r1, r3)
            com.ss.android.socialbase.appdownloader.q.ux r3 = com.ss.android.downloadlib.addownload.bm.c()
            r4 = 0
            r3.rg(r4, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "embeded_ad"
            java.lang.String r3 = "ah_result"
            r1.rg(r2, r3, r0, r7)
        L66:
            android.content.Context r7 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r0 = r6.pt
            boolean r7 = com.ss.android.downloadlib.utils.b.pt(r7, r0)
            if (r7 == 0) goto L7e
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r6.df
            java.lang.String r6 = "delayinstall_installed"
            r7.rg(r6, r0)
            return
        L7e:
            java.lang.String r7 = r6.fw
            boolean r7 = com.ss.android.downloadlib.utils.b.rg(r7)
            if (r7 != 0) goto L92
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r6.df
            java.lang.String r6 = "delayinstall_file_lost"
            r7.rg(r6, r0)
            return
        L92:
            com.ss.android.downloadlib.addownload.rg.rg r7 = com.ss.android.downloadlib.addownload.rg.rg.rg()
            java.lang.String r0 = r6.pt
            boolean r7 = r7.rg(r0)
            if (r7 == 0) goto Laa
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r6.df
            java.lang.String r6 = "delayinstall_conflict_with_back_dialog"
            r7.rg(r6, r0)
            return
        Laa:
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r0 = r6.df
            java.lang.String r2 = "delayinstall_install_start"
            r7.rg(r2, r0)
            android.content.Context r7 = com.ss.android.downloadlib.addownload.bm.getContext()
            long r0 = r6.rg
            int r6 = (int) r0
            com.ss.android.socialbase.appdownloader.pt.rg(r7, r6)
            return
    }

    @Override
    public void rg(android.os.Message r3) {
            r2 = this;
            int r0 = r3.what
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 == r1) goto L7
            goto L10
        L7:
            java.lang.Object r0 = r3.obj
            com.ss.android.downloadlib.addownload.model.rg r0 = (com.ss.android.downloadlib.addownload.model.rg) r0
            int r3 = r3.arg1
            r2.rg(r0, r3)
        L10:
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r14, long r15, long r17, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22) {
            r13 = this;
            r0 = r13
            com.ss.android.downloadlib.addownload.model.rg r12 = new com.ss.android.downloadlib.addownload.model.rg
            int r1 = r14.getId()
            long r2 = (long) r1
            r1 = r12
            r4 = r15
            r6 = r17
            r8 = r19
            r9 = r20
            r10 = r21
            r11 = r22
            r1.<init>(r2, r4, r6, r8, r9, r10, r11)
            int r1 = r14.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            java.lang.String r2 = "back_miui_silent_install"
            r3 = 1
            int r2 = r1.optInt(r2, r3)
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != 0) goto La9
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.hq()
            if (r2 != 0) goto L36
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.oh()
            if (r2 == 0) goto La9
        L36:
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r4 = "com.miui.securitycore"
            java.lang.String r5 = "com.miui.enterprise.service.EntInstallService"
            boolean r2 = com.ss.android.socialbase.downloader.utils.SystemUtils.checkServiceExists(r2, r4, r5)
            if (r2 == 0) goto La9
            java.util.concurrent.ConcurrentHashMap r2 = r14.getTempCacheData()
            java.lang.String r4 = "extra_silent_install_succeed"
            java.lang.Object r2 = r2.get(r4)
            r4 = 0
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getBoolean(r2, r4)
            if (r2 == 0) goto L6e
            com.ss.android.downloadlib.utils.hq r2 = r0.q
            android.os.Message r2 = r2.obtainMessage(r3, r12)
            r3 = 2
            r2.arg1 = r3
            r3 = 60000(0xea60, float:8.4078E-41)
            java.lang.String r4 = "check_silent_install_interval"
            int r1 = r1.optInt(r4, r3)
            com.ss.android.downloadlib.utils.hq r3 = r0.q
            long r4 = (long) r1
            r3.sendMessageDelayed(r2, r4)
            return
        L6e:
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r4 = r12.df
            com.ss.android.downloadad.api.rg.df r1 = r1.pt(r4)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r4 = -1
            java.lang.String r5 = "ttdownloader_type"
            java.lang.String r6 = "miui_silent_install"
            r2.put(r5, r6)     // Catch: java.lang.Exception -> L8d
            java.lang.String r5 = "ttdownloader_message"
            java.lang.String r6 = "miui_silent_install_failed: has not started service"
            r2.put(r5, r6)     // Catch: java.lang.Exception -> L8d
            r4 = 5
        L8d:
            com.ss.android.socialbase.downloader.exception.BaseException r5 = new com.ss.android.socialbase.downloader.exception.BaseException
            java.lang.String r6 = r2.toString()
            r5.<init>(r4, r6)
            com.ss.android.socialbase.appdownloader.q.ux r6 = com.ss.android.downloadlib.addownload.bm.c()
            r7 = 0
            r6.rg(r7, r5, r4)
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r5 = "embeded_ad"
            java.lang.String r6 = "ah_result"
            r4.rg(r5, r6, r2, r1)
        La9:
            boolean r1 = com.ss.android.downloadlib.utils.pt.q()
            if (r1 != 0) goto Lb0
            return
        Lb0:
            long r1 = java.lang.System.currentTimeMillis()
            long r4 = r0.pt
            long r1 = r1 - r4
            long r4 = com.ss.android.downloadlib.utils.pt.pt()
            long r6 = com.ss.android.downloadlib.utils.pt.pp()
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 >= 0) goto Ld1
            long r6 = com.ss.android.downloadlib.utils.pt.pp()
            long r6 = r6 - r1
            long r4 = r4 + r6
            long r1 = java.lang.System.currentTimeMillis()
            long r1 = r1 + r6
            r0.pt = r1
            goto Ld7
        Ld1:
            long r1 = java.lang.System.currentTimeMillis()
            r0.pt = r1
        Ld7:
            com.ss.android.downloadlib.utils.hq r1 = r0.q
            android.os.Message r2 = r1.obtainMessage(r3, r12)
            r1.sendMessageDelayed(r2, r4)
            return
    }
}
