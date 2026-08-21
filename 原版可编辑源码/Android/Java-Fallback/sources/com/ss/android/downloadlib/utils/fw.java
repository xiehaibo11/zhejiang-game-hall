package com.ss.android.downloadlib.utils;

public class fw {




    static com.ss.android.downloadlib.addownload.model.OpenAppResult df(android.content.Context r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 4
            if (r0 == 0) goto Lf
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 11
            r3.<init>(r1, r4)
            return r3
        Lf:
            if (r3 != 0) goto L15
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
        L15:
            android.content.Intent r4 = com.ss.android.downloadlib.utils.b.c(r3, r4)
            if (r4 != 0) goto L23
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 22
            r3.<init>(r1, r4)
            return r3
        L23:
            r0 = 1
            java.lang.String r2 = "start_only_for_android"
            r4.putExtra(r2, r0)
            r3.startActivity(r4)     // Catch: java.lang.Exception -> L33
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 3
            r3.<init>(r4)
            return r3
        L33:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 23
            r3.<init>(r1, r4)
            return r3
    }

    static com.ss.android.downloadlib.addownload.model.OpenAppResult df(java.lang.String r6, com.ss.android.downloadad.api.rg.rg r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 2
            if (r0 == 0) goto Lf
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r7 = 21
            r6.<init>(r1, r7)
            return r6
        Lf:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            android.net.Uri r2 = android.net.Uri.parse(r6)
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r4 = "android.intent.action.VIEW"
            r3.<init>(r4)
            r3.setData(r2)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r2)
            java.lang.String r2 = "open_url"
            r3.putExtra(r2, r6)
            r2 = 1
            java.lang.String r4 = "start_only_for_android"
            r3.putExtra(r4, r2)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r5 = "fix_app_link_flag"
            boolean r4 = r4.optBugFix(r5)
            if (r4 == 0) goto L42
            r4 = 67108864(0x4000000, float:1.5046328E-36)
            r3.addFlags(r4)
        L42:
            boolean r0 = com.ss.android.downloadlib.utils.b.df(r0, r3)
            if (r0 == 0) goto L87
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r4 = "open_url_mode"
            int r0 = r0.optInt(r4)
            if (r0 != 0) goto L74
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            if (r0 == 0) goto L74
            com.ss.android.download.api.config.df r0 = com.ss.android.downloadlib.addownload.bm.b()
            boolean r0 = r0.rg()
            if (r0 == 0) goto L74
            int r0 = android.os.Build.VERSION.SDK_INT
            r4 = 26
            if (r0 < r4) goto L74
            boolean r0 = r7.z()
            if (r0 == 0) goto L74
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r6, r7)
            goto L7b
        L74:
            android.content.Context r6 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L81
            r6.startActivity(r3)     // Catch: java.lang.Exception -> L81
        L7b:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r6.<init>(r2)
            return r6
        L81:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r6.<init>(r1)
            return r6
        L87:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r7 = 24
            r6.<init>(r1, r7)
            return r6
    }

    private static void df(android.content.Context r2, com.ss.android.downloadlib.addownload.model.pp r3, java.lang.String r4) {
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.utils.fw$1 r1 = new com.ss.android.downloadlib.utils.fw$1
            r1.<init>(r4, r2, r3)
            r0.rg(r1)
            return
    }

    private static void df(android.content.Context r5, java.lang.String r6, java.lang.String r7, com.ss.android.downloadlib.addownload.model.pp r8, org.json.JSONObject r9) {
            java.lang.String r0 = "market://details?id="
            r1 = 5
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "ttdownloader_type"
            com.ss.android.downloadlib.utils.b.rg(r9, r3, r2)
            r2 = 1
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L55
            r3.<init>(r7)     // Catch: java.lang.Exception -> L55
            java.lang.String r7 = "a"
            java.lang.String r7 = r3.optString(r7)     // Catch: java.lang.Exception -> L55
            java.lang.String r7 = com.ss.android.socialbase.appdownloader.c.q.rg(r7)     // Catch: java.lang.Exception -> L55
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L55
            if (r3 != 0) goto L28
            long r3 = r8.rg     // Catch: java.lang.Exception -> L55
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r6, r3, r7, r9)     // Catch: java.lang.Exception -> L55
            goto L82
        L28:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r7.<init>()     // Catch: java.lang.Exception -> L55
            r7.append(r0)     // Catch: java.lang.Exception -> L55
            r7.append(r6)     // Catch: java.lang.Exception -> L55
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L55
            android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.lang.Exception -> L55
            com.ss.android.downloadlib.addownload.model.OpenAppResult r7 = rg(r5, r7)     // Catch: java.lang.Exception -> L55
            com.ss.android.downloadlib.df.rg.rg(r7, r8, r2)     // Catch: java.lang.Exception -> L55
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            r7.<init>()     // Catch: java.lang.Exception -> L55
            r7.append(r0)     // Catch: java.lang.Exception -> L55
            r7.append(r6)     // Catch: java.lang.Exception -> L55
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L55
            df(r8, r9, r1, r1, r7)     // Catch: java.lang.Exception -> L55
            goto L82
        L55:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            android.net.Uri r7 = android.net.Uri.parse(r7)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r5 = rg(r5, r7)
            com.ss.android.downloadlib.df.rg.rg(r5, r8, r2)
            r5 = 6
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            df(r8, r9, r5, r1, r6)
        L82:
            return
    }

    private static void df(android.content.Context r4, java.lang.String r5, java.lang.String r6, com.ss.android.downloadlib.addownload.model.pp r7, org.json.JSONObject r8, org.json.JSONObject r9, java.lang.String r10) {
            java.lang.String r0 = "market://details?id="
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "ttdownloader_type"
            com.ss.android.downloadlib.utils.b.rg(r8, r3, r2)
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L62
            r2.<init>(r6)     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = "a"
            java.lang.String r6 = r2.optString(r6)     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = com.ss.android.socialbase.appdownloader.c.q.rg(r6)     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = rg(r6, r9, r10)     // Catch: java.lang.Exception -> L62
            java.lang.String r9 = "open_url"
            com.ss.android.downloadlib.utils.b.rg(r8, r9, r6)     // Catch: java.lang.Exception -> L62
            boolean r9 = pp(r4, r6)     // Catch: java.lang.Exception -> L62
            if (r9 == 0) goto L34
            r9 = -1
            df(r7, r8, r9, r1, r6)     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = "am_m1"
            com.ss.android.downloadlib.df.rg.rg(r6, r8, r7, r1)     // Catch: java.lang.Exception -> L62
            goto L8f
        L34:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            r6.<init>()     // Catch: java.lang.Exception -> L62
            r6.append(r0)     // Catch: java.lang.Exception -> L62
            r6.append(r5)     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L62
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> L62
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = rg(r4, r6)     // Catch: java.lang.Exception -> L62
            com.ss.android.downloadlib.df.rg.rg(r6, r7, r1)     // Catch: java.lang.Exception -> L62
            r6 = 2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            r9.<init>()     // Catch: java.lang.Exception -> L62
            r9.append(r0)     // Catch: java.lang.Exception -> L62
            r9.append(r5)     // Catch: java.lang.Exception -> L62
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L62
            df(r7, r8, r6, r1, r9)     // Catch: java.lang.Exception -> L62
            goto L8f
        L62:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            android.net.Uri r6 = android.net.Uri.parse(r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = rg(r4, r6)
            com.ss.android.downloadlib.df.rg.rg(r4, r7, r1)
            r4 = 3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            df(r7, r8, r4, r1, r5)
        L8f:
            return
    }

    private static void df(com.ss.android.downloadlib.addownload.model.pp r1, org.json.JSONObject r2, int r3, int r4, java.lang.String r5) {
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "error_code"
            com.ss.android.downloadlib.utils.b.rg(r2, r0, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r4)
            java.lang.String r4 = "ttdownloader_type"
            com.ss.android.downloadlib.utils.b.rg(r2, r4, r3)
            java.lang.String r3 = "rmu"
            com.ss.android.downloadlib.utils.b.rg(r2, r3, r5)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            android.content.Context r4 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            int r4 = com.ss.android.downloadlib.utils.b.df(r4, r5)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            com.ss.android.downloadlib.utils.b.rg(r2, r3, r4)
            com.ss.android.downloadlib.event.AdEventHandler r3 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r4 = "am_result"
            r3.df(r4, r2, r1)
            return
    }

    private static void pp(android.content.Context r2, com.ss.android.downloadlib.addownload.model.pp r3, java.lang.String r4) {
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.utils.fw$3 r1 = new com.ss.android.downloadlib.utils.fw$3
            r1.<init>(r4, r2, r3)
            r0.rg(r1)
            return
    }

    private static boolean pp(android.content.Context r3, java.lang.String r4) {
            if (r3 != 0) goto L6
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
        L6:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L5a
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1)
            boolean r1 = r3 instanceof android.app.Activity
            if (r1 != 0) goto L2e
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r2 = "fix_app_link_flag"
            boolean r1 = r1.optBugFix(r2)
            if (r1 == 0) goto L2e
            r1 = 32768(0x8000, float:4.5918E-41)
            r0.addFlags(r1)
        L2e:
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0.setData(r4)
            r4 = 1
            java.lang.String r1 = "start_only_for_android"
            r0.putExtra(r1, r4)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r2 = com.ss.android.downloadlib.utils.b.pt(r2, r1)
            if (r2 == 0) goto L4c
            r0.setPackage(r1)
        L4c:
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r1 = com.ss.android.downloadlib.utils.b.rg(r1, r0)
            if (r1 == 0) goto L5a
            r3.startActivity(r0)     // Catch: java.lang.Exception -> L5a
            return r4
        L5a:
            r3 = 0
            return r3
    }

    private static com.ss.android.downloadlib.addownload.model.OpenAppResult pt(android.content.Context r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            r0.<init>()     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "https://www.samsungapps.com/appquery/appDetail.as?appId="
            r0.append(r1)     // Catch: java.lang.Exception -> L3d
            r0.append(r4)     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L3d
            android.net.Uri r4 = android.net.Uri.parse(r4)     // Catch: java.lang.Exception -> L3d
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L3d
            r0.<init>()     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "com.sec.android.app.samsungapps"
            java.lang.String r2 = "com.sec.android.app.samsungapps.Main"
            r0.setClassName(r1, r2)     // Catch: java.lang.Exception -> L3d
            r0.setData(r4)     // Catch: java.lang.Exception -> L3d
            boolean r4 = r3 instanceof android.app.Activity     // Catch: java.lang.Exception -> L3d
            if (r4 != 0) goto L2d
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r4)     // Catch: java.lang.Exception -> L3d
        L2d:
            java.lang.String r4 = "start_only_for_android"
            r1 = 1
            r0.putExtra(r4, r1)     // Catch: java.lang.Exception -> L3d
            r3.startActivity(r0)     // Catch: java.lang.Exception -> L3d
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult     // Catch: java.lang.Exception -> L3d
            r4 = 5
            r3.<init>(r4)     // Catch: java.lang.Exception -> L3d
            return r3
        L3d:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 6
            r0 = 14
            r3.<init>(r4, r0)
            return r3
    }

    private static void pt(android.content.Context r2, com.ss.android.downloadlib.addownload.model.pp r3, java.lang.String r4) {
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.utils.fw$2 r1 = new com.ss.android.downloadlib.utils.fw$2
            r1.<init>(r2, r4, r3)
            r0.rg(r1)
            return
    }

    private static com.ss.android.downloadlib.addownload.model.OpenAppResult q(android.content.Context r5, com.ss.android.downloadlib.addownload.model.pp r6, java.lang.String r7) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.downloadlib.activity.JumpKllkActivity> r1 = com.ss.android.downloadlib.activity.JumpKllkActivity.class
            r0.<init>(r5, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "p"
            r0.putExtra(r1, r7)
            long r1 = r6.rg
            java.lang.String r3 = "id"
            r0.putExtra(r3, r1)
            r1 = 1
            java.lang.String r2 = "start_only_for_android"
            r0.putExtra(r2, r1)
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            r5.startActivity(r0)     // Catch: java.lang.Throwable -> L2f
            com.ss.android.downloadlib.addownload.model.OpenAppResult r0 = new com.ss.android.downloadlib.addownload.model.OpenAppResult     // Catch: java.lang.Throwable -> L2f
            r3 = 7
            java.lang.String r4 = "am_kllk2"
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L2f
            return r0
        L2f:
            r0 = 3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "market://details?id="
            r3.append(r4)
            r3.append(r7)
            java.lang.String r3 = r3.toString()
            df(r6, r2, r1, r0, r3)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r4)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            android.net.Uri r6 = android.net.Uri.parse(r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r5 = rg(r5, r6)
            return r5
    }

    static boolean q(android.content.Context r4, java.lang.String r5) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            android.net.Uri r1 = android.net.Uri.parse(r5)     // Catch: java.lang.Throwable -> L26
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L26
            r2.setData(r1)     // Catch: java.lang.Throwable -> L26
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r1)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "open_url"
            r2.putExtra(r1, r5)     // Catch: java.lang.Throwable -> L26
            java.lang.String r5 = "start_only_for_android"
            r1 = 1
            r2.putExtra(r5, r1)     // Catch: java.lang.Throwable -> L26
            r4.startActivity(r2)     // Catch: java.lang.Throwable -> L26
            return r1
        L26:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public static android.net.Uri rg(com.ss.android.downloadlib.addownload.model.pp r6) {
            java.lang.String r0 = r6.pp()
            android.net.Uri$Builder r1 = new android.net.Uri$Builder
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            org.json.JSONObject r3 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r4 = "s"
            java.lang.String r4 = r3.optString(r4)
            java.lang.String r5 = "bl"
            java.lang.String r3 = r3.optString(r5)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r3, r4)
            java.lang.String r4 = "market"
            android.net.Uri$Builder r4 = r1.scheme(r4)
            java.lang.String r5 = "details"
            android.net.Uri$Builder r4 = r4.authority(r5)
            java.lang.String r5 = "id"
            r4.appendQueryParameter(r5, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L3c
            r1.appendPath(r3)
        L3c:
            android.net.Uri r0 = r1.build()
            r1 = -1
            r3 = 6
            java.lang.String r4 = r0.toString()
            df(r6, r2, r1, r3, r4)
            return r0
    }

    public static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(android.content.Context r3, android.net.Uri r4) {
            r0 = 6
            if (r3 == 0) goto L8c
            if (r4 == 0) goto L8c
            java.lang.String r1 = r4.getScheme()
            java.lang.String r2 = "market"
            boolean r1 = r2.equals(r1)
            if (r1 != 0) goto L13
            goto L8c
        L13:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.<init>(r2, r4)     // Catch: java.lang.Exception -> L84
            boolean r4 = com.ss.android.downloadlib.utils.b.rg(r3, r1)     // Catch: java.lang.Exception -> L84
            if (r4 != 0) goto L28
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult     // Catch: java.lang.Exception -> L84
            r4 = 13
            r3.<init>(r0, r4)     // Catch: java.lang.Exception -> L84
            return r3
        L28:
            java.lang.String r4 = com.ss.android.socialbase.appdownloader.c.pt.rz()     // Catch: java.lang.Exception -> L84
            boolean r2 = com.ss.android.downloadlib.utils.b.pt(r3, r4)     // Catch: java.lang.Exception -> L84
            if (r2 == 0) goto L3b
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.c()     // Catch: java.lang.Exception -> L84
            if (r2 != 0) goto L3b
            r1.setPackage(r4)     // Catch: java.lang.Exception -> L84
        L3b:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = "fix_jump_market"
            boolean r4 = r4.optBugFix(r2)     // Catch: java.lang.Exception -> L84
            if (r4 == 0) goto L4d
            r4 = 335544320(0x14000000, float:6.4623485E-27)
            r1.addFlags(r4)     // Catch: java.lang.Exception -> L84
            goto L56
        L4d:
            boolean r4 = r3 instanceof android.app.Activity     // Catch: java.lang.Exception -> L84
            if (r4 != 0) goto L56
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r4)     // Catch: java.lang.Exception -> L84
        L56:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = "test_jump_market_failed"
            int r4 = r4.optInt(r2)     // Catch: java.lang.Exception -> L84
            r2 = 1
            if (r4 != r2) goto L75
            com.ss.android.downloadlib.exception.q r3 = com.ss.android.downloadlib.exception.q.rg()     // Catch: java.lang.Exception -> L84
            r4 = 0
            java.lang.String r1 = "jump market error"
            r3.rg(r4, r1)     // Catch: java.lang.Exception -> L84
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult     // Catch: java.lang.Exception -> L84
            r4 = 25
            r3.<init>(r0, r4)     // Catch: java.lang.Exception -> L84
            return r3
        L75:
            java.lang.String r4 = "start_only_for_android"
            r1.putExtra(r4, r2)     // Catch: java.lang.Exception -> L84
            r3.startActivity(r1)     // Catch: java.lang.Exception -> L84
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult     // Catch: java.lang.Exception -> L84
            r4 = 5
            r3.<init>(r4)     // Catch: java.lang.Exception -> L84
            return r3
        L84:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 14
            r3.<init>(r0, r4)
            return r3
        L8c:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r4 = 12
            r3.<init>(r0, r4)
            return r3
    }

    public static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(android.content.Context r4, com.ss.android.downloadlib.addownload.model.pp r5, java.lang.String r6) {
            if (r4 == 0) goto Le1
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto La
            goto Le1
        La:
            boolean r0 = com.ss.android.socialbase.appdownloader.c.pt.c()
            if (r0 == 0) goto L1d
            java.lang.String r0 = "com.sec.android.app.samsungapps"
            boolean r0 = com.ss.android.downloadlib.utils.b.pt(r4, r0)
            if (r0 == 0) goto L1d
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = pt(r4, r6)
            return r4
        L1d:
            com.ss.android.download.api.download.DownloadModel r0 = r5.df
            boolean r0 = r0.isAd()
            java.lang.String r1 = "market://details?id="
            if (r0 == 0) goto Lc9
            com.ss.android.download.api.download.DownloadController r0 = r5.pt
            boolean r0 = r0.enableAM()
            if (r0 != 0) goto L31
            goto Lc9
        L31:
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "am_plans"
            org.json.JSONArray r0 = r0.optJSONArray(r2)
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.df()
            r3 = 7
            if (r2 == 0) goto L55
            java.lang.String r2 = "am_0"
            boolean r2 = com.ss.android.socialbase.appdownloader.c.rg.rg(r0, r2)
            if (r2 == 0) goto L55
            df(r4, r5, r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            java.lang.String r5 = "am_m1"
            r4.<init>(r3, r5)
            return r4
        L55:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.pt()
            if (r2 == 0) goto L68
            java.lang.String r2 = "am_3"
            boolean r2 = com.ss.android.socialbase.appdownloader.c.rg.rg(r0, r2)
            if (r2 == 0) goto L68
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = q(r4, r5, r6)
            return r4
        L68:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.pp()
            if (r2 == 0) goto L81
            java.lang.String r2 = "am_2"
            boolean r2 = com.ss.android.socialbase.appdownloader.c.rg.rg(r0, r2)
            if (r2 == 0) goto L81
            pt(r4, r5, r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            java.lang.String r5 = "am_m2"
            r4.<init>(r3, r5)
            return r4
        L81:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.df()
            if (r2 == 0) goto L98
            java.lang.String r2 = "am_6"
            boolean r2 = com.ss.android.socialbase.appdownloader.c.rg.rg(r0, r2)
            if (r2 == 0) goto L98
            android.net.Uri r5 = rg(r5)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = rg(r4, r5)
            return r4
        L98:
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r2 == 0) goto Lb1
            java.lang.String r2 = "am_5"
            boolean r0 = com.ss.android.socialbase.appdownloader.c.rg.rg(r0, r2)
            if (r0 == 0) goto Lb1
            pp(r4, r5, r6)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            java.lang.String r5 = "am_v1"
            r4.<init>(r3, r5)
            return r4
        Lb1:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.net.Uri r5 = android.net.Uri.parse(r5)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = rg(r4, r5)
            return r4
        Lc9:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.net.Uri r5 = android.net.Uri.parse(r5)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = rg(r4, r5)
            return r4
        Le1:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r4 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r5 = 6
            r6 = 11
            r4.<init>(r5, r6)
            return r4
    }

    public static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(android.content.Context r2, java.lang.String r3) {
            if (r2 == 0) goto L36
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            goto L36
        L9:
            boolean r0 = com.ss.android.socialbase.appdownloader.c.pt.c()
            if (r0 == 0) goto L1c
            java.lang.String r0 = "com.sec.android.app.samsungapps"
            boolean r0 = com.ss.android.downloadlib.utils.b.pt(r2, r0)
            if (r0 == 0) goto L1c
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = pt(r2, r3)
            return r2
        L1c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "market://details?id="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.net.Uri r3 = android.net.Uri.parse(r3)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = rg(r2, r3)
            return r2
        L36:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r2 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r3 = 6
            r0 = 11
            r2.<init>(r3, r0)
            return r2
    }

    static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(android.content.Context r6, java.lang.String r7, com.ss.android.downloadad.api.rg.rg r8) {
            android.content.Intent r0 = com.ss.android.downloadlib.utils.b.c(r6, r7)
            r1 = 4
            if (r0 != 0) goto Lf
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r7 = 22
            r6.<init>(r1, r7)
            return r6
        Lf:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            r4 = 3
            r5 = 1
            if (r2 < r3) goto L42
            org.json.JSONObject r2 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r3 = "open_package_mode"
            int r2 = r2.optInt(r3)
            if (r2 != r5) goto L42
            com.ss.android.download.api.config.df r2 = com.ss.android.downloadlib.addownload.bm.b()
            if (r2 == 0) goto L42
            com.ss.android.download.api.config.df r2 = com.ss.android.downloadlib.addownload.bm.b()
            boolean r2 = r2.rg()
            if (r2 == 0) goto L42
            boolean r2 = r8.z()
            if (r2 == 0) goto L42
            com.ss.android.downloadlib.activity.TTDelegateActivity.df(r7, r8)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r6.<init>(r4)
            return r6
        L42:
            java.lang.String r7 = "start_only_for_android"
            r0.putExtra(r7, r5)
            r6.startActivity(r0)     // Catch: java.lang.Exception -> L50
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r6.<init>(r4)
            return r6
        L50:
            com.ss.android.downloadlib.addownload.model.OpenAppResult r6 = new com.ss.android.downloadlib.addownload.model.OpenAppResult
            r7 = 23
            r6.<init>(r1, r7)
            return r6
    }

    static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(com.ss.android.downloadad.api.rg.df r2, java.lang.String r3, java.lang.String r4) {
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = df(r3, r2)
            boolean r0 = com.ss.android.downloadlib.df.c.rg(r2)
            if (r0 != 0) goto Lb
            return r3
        Lb:
            int r0 = r3.getType()
            r1 = 2
            if (r0 != r1) goto L16
            com.ss.android.downloadlib.addownload.model.OpenAppResult r3 = rg(r4, r2)
        L16:
            return r3
    }

    static com.ss.android.downloadlib.addownload.model.OpenAppResult rg(java.lang.String r1, com.ss.android.downloadad.api.rg.rg r2) {
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.addownload.model.OpenAppResult r1 = rg(r0, r1, r2)
            return r1
    }

    private static java.lang.String rg(java.lang.String r2, org.json.JSONObject r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "g"
            java.lang.String r0 = r3.optString(r0)
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r0, r4)
            java.lang.String r1 = "h"
            java.lang.String r3 = r3.optString(r1)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r3, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 != 0) goto L2c
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L2c
            java.lang.String r2 = r2.replace(r0, r3)
        L2c:
            return r2
    }

    public static void rg(android.app.Activity r5, java.lang.String r6, long r7, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "market://details?id="
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L8
            r1.<init>(r10)     // Catch: org.json.JSONException -> L8
            goto Ld
        L8:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
        Ld:
            com.ss.android.downloadlib.addownload.model.c r10 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r7 = r10.pp(r7)
            r8 = 5
            r10 = 1
            org.json.JSONObject r2 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> L99
            java.lang.String r3 = "s"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Exception -> L99
            java.lang.String r4 = "bg"
            java.lang.String r4 = r2.optString(r4)     // Catch: java.lang.Exception -> L99
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r4, r3)     // Catch: java.lang.Exception -> L99
            boolean r2 = com.ss.android.socialbase.appdownloader.c.rg.rg(r2, r5, r3)     // Catch: java.lang.Exception -> L99
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L99
            r3.<init>(r9)     // Catch: java.lang.Exception -> L99
            java.util.HashMap r9 = com.ss.android.downloadlib.utils.b.df(r3)     // Catch: java.lang.Exception -> L99
            if (r2 == 0) goto L5f
            boolean r3 = r9.isEmpty()     // Catch: java.lang.Exception -> L99
            if (r3 != 0) goto L5f
            boolean r3 = rg(r5, r6, r9)     // Catch: java.lang.Exception -> L99
            if (r3 == 0) goto L5f
            r5 = -1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r9.<init>()     // Catch: java.lang.Exception -> L99
            r9.append(r0)     // Catch: java.lang.Exception -> L99
            r9.append(r6)     // Catch: java.lang.Exception -> L99
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L99
            df(r7, r1, r5, r8, r9)     // Catch: java.lang.Exception -> L99
            java.lang.String r5 = "am_v1"
            com.ss.android.downloadlib.df.rg.rg(r5, r1, r7, r10)     // Catch: java.lang.Exception -> L99
            goto Lca
        L5f:
            if (r2 == 0) goto L6b
            boolean r9 = r9.isEmpty()     // Catch: java.lang.Exception -> L99
            if (r9 == 0) goto L69
            r9 = r10
            goto L6c
        L69:
            r9 = 2
            goto L6c
        L6b:
            r9 = 3
        L6c:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r2.<init>()     // Catch: java.lang.Exception -> L99
            r2.append(r0)     // Catch: java.lang.Exception -> L99
            r2.append(r6)     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L99
            df(r7, r1, r9, r8, r2)     // Catch: java.lang.Exception -> L99
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r9.<init>()     // Catch: java.lang.Exception -> L99
            r9.append(r0)     // Catch: java.lang.Exception -> L99
            r9.append(r6)     // Catch: java.lang.Exception -> L99
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L99
            android.net.Uri r9 = android.net.Uri.parse(r9)     // Catch: java.lang.Exception -> L99
            com.ss.android.downloadlib.addownload.model.OpenAppResult r5 = rg(r5, r9)     // Catch: java.lang.Exception -> L99
            com.ss.android.downloadlib.df.rg.rg(r5, r7, r10)     // Catch: java.lang.Exception -> L99
            goto Lca
        L99:
            android.content.Context r5 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r0)
            r9.append(r6)
            java.lang.String r9 = r9.toString()
            android.net.Uri r9 = android.net.Uri.parse(r9)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r5 = rg(r5, r9)
            com.ss.android.downloadlib.df.rg.rg(r5, r7, r10)
            r5 = 4
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r0)
            r9.append(r6)
            java.lang.String r6 = r9.toString()
            df(r7, r1, r5, r8, r6)
        Lca:
            return
    }

    public static void rg(android.content.Context r16, java.lang.String r17, long r18, boolean r20) {
            r0 = r16
            r1 = r17
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            com.ss.android.downloadlib.addownload.model.c r3 = com.ss.android.downloadlib.addownload.model.c.rg()
            r4 = r18
            com.ss.android.downloadlib.addownload.model.pp r3 = r3.pp(r4)
            r4 = 2
            r5 = 1
            r6 = 3
            org.json.JSONObject r7 = com.ss.android.downloadlib.addownload.bm.rz()     // Catch: java.lang.Exception -> Lba
            java.lang.String r8 = "s"
            java.lang.String r8 = r7.optString(r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r9 = "aa"
            java.lang.String r9 = r7.optString(r9)     // Catch: java.lang.Exception -> Lba
            java.lang.String r9 = com.ss.android.socialbase.appdownloader.c.q.rg(r9, r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r10 = "ac"
            java.lang.String r10 = r7.optString(r10)     // Catch: java.lang.Exception -> Lba
            java.lang.String r10 = com.ss.android.socialbase.appdownloader.c.q.rg(r10, r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r11 = "af"
            java.lang.String r11 = r7.optString(r11)     // Catch: java.lang.Exception -> Lba
            java.lang.String r11 = com.ss.android.socialbase.appdownloader.c.q.rg(r11, r8)     // Catch: java.lang.Exception -> Lba
            boolean r12 = com.ss.android.socialbase.appdownloader.c.rg.rg(r7, r0, r10)     // Catch: java.lang.Exception -> Lba
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            java.lang.Object[] r14 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lba
            r15 = 0
            r14[r15] = r1     // Catch: java.lang.Exception -> Lba
            r14[r5] = r11     // Catch: java.lang.Exception -> Lba
            r14[r4] = r10     // Catch: java.lang.Exception -> Lba
            java.lang.String r9 = java.lang.String.format(r9, r14)     // Catch: java.lang.Exception -> Lba
            r13.<init>(r9)     // Catch: java.lang.Exception -> Lba
            android.content.Intent r9 = new android.content.Intent     // Catch: java.lang.Exception -> Lba
            java.lang.String r10 = "android.intent.action.VIEW"
            r9.<init>(r10)     // Catch: java.lang.Exception -> Lba
            java.lang.String r10 = com.ss.android.socialbase.appdownloader.c.pt.rz()     // Catch: java.lang.Exception -> Lba
            boolean r11 = com.ss.android.downloadlib.utils.b.pt(r0, r10)     // Catch: java.lang.Exception -> Lba
            if (r11 == 0) goto L68
            r9.setPackage(r10)     // Catch: java.lang.Exception -> Lba
        L68:
            if (r20 == 0) goto L78
            java.lang.String r10 = "ae"
            java.lang.String r7 = r7.optString(r10)     // Catch: java.lang.Exception -> Lba
            java.lang.String r7 = com.ss.android.socialbase.appdownloader.c.q.rg(r7, r8)     // Catch: java.lang.Exception -> Lba
            r13.append(r7)     // Catch: java.lang.Exception -> Lba
            goto L7d
        L78:
            r7 = 335544320(0x14000000, float:6.4623485E-27)
            r9.addFlags(r7)     // Catch: java.lang.Exception -> Lba
        L7d:
            java.lang.String r7 = "mf"
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r12)     // Catch: java.lang.Exception -> Lba
            com.ss.android.downloadlib.utils.b.rg(r2, r7, r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r7 = "if"
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r20)     // Catch: java.lang.Exception -> Lba
            com.ss.android.downloadlib.utils.b.rg(r2, r7, r8)     // Catch: java.lang.Exception -> Lba
            java.lang.String r7 = r13.toString()     // Catch: java.lang.Exception -> Lba
            android.net.Uri r7 = android.net.Uri.parse(r7)     // Catch: java.lang.Exception -> Lba
            r9.setData(r7)     // Catch: java.lang.Exception -> Lba
            java.lang.String r7 = "start_only_for_android"
            r9.putExtra(r7, r5)     // Catch: java.lang.Exception -> Lba
            r0.startActivity(r9)     // Catch: java.lang.Exception -> Lba
            java.lang.String r0 = "am_kllk2"
            com.ss.android.downloadlib.df.rg.rg(r0, r2, r3, r5)     // Catch: java.lang.Exception -> Lba
            if (r12 == 0) goto Lb2
            r0 = -1
            java.lang.String r7 = r13.toString()     // Catch: java.lang.Exception -> Lba
            df(r3, r2, r0, r6, r7)     // Catch: java.lang.Exception -> Lba
            goto Lec
        Lb2:
            java.lang.String r0 = r13.toString()     // Catch: java.lang.Exception -> Lba
            df(r3, r2, r6, r6, r0)     // Catch: java.lang.Exception -> Lba
            goto Lec
        Lba:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "market://details?id="
            r7.append(r8)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            android.net.Uri r7 = android.net.Uri.parse(r7)
            com.ss.android.downloadlib.addownload.model.OpenAppResult r0 = rg(r0, r7)
            com.ss.android.downloadlib.df.rg.rg(r0, r3, r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            df(r3, r2, r4, r6, r0)
        Lec:
            return
    }

    static void rg(android.content.Context r0, java.lang.String r1, java.lang.String r2, com.ss.android.downloadlib.addownload.model.pp r3, org.json.JSONObject r4) {
            df(r0, r1, r2, r3, r4)
            return
    }

    static void rg(android.content.Context r0, java.lang.String r1, java.lang.String r2, com.ss.android.downloadlib.addownload.model.pp r3, org.json.JSONObject r4, org.json.JSONObject r5, java.lang.String r6) {
            df(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    static void rg(com.ss.android.downloadlib.addownload.model.pp r0, org.json.JSONObject r1, int r2, int r3, java.lang.String r4) {
            df(r0, r1, r2, r3, r4)
            return
    }

    private static boolean rg(android.app.Activity r3, java.lang.String r4, java.util.HashMap<java.lang.String, java.lang.String> r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "market://details?id="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0.setData(r4)
            r4 = 1
            java.lang.String r1 = "start_only_for_android"
            r0.putExtra(r1, r4)
            java.lang.String r1 = "param"
            r0.putExtra(r1, r5)
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.c.pt.rz()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r1 = com.ss.android.downloadlib.utils.b.pt(r1, r5)
            if (r1 == 0) goto L3b
            r0.setPackage(r5)
        L3b:
            android.content.Context r5 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r5 = com.ss.android.downloadlib.utils.b.rg(r5, r0)
            if (r5 == 0) goto L53
            r3.startActivity(r0)     // Catch: java.lang.Exception -> L49
            return r4
        L49:
            r3 = move-exception
            com.ss.android.downloadlib.exception.q r4 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r5 = "start v1"
            r4.rg(r3, r5)
        L53:
            r3 = 0
            return r3
    }
}
