package com.ss.android.socialbase.appdownloader.rg;

public class hq extends com.ss.android.socialbase.appdownloader.rg.rg {
    public hq(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public android.content.Intent df() {
            r6 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = r6.df
            java.lang.String r1 = "s"
            java.lang.String r0 = r0.optString(r1)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = r6.df
            java.lang.String r2 = "ag"
            java.lang.String r1 = r1.optString(r2)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.c.q.rg(r1, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = r6.df
            java.lang.String r3 = "ah"
            java.lang.String r2 = r2.optString(r3)
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.q.rg(r2, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = r6.df
            java.lang.String r4 = "ai"
            java.lang.String r3 = r3.optString(r4)
            java.lang.String r3 = com.ss.android.socialbase.appdownloader.c.q.rg(r3, r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = r6.df
            java.lang.String r5 = "aj"
            java.lang.String r4 = r4.optString(r5)
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.c.q.rg(r4, r0)
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            java.lang.String r5 = r6.q
            r4.putExtra(r1, r5)
            java.lang.String r1 = "*/*"
            r4.putExtra(r2, r1)
            r1 = 1
            r4.putExtra(r3, r1)
            r4.setAction(r0)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r4.addFlags(r0)
            r0 = 32768(0x8000, float:4.5918E-41)
            r4.addFlags(r0)
            return r4
    }
}
