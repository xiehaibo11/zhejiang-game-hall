package com.xiaomi.push;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;

/* JADX INFO: loaded from: classes4.dex */
public class dl implements Application.ActivityLifecycleCallbacks {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f8109a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f241a;
    private String b;

    public dl(Context context, String str) {
        this.f241a = "";
        this.f8109a = context;
        this.f241a = str;
    }

    private void a(String str) {
        hr hrVar = new hr();
        hrVar.a(str);
        hrVar.a(System.currentTimeMillis());
        hrVar.a(hl.ActivityActiveTimeStamp);
        dt.a(this.f8109a, hrVar);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
        String localClassName = activity.getLocalClassName();
        if (TextUtils.isEmpty(this.f241a) || TextUtils.isEmpty(localClassName)) {
            return;
        }
        this.b = "";
        if (!TextUtils.isEmpty("") && !TextUtils.equals(this.b, localClassName)) {
            this.f241a = "";
            return;
        }
        a(this.f8109a.getPackageName() + "|" + localClassName + Constants.COLON_SEPARATOR + this.f241a + Constants.ACCEPT_TIME_SEPARATOR_SP + String.valueOf(System.currentTimeMillis() / 1000));
        this.f241a = "";
        this.b = "";
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        if (TextUtils.isEmpty(this.b)) {
            this.b = activity.getLocalClassName();
        }
        this.f241a = String.valueOf(System.currentTimeMillis() / 1000);
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
