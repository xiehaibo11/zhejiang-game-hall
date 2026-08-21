package com.bianfeng.baselib;

public class BaseActivity extends android.app.Activity {
    private java.lang.String version;

    public BaseActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "1.0.0"
            r1.version = r0
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r2 != r0) goto L5
            r2 = 1
            return r2
        L5:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }
}
