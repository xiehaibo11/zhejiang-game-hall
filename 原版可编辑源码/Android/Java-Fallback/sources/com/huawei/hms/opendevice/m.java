package com.huawei.hms.opendevice;

class m extends java.lang.Thread {
    public final android.content.Context a;
    public final java.lang.String b;

    public m(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            boolean r0 = com.huawei.hms.opendevice.p.a()
            java.lang.String r1 = "ReportAaidToken"
            if (r0 != 0) goto Le
            java.lang.String r0 = "Not HW Phone."
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            return
        Le:
            android.content.Context r0 = r6.a
            boolean r0 = com.huawei.hms.opendevice.n.a(r0)
            if (r0 == 0) goto L17
            return
        L17:
            android.content.Context r0 = r6.a
            java.lang.String r0 = com.huawei.hms.opendevice.o.a(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L29
            java.lang.String r0 = "AAID is empty."
            com.huawei.hms.support.log.HMSLog.w(r1, r0)
            return
        L29:
            android.content.Context r2 = r6.a
            java.lang.String r3 = r6.b
            boolean r2 = com.huawei.hms.opendevice.n.a(r2, r0, r3)
            if (r2 != 0) goto L39
            java.lang.String r0 = "This time need not report."
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            return
        L39:
            android.content.Context r2 = r6.a
            com.huawei.agconnect.config.AGConnectServicesConfig r2 = com.huawei.agconnect.config.AGConnectServicesConfig.fromContext(r2)
            java.lang.String r3 = "region"
            java.lang.String r2 = r2.getString(r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L51
            java.lang.String r0 = "The data storage region is empty."
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            return
        L51:
            android.content.Context r1 = r6.a
            r3 = 0
            java.lang.String r4 = "com.huawei.hms.opendevicesdk"
            java.lang.String r5 = "ROOT"
            java.lang.String r1 = com.huawei.hms.opendevice.e.a(r1, r4, r5, r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L63
            return
        L63:
            android.content.Context r2 = r6.a
            java.lang.String r4 = r6.b
            java.lang.String r2 = com.huawei.hms.opendevice.n.b(r2, r0, r4)
            android.content.Context r4 = r6.a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            java.lang.String r1 = "/rest/appdata/v1/aaid/report"
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            java.lang.String r1 = com.huawei.hms.opendevice.d.a(r4, r1, r2, r3)
            android.content.Context r2 = r6.a
            java.lang.String r3 = r6.b
            com.huawei.hms.opendevice.n.a(r2, r1, r0, r3)
            return
    }
}
