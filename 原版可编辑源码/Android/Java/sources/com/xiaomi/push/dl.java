package com.xiaomi.push;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;

public class dl implements Application.ActivityLifecycleCallbacks {
    private Context a;
    private String a;
    private String b;

    public dl(Context context, String str) {
        this.a = "";
        this.a = context;
        this.a = str;
    }

    private void a(String str) {
        hr hrVar = new hr();
        hrVar.a(str);
        hrVar.a(System.currentTimeMillis());
        hrVar.a(hl.s);
        dt.a(this.a, hrVar);
    }

    @Override
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityDestroyed(Activity activity) {
    }

    @Override
    public void onActivityPaused(Activity activity) {
        String localClassName = activity.getLocalClassName();
        if (TextUtils.isEmpty(this.a) || TextUtils.isEmpty(localClassName)) {
            return;
        }
        this.b = "";
        if (!TextUtils.isEmpty("") && !TextUtils.equals(this.b, localClassName)) {
            this.a = "";
            return;
        }
        a(this.a.getPackageName() + "|" + localClassName + Constants.COLON_SEPARATOR + this.a + Constants.ACCEPT_TIME_SEPARATOR_SP + String.valueOf(System.currentTimeMillis() / 1000));
        this.a = "";
        this.b = "";
    }

    @Override
    public void onActivityResumed(Activity activity) {
        if (TextUtils.isEmpty(this.b)) {
            this.b = activity.getLocalClassName();
        }
        this.a = String.valueOf(System.currentTimeMillis() / 1000);
    }

    @Override
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityStarted(Activity activity) {
    }

    @Override
    public void onActivityStopped(Activity activity) {
    }
}
