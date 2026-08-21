package com.bytedance.pangle.fragment;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import com.bytedance.pangle.log.ZeusLogger;

/* JADX INFO: loaded from: classes.dex */
final class b implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Fragment f1531a;

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityResumed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityStopped(Activity activity) {
    }

    public b(Fragment fragment) {
        this.f1531a = fragment;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public final void onActivityPostSaveInstanceState(Activity activity, Bundle bundle) {
        if (this.f1531a.getActivity() == activity && activity.getClassLoader() != this.f1531a.getClass().getClassLoader()) {
            try {
                Object obj = bundle.get("androidx.lifecycle.BundlableSavedStateRegistry.key");
                if (obj != null) {
                    ((Bundle) obj).remove("android:support:fragments");
                }
                bundle.remove("android:support:fragments");
                ZeusLogger.d(ZeusLogger.TAG_ACTIVITY, "clear fragment, Activity:".concat(String.valueOf(activity)));
            } catch (Exception unused) {
            }
        }
    }
}
