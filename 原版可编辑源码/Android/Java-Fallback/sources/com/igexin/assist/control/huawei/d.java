package com.igexin.assist.control.huawei;

class d implements com.huawei.hmf.tasks.OnCompleteListener<java.lang.Void> {
    final com.igexin.assist.control.huawei.HmsPushManager a;

    d(com.igexin.assist.control.huawei.HmsPushManager r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onComplete(com.huawei.hmf.tasks.Task<java.lang.Void> r4) {
            r3 = this;
            boolean r0 = r4.isSuccessful()
            java.lang.String r1 = "Assist_HW"
            if (r0 == 0) goto Le
            java.lang.String r4 = "turnOffPush Complete"
            android.util.Log.i(r1, r4)
            goto L2a
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "turnOffPush failed: ret="
            r0.append(r2)
            java.lang.Exception r4 = r4.getException()
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            android.util.Log.e(r1, r4)
        L2a:
            return
    }
}
