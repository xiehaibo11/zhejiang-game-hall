package com.bytedance.pangle.fragment;

final class b implements android.app.Application.ActivityLifecycleCallbacks {
    android.support.v4.app.Fragment a;

    public b(android.support.v4.app.Fragment r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final void onActivityCreated(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityPaused(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityPostSaveInstanceState(android.app.Activity r3, android.os.Bundle r4) {
            r2 = this;
            android.support.v4.app.Fragment r0 = r2.a
            android.support.v4.app.FragmentActivity r0 = r0.getActivity()
            if (r0 == r3) goto L9
            return
        L9:
            java.lang.ClassLoader r0 = r3.getClassLoader()
            android.support.v4.app.Fragment r1 = r2.a
            java.lang.Class r1 = r1.getClass()
            java.lang.ClassLoader r1 = r1.getClassLoader()
            if (r0 != r1) goto L1a
            return
        L1a:
            java.lang.String r0 = "androidx.lifecycle.BundlableSavedStateRegistry.key"
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "android:support:fragments"
            if (r0 == 0) goto L29
            android.os.Bundle r0 = (android.os.Bundle) r0     // Catch: java.lang.Exception -> L3b
            r0.remove(r1)     // Catch: java.lang.Exception -> L3b
        L29:
            r4.remove(r1)     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = "Zeus/activity_pangle"
            java.lang.String r0 = "clear fragment, Activity:"
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = r0.concat(r3)     // Catch: java.lang.Exception -> L3b
            com.bytedance.pangle.log.ZeusLogger.d(r4, r3)     // Catch: java.lang.Exception -> L3b
        L3b:
            return
    }

    @Override
    public final void onActivityResumed(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivitySaveInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityStarted(android.app.Activity r1) {
            r0 = this;
            return
    }

    @Override
    public final void onActivityStopped(android.app.Activity r1) {
            r0 = this;
            return
    }
}
