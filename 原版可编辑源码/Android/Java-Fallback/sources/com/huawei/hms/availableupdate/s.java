package com.huawei.hms.availableupdate;

public class s extends com.huawei.hms.availableupdate.q {
    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.app.AlertDialog g() {
            r3 = this;
            android.app.ProgressDialog r0 = new android.app.ProgressDialog
            android.app.Activity r1 = r3.e()
            int r2 = r3.f()
            r0.<init>(r1, r2)
            java.lang.String r1 = "hms_checking"
            java.lang.String r1 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r1)
            r0.setMessage(r1)
            r1 = 0
            r0.setCanceledOnTouchOutside(r1)
            return r0
    }
}
