package com.ss.android.downloadlib.addownload.q;

public class df implements com.ss.android.downloadlib.addownload.q.pt {
    private static com.ss.android.downloadlib.addownload.rg.q rg;


    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    private int rg(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "pause_optimise_download_percent"
            r1 = 50
            int r3 = r3.optInt(r0, r1)
            return r3
    }

    public static com.ss.android.downloadlib.addownload.rg.q rg() {
            com.ss.android.downloadlib.addownload.rg.q r0 = com.ss.android.downloadlib.addownload.q.df.rg
            return r0
    }

    static com.ss.android.downloadlib.addownload.rg.q rg(com.ss.android.downloadlib.addownload.rg.q r0) {
            com.ss.android.downloadlib.addownload.q.df.rg = r0
            return r0
    }

    private boolean rg(com.ss.android.downloadad.api.rg.rg r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.downloadlib.utils.pt.rg(r4)
            r1 = 0
            java.lang.String r2 = "pause_optimise_download_percent_switch"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L15
            boolean r4 = r4.z()
            if (r4 == 0) goto L15
            r1 = r2
        L15:
            return r1
    }

    @Override
    public boolean rg(com.ss.android.downloadad.api.rg.df r9, int r10, com.ss.android.downloadlib.addownload.q.q r11) {
            r8 = this;
            r10 = 0
            if (r9 != 0) goto L4
            return r10
        L4:
            boolean r0 = r9.vd()
            if (r0 == 0) goto Lb
            return r10
        Lb:
            boolean r0 = r8.rg(r9)
            if (r0 != 0) goto L12
            return r10
        L12:
            r0 = 0
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            java.lang.String r1 = r9.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.df(r1)
            if (r0 != 0) goto L22
            return r10
        L22:
            long r1 = r0.getCurBytes()
            long r3 = r0.getTotalBytes()
            r5 = 0
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 <= 0) goto L71
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto L71
            int r0 = r0.getId()
            r5 = 100
            long r1 = r1 * r5
            long r1 = r1 / r3
            int r1 = (int) r1
            int r0 = com.ss.android.downloadlib.addownload.rz.rg(r0, r1)
            int r1 = r9.qx()
            int r1 = r8.rg(r1)
            r2 = 1
            if (r0 <= r1) goto L4e
            r1 = r2
            goto L4f
        L4e:
            r1 = r10
        L4f:
            if (r1 == 0) goto L71
            com.ss.android.downloadlib.addownload.q.df$1 r1 = new com.ss.android.downloadlib.addownload.q.df$1
            r1.<init>(r8, r9, r11)
            com.ss.android.downloadlib.addownload.q.df.rg = r1
            java.lang.Object[] r11 = new java.lang.Object[r2]
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r11[r10] = r0
            java.lang.String r10 = "已下载%s%%，即将下载完成，是否继续下载？"
            java.lang.String r10 = java.lang.String.format(r10, r11)
            java.lang.String r11 = "继续"
            java.lang.String r0 = "暂停"
            com.ss.android.downloadlib.activity.TTDelegateActivity.df(r9, r10, r11, r0)
            r9.v(r2)
            return r2
        L71:
            return r10
    }
}
