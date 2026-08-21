package com.ss.android.socialbase.appdownloader.rg;

public class bm extends com.ss.android.socialbase.appdownloader.rg.rg {
    public bm(android.content.Context r1, com.ss.android.socialbase.downloader.setting.DownloadSetting r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public android.content.Intent df() {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.android.filemanager.FILE_OPEN"
            r0.<init>(r1)
            java.lang.String r1 = r3.q
            java.lang.String r2 = "FilePathToBeOpenAfterScan"
            r0.putExtra(r2, r1)
            r1 = 1
            java.lang.String r2 = "com.iqoo.secure"
            r0.putExtra(r2, r1)
            java.lang.String r2 = "OpenParentAndLocationDestFile"
            r0.putExtra(r2, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            r1 = 32768(0x8000, float:4.5918E-41)
            r0.addFlags(r1)
            r1 = 1073741824(0x40000000, float:2.0)
            r0.addFlags(r1)
            return r0
    }
}
