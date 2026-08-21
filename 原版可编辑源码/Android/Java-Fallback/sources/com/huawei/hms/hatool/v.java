package com.huawei.hms.hatool;

public class v {
    public static com.huawei.hms.hatool.c1 a(java.lang.String r2, java.lang.String r3) {
            com.huawei.hms.hatool.c1 r0 = new com.huawei.hms.hatool.c1
            r0.<init>()
            com.huawei.hms.hatool.x0 r1 = com.huawei.hms.hatool.x0.a()
            java.lang.String r2 = r1.a(r2, r3)
            r0.a(r2)
            return r0
    }

    public static com.huawei.hms.hatool.d1 a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.huawei.hms.hatool.d1 r0 = new com.huawei.hms.hatool.d1
            r0.<init>()
            r0.a(r1)
            java.lang.String r1 = com.huawei.hms.hatool.b.c()
            r0.b(r1)
            r0.e(r2)
            r0.c(r4)
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            java.lang.String r2 = "hmshi"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r2 = "qrt"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.d(r1)
            return r0
    }

    public static com.huawei.hms.hatool.e1 a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.huawei.hms.hatool.e1 r0 = new com.huawei.hms.hatool.e1
            r0.<init>()
            java.lang.String r1 = com.huawei.hms.hatool.b.g()
            r0.c(r1)
            java.lang.String r1 = com.huawei.hms.hatool.b.i()
            r0.e(r1)
            r0.a(r4)
            com.huawei.hms.hatool.x0 r4 = com.huawei.hms.hatool.x0.a()
            java.lang.String r2 = r4.b(r3, r2)
            r0.b(r2)
            return r0
    }

    public static com.huawei.hms.hatool.r a() {
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "generate UploadData EventModelHandlerBase"
            com.huawei.hms.hatool.y.c(r0, r1)
            com.huawei.hms.hatool.x r1 = com.huawei.hms.hatool.x.f()
            r1.d()
            com.huawei.hms.hatool.x r1 = com.huawei.hms.hatool.x.f()
            java.lang.String r1 = r1.a()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L23
            java.lang.String r1 = "event chifer is empty"
            com.huawei.hms.hatool.y.f(r0, r1)
            r0 = 0
            return r0
        L23:
            com.huawei.hms.hatool.r r0 = new com.huawei.hms.hatool.r
            com.huawei.hms.hatool.x r1 = com.huawei.hms.hatool.x.f()
            java.lang.String r1 = r1.c()
            r0.<init>(r1)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.lang.String r3, java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = com.huawei.hms.hatool.b.c()
            java.lang.String r2 = "App-Id"
            r0.put(r2, r1)
            java.lang.String r1 = com.huawei.hms.hatool.b.d()
            java.lang.String r2 = "App-Ver"
            r0.put(r2, r1)
            java.lang.String r1 = "Sdk-Name"
            java.lang.String r2 = "hianalytics"
            r0.put(r1, r2)
            java.lang.String r1 = "Sdk-Ver"
            java.lang.String r2 = "2.2.0.310"
            r0.put(r1, r2)
            java.lang.String r1 = android.os.Build.MODEL
            java.lang.String r2 = "Device-Type"
            r0.put(r2, r1)
            java.lang.String r1 = "servicetag"
            r0.put(r1, r3)
            r3 = 1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r1 = 0
            r3[r1] = r4
            java.lang.String r1 = "hmsSdk"
            java.lang.String r2 = "sendData RequestId : %s"
            com.huawei.hms.hatool.y.a(r1, r2, r3)
            java.lang.String r3 = "Request-Id"
            r0.put(r3, r4)
            return r0
    }
}
