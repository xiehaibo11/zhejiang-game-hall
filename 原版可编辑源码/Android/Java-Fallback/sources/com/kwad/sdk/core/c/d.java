package com.kwad.sdk.core.c;

public abstract class d implements com.kwad.sdk.core.c.c<android.app.Activity> {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityCreated(r1, r2)
            return
    }

    @Override
    public void b(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityPaused(r1)
            return
    }

    @Override
    public void c(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityResumed(r1)
            return
    }

    @Override
    public void d(android.app.Activity r1) {
            r0 = this;
            android.app.Activity r1 = (android.app.Activity) r1
            r0.onActivityDestroyed(r1)
            return
    }

    public void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    public void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    public void onActivityResumed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public void onBackToBackground() {
            r0 = this;
            return
    }

    @Override
    public void onBackToForeground() {
            r0 = this;
            return
    }
}
