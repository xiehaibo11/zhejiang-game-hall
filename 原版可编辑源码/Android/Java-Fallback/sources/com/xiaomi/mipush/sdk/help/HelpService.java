package com.xiaomi.mipush.sdk.help;

public class HelpService extends android.app.IntentService {
    public HelpService() {
            r1 = this;
            java.lang.String r0 = "intentService"
            r1.<init>(r0)
            return
    }

    @Override
    protected void onHandleIntent(android.content.Intent r2) {
            r1 = this;
            java.lang.String r0 = "awake_info"
            java.lang.String r0 = r2.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 0
            com.xiaomi.mipush.sdk.o.a(r1, r2, r0)
        L10:
            return
    }
}
