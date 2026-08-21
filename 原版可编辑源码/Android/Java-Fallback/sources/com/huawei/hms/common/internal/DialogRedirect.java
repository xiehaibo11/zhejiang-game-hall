package com.huawei.hms.common.internal;

public abstract class DialogRedirect implements android.content.DialogInterface.OnClickListener {
    public DialogRedirect() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.common.internal.DialogRedirect getInstance(android.app.Activity r1, android.content.Intent r2, int r3) {
            com.huawei.hms.common.internal.DialogRedirectImpl r0 = new com.huawei.hms.common.internal.DialogRedirectImpl
            r0.<init>(r2, r1, r3)
            return r0
    }

    @Override
    public void onClick(android.content.DialogInterface r2, int r3) {
            r1 = this;
            r1.redirect()     // Catch: java.lang.Throwable -> L4
            goto Lb
        L4:
            java.lang.String r3 = "DialogRedirect"
            java.lang.String r0 = "Failed to start resolution intent"
            com.huawei.hms.support.log.HMSLog.e(r3, r0)     // Catch: java.lang.Throwable -> Lf
        Lb:
            r2.dismiss()
            return
        Lf:
            r3 = move-exception
            r2.dismiss()
            throw r3
    }

    protected abstract void redirect();
}
