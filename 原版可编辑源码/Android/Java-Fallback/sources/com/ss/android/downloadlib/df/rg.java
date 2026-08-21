package com.ss.android.downloadlib.df;

public class rg {




    public static void df(com.ss.android.downloadad.api.rg.df r7) {
            if (r7 != 0) goto L3
            return
        L3:
            r0 = 0
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r2 = "app_link_opt"
            int r1 = r1.optInt(r2)
            r2 = 1
            if (r1 != r2) goto L15
            java.lang.String r0 = r7.c()
        L15:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r1 = com.ss.android.downloadlib.utils.pp.rg(r1, r7)
            java.lang.String r3 = "applink_source"
            java.lang.String r4 = "dialog_click_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r1, r3, r4)
            com.ss.android.downloadlib.event.AdEventHandler r3 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r4 = "applink_click"
            r3.df(r4, r1, r7)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = com.ss.android.downloadlib.utils.ux.rg(r0, r7)
            int r4 = r3.getType()
            r5 = 2
            java.lang.String r6 = "dialog_by_url"
            if (r4 != r5) goto L50
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L44
            df(r6, r3, r1, r7)
        L44:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r3 = r7.pp()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = com.ss.android.downloadlib.utils.ux.rg(r0, r3, r7)
        L50:
            int r0 = r3.getType()
            if (r0 == r2) goto L70
            r2 = 3
            java.lang.String r4 = "dialog_by_package"
            if (r0 == r2) goto L6c
            r2 = 4
            if (r0 == r2) goto L68
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r0 = "AppLinkClickDialog default"
            r7.df(r0)
            goto L73
        L68:
            rg(r4, r3, r1, r7)
            goto L73
        L6c:
            rg(r4, r1, r7)
            goto L73
        L70:
            df(r6, r1, r7)
        L73:
            return
    }

