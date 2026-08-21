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

public class a implements Application.ActivityLifecycleCallbacks {
    private Set<String> a = new HashSet();

    private static void a(Application application) {
        application.registerActivityLifecycleCallbacks(new a());
    }

    public static void a(Context context) {
        a((Application) context.getApplicationContext());
    }

    @Override
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override
    public void onActivityDestroyed(Activity activity) {
    }

    @Override
    public void onActivityPaused(Activity activity) {
    }

    @Override
    public void onActivityResumed(Activity activity) {
        eo eoVarA;
        String packageName;
        String strA;
        int i;
        Intent intent = activity.getIntent();
        if (intent == null) {
            return;
        }
        String stringExtra = intent.getStringExtra("messageId");
        int intExtra = intent.getIntExtra("eventMessageType", -1);
        if (TextUtils.isEmpty(stringExtra) || intExtra <= 0 || this.a.contains(stringExtra)) {
            return;
        }
        this.a.add(stringExtra);
        if (intExtra == 3000) {
            eoVarA = eo.a(activity.getApplicationContext());
            packageName = activity.getPackageName();
            strA = en.a(intExtra);
            i = 3008;
        } else {
            if (intExtra != 1000) {
                return;
            }
            eoVarA = eo.a(activity.getApplicationContext());
            packageName = activity.getPackageName();
            strA = en.a(intExtra);
            i = 1008;
        }
        eoVarA.a(packageName, strA, stringExtra, i, null);
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
