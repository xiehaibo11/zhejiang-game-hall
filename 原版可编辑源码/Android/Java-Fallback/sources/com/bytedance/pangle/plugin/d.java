package com.bytedance.pangle.plugin;

final class d implements java.lang.Runnable {


    d() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(java.io.File r3) {
            r2 = this;
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "ZeusScanRunnable listPluginDownloadDir, dir = "
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r0)
            com.bytedance.pangle.plugin.d$1 r0 = new com.bytedance.pangle.plugin.d$1
            r0.<init>(r2)
            r3.listFiles(r0)
            return
    }

    @Override
    public final void run() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.bytedance.pangle.d.c.a()
            r0.<init>(r1)
            r2.a(r0)
            java.lang.String r0 = com.bytedance.pangle.d.c.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1e
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            r2.a(r1)
        L1e:
            return
    }
}