    public static void df(java.lang.String r1, com.ss.android.downloadlib.addownload.model.OpenAppResult r2, org.json.JSONObject r3, com.ss.android.downloadad.api.rg.rg r4) {
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r1)
            int r1 = r2.rg()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r3, r2, r1)
            int r1 = r4.n()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r3, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "deeplink_url_open_fail"
            r1.df(r2, r3, r4)
            return
    }

    public static void df(java.lang.String r8, org.json.JSONObject r9, com.ss.android.downloadad.api.rg.rg r10) {
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            int r0 = r10.n()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r9, r1, r0)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "deeplink_url_open"
            r0.df(r1, r9, r10)
            int r0 = r8.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -1721882089: goto L44;
                case -1374618233: goto L3a;
                case -129544387: goto L30;
                case 829750366: goto L26;
                default: goto L25;
            }
        L25:
            goto L4e
        L26:
            java.lang.String r0 = "dialog_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r1
            goto L4f
        L30:
            java.lang.String r0 = "notify_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = 0
            goto L4f
        L3a:
            java.lang.String r0 = "by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r2
            goto L4f
        L44:
            java.lang.String r0 = "auto_by_url"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r3
            goto L4f
        L4e:
            r0 = -1
        L4f:
            if (r0 == 0) goto L58
            if (r0 == r3) goto L58
            if (r0 == r2) goto L58
            if (r0 == r1) goto L58
            goto L97
        L58:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "check_applink_mode"
            int r0 = r0.optInt(r1)
            r0 = r0 & r3
            if (r0 == 0) goto L7b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "check_applink_result_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            com.ss.android.downloadlib.df.pp r8 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.df.rg$2 r0 = new com.ss.android.downloadlib.df.rg$2
            r0.<init>(r9, r10)
            r8.rg(r0)
            goto L97
        L7b:
            com.ss.android.download.api.config.q r1 = com.ss.android.downloadlib.addownload.bm.df()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r3 = r10.ou()
            com.ss.android.download.api.download.DownloadController r4 = r10.fo()
            com.ss.android.download.api.download.DownloadEventConfig r5 = r10.y()
            java.lang.String r6 = r10.pp()
            r7 = r8
            r1.rg(r2, r3, r4, r5, r6, r7)
        L97:
            return
    }

    public static void rg(com.ss.android.downloadad.api.rg.df r6) {
            java.lang.String r0 = r6.c()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r1 = com.ss.android.downloadlib.utils.pp.rg(r1, r6)
            java.lang.String r2 = "applink_source"
            java.lang.String r3 = "notify_click_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r1, r2, r3)
            com.ss.android.downloadlib.event.AdEventHandler r2 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "applink_click"
            r2.df(r3, r1, r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = com.ss.android.downloadlib.utils.ux.rg(r0, r6)
            int r3 = r2.getType()
            java.lang.String r4 = "notify_by_url"
            r5 = 2
            if (r3 != r5) goto L3f
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L33
            df(r4, r2, r1, r6)
        L33:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r2 = r6.pp()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = com.ss.android.downloadlib.utils.ux.rg(r0, r2, r6)
        L3f:
            int r0 = r2.getType()
            r3 = 1
            if (r0 == r3) goto L60
            r3 = 3
            java.lang.String r4 = "notify_by_package"
            if (r0 == r3) goto L5c
            r3 = 4
            if (r0 == r3) goto L58
            com.ss.android.downloadlib.exception.q r6 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r0 = "AppLinkClickNotification default"
            r6.df(r0)
            goto L63
        L58:
            rg(r4, r2, r1, r6)
            goto L63
        L5c:
            rg(r4, r1, r6)
            goto L63
        L60:
            df(r4, r1, r6)
        L63:
            return
    }

    public static void rg(com.ss.android.downloadlib.addownload.model.OpenAppResult r4, com.ss.android.downloadlib.addownload.model.pp r5, boolean r6) {
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r1 = r4.df()
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.String r2 = "open_market"
            r0[r1] = r2
            java.lang.String r0 = com.ss.android.downloadlib.utils.b.rg(r0)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "ttdownloader_type"
            java.lang.String r3 = "backup"
            com.ss.android.downloadlib.utils.b.rg(r1, r2, r3)
            int r2 = r4.getType()
            r3 = 5
            if (r2 == r3) goto L4e
            r6 = 6
            if (r2 == r6) goto L2a
            goto L51
        L2a:
            int r4 = r4.rg()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r6 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r1, r6, r4)
            int r4 = r5.n()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r6 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r1, r6, r4)
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r6 = "market_open_failed"
            r4.df(r6, r1, r5)
            goto L51
        L4e:
            rg(r0, r1, r5, r6)
        L51:
            return
    }

    public static void rg(java.lang.String r1, com.ss.android.downloadlib.addownload.model.OpenAppResult r2, org.json.JSONObject r3, com.ss.android.downloadad.api.rg.rg r4) {
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r3, r0, r1)
            int r1 = r2.rg()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r3, r2, r1)
            int r1 = r4.n()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r3, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "deeplink_app_open_fail"
            r1.df(r2, r3, r4)
            return
    }

    public static void rg(java.lang.String r8, org.json.JSONObject r9, com.ss.android.downloadad.api.rg.rg r10) {
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            int r0 = r10.n()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r9, r1, r0)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "deeplink_app_open"
            r0.df(r1, r9, r10)
            int r0 = r8.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -1282070764: goto L44;
                case -441514770: goto L3a;
                case -185950114: goto L30;
                case 368401333: goto L26;
                default: goto L25;
            }
        L25:
            goto L4e
        L26:
            java.lang.String r0 = "dialog_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r1
            goto L4f
        L30:
            java.lang.String r0 = "by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r2
            goto L4f
        L3a:
            java.lang.String r0 = "auto_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = r3
            goto L4f
        L44:
            java.lang.String r0 = "notify_by_package"
            boolean r0 = r8.equals(r0)
            if (r0 == 0) goto L4e
            r0 = 0
            goto L4f
        L4e:
            r0 = -1
        L4f:
            if (r0 == 0) goto L58
            if (r0 == r3) goto L58
            if (r0 == r2) goto L58
            if (r0 == r1) goto L58
            goto L97
        L58:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "check_applink_mode"
            int r0 = r0.optInt(r1)
            r0 = r0 & r3
            if (r0 == 0) goto L7b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "check_applink_result_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)
            com.ss.android.downloadlib.df.pp r8 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.df.rg$1 r0 = new com.ss.android.downloadlib.df.rg$1
            r0.<init>(r9, r10)
            r8.rg(r0)
            goto L97
        L7b:
            com.ss.android.download.api.config.q r1 = com.ss.android.downloadlib.addownload.bm.df()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r3 = r10.ou()
            com.ss.android.download.api.download.DownloadController r4 = r10.fo()
            com.ss.android.download.api.download.DownloadEventConfig r5 = r10.y()
            java.lang.String r6 = r10.pp()
            r7 = r8
            r1.rg(r2, r3, r4, r5, r6, r7)
        L97:
            return
    }

    public static void rg(java.lang.String r8, org.json.JSONObject r9, com.ss.android.downloadlib.addownload.model.pp r10, boolean r11) {
            if (r9 == 0) goto L3
            goto L8
        L3:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> L7c
            r9.<init>()     // Catch: java.lang.Exception -> L7c
        L8:
            java.lang.String r0 = "applink_source"
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r8)     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = "download_scene"
            int r1 = r10.n()     // Catch: java.lang.Exception -> L7c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L7c
            com.ss.android.downloadlib.utils.b.rg(r9, r0, r1)     // Catch: java.lang.Exception -> L7c
            if (r11 == 0) goto L25
            com.ss.android.downloadlib.event.AdEventHandler r11 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = "market_open_success"
            r11.df(r0, r9, r10)     // Catch: java.lang.Exception -> L7c
        L25:
            org.json.JSONObject r11 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = "check_applink_mode"
            int r11 = r11.optInt(r0)     // Catch: java.lang.Exception -> L7c
            r0 = 4
            r11 = r11 & r0
            if (r11 == 0) goto L40
            com.ss.android.downloadlib.df.pp r11 = com.ss.android.downloadlib.df.pp.rg()     // Catch: java.lang.Exception -> L7c
            com.ss.android.downloadlib.df.rg$3 r1 = new com.ss.android.downloadlib.df.rg$3     // Catch: java.lang.Exception -> L7c
            r1.<init>(r8, r10, r9)     // Catch: java.lang.Exception -> L7c
            r11.df(r1)     // Catch: java.lang.Exception -> L7c
            goto L58
        L40:
            com.ss.android.download.api.config.q r1 = com.ss.android.downloadlib.addownload.bm.df()     // Catch: java.lang.Exception -> L7c
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadModel r3 = r10.df     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadController r4 = r10.pt     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadEventConfig r5 = r10.q     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadModel r9 = r10.df     // Catch: java.lang.Exception -> L7c
            java.lang.String r6 = r9.getPackageName()     // Catch: java.lang.Exception -> L7c
            r7 = r8
            r1.rg(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L7c
        L58:
            com.ss.android.downloadad.api.rg.df r8 = new com.ss.android.downloadad.api.rg.df     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadModel r9 = r10.df     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadEventConfig r11 = r10.q     // Catch: java.lang.Exception -> L7c
            com.ss.android.download.api.download.DownloadController r10 = r10.pt     // Catch: java.lang.Exception -> L7c
            r8.<init>(r9, r11, r10)     // Catch: java.lang.Exception -> L7c
            r9 = 2
            r8.pp(r9)     // Catch: java.lang.Exception -> L7c
            long r10 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L7c
            r8.c(r10)     // Catch: java.lang.Exception -> L7c
            r8.ux(r0)     // Catch: java.lang.Exception -> L7c
            r8.rz(r9)     // Catch: java.lang.Exception -> L7c
            com.ss.android.downloadlib.addownload.model.c r9 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> L7c
            r9.rg(r8)     // Catch: java.lang.Exception -> L7c
            goto L86
        L7c:
            r8 = move-exception
            com.ss.android.downloadlib.exception.q r9 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r10 = "onMarketSuccess"
            r9.rg(r8, r10)
        L86:
            return
    }

    public static boolean rg(long r1) {
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r1 = r0.pt(r1)
            if (r1 != 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public static boolean rg(com.ss.android.downloadlib.addownload.model.pp r10) {
            com.ss.android.download.api.download.DownloadModel r0 = r10.df
            com.ss.android.download.api.model.DeepLink r0 = r0.getDeepLink()
            if (r0 != 0) goto La
            r0 = 0
            goto Le
        La:
            java.lang.String r0 = r0.getOpenUrl()
        Le:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r1 = com.ss.android.downloadlib.utils.pp.rg(r1, r10)
            java.lang.String r2 = "applink_source"
            java.lang.String r3 = "click_by_sdk"
            com.ss.android.downloadlib.utils.b.rg(r1, r2, r3)
            com.ss.android.downloadlib.event.AdEventHandler r2 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "applink_click"
            r2.df(r3, r1, r10)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = com.ss.android.downloadlib.utils.ux.rg(r0, r10)
            int r3 = r2.getType()
            java.lang.String r4 = "by_url"
            r5 = 2
            if (r3 != r5) goto L4b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3d
            df(r4, r2, r1, r10)
        L3d:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r2 = r10.df
            java.lang.String r2 = r2.getPackageName()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = com.ss.android.downloadlib.utils.ux.rg(r0, r2, r10)
        L4b:
            long r6 = r10.rg
            boolean r0 = rg(r6)
            r3 = 4
            r6 = 0
            r7 = 1
            if (r0 == 0) goto L7a
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r8 = "link_ad_click_event"
            int r0 = r0.optInt(r8)
            if (r0 != r7) goto L7a
            com.ss.android.download.api.download.DownloadModel r0 = r10.df
            boolean r0 = r0 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r0 == 0) goto L6f
            com.ss.android.download.api.download.DownloadModel r0 = r10.df
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = (com.ss.android.downloadad.api.download.AdDownloadModel) r0
            r0.setFunnelType(r3)
        L6f:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r8 = r10.rg
            r0.rg(r8, r6)
            r0 = r7
            goto L7b
        L7a:
            r0 = r6
        L7b:
            int r8 = r2.getType()
            if (r8 == r7) goto L9a
            r4 = 3
            java.lang.String r9 = "by_package"
            if (r8 == r4) goto L96
            if (r8 == r3) goto L92
            com.ss.android.downloadlib.exception.q r1 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r2 = "AppLinkClick default"
            r1.df(r2)
            goto L9e
        L92:
            rg(r9, r2, r1, r10)
            goto L9e
        L96:
            rg(r9, r1, r10)
            goto L9d
        L9a:
            df(r4, r1, r10)
        L9d:
            r6 = r7
        L9e:
            if (r6 == 0) goto Ld1
            if (r0 != 0) goto Ld1
            com.ss.android.downloadlib.event.df r0 = com.ss.android.downloadlib.event.df.rg()
            boolean r0 = r0.df()
            if (r0 == 0) goto Lbe
            com.ss.android.downloadlib.event.df r0 = com.ss.android.downloadlib.event.df.rg()
            long r1 = r10.rg
            com.ss.android.download.api.download.DownloadModel r3 = r10.df
            java.lang.String r3 = r3.getLogExtra()
            boolean r0 = r0.df(r1, r3)
            if (r0 == 0) goto Lc8
        Lbe:
            com.ss.android.downloadlib.event.df r0 = com.ss.android.downloadlib.event.df.rg()
            boolean r0 = r0.q()
            if (r0 == 0) goto Ld1
        Lc8:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r1 = r10.rg
            r0.rg(r1, r5)
        Ld1:
            return r6
    }

    public static boolean rg(com.ss.android.downloadlib.addownload.model.pp r8, int r9) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r8.n()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r0, r2, r1)
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "market_click_open"
            r1.df(r3, r0, r8)
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.download.api.download.DownloadModel r3 = r8.df
            java.lang.String r3 = r3.getPackageName()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r1 = com.ss.android.downloadlib.utils.ux.rg(r1, r8, r3)
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.String r4 = r1.df()
            r5 = 0
            r3[r5] = r4
            java.lang.String r4 = "open_market"
            r6 = 1
            r3[r6] = r4
            java.lang.String r3 = com.ss.android.downloadlib.utils.b.rg(r3)
            int r4 = r1.getType()
            r7 = 5
            if (r4 == r7) goto L6c
            r3 = 6
            if (r4 == r3) goto L4a
            r0 = 7
            if (r4 == r0) goto L6f
            return r5
        L4a:
            int r9 = r1.rg()
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            java.lang.String r1 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r0, r1, r9)
            int r9 = r8.n()
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            com.ss.android.downloadlib.utils.b.rg(r0, r2, r9)
            com.ss.android.downloadlib.event.AdEventHandler r9 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "market_open_failed"
            r9.df(r1, r0, r8)
            return r5
        L6c:
            rg(r3, r0, r8, r6)
        L6f:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            long r1 = r8.rg
            r0.rg(r1, r9)
            return r6
    }

    public static boolean rg(java.lang.String r6, com.ss.android.downloadad.api.rg.df r7) {
            int r0 = r7.om()
            boolean r0 = com.ss.android.downloadlib.addownload.ux.df(r0)
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.String r0 = r7.c()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1d
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L1d
            return r1
        L1d:
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r6 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            int r0 = r7.qx()
            r6.cancelNotification(r0)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            com.ss.android.downloadlib.utils.pp.rg(r6, r7)
            java.lang.String r0 = "applink_source"
            java.lang.String r2 = "auto_click"
            com.ss.android.downloadlib.utils.b.rg(r6, r0, r2)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "applink_click"
            r0.df(r2, r7)
            java.lang.String r0 = r7.c()
            java.lang.String r2 = r7.pp()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r0 = com.ss.android.downloadlib.utils.ux.rg(r7, r0, r2)
            int r2 = r0.getType()
            java.lang.String r3 = "auto_by_url"
            r4 = 1
            if (r2 == r4) goto L6d
            r5 = 2
            if (r2 == r5) goto L69
            r3 = 3
            java.lang.String r5 = "auto_by_package"
            if (r2 == r3) goto L65
            r3 = 4
            if (r2 == r3) goto L61
            return r1
        L61:
            rg(r5, r0, r6, r7)
            return r1
        L65:
            rg(r5, r6, r7)
            return r4
        L69:
            df(r3, r0, r6, r7)
            return r1
        L6d:
            df(r3, r6, r7)
            return r4
    }
}
