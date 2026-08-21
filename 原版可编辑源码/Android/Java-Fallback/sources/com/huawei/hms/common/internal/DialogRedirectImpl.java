package com.huawei.hms.common.internal;

public class DialogRedirectImpl extends com.huawei.hms.common.internal.DialogRedirect {
    private final android.app.Activity activity;
    private final android.content.Intent intent;
    private final int requestCode;

    DialogRedirectImpl(android.content.Intent r1, android.app.Activity r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.intent = r1
            r0.activity = r2
            r0.requestCode = r3
            return
    }

    @Override
    public final void redirect() {
            r3 = this;
            android.content.Intent r0 = r3.intent
            if (r0 == 0) goto Lb
            android.app.Activity r1 = r3.activity
            int r2 = r3.requestCode
            r1.startActivityForResult(r0, r2)
        Lb:
            return
    }
}
