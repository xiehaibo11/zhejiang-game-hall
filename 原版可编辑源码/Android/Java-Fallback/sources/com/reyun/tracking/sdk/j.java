package com.reyun.tracking.sdk;

class j implements com.reyun.tracking.utils.n {
    final com.reyun.tracking.utils.k a;
    final com.reyun.tracking.sdk.i b;

    j(com.reyun.tracking.sdk.i r1, com.reyun.tracking.utils.k r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void a(int r5, java.lang.Object r6) {
            r4 = this;
            java.lang.String r5 = "status"
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = " sendFailureRecord SUCCESS"
            com.reyun.tracking.a.a.c(r0, r1)     // Catch: java.lang.Throwable -> L7f
            org.json.JSONObject r6 = (org.json.JSONObject) r6     // Catch: java.lang.Throwable -> L7f
            boolean r1 = r6.isNull(r5)     // Catch: java.lang.Throwable -> L7f
            if (r1 != 0) goto L53
            int r5 = r6.optInt(r5)     // Catch: java.lang.Throwable -> L7f
            if (r5 != 0) goto L53
            android.content.Context r5 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Throwable -> L7f
            com.reyun.tracking.utils.i r5 = com.reyun.tracking.utils.i.a(r5, r0)     // Catch: java.lang.Throwable -> L7f
            r1 = 0
            com.reyun.tracking.utils.k r2 = r4.a     // Catch: java.lang.Throwable -> L7f
            java.util.ArrayList r2 = r2.a     // Catch: java.lang.Throwable -> L7f
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L7f
        L28:
            if (r1 >= r2) goto L3a
            com.reyun.tracking.utils.k r3 = r4.a     // Catch: java.lang.Throwable -> L7f
            java.util.ArrayList r3 = r3.a     // Catch: java.lang.Throwable -> L7f
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L7f
            r5.a(r3)     // Catch: java.lang.Throwable -> L7f
            int r1 = r1 + 1
            goto L28
        L3a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            r5.<init>()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = "==============sendFailureRecord  SUCCESS =========="
            r5.append(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L7f
            r5.append(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L7f
            com.reyun.tracking.a.a.a(r0, r5)     // Catch: java.lang.Throwable -> L7f
            goto L6b
        L53:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            r5.<init>()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = "Request Failed:"
            r5.append(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L7f
            r5.append(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L7f
            com.reyun.tracking.a.a.c(r0, r5)     // Catch: java.lang.Throwable -> L7f
        L6b:
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()     // Catch: java.lang.Throwable -> L7f
            if (r5 == 0) goto L83
            com.reyun.tracking.sdk.p r5 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r0 = "batch"
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L7f
            r5.b(r0, r6)     // Catch: java.lang.Throwable -> L7f
            goto L83
        L7f:
            r5 = move-exception
            r5.printStackTrace()
        L83:
            return
    }

    @Override
    public void a(java.lang.Throwable r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "############sendFailureRecord  failure ############ "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "TrackingIO"
            com.reyun.tracking.a.a.a(r3, r2)
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            if (r2 == 0) goto L27
            com.reyun.tracking.sdk.p r2 = com.reyun.tracking.sdk.Tracking.getOnDataUploadListener()
            java.lang.String r3 = "batch"
            java.lang.String r0 = "{}"
            r2.b(r3, r0)
        L27:
            return
    }
}
