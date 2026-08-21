package com.tkay.core.activity;

public class TYGdprAuthActivity extends android.app.Activity {
    public static com.tkay.core.api.TYGDPRAuthCallback mCallback;
    java.lang.String a;
    com.tkay.core.activity.component.PrivacyPolicyView b;
    boolean c;


    public TYGdprAuthActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    @Override
    public void onBackPressed() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 == 0) goto L7
            super.onBackPressed()
        L7:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            com.tkay.core.common.i.a()
            java.lang.String r2 = com.tkay.core.common.i.l()
            r1.a = r2
            android.content.res.Resources r2 = r1.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            int r2 = r2.orientation
            r0 = 2
            if (r2 != r0) goto L1e
            r2 = 6
            r1.setRequestedOrientation(r2)
            goto L22
        L1e:
            r2 = 7
            r1.setRequestedOrientation(r2)
        L22:
            com.tkay.core.activity.component.PrivacyPolicyView r2 = new com.tkay.core.activity.component.PrivacyPolicyView     // Catch: java.lang.Exception -> L3d
            r2.<init>(r1)     // Catch: java.lang.Exception -> L3d
            r1.b = r2     // Catch: java.lang.Exception -> L3d
            com.tkay.core.activity.TYGdprAuthActivity$1 r0 = new com.tkay.core.activity.TYGdprAuthActivity$1     // Catch: java.lang.Exception -> L3d
            r0.<init>(r1)     // Catch: java.lang.Exception -> L3d
            r2.setResultCallbackListener(r0)     // Catch: java.lang.Exception -> L3d
            com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.b     // Catch: java.lang.Exception -> L3d
            r1.setContentView(r2)     // Catch: java.lang.Exception -> L3d
            com.tkay.core.activity.component.PrivacyPolicyView r2 = r1.b     // Catch: java.lang.Exception -> L3d
            java.lang.String r0 = r1.a     // Catch: java.lang.Exception -> L3d
            r2.loadPolicyUrl(r0)     // Catch: java.lang.Exception -> L3d
        L3d:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            com.tkay.core.activity.component.PrivacyPolicyView r0 = r1.b
            if (r0 == 0) goto L7
            r0.destory()
        L7:
            r0 = 0
            com.tkay.core.activity.TYGdprAuthActivity.mCallback = r0
            super.onDestroy()
            return
    }
}
