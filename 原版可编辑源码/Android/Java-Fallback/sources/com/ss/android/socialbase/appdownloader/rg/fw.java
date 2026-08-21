package com.ss.android.socialbase.appdownloader.rg;

public class fw extends com.ss.android.socialbase.appdownloader.rg.rg {
    public fw(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public android.content.Intent df() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.ss.android.socialbase.downloader.constants.DownloadConstants.LOWER_OPPO
            r1.append(r2)
            java.lang.String r2 = ".filemanager.intent.action.BROWSER_FILE"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.String r1 = r3.q
            java.lang.String r2 = "CurrentDir"
            r0.putExtra(r2, r1)
            java.lang.String r1 = "CurrentMode"
            r2 = 1
            r0.putExtra(r1, r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            r1 = 32768(0x8000, float:4.5918E-41)
            r0.addFlags(r1)
            r1 = 1073741824(0x40000000, float:2.0)
            r0.addFlags(r1)
            return r0
    }
}
