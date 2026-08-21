package com.xiaomi.mipush.sdk.help;

public class HelpActivity extends android.app.Activity {
    public HelpActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.content.Intent r2 = r1.getIntent()
            r0 = 0
            com.xiaomi.mipush.sdk.o.a(r1, r2, r0)
            r1.finish()
            return
    }
}
