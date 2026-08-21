package com.ss.android.downloadlib;

public class df implements com.ss.android.downloadad.api.df {
    private static volatile com.ss.android.downloadlib.df df;
    private static java.lang.String rg;
    private com.ss.android.downloadlib.ux q;




    static {
            java.lang.Class<com.ss.android.downloadlib.df> r0 = com.ss.android.downloadlib.df.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.df.rg = r0
            return
    }

    private df() {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            r1.q = r0
            return
    }

    public static com.ss.android.download.api.download.DownloadController df() {
            r0 = 0
            com.ss.android.download.api.download.DownloadController r0 = rg(r0)
            return r0
    }

    private boolean df(android.content.Context r15, android.net.Uri r16, com.ss.android.download.api.download.DownloadModel r17, com.ss.android.download.api.download.DownloadEventConfig r18, com.ss.android.download.api.download.DownloadController r19, com.ss.android.download.api.config.IDownloadButtonClickListener r20) {
            r14 = this;
            r6 = r17
            r0 = r19
            boolean r1 = com.ss.android.download.api.q.rg.rg(r16)
            r7 = 0
            if (r1 != 0) goto Lc
            return r7
        Lc:
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "disable_market"
            int r1 = r1.optInt(r2)
            r8 = 1
            if (r1 != r8) goto L1a
            return r7
        L1a:
            if (r15 != 0) goto L22
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            r9 = r1
            goto L23
        L22:
            r9 = r15
        L23:
            java.lang.String r10 = com.ss.android.download.api.q.rg.df(r16)
            r11 = 5
            if (r6 != 0) goto L36
            com.ss.android.downloadlib.addownload.model.OpenAppResult r0 = com.ss.android.downloadlib.utils.ux.rg(r9, r10)
            int r0 = r0.getType()
            if (r0 != r11) goto L35
            r7 = r8
        L35:
            return r7
        L36:
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto L46
            boolean r1 = r6 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r1 == 0) goto L46
            r1 = r6
            com.ss.android.downloadad.api.download.AdDownloadModel r1 = (com.ss.android.downloadad.api.download.AdDownloadModel) r1
            r1.setPackageName(r10)
        L46:
            r12 = 2
            if (r0 == 0) goto L4e
            r0.setDownloadMode(r12)
        L4c:
            r5 = r0
            goto L81
        L4e:
            boolean r0 = r6 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r0 == 0) goto L6b
            java.lang.String r0 = r17.getDownloadUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L6b
            r0 = r6
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = (com.ss.android.downloadad.api.download.AdDownloadModel) r0
            java.lang.String r1 = r16.toString()
            r0.setDownloadUrl(r1)
            com.ss.android.download.api.download.DownloadController r0 = rg(r8)
            goto L4c
        L6b:
            java.lang.String r0 = r17.getDownloadUrl()
            java.lang.String r1 = "market"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L7c
            com.ss.android.download.api.download.DownloadController r0 = rg(r8)
            goto L4c
        L7c:
            com.ss.android.download.api.download.DownloadController r0 = df()
            goto L4c
        L81:
            com.ss.android.downloadlib.addownload.model.pp r13 = new com.ss.android.downloadlib.addownload.model.pp
            long r1 = r17.getId()
            com.ss.android.download.api.download.DownloadEventConfig[] r0 = new com.ss.android.download.api.download.DownloadEventConfig[r12]
            r0[r7] = r18
            com.ss.android.download.api.download.DownloadEventConfig r3 = q()
            r0[r8] = r3
            java.lang.Object r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            r4 = r0
            com.ss.android.download.api.download.DownloadEventConfig r4 = (com.ss.android.download.api.download.DownloadEventConfig) r4
            r0 = r13
            r3 = r17
            r0.<init>(r1, r3, r4, r5)
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r1 = r13.df
            r0.rg(r1)
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r1 = r13.rg
            com.ss.android.download.api.download.DownloadEventConfig r3 = r13.q
            r0.rg(r1, r3)
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            long r1 = r13.rg
            com.ss.android.download.api.download.DownloadController r3 = r13.pt
            r0.rg(r1, r3)
            boolean r0 = com.ss.android.downloadlib.utils.b.rg(r17)
            if (r0 == 0) goto Ld6
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r1 = "app_link_opt"
            int r0 = r0.optInt(r1)
            if (r0 != r8) goto Ld6
            boolean r0 = com.ss.android.downloadlib.df.rg.rg(r13)
            if (r0 == 0) goto Ld6
            return r8
        Ld6:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r16.toString()
            java.lang.String r2 = "market_url"
            com.ss.android.downloadlib.utils.b.rg(r0, r2, r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            java.lang.String r2 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r0, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "market_click_open"
            r1.df(r2, r0, r13)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r1 = com.ss.android.downloadlib.utils.ux.rg(r9, r13, r10)
            java.lang.String[] r2 = new java.lang.String[r12]
            java.lang.String r3 = r1.df()
            r2[r7] = r3
            java.lang.String r3 = "open_market"
            r2[r8] = r3
            java.lang.String r2 = com.ss.android.downloadlib.utils.b.rg(r2)
            int r3 = r1.getType()
            if (r3 != r11) goto L114
            com.ss.android.downloadlib.df.rg.rg(r2, r0, r13, r8)
            return r8
        L114:
            int r2 = r1.getType()
            r3 = 6
            if (r2 != r3) goto L13d
            int r1 = r1.rg()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r0, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "market_open_failed"
            r1.df(r2, r0, r13)
            r0 = r20
            boolean r1 = com.ss.android.downloadlib.addownload.ux.rg(r6, r0)
            if (r1 == 0) goto L13c
            r20.handleMarketFailedComplianceDialog()
        L13c:
            return r7
        L13d:
            return r8
    }

    public static com.ss.android.download.api.download.DownloadEventConfig q() {
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder
            r0.<init>()
            java.lang.String r1 = "landing_h5_download_ad_button"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickButtonTag(r1)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickItemTag(r1)
            java.lang.String r1 = "click_start_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickStartLabel(r1)
            java.lang.String r1 = "click_pause_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickPauseLabel(r1)
            java.lang.String r1 = "click_continue_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickContinueLabel(r1)
            java.lang.String r1 = "click_install_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickInstallLabel(r1)
            java.lang.String r1 = "click_open_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setClickOpenLabel(r1)
            java.lang.String r1 = "storage_deny_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setStorageDenyLabel(r1)
            r1 = 1
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setDownloadScene(r1)
            r2 = 0
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setIsEnableClickEvent(r2)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setIsEnableNoChargeClickEvent(r1)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r0 = r0.setIsEnableV3Event(r2)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r0 = r0.build()
            return r0
    }

    public static com.ss.android.download.api.download.DownloadController rg(boolean r3) {
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = new com.ss.android.downloadad.api.download.AdDownloadController$Builder
            r0.<init>()
            r1 = 0
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setLinkMode(r1)
            r2 = 1
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setIsEnableBackDialog(r2)
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setIsEnableMultipleDownload(r1)
            com.ss.android.downloadad.api.download.AdDownloadController$Builder r0 = r0.setShouldUseNewWebView(r1)
            if (r3 == 0) goto L1e
            r3 = 2
            r0.setDownloadMode(r3)
            goto L21
        L1e:
            r0.setDownloadMode(r1)
        L21:
            com.ss.android.downloadad.api.download.AdDownloadController r3 = r0.build()
            return r3
    }

    public static com.ss.android.downloadlib.df rg() {
            com.ss.android.downloadlib.df r0 = com.ss.android.downloadlib.df.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.df> r0 = com.ss.android.downloadlib.df.class
            monitor-enter(r0)
            com.ss.android.downloadlib.df r1 = com.ss.android.downloadlib.df.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.df r1 = new com.ss.android.downloadlib.df     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.df.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.df r0 = com.ss.android.downloadlib.df.df
            return r0
    }

    static com.ss.android.downloadlib.ux rg(com.ss.android.downloadlib.df r0) {
            com.ss.android.downloadlib.ux r0 = r0.q
            return r0
    }

    static boolean rg(com.ss.android.downloadlib.df r0, android.content.Context r1, android.net.Uri r2, com.ss.android.download.api.download.DownloadModel r3, com.ss.android.download.api.download.DownloadEventConfig r4, com.ss.android.download.api.download.DownloadController r5, com.ss.android.download.api.config.IDownloadButtonClickListener r6) {
            boolean r0 = r0.df(r1, r2, r3, r4, r5, r6)
            return r0
    }

    public android.app.Dialog df(android.content.Context r11, java.lang.String r12, boolean r13, com.ss.android.download.api.download.DownloadModel r14, com.ss.android.download.api.download.DownloadEventConfig r15, com.ss.android.download.api.download.DownloadController r16, com.ss.android.download.api.download.DownloadStatusChangeListener r17, int r18, boolean r19, com.ss.android.download.api.config.IDownloadButtonClickListener r20) {
            r10 = this;
            r0 = r10
            r1 = r11
            r2 = r14
            r3 = r15
            r4 = r16
            long r5 = r14.getId()
            boolean r5 = r10.rg(r5)
            r6 = 0
            if (r5 == 0) goto L23
            if (r19 == 0) goto L1b
            long r1 = r14.getId()
            r10.rg(r1, r15, r4)
            goto L22
        L1b:
            long r1 = r14.getId()
            r10.df(r1)
        L22:
            return r6
        L23:
            if (r1 == 0) goto Lf9
            java.lang.String r5 = r14.getDownloadUrl()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L31
            goto Lf9
        L31:
            com.ss.android.downloadlib.ux r5 = r0.q
            r7 = r17
            r8 = r18
            r5.rg(r11, r8, r7, r14)
            r5 = 2
            com.ss.android.download.api.download.DownloadEventConfig[] r7 = new com.ss.android.download.api.download.DownloadEventConfig[r5]
            r8 = 0
            r7[r8] = r3
            com.ss.android.download.api.download.DownloadEventConfig r3 = q()
            r9 = 1
            r7[r9] = r3
            java.lang.Object r3 = com.ss.android.downloadlib.utils.b.rg(r7)
            com.ss.android.download.api.download.DownloadEventConfig r3 = (com.ss.android.download.api.download.DownloadEventConfig) r3
            com.ss.android.download.api.download.DownloadController[] r5 = new com.ss.android.download.api.download.DownloadController[r5]
            r5[r8] = r4
            com.ss.android.download.api.download.DownloadController r4 = df()
            r5[r9] = r4
            java.lang.Object r4 = com.ss.android.downloadlib.utils.b.rg(r5)
            com.ss.android.download.api.download.DownloadController r4 = (com.ss.android.download.api.download.DownloadController) r4
            r3.setDownloadScene(r9)
            org.json.JSONObject r5 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r7 = "disable_lp_dialog"
            int r5 = r5.optInt(r7, r8)
            if (r5 != r9) goto L6e
            r5 = r9
            goto L6f
        L6e:
            r5 = r8
        L6f:
            r5 = r5 | r13
            boolean r7 = r4.enableShowComplianceDialog()
            if (r7 == 0) goto L81
            com.ss.android.downloadlib.addownload.compliance.df r7 = com.ss.android.downloadlib.addownload.compliance.df.rg()
            boolean r7 = r7.rg(r14)
            if (r7 == 0) goto L81
            goto L82
        L81:
            r9 = r5
        L82:
            if (r9 == 0) goto L9d
            com.ss.android.downloadlib.ux r1 = r0.q
            java.lang.String r5 = r14.getDownloadUrl()
            long r7 = r14.getId()
            r2 = 2
            r11 = r1
            r12 = r5
            r13 = r7
            r15 = r2
            r16 = r3
            r17 = r4
            r18 = r20
            r11.rg(r12, r13, r15, r16, r17, r18)
            return r6
        L9d:
            java.lang.String r5 = com.ss.android.downloadlib.df.rg
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r9 = "tryStartDownload show dialog appName:"
            r7.append(r9)
            java.lang.String r9 = r14.getDownloadUrl()
            r7.append(r9)
            java.lang.String r7 = r7.toString()
            com.ss.android.downloadlib.utils.bm.rg(r5, r7, r6)
            com.ss.android.download.api.config.hq r5 = com.ss.android.downloadlib.addownload.bm.q()
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r6 = new com.ss.android.download.api.model.DownloadAlertDialogInfo$rg
            r6.<init>(r11)
            java.lang.String r1 = r14.getName()
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r6.rg(r1)
            java.lang.String r6 = "确认要下载此应用吗？"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r1.df(r6)
            java.lang.String r6 = "确认"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r1.q(r6)
            java.lang.String r6 = "取消"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r1.pt(r6)
            com.ss.android.downloadlib.df$2 r6 = new com.ss.android.downloadlib.df$2
            r6.<init>(r10, r14, r3, r4)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r1.rg(r6)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r1 = r1.rg(r8)
            com.ss.android.download.api.model.DownloadAlertDialogInfo r1 = r1.rg()
            android.app.Dialog r1 = r5.df(r1)
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r6 = "landing_download_dialog_show"
            r5.rg(r6, r14, r3, r4)
            return r1
        Lf9:
            return r6
    }

    public void df(long r12) {
            r11 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.rg(r12)
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r1 = r1.pt(r12)
            if (r0 != 0) goto L18
            if (r1 == 0) goto L18
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.oi()
        L18:
            if (r0 != 0) goto L1b
            return
        L1b:
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadEventConfig r2 = r2.df(r12)
            com.ss.android.downloadlib.addownload.model.c r3 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadController r3 = r3.q(r12)
            boolean r4 = r2 instanceof com.ss.android.download.api.download.q
            r5 = 0
            if (r4 == 0) goto L31
            r2 = r5
        L31:
            boolean r4 = r3 instanceof com.ss.android.download.api.download.df
            if (r4 == 0) goto L36
            r3 = r5
        L36:
            if (r1 != 0) goto L45
            if (r2 != 0) goto L3e
            com.ss.android.download.api.download.DownloadEventConfig r2 = q()
        L3e:
            if (r3 != 0) goto L91
            com.ss.android.download.api.download.DownloadController r3 = df()
            goto L91
        L45:
            if (r2 != 0) goto L8b
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = new com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder
            r2.<init>()
            java.lang.String r4 = r1.bm()
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setClickButtonTag(r4)
            java.lang.String r4 = r1.rz()
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setRefer(r4)
            boolean r4 = r1.oh()
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setIsEnableV3Event(r4)
            r4 = 0
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setIsEnableClickEvent(r4)
            java.lang.String r4 = "click_start_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setClickStartLabel(r4)
            java.lang.String r4 = "click_pause_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setClickPauseLabel(r4)
            java.lang.String r4 = "click_continue_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setClickContinueLabel(r4)
            java.lang.String r4 = "click_install_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setClickInstallLabel(r4)
            java.lang.String r4 = "storage_deny_detail"
            com.ss.android.downloadad.api.download.AdDownloadEventConfig$Builder r2 = r2.setStorageDenyLabel(r4)
            com.ss.android.downloadad.api.download.AdDownloadEventConfig r2 = r2.build()
        L8b:
            if (r3 != 0) goto L91
            com.ss.android.downloadad.api.download.AdDownloadController r3 = r1.ls()
        L91:
            r9 = r2
            r10 = r3
            r1 = 1
            r9.setDownloadScene(r1)
            com.ss.android.downloadlib.ux r4 = r11.q
            java.lang.String r5 = r0.getDownloadUrl()
            r8 = 2
            r6 = r12
            r4.rg(r5, r6, r8, r9, r10)
            return
    }

    @Override
    public android.app.Dialog rg(android.content.Context r11, java.lang.String r12, boolean r13, com.ss.android.download.api.download.DownloadModel r14, com.ss.android.download.api.download.DownloadEventConfig r15, com.ss.android.download.api.download.DownloadController r16, com.ss.android.download.api.download.DownloadStatusChangeListener r17, int r18) {
            r10 = this;
            r9 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            android.app.Dialog r0 = r0.rg(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    @Override
    public android.app.Dialog rg(android.content.Context r12, java.lang.String r13, boolean r14, com.ss.android.download.api.download.DownloadModel r15, com.ss.android.download.api.download.DownloadEventConfig r16, com.ss.android.download.api.download.DownloadController r17, com.ss.android.download.api.download.DownloadStatusChangeListener r18, int r19, com.ss.android.download.api.config.IDownloadButtonClickListener r20) {
            r11 = this;
            r9 = 0
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r10 = r20
            android.app.Dialog r0 = r0.rg(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    public android.app.Dialog rg(android.content.Context r12, java.lang.String r13, boolean r14, com.ss.android.download.api.download.DownloadModel r15, com.ss.android.download.api.download.DownloadEventConfig r16, com.ss.android.download.api.download.DownloadController r17, com.ss.android.download.api.download.DownloadStatusChangeListener r18, int r19, boolean r20) {
            r11 = this;
            r10 = 0
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            android.app.Dialog r0 = r0.rg(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    public android.app.Dialog rg(android.content.Context r14, java.lang.String r15, boolean r16, com.ss.android.download.api.download.DownloadModel r17, com.ss.android.download.api.download.DownloadEventConfig r18, com.ss.android.download.api.download.DownloadController r19, com.ss.android.download.api.download.DownloadStatusChangeListener r20, int r21, boolean r22, com.ss.android.download.api.config.IDownloadButtonClickListener r23) {
            r13 = this;
            com.ss.android.downloadlib.df$1 r12 = new com.ss.android.downloadlib.df$1
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r11 = r23
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            java.lang.Object r0 = com.ss.android.downloadlib.exception.df.rg(r12)
            android.app.Dialog r0 = (android.app.Dialog) r0
            return r0
    }

    public void rg(long r10, com.ss.android.download.api.download.DownloadEventConfig r12, com.ss.android.download.api.download.DownloadController r13) {
            r9 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.rg(r10)
            com.ss.android.downloadlib.addownload.model.c r1 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r1 = r1.pt(r10)
            if (r0 != 0) goto L18
            if (r1 == 0) goto L18
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = r1.oi()
        L18:
            if (r0 != 0) goto L1b
            return
        L1b:
            if (r12 == 0) goto L3a
            if (r13 == 0) goto L3a
            boolean r1 = r12 instanceof com.ss.android.download.api.download.q
            if (r1 != 0) goto L3a
            boolean r1 = r13 instanceof com.ss.android.download.api.download.df
            if (r1 == 0) goto L28
            goto L3a
        L28:
            r1 = 1
            r12.setDownloadScene(r1)
            com.ss.android.downloadlib.ux r2 = r9.q
            java.lang.String r3 = r0.getDownloadUrl()
            r6 = 2
            r4 = r10
            r7 = r12
            r8 = r13
            r2.rg(r3, r4, r6, r7, r8)
            return
        L3a:
            r9.df(r10)
            return
    }

    @Override
    public boolean rg(long r2) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.rg(r2)
            if (r0 != 0) goto L17
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r2 = r0.pt(r2)
            if (r2 == 0) goto L15
            goto L17
        L15:
            r2 = 0
            goto L18
        L17:
            r2 = 1
        L18:
            return r2
    }

    @Override
    public boolean rg(long r2, int r4) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r2 = r0.rg(r2)
            if (r2 == 0) goto L15
            com.ss.android.downloadlib.ux r3 = r1.q
            java.lang.String r2 = r2.getDownloadUrl()
            r3.rg(r2, r4)
            r2 = 1
            return r2
        L15:
            r2 = 0
            return r2
    }

    @Override
    public boolean rg(android.content.Context r2, long r3, java.lang.String r5, com.ss.android.download.api.download.DownloadStatusChangeListener r6, int r7) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r5 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r5 = r5.pt(r3)
            r0 = 1
            if (r5 == 0) goto L15
            com.ss.android.downloadlib.ux r3 = r1.q
            com.ss.android.downloadad.api.download.AdDownloadModel r4 = r5.oi()
            r3.rg(r2, r7, r6, r4)
            return r0
        L15:
            com.ss.android.downloadlib.addownload.model.c r5 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.download.api.download.DownloadModel r3 = r5.rg(r3)
            if (r3 == 0) goto L25
            com.ss.android.downloadlib.ux r4 = r1.q
            r4.rg(r2, r7, r6, r3)
            return r0
        L25:
            r2 = 0
            return r2
    }

    @Override
    public boolean rg(android.content.Context r8, android.net.Uri r9, com.ss.android.download.api.download.DownloadModel r10, com.ss.android.download.api.download.DownloadEventConfig r11, com.ss.android.download.api.download.DownloadController r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            boolean r8 = r0.rg(r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    public boolean rg(android.content.Context r10, android.net.Uri r11, com.ss.android.download.api.download.DownloadModel r12, com.ss.android.download.api.download.DownloadEventConfig r13, com.ss.android.download.api.download.DownloadController r14, com.ss.android.download.api.config.IDownloadButtonClickListener r15) {
            r9 = this;
            com.ss.android.downloadlib.df$3 r8 = new com.ss.android.downloadlib.df$3
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.lang.Object r10 = com.ss.android.downloadlib.exception.df.rg(r8)
            java.lang.Boolean r10 = (java.lang.Boolean) r10
            boolean r10 = r10.booleanValue()
            return r10
    }
}
