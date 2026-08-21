package com.huawei.hms.availableupdate;

public class y extends com.huawei.hms.availableupdate.q {
    public android.widget.ProgressBar c;
    public android.widget.TextView d;
    public int e;
    public android.content.DialogInterface.OnKeyListener f;

    public static class a {
    }

    public static class b implements android.content.DialogInterface.OnKeyListener {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public b(com.huawei.hms.availableupdate.y.a r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean onKey(android.content.DialogInterface r1, int r2, android.view.KeyEvent r3) {
                r0 = this;
                r1 = 4
                if (r2 != r1) goto Lb
                int r1 = r3.getRepeatCount()
                if (r1 != 0) goto Lb
                r1 = 1
                goto Lc
            Lb:
                r1 = 0
            Lc:
                return r1
        }
    }

    public y() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.e = r0
            com.huawei.hms.availableupdate.y$b r0 = new com.huawei.hms.availableupdate.y$b
            r1 = 0
            r0.<init>(r1)
            r2.f = r0
            return
    }

    public void a(int r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void b(int r4) {
            r3 = this;
            android.app.Activity r0 = r3.e()
            if (r0 == 0) goto L2c
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto Ld
            goto L2c
        Ld:
            android.widget.TextView r0 = r3.d
            if (r0 == 0) goto L2b
            android.widget.ProgressBar r0 = r3.c
            if (r0 != 0) goto L16
            goto L2b
        L16:
            r0.setProgress(r4)
            java.text.NumberFormat r0 = java.text.NumberFormat.getPercentInstance()
            float r4 = (float) r4
            r1 = 1120403456(0x42c80000, float:100.0)
            float r4 = r4 / r1
            double r1 = (double) r4
            java.lang.String r4 = r0.format(r1)
            android.widget.TextView r0 = r3.d
            r0.setText(r4)
        L2b:
            return
        L2c:
            java.lang.String r4 = "DownloadProgress"
            java.lang.String r0 = "In setDownloading, The activity is null or finishing."
            com.huawei.hms.support.log.HMSLog.w(r4, r0)
            return
    }

    @Override
    public android.app.AlertDialog g() {
            r4 = this;
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.app.Activity r1 = r4.e()
            int r2 = r4.f()
            r0.<init>(r1, r2)
            android.app.Activity r1 = r4.e()
            java.lang.String r2 = "hms_download_progress"
            int r2 = com.huawei.hms.utils.ResourceLoaderUtil.getLayoutId(r2)
            r3 = 0
            android.view.View r1 = android.view.View.inflate(r1, r2, r3)
            r0.setView(r1)
            r2 = 0
            r0.setCancelable(r2)
            android.content.DialogInterface$OnKeyListener r2 = r4.f
            r0.setOnKeyListener(r2)
            java.lang.String r2 = "download_info_progress"
            int r2 = com.huawei.hms.utils.ResourceLoaderUtil.getIdId(r2)
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ProgressBar r2 = (android.widget.ProgressBar) r2
            r4.c = r2
            java.lang.String r2 = "hms_progress_text"
            int r2 = com.huawei.hms.utils.ResourceLoaderUtil.getIdId(r2)
            android.view.View r1 = r1.findViewById(r2)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r4.d = r1
            int r1 = r4.e
            r4.b(r1)
            android.app.AlertDialog r0 = r0.create()
            return r0
    }
}
