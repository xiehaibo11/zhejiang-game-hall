package com.ss.android.socialbase.appdownloader.rg;

public class rz extends com.ss.android.socialbase.appdownloader.rg.rg {
    private java.lang.String pp;
    private java.lang.String pt;

    public rz(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.pt = r4
            r0.pp = r5
            return
    }

    @Override
    public android.content.Intent df() {
            r10 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r10.df
            java.lang.String r1 = "s"
            java.lang.String r0 = r0.optString(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r10.df
            java.lang.String r2 = "ak"
            java.lang.String r1 = r1.optString(r2)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.c.q.rg(r1, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = r10.df
            java.lang.String r3 = "am"
            java.lang.String r2 = r2.optString(r3)
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.q.rg(r2, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r10.df
            java.lang.String r4 = "an"
            java.lang.String r3 = r3.optString(r4)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r3, r0)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            r5 = 0
            if (r4 != 0) goto Ld5
            java.lang.String r4 = ","
            java.lang.String[] r6 = r3.split(r4)
            int r6 = r6.length
            r7 = 2
            if (r6 == r7) goto L3f
            goto Ld5
        L3f:
            java.lang.String[] r3 = r3.split(r4)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = r10.df
            java.lang.String r8 = "al"
            java.lang.String r6 = r6.optString(r8)
            java.lang.String r6 = com.ss.android.socialbase.appdownloader.c.q.rg(r6, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = r10.df
            java.lang.String r9 = "ao"
            java.lang.String r8 = r8.optString(r9)
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r8, r0)
            boolean r8 = android.text.TextUtils.isEmpty(r0)
            if (r8 != 0) goto Ld5
            java.lang.String[] r8 = r0.split(r4)
            int r8 = r8.length
            if (r8 == r7) goto L69
            goto Ld5
        L69:
            java.lang.String[] r0 = r0.split(r4)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = r10.df
            java.lang.String r7 = "download_dir"
            org.json.JSONObject r4 = r4.optJSONObject(r7)
            r7 = 1
            r8 = 0
            if (r4 == 0) goto Laf
            java.lang.String r5 = "dir_name"
            java.lang.String r4 = r4.optString(r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L9b
            java.lang.String r5 = "%s"
            boolean r5 = r4.contains(r5)
            if (r5 == 0) goto L9b
            java.lang.Object[] r5 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L98
            java.lang.String r9 = r10.pp     // Catch: java.lang.Throwable -> L98
            r5[r8] = r9     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L98
            goto L9d
        L98:
            java.lang.String r4 = r10.pp
            goto L9d
        L9b:
            java.lang.String r4 = r10.pp
        L9d:
            r5 = r4
            int r4 = r5.length()
            r9 = 255(0xff, float:3.57E-43)
            if (r4 <= r9) goto Laf
            int r4 = r5.length()
            int r4 = r4 - r9
            java.lang.String r5 = r6.substring(r4)
        Laf:
            android.content.Intent r4 = new android.content.Intent
            r4.<init>(r1)
            r1 = r0[r8]
            r0 = r0[r7]
            r4.putExtra(r1, r0)
            java.lang.String r0 = r10.pt
            r4.putExtra(r2, r0)
            r4.putExtra(r6, r5)
            r0 = r3[r8]
            r1 = r3[r7]
            int r1 = java.lang.Integer.parseInt(r1)
            r4.putExtra(r0, r1)
            r0 = 268468224(0x10008000, float:2.5342157E-29)
            r4.addFlags(r0)
            return r4
        Ld5:
            return r5
    }
}
