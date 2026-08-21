package com.ss.android.downloadlib.df;

public class pp implements com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener {
    private long rg;


    private static class rg {
        private static com.ss.android.downloadlib.df.pp rg;

        static {
                com.ss.android.downloadlib.df.pp r0 = new com.ss.android.downloadlib.df.pp
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.df.pp.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.df.pp rg() {
                com.ss.android.downloadlib.df.pp r0 = com.ss.android.downloadlib.df.pp.rg.rg
                return r0
        }
    }

    private pp() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.rg = r0
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            r0.registerAppSwitchListener(r2)
            return
    }

    pp(com.ss.android.downloadlib.df.pp.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static long rg(com.ss.android.downloadlib.df.pp r2) {
            long r0 = r2.rg
            return r0
    }

    public static com.ss.android.downloadlib.df.pp rg() {
            com.ss.android.downloadlib.df.pp r0 = com.ss.android.downloadlib.df.pp.rg.rg()
            return r0
    }

    public void df(com.ss.android.downloadlib.df.pt r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 1200(0x4b0, float:1.682E-42)
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r2 = "check_an_result_delay"
            int r1 = r1.optInt(r2, r0)
            if (r1 <= 0) goto L12
            r0 = r1
        L12:
            long r0 = (long) r0
            r3.rg(r4, r0)
            return
    }

    @Override
    public void onAppBackground() {
            r0 = this;
            return
    }

    @Override
    public void onAppForeground() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.rg = r0
            return
    }

    public void rg(com.ss.android.downloadlib.df.pt r3) {
            r2 = this;
            r0 = 5000(0x1388, double:2.4703E-320)
            r2.rg(r3, r0)
            return
    }

    public void rg(com.ss.android.downloadlib.df.pt r3, long r4) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.df.pp$1 r1 = new com.ss.android.downloadlib.df.pp$1
            r1.<init>(r2, r4, r3)
            r0.rg(r1, r4)
            return
    }
}
