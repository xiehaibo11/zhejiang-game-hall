package com.ss.android.downloadlib.addownload.q;

public class rg implements com.ss.android.downloadlib.addownload.q.pt {
    private static com.ss.android.downloadlib.addownload.rg.q rg;


    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private int rg(int r3) {
            r2 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "pause_optimise_apk_size"
            r1 = 100
            int r3 = r3.optInt(r0, r1)
            int r3 = r3 * 1024
            int r3 = r3 * 1024
            return r3
    }

    public static com.ss.android.downloadlib.addownload.rg.q rg() {
            com.ss.android.downloadlib.addownload.rg.q r0 = com.ss.android.downloadlib.addownload.q.rg.rg
            return r0
    }

    static com.ss.android.downloadlib.addownload.rg.q rg(com.ss.android.downloadlib.addownload.rg.q r0) {
            com.ss.android.downloadlib.addownload.q.rg.rg = r0
            return r0
    }

    private static java.lang.String rg(long r5) {
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r1 = "0.00"
            r0.<init>(r1)
            r1 = 1073741824(0x40000000, double:5.304989477E-315)
            int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r3 < 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r5 = r5 / r1
            r0.append(r5)
            java.lang.String r5 = "G"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            goto L53
        L21:
            r1 = 1048576(0x100000, double:5.180654E-318)
            int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            java.lang.String r4 = "M"
            if (r3 < 0) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r5 = r5 / r1
            r0.append(r5)
            r0.append(r4)
            java.lang.String r5 = r0.toString()
            goto L53
        L3b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            float r5 = (float) r5
            r6 = 1233125376(0x49800000, float:1048576.0)
            float r5 = r5 / r6
            double r5 = (double) r5
            java.lang.String r5 = r0.format(r5)
            r1.append(r5)
            r1.append(r4)
            java.lang.String r5 = r1.toString()
        L53:
            return r5
    }

    private boolean rg(com.ss.android.downloadad.api.rg.rg r4) {
            r3 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.downloadlib.utils.pt.rg(r4)
            r1 = 0
            java.lang.String r2 = "pause_optimise_apk_size_switch"
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
    public boolean rg(com.ss.android.downloadad.api.rg.df r8, int r9, com.ss.android.downloadlib.addownload.q.q r10) {
            r7 = this;
            r9 = 0
            if (r8 != 0) goto L4
            return r9
        L4:
            boolean r0 = r8.t()
            if (r0 == 0) goto Lb
            return r9
        Lb:
            boolean r0 = r7.rg(r8)
            if (r0 != 0) goto L12
            return r9
        L12:
            r0 = 0
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            java.lang.String r1 = r8.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.df(r1)
            if (r0 != 0) goto L22
            return r9
        L22:
            int r1 = r0.getId()
            long r2 = r0.getCurBytes()
            long r4 = r0.getTotalBytes()
            long r1 = com.ss.android.downloadlib.addownload.rz.rg(r1, r2, r4)
            long r3 = r0.getTotalBytes()
            r5 = 0
            int r0 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r0 <= 0) goto L6f
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 <= 0) goto L6f
            int r0 = r8.qx()
            int r0 = r7.rg(r0)
            long r5 = (long) r0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L6f
            com.ss.android.downloadlib.addownload.q.rg$1 r0 = new com.ss.android.downloadlib.addownload.q.rg$1
            r0.<init>(r7, r8, r10)
            com.ss.android.downloadlib.addownload.q.rg.rg = r0
            long r3 = r3 - r1
            java.lang.String r10 = rg(r3)
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r1[r9] = r10
            java.lang.String r9 = "该下载任务仅需%s，即将下载完成，是否继续下载？"
            java.lang.String r9 = java.lang.String.format(r9, r1)
            java.lang.String r10 = "继续"
            java.lang.String r1 = "暂停"
            com.ss.android.downloadlib.activity.TTDelegateActivity.rg(r8, r9, r10, r1)
            r8.f(r0)
            return r0
        L6f:
            return r9
    }
}
