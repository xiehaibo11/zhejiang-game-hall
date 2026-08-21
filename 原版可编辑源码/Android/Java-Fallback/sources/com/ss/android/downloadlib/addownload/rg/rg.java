package com.ss.android.downloadlib.addownload.rg;

public class rg {
    private static com.ss.android.downloadlib.addownload.rg.rg df;
    private static final java.lang.String rg = null;
    private com.ss.android.downloadlib.addownload.rg.df c;
    private java.lang.String pp;
    private boolean pt;
    private java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> q;


    public interface rg {
        void rg();
    }

    static {
            java.lang.Class<com.ss.android.downloadlib.addownload.rg.rg> r0 = com.ss.android.downloadlib.addownload.rg.rg.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.addownload.rg.rg.rg = r0
            return
    }

    private rg() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.pt = r0
            com.ss.android.downloadlib.addownload.rg.df r0 = new com.ss.android.downloadlib.addownload.rg.df
            r0.<init>()
            r3.c = r0
            java.lang.String r1 = "sp_ad_install_back_dialog"
            java.lang.String r2 = "key_uninstalled_list"
            java.util.concurrent.CopyOnWriteArrayList r0 = r0.rg(r1, r2)
            r3.q = r0
            return
    }

    public static com.ss.android.downloadlib.addownload.rg.rg rg() {
            com.ss.android.downloadlib.addownload.rg.rg r0 = com.ss.android.downloadlib.addownload.rg.rg.df
            if (r0 != 0) goto Lb
            com.ss.android.downloadlib.addownload.rg.rg r0 = new com.ss.android.downloadlib.addownload.rg.rg
            r0.<init>()
            com.ss.android.downloadlib.addownload.rg.rg.df = r0
        Lb:
            com.ss.android.downloadlib.addownload.rg.rg r0 = com.ss.android.downloadlib.addownload.rg.rg.df
            return r0
    }

    private void rg(android.content.Context r11, com.ss.android.downloadlib.addownload.model.rg r12, com.ss.android.downloadlib.addownload.rg.rg.rg r13, boolean r14) {
            r10 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r1 = r12.df
            com.ss.android.downloadad.api.rg.df r0 = r0.pt(r1)
            if (r0 != 0) goto L16
            com.ss.android.downloadlib.exception.q r11 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r12 = "showBackInstallDialog nativeModel null"
            r11.rg(r12)
            return
        L16:
            com.ss.android.download.api.config.hq r1 = com.ss.android.downloadlib.addownload.bm.q()
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r2 = new com.ss.android.download.api.model.DownloadAlertDialogInfo$rg
            r2.<init>(r11)
            if (r14 == 0) goto L24
            java.lang.String r3 = "应用安装确认"
            goto L26
        L24:
            java.lang.String r3 = "退出确认"
        L26:
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r2 = r2.rg(r3)
            r9 = 1
            java.lang.Object[] r3 = new java.lang.Object[r9]
            java.lang.String r4 = r12.pp
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L38
            java.lang.String r4 = "刚刚下载的应用"
            goto L3a
        L38:
            java.lang.String r4 = r12.pp
        L3a:
            r5 = 0
            r3[r5] = r4
            java.lang.String r4 = "%1$s下载完成，是否立即安装？"
            java.lang.String r3 = java.lang.String.format(r4, r3)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r2 = r2.df(r3)
            java.lang.String r3 = "立即安装"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r2 = r2.q(r3)
            if (r14 == 0) goto L52
            java.lang.String r14 = "暂不安装"
            goto L6e
        L52:
            java.lang.Object[] r14 = new java.lang.Object[r9]
            android.content.res.Resources r3 = r11.getResources()
            android.content.Context r4 = r11.getApplicationContext()
            android.content.pm.ApplicationInfo r4 = r4.getApplicationInfo()
            int r4 = r4.labelRes
            java.lang.String r3 = r3.getString(r4)
            r14[r5] = r3
            java.lang.String r3 = "退出%1$s"
            java.lang.String r14 = java.lang.String.format(r3, r14)
        L6e:
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r14 = r2.pt(r14)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r14 = r14.rg(r5)
            java.lang.String r2 = r12.fw
            android.graphics.drawable.Drawable r2 = com.ss.android.downloadlib.utils.b.rg(r11, r2)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r14 = r14.rg(r2)
            com.ss.android.downloadlib.addownload.rg.rg$1 r2 = new com.ss.android.downloadlib.addownload.rg.rg$1
            r3 = r2
            r4 = r10
            r5 = r0
            r6 = r11
            r7 = r12
            r8 = r13
            r3.<init>(r4, r5, r6, r7, r8)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r11 = r14.rg(r2)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r11 = r11.rg(r9)
            com.ss.android.download.api.model.DownloadAlertDialogInfo r11 = r11.rg()
            r1.df(r11)
            com.ss.android.downloadlib.event.AdEventHandler r11 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r13 = "backdialog_show"
            r11.df(r13, r0)
            java.lang.String r11 = r12.pt
            r10.pp = r11
            return
    }

    private boolean rg(android.app.Activity r22, com.ss.android.socialbase.downloader.model.DownloadInfo r23, boolean r24, com.ss.android.downloadlib.addownload.rg.rg.rg r25) {
            r21 = this;
            r1 = r21
            r0 = r22
            r2 = r24
            r3 = r25
            r4 = 0
            if (r23 != 0) goto L17
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r5 = r1.q     // Catch: java.lang.Exception -> L14
            boolean r5 = r5.isEmpty()     // Catch: java.lang.Exception -> L14
            if (r5 == 0) goto L17
            return r4
        L14:
            r0 = move-exception
            goto Ldb
        L17:
            if (r0 == 0) goto Lde
            boolean r5 = r22.isFinishing()     // Catch: java.lang.Exception -> L14
            if (r5 == 0) goto L21
            goto Lde
        L21:
            r5 = 1
            if (r23 == 0) goto L4d
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r6 = r1.q     // Catch: java.lang.Exception -> L14
            boolean r6 = r6.isEmpty()     // Catch: java.lang.Exception -> L14
            if (r6 == 0) goto L4d
            com.ss.android.downloadlib.addownload.model.rg r6 = new com.ss.android.downloadlib.addownload.model.rg     // Catch: java.lang.Exception -> L14
            int r7 = r23.getId()     // Catch: java.lang.Exception -> L14
            long r8 = (long) r7     // Catch: java.lang.Exception -> L14
            r10 = 0
            r12 = 0
            java.lang.String r14 = r23.getPackageName()     // Catch: java.lang.Exception -> L14
            java.lang.String r15 = r23.getTitle()     // Catch: java.lang.Exception -> L14
            r16 = 0
            java.lang.String r17 = r23.getTargetFilePath()     // Catch: java.lang.Exception -> L14
            r7 = r6
            r7.<init>(r8, r10, r12, r14, r15, r16, r17)     // Catch: java.lang.Exception -> L14
            r1.rg(r0, r6, r2, r3)     // Catch: java.lang.Exception -> L14
            return r5
        L4d:
            r6 = 0
            if (r23 == 0) goto L5e
            java.io.File r6 = new java.io.File     // Catch: java.lang.Exception -> L14
            java.lang.String r7 = r23.getTargetFilePath()     // Catch: java.lang.Exception -> L14
            r6.<init>(r7)     // Catch: java.lang.Exception -> L14
            long r6 = r6.lastModified()     // Catch: java.lang.Exception -> L14
        L5e:
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r8 = r1.q     // Catch: java.lang.Exception -> L14
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r9 = r1.q     // Catch: java.lang.Exception -> L14
            int r9 = r9.size()     // Catch: java.lang.Exception -> L14
            java.util.ListIterator r8 = r8.listIterator(r9)     // Catch: java.lang.Exception -> L14
        L6a:
            boolean r9 = r8.hasPrevious()     // Catch: java.lang.Exception -> L14
            if (r9 == 0) goto Lc2
            java.lang.Object r9 = r8.previous()     // Catch: java.lang.Exception -> L14
            com.ss.android.downloadlib.addownload.model.rg r9 = (com.ss.android.downloadlib.addownload.model.rg) r9     // Catch: java.lang.Exception -> L14
            if (r9 != 0) goto L79
            goto L6a
        L79:
            android.content.Context r10 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L14
            java.lang.String r11 = r9.pt     // Catch: java.lang.Exception -> L14
            boolean r10 = com.ss.android.downloadlib.utils.b.pt(r10, r11)     // Catch: java.lang.Exception -> L14
            if (r10 != 0) goto L6a
            java.lang.String r10 = r9.fw     // Catch: java.lang.Exception -> L14
            boolean r10 = com.ss.android.downloadlib.utils.b.rg(r10)     // Catch: java.lang.Exception -> L14
            if (r10 != 0) goto L8e
            goto L6a
        L8e:
            java.io.File r8 = new java.io.File     // Catch: java.lang.Exception -> L14
            java.lang.String r10 = r9.fw     // Catch: java.lang.Exception -> L14
            r8.<init>(r10)     // Catch: java.lang.Exception -> L14
            long r10 = r8.lastModified()     // Catch: java.lang.Exception -> L14
            int r6 = (r10 > r6 ? 1 : (r10 == r6 ? 0 : -1))
            if (r6 < 0) goto La1
            r1.rg(r0, r9, r2, r3)     // Catch: java.lang.Exception -> L14
            goto Lc3
        La1:
            com.ss.android.downloadlib.addownload.model.rg r6 = new com.ss.android.downloadlib.addownload.model.rg     // Catch: java.lang.Exception -> L14
            int r7 = r23.getId()     // Catch: java.lang.Exception -> L14
            long r11 = (long) r7     // Catch: java.lang.Exception -> L14
            r13 = 0
            r15 = 0
            java.lang.String r17 = r23.getPackageName()     // Catch: java.lang.Exception -> L14
            java.lang.String r18 = r23.getTitle()     // Catch: java.lang.Exception -> L14
            r19 = 0
            java.lang.String r20 = r23.getTargetFilePath()     // Catch: java.lang.Exception -> L14
            r10 = r6
            r10.<init>(r11, r13, r15, r17, r18, r19, r20)     // Catch: java.lang.Exception -> L14
            r1.rg(r0, r6, r2, r3)     // Catch: java.lang.Exception -> L14
            goto Lc3
        Lc2:
            r5 = r4
        Lc3:
            java.lang.String r0 = com.ss.android.downloadlib.addownload.rg.rg.rg     // Catch: java.lang.Exception -> L14
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L14
            r2.<init>()     // Catch: java.lang.Exception -> L14
            java.lang.String r3 = "tryShowInstallDialog isShow:"
            r2.append(r3)     // Catch: java.lang.Exception -> L14
            r2.append(r5)     // Catch: java.lang.Exception -> L14
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L14
            r3 = 0
            com.ss.android.downloadlib.utils.bm.rg(r0, r2, r3)     // Catch: java.lang.Exception -> L14
            return r5
        Ldb:
            r0.printStackTrace()
        Lde:
            return r4
    }

    public void df(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto Lb
            r2.pp = r1
            goto L15
        Lb:
            java.lang.String r0 = r2.pp
            boolean r3 = android.text.TextUtils.equals(r0, r3)
            if (r3 == 0) goto L15
            r2.pp = r1
        L15:
            return
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo rg(android.content.Context r14) {
            r13 = this;
            r0 = 0
            com.ss.android.downloadlib.ux r1 = com.ss.android.downloadlib.ux.rg(r14)     // Catch: java.lang.Exception -> L93
            long r1 = r1.df()     // Catch: java.lang.Exception -> L93
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> L93
            java.lang.String r4 = "enable_miniapp_dialog"
            r5 = 0
            int r3 = r3.optInt(r4, r5)     // Catch: java.lang.Exception -> L93
            if (r3 != 0) goto L17
            return r0
        L17:
            com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r14)     // Catch: java.lang.Exception -> L93
            java.lang.String r4 = "application/vnd.android.package-archive"
            java.util.List r3 = r3.getSuccessedDownloadInfosWithMimeType(r4)     // Catch: java.lang.Exception -> L93
            if (r3 == 0) goto L92
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Exception -> L93
            if (r4 == 0) goto L2b
            goto L92
        L2b:
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L93
            r4 = 0
            r6 = r4
        L32:
            boolean r8 = r3.hasNext()     // Catch: java.lang.Exception -> L93
            if (r8 == 0) goto L97
            java.lang.Object r8 = r3.next()     // Catch: java.lang.Exception -> L93
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r8     // Catch: java.lang.Exception -> L93
            if (r8 != 0) goto L41
            goto L32
        L41:
            java.lang.String r9 = r8.getPackageName()     // Catch: java.lang.Exception -> L93
            boolean r9 = com.ss.android.downloadlib.utils.b.pt(r14, r9)     // Catch: java.lang.Exception -> L93
            if (r9 != 0) goto L32
            java.lang.String r9 = r8.getTargetFilePath()     // Catch: java.lang.Exception -> L93
            boolean r9 = com.ss.android.downloadlib.utils.b.rg(r9)     // Catch: java.lang.Exception -> L93
            if (r9 != 0) goto L56
            goto L32
        L56:
            java.io.File r9 = new java.io.File     // Catch: java.lang.Exception -> L93
            java.lang.String r10 = r8.getTargetFilePath()     // Catch: java.lang.Exception -> L93
            r9.<init>(r10)     // Catch: java.lang.Exception -> L93
            long r9 = r9.lastModified()     // Catch: java.lang.Exception -> L93
            int r11 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r11 >= 0) goto L68
            goto L32
        L68:
            java.lang.String r11 = r8.getExtra()     // Catch: java.lang.Exception -> L93
            if (r11 != 0) goto L6f
            goto L32
        L6f:
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Exception -> L8d
            java.lang.String r12 = r8.getExtra()     // Catch: java.lang.Exception -> L8d
            r11.<init>(r12)     // Catch: java.lang.Exception -> L8d
            java.lang.String r12 = "isMiniApp"
            boolean r11 = r11.has(r12)     // Catch: java.lang.Exception -> L8d
            if (r11 != 0) goto L81
            goto L32
        L81:
            int r11 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r11 != 0) goto L86
            goto L8a
        L86:
            int r11 = (r9 > r6 ? 1 : (r9 == r6 ? 0 : -1))
            if (r11 <= 0) goto L32
        L8a:
            r0 = r8
            r6 = r9
            goto L32
        L8d:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> L93
            goto L32
        L92:
            return r0
        L93:
            r14 = move-exception
            r14.printStackTrace()
        L97:
            return r0
    }

    public void rg(long r19, long r21, long r23, java.lang.String r25, java.lang.String r26, java.lang.String r27, java.lang.String r28) {
            r18 = this;
            r0 = r18
            r1 = 0
        L3:
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r2 = r0.q
            int r2 = r2.size()
            java.lang.String r3 = "key_uninstalled_list"
            java.lang.String r4 = "sp_ad_install_back_dialog"
            if (r1 >= r2) goto L43
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r2 = r0.q
            java.lang.Object r2 = r2.get(r1)
            com.ss.android.downloadlib.addownload.model.rg r2 = (com.ss.android.downloadlib.addownload.model.rg) r2
            if (r2 == 0) goto L40
            long r5 = r2.df
            int r2 = (r5 > r21 ? 1 : (r5 == r21 ? 0 : -1))
            if (r2 != 0) goto L40
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r2 = r0.q
            com.ss.android.downloadlib.addownload.model.rg r5 = new com.ss.android.downloadlib.addownload.model.rg
            r7 = r5
            r8 = r19
            r10 = r21
            r12 = r23
            r14 = r25
            r15 = r26
            r16 = r27
            r17 = r28
            r7.<init>(r8, r10, r12, r14, r15, r16, r17)
            r2.set(r1, r5)
            com.ss.android.downloadlib.addownload.rg.df r1 = r0.c
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r2 = r0.q
            r1.rg(r4, r3, r2)
            return
        L40:
            int r1 = r1 + 1
            goto L3
        L43:
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r1 = r0.q
            com.ss.android.downloadlib.addownload.model.rg r2 = new com.ss.android.downloadlib.addownload.model.rg
            r7 = r2
            r8 = r19
            r10 = r21
            r12 = r23
            r14 = r25
            r15 = r26
            r16 = r27
            r17 = r28
            r7.<init>(r8, r10, r12, r14, r15, r16, r17)
            r1.add(r2)
            com.ss.android.downloadlib.addownload.rg.df r1 = r0.c
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r2 = r0.q
            r1.rg(r4, r3, r2)
            return
    }

    public void rg(android.content.Context r2, com.ss.android.downloadlib.addownload.model.rg r3, boolean r4, com.ss.android.downloadlib.addownload.rg.rg.rg r5) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.ss.android.downloadlib.addownload.model.rg> r0 = r1.q
            r0.clear()
            r1.rg(r2, r3, r5, r4)
            r3 = 1
            r1.pt = r3
            com.ss.android.downloadlib.ux r2 = com.ss.android.downloadlib.ux.rg(r2)
            r2.q()
            com.ss.android.downloadlib.addownload.rg.df r2 = r1.c
            java.lang.String r3 = "sp_ad_install_back_dialog"
            java.lang.String r4 = "key_uninstalled_list"
            r2.df(r3, r4)
            java.lang.String r2 = com.ss.android.downloadlib.addownload.rg.rg.rg
            java.lang.String r3 = "tryShowInstallDialog isShow:true"
            r4 = 0
            com.ss.android.downloadlib.utils.bm.rg(r2, r3, r4)
            return
    }

    public void rg(com.ss.android.downloadad.api.rg.df r4) {
            r3 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "enable_open_app_dialog"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            r1 = 1
            if (r0 == r1) goto Lf
            return
        Lf:
            boolean r0 = r4.ey()
            if (r0 != 0) goto L21
            boolean r0 = r4.z()
            if (r0 == 0) goto L21
            r4.b(r1)
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r4)
        L21:
            return
    }

    public boolean rg(android.app.Activity r3, boolean r4, com.ss.android.downloadlib.addownload.rg.rg.rg r5) {
            r2 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "disable_install_app_dialog"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 == r1) goto L1b
            boolean r0 = r2.pt
            if (r0 == 0) goto L12
            goto L1b
        L12:
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r2.rg(r3)
            boolean r3 = r2.rg(r3, r0, r4, r5)
            return r3
        L1b:
            r3 = 0
            return r3
    }

    public boolean rg(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.pp
            boolean r2 = android.text.TextUtils.equals(r0, r2)
            return r2
    }
}
