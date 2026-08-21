package com.ss.android.downloadlib.addownload;

public class ux {
    public static boolean df(int r2) {
            r0 = 1
            r1 = 2
            if (r2 == r1) goto L8
            if (r2 != r0) goto L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public static boolean df(com.ss.android.download.api.download.DownloadModel r1) {
            if (r1 == 0) goto Lb
            int r1 = r1.getModelType()
            r0 = 2
            if (r1 != r0) goto Lb
            r1 = 1
            goto Lc
        Lb:
            r1 = 0
        Lc:
            return r1
    }

    public static int rg(com.ss.android.downloadlib.addownload.model.pp r10, boolean r11, com.ss.android.socialbase.appdownloader.c r12) {
            if (r12 == 0) goto Lad
            java.lang.String r0 = r12.rg()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lad
            android.content.Context r0 = r12.getContext()
            if (r0 != 0) goto L14
            goto Lad
        L14:
            java.lang.String r0 = r12.rg()     // Catch: java.lang.Throwable -> L1d
            int r0 = rg(r12, r0)     // Catch: java.lang.Throwable -> L1d
            goto L28
        L1d:
            r0 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "redirectSavePathIfPossible"
            r1.rg(r0, r2)
            r0 = 4
        L28:
            r12.rg(r0)
            if (r0 != 0) goto L35
            com.ss.android.downloadlib.q.rg r0 = new com.ss.android.downloadlib.q.rg
            r0.<init>()
            r12.rg(r0)
        L35:
            boolean r0 = r12.ey()
            if (r0 != 0) goto L43
            com.ss.android.downloadlib.q.df r0 = new com.ss.android.downloadlib.q.df
            r0.<init>()
            r12.rg(r0)
        L43:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            int r0 = r0.rg(r12)
            com.ss.android.downloadad.api.rg.df r1 = rg(r10, r0)
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()
            r2.rg(r1)
            r1.fw(r0)
            long r2 = java.lang.System.currentTimeMillis()
            r1.ux(r2)
            r2 = 0
            r1.rz(r2)
            org.json.JSONObject r1 = r12.vd()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            boolean r2 = rg(r12, r1, r0)
            if (r2 != 0) goto Lac
            com.ss.android.download.api.download.DownloadModel r2 = r10.df
            boolean r2 = r2.isShowToast()
            if (r2 == 0) goto Lac
            com.ss.android.download.api.download.DownloadModel r2 = r10.df
            java.lang.String r2 = r2.getStartToast()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L8d
            java.lang.String r2 = "download_start_toast_text"
            java.lang.String r2 = r1.optString(r2)
        L8d:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto L9b
            if (r11 == 0) goto L98
            java.lang.String r11 = "已开始下载，可在\"我的\"里查看管理"
            goto L9a
        L98:
            java.lang.String r11 = "已开始下载"
        L9a:
            r2 = r11
        L9b:
            r7 = r2
            com.ss.android.download.api.config.hq r3 = com.ss.android.downloadlib.addownload.bm.q()
            r4 = 2
            android.content.Context r5 = r12.getContext()
            com.ss.android.download.api.download.DownloadModel r6 = r10.df
            r8 = 0
            r9 = 0
            r3.rg(r4, r5, r6, r7, r8, r9)
        Lac:
            return r0
        Lad:
            r10 = 0
            return r10
    }

    private static int rg(com.ss.android.socialbase.appdownloader.c r5, java.lang.String r6) {
            org.json.JSONObject r0 = r5.vd()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "download_dir"
            org.json.JSONObject r1 = r0.optJSONObject(r1)
            if (r1 == 0) goto Lc4
            java.lang.String r2 = "dir_name"
            java.lang.String r1 = r1.optString(r2)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1e
            goto Lc4
        L1e:
            java.lang.String r1 = r5.df()
            java.lang.String r2 = r5.cd()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L35
            java.lang.String r2 = r5.hq()
            r3 = 1
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r6, r1, r2, r3)
        L35:
            int r3 = r2.length()
            r4 = 255(0xff, float:3.57E-43)
            if (r3 <= r4) goto L46
            int r3 = r2.length()
            int r3 = r3 - r4
            java.lang.String r2 = r2.substring(r3)
        L46:
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L4d
            r1 = r2
        L4d:
            java.lang.String r3 = r5.q()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto L5b
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.q.df()
        L5b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = java.io.File.separator
            r4.append(r3)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.q.rg(r1, r0)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            com.ss.android.socialbase.appdownloader.pt r3 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r4 = r5.getContext()
            com.ss.android.socialbase.downloader.model.DownloadInfo r6 = r3.rg(r4, r6)
            if (r6 == 0) goto L9c
            boolean r3 = r6.isSavePathRedirected()
            if (r3 == 0) goto L9c
            r0 = 0
            java.lang.String r1 = r6.getSavePath()
            r5.q(r1)
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc3
            java.lang.String r6 = r6.getDownloadSettingString()     // Catch: java.lang.Throwable -> Lc3
            r1.<init>(r6)     // Catch: java.lang.Throwable -> Lc3
            r5.rg(r1)     // Catch: java.lang.Throwable -> Lc3
            goto Lc3
        L9c:
            if (r6 != 0) goto Lbc
            com.ss.android.socialbase.appdownloader.pt r3 = com.ss.android.socialbase.appdownloader.pt.bm()
            java.lang.String r4 = r5.hq()
            java.lang.String r2 = r3.rg(r2, r4)
            java.lang.String r3 = "application/vnd.android.package-archive"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 == 0) goto Lbc
            int r0 = com.ss.android.socialbase.appdownloader.df.rg(r0)
            if (r0 != 0) goto Lc3
            r5.q(r1)
            goto Lc3
        Lbc:
            if (r6 == 0) goto Lc1
            r0 = 8
            goto Lc3
        Lc1:
            r0 = 9
        Lc3:
            return r0
        Lc4:
            r5 = -1
            return r5
    }

    private static com.ss.android.downloadad.api.rg.df rg(com.ss.android.downloadlib.addownload.model.pp r4, int r5) {
            com.ss.android.downloadad.api.rg.df r0 = new com.ss.android.downloadad.api.rg.df
            com.ss.android.download.api.download.DownloadModel r1 = r4.df
            com.ss.android.download.api.download.DownloadEventConfig r2 = r4.q
            com.ss.android.download.api.download.DownloadController r3 = r4.pt
            r0.<init>(r1, r2, r3, r5)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            r1 = 1
            java.lang.String r2 = "download_event_opt"
            int r5 = r5.optInt(r2, r1)
            if (r5 <= r1) goto L38
            com.ss.android.download.api.download.DownloadModel r4 = r4.df     // Catch: java.lang.Throwable -> L38
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L38
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L38
            if (r5 != 0) goto L38
            android.content.Context r5 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> L38
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L38
            r2 = 0
            android.content.pm.PackageInfo r4 = r5.getPackageInfo(r4, r2)     // Catch: java.lang.Throwable -> L38
            if (r4 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            r0.ux(r1)     // Catch: java.lang.Throwable -> L38
        L38:
            return r0
    }

    public static java.lang.String rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r2 = r2.getExtra()     // Catch: java.lang.Exception -> L1a
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1a
            if (r1 != 0) goto L1e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1a
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "notification_jump_url"
            java.lang.String r2 = r1.optString(r2, r0)     // Catch: java.lang.Exception -> L1a
            return r2
        L1a:
            r2 = move-exception
            r2.printStackTrace()
        L1e:
            return r0
    }

    public static boolean rg(int r1) {
            r0 = 1
            if (r1 == 0) goto L7
            if (r1 != r0) goto L6
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public static boolean rg(com.ss.android.download.api.download.DownloadModel r2) {
            boolean r0 = r2.isAd()
            r1 = 1
            if (r0 == 0) goto L12
            boolean r0 = r2 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r0 == 0) goto L12
            int r2 = r2.getModelType()
            if (r2 != r1) goto L12
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static boolean rg(com.ss.android.download.api.download.DownloadModel r0, com.ss.android.download.api.config.IDownloadButtonClickListener r1) {
            boolean r0 = r0.isAd()
            if (r0 == 0) goto La
            if (r1 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    private static boolean rg(com.ss.android.socialbase.appdownloader.c r11, com.ss.android.socialbase.downloader.setting.DownloadSetting r12, int r13) {
            java.lang.String r11 = "ah_plans"
            org.json.JSONArray r11 = r12.optJSONArray(r11)
            r0 = 0
            if (r11 == 0) goto Lc1
            int r1 = r11.length()
            if (r1 != 0) goto L11
            goto Lc1
        L11:
            int r1 = r11.length()
            r2 = 0
            r3 = r0
            r4 = r2
        L18:
            r5 = 1
            if (r3 >= r1) goto La5
            org.json.JSONObject r6 = r11.optJSONObject(r3)
            if (r6 == 0) goto La1
            java.lang.String r7 = "type"
            java.lang.String r7 = r6.optString(r7)
            java.lang.String r8 = "plan_c"
            if (r7 == r8) goto L33
            boolean r9 = com.ss.android.socialbase.appdownloader.c.rg.rg(r6)
            if (r9 != 0) goto L33
            goto La1
        L33:
            r9 = -1
            int r10 = r7.hashCode()
            switch(r10) {
                case -985763637: goto L80;
                case -985763636: goto L76;
                case -985763635: goto L6e;
                case -985763634: goto L64;
                case -985763633: goto L5a;
                case -985763632: goto L50;
                case -985763631: goto L46;
                case -985763630: goto L3c;
                default: goto L3b;
            }
        L3b:
            goto L89
        L3c:
            java.lang.String r8 = "plan_h"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 5
            goto L89
        L46:
            java.lang.String r8 = "plan_g"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 6
            goto L89
        L50:
            java.lang.String r8 = "plan_f"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 3
            goto L89
        L5a:
            java.lang.String r8 = "plan_e"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 2
            goto L89
        L64:
            java.lang.String r8 = "plan_d"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 4
            goto L89
        L6e:
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = 7
            goto L89
        L76:
            java.lang.String r8 = "plan_b"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = r5
            goto L89
        L80:
            java.lang.String r8 = "plan_a"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L89
            r9 = r0
        L89:
            switch(r9) {
                case 0: goto L98;
                case 1: goto L98;
                case 2: goto L98;
                case 3: goto L98;
                case 4: goto La5;
                case 5: goto La5;
                case 6: goto L8f;
                case 7: goto L8d;
                default: goto L8c;
            }
        L8c:
            goto La1
        L8d:
            r4 = r6
            goto La1
        L8f:
            com.ss.android.socialbase.appdownloader.rg r6 = com.ss.android.socialbase.appdownloader.df.df(r6, r12)
            int r6 = r6.df
            if (r6 != 0) goto La1
            goto La5
        L98:
            com.ss.android.socialbase.appdownloader.rg r6 = com.ss.android.socialbase.appdownloader.df.rg(r6, r12)
            int r6 = r6.df
            if (r6 != 0) goto La1
            goto La5
        La1:
            int r3 = r3 + 1
            goto L18
        La5:
            if (r4 == 0) goto Lc1
            java.lang.String r11 = "show_unknown_source_on_startup"
            int r11 = r4.optInt(r11)
            if (r11 != r5) goto Lb0
            goto Lb1
        Lb0:
            r5 = r0
        Lb1:
            if (r5 == 0) goto Lc1
            android.content.Context r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.appdownloader.rg r12 = new com.ss.android.socialbase.appdownloader.rg
            r12.<init>()
            boolean r11 = com.ss.android.socialbase.appdownloader.df.rg(r11, r2, r4, r13, r12)
            return r11
        Lc1:
            return r0
    }
}
