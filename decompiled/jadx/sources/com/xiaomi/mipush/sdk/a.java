package com.xiaomi.mipush.sdk;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import com.xiaomi.push.en;
import com.xiaomi.push.eo;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public class a implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Set<String> f7984a = new HashSet();

    private static void a(Application application) {
        application.registerActivityLifecycleCallbacks(new a());
    }

    public static void a(Context context) {
        a((Application) context.getApplicationContext());
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        eo eoVarA;
        String packageName;
        String strM314a;
        int i;
        Intent intent = activity.getIntent();
        if (intent == null) {
            return;
        }
        String stringExtra = intent.getStringExtra("messageId");
        int intExtra = intent.getIntExtra("eventMessageType", -1);
        if (TextUtils.isEmpty(stringExtra) || intExtra <= 0 || this.f7984a.contains(stringExtra)) {
            return;
        }
        this.f7984a.add(stringExtra);
        if (intExtra == 3000) {
            eoVarA = eo.a(activity.getApplicationContext());
            packageName = activity.getPackageName();
            strM314a = en.m314a(intExtra);
            i = 3008;
        } else {
            if (intExtra != 1000) {
                return;
            }
            eoVarA = eo.a(activity.getApplicationContext());
            packageName = activity.getPackageName();
            strM314a = en.m314a(intExtra);
            i = 1008;
        }
        eoVarA.a(packageName, strM314a, stringExtra, i, null);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
    }
}
