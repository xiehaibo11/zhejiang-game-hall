package com.huawei.hms.hatool;

public class k1 {
    public com.huawei.hms.hatool.k a;
    public com.huawei.hms.hatool.k b;
    public android.content.Context c;
    public java.lang.String d;

    public k1(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Lb
            android.content.Context r1 = r1.getApplicationContext()
            r0.c = r1
        Lb:
            com.huawei.hms.hatool.k r1 = new com.huawei.hms.hatool.k
            r1.<init>()
            r0.a = r1
            com.huawei.hms.hatool.k r1 = new com.huawei.hms.hatool.k
            r1.<init>()
            r0.b = r1
            return
    }

    public com.huawei.hms.hatool.k1 a(int r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Builder.setCollectURL(int type,String collectURL) is execute.TYPE : "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "hmsSdk"
            com.huawei.hms.hatool.y.c(r1, r0)
            boolean r0 = com.huawei.hms.hatool.t0.b(r4)
            if (r0 != 0) goto L1e
            java.lang.String r4 = ""
        L1e:
            if (r3 == 0) goto L2c
            r0 = 1
            if (r3 == r0) goto L29
            java.lang.String r3 = "Builder.setCollectURL(int type,String collectURL): invalid type!"
            com.huawei.hms.hatool.y.f(r1, r3)
            goto L31
        L29:
            com.huawei.hms.hatool.k r3 = r2.b
            goto L2e
        L2c:
            com.huawei.hms.hatool.k r3 = r2.a
        L2e:
            r3.b(r4)
        L31:
            return r2
    }

    public com.huawei.hms.hatool.k1 a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Builder.setAppID is execute"
            com.huawei.hms.hatool.y.c(r0, r1)
            r2.d = r3
            return r2
    }

    @java.lang.Deprecated
    public com.huawei.hms.hatool.k1 a(boolean r3) {
            r2 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Builder.setEnableImei(boolean isReportAndroidImei) is execute."
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.k r0 = r2.a
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.a(r3)
            com.huawei.hms.hatool.k r0 = r2.b
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.a(r3)
            return r2
    }

    public void a() {
            r3 = this;
            android.content.Context r0 = r3.c
            java.lang.String r1 = "hmsSdk"
            if (r0 != 0) goto Lc
            java.lang.String r0 = "analyticsConf create(): context is null,create failed!"
            com.huawei.hms.hatool.y.b(r1, r0)
            return
        Lc:
            java.lang.String r0 = "Builder.create() is execute."
            com.huawei.hms.hatool.y.c(r1, r0)
            com.huawei.hms.hatool.h1 r0 = new com.huawei.hms.hatool.h1
            java.lang.String r1 = "_hms_config_tag"
            r0.<init>(r1)
            com.huawei.hms.hatool.k r1 = new com.huawei.hms.hatool.k
            com.huawei.hms.hatool.k r2 = r3.a
            r1.<init>(r2)
            r0.b(r1)
            com.huawei.hms.hatool.k r1 = new com.huawei.hms.hatool.k
            com.huawei.hms.hatool.k r2 = r3.b
            r1.<init>(r2)
            r0.a(r1)
            com.huawei.hms.hatool.f1 r1 = com.huawei.hms.hatool.f1.a()
            android.content.Context r2 = r3.c
            r1.a(r2)
            com.huawei.hms.hatool.g1 r1 = com.huawei.hms.hatool.g1.a()
            android.content.Context r2 = r3.c
            r1.a(r2)
            com.huawei.hms.hatool.m1 r1 = com.huawei.hms.hatool.m1.c()
            r1.a(r0)
            com.huawei.hms.hatool.f1 r0 = com.huawei.hms.hatool.f1.a()
            java.lang.String r1 = r3.d
            r0.a(r1)
            return
    }

    @java.lang.Deprecated
    public com.huawei.hms.hatool.k1 b(boolean r3) {
            r2 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Builder.setEnableSN(boolean isReportSN) is execute."
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.k r0 = r2.a
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.b(r3)
            com.huawei.hms.hatool.k r0 = r2.b
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.b(r3)
            return r2
    }

    @java.lang.Deprecated
    public com.huawei.hms.hatool.k1 c(boolean r3) {
            r2 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "Builder.setEnableUDID(boolean isReportUDID) is execute."
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.k r0 = r2.a
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.c(r3)
            com.huawei.hms.hatool.k r0 = r2.b
            com.huawei.hms.hatool.j r0 = r0.j()
            r0.c(r3)
            return r2
    }
}
