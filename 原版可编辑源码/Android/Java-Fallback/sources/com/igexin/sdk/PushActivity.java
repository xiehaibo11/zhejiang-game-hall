package com.igexin.sdk;

public class PushActivity extends android.app.Activity {
    public PushActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r2) {
            r1 = this;
            super.onConfigurationChanged(r2)
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityConfigurationChanged(r1, r2)
        L18:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            return
    }

    @Override
    public boolean onCreateOptionsMenu(android.view.Menu r2) {
            r1 = this;
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L17
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            boolean r2 = r0.onActivityCreateOptionsMenu(r1, r2)
            return r2
        L17:
            r2 = 1
            return r2
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityDestroy(r1)
        L18:
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L1a
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            boolean r0 = r0.onActivityKeyDown(r1, r2, r3)
            if (r0 == 0) goto L1a
            r2 = 1
            return r2
        L1a:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            super.onNewIntent(r2)
            r1.setIntent(r2)
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L1b
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityNewIntent(r1, r2)
        L1b:
            return
    }

    @Override
    protected void onPause() {
            r1 = this;
            super.onPause()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityPause(r1)
        L18:
            return
    }

    @Override
    protected void onRestart() {
            r1 = this;
            super.onRestart()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityRestart(r1)
        L18:
            return
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityResume(r1)
        L18:
            return
    }

    @Override
    protected void onStart() {
            r2 = this;
            super.onStart()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L1c
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            android.content.Intent r1 = r2.getIntent()
            r0.onActivityStart(r2, r1)
        L1c:
            return
    }

    @Override
    protected void onStop() {
            r1 = this;
            super.onStop()
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            if (r0 == 0) goto L18
            com.igexin.sdk.a.a r0 = com.igexin.sdk.a.a.a()
            com.igexin.sdk.IPushCore r0 = r0.c()
            r0.onActivityStop(r1)
        L18:
            return
    }
}
