package com.igexin.push.core.stub;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.IBinder;
import android.os.Message;
import android.view.KeyEvent;
import android.view.Menu;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.c;
import com.igexin.push.core.e.a;
import com.igexin.push.core.e.b;
import com.igexin.sdk.IPushCore;
import java.util.HashMap;
import java.util.Map;

public class PushCore implements IPushCore {
    private c a;
    private Map<Activity, a> b = new HashMap();

    @Override
    public void onActivityConfigurationChanged(Activity activity, Configuration configuration) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.a(configuration);
        }
    }

    @Override
    public boolean onActivityCreateOptionsMenu(Activity activity, Menu menu) {
        a aVar = this.b.get(activity);
        return aVar != null && aVar.a(menu);
    }

    @Override
    public void onActivityDestroy(Activity activity) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.h();
            this.b.remove(activity);
            b.a().c(aVar);
        }
    }

    @Override
    public boolean onActivityKeyDown(Activity activity, int i, KeyEvent keyEvent) {
        a aVar = this.b.get(activity);
        return aVar != null && aVar.a(i, keyEvent);
    }

    @Override
    public void onActivityNewIntent(Activity activity, Intent intent) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.a(intent);
        }
    }

    @Override
    public void onActivityPause(Activity activity) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.f();
        }
    }

    @Override
    public void onActivityRestart(Activity activity) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.d();
        }
    }

    @Override
    public void onActivityResume(Activity activity) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.e();
        }
    }

    @Override
    public void onActivityStart(Activity activity, Intent intent) {
        if (activity == null || intent == null || !intent.hasExtra("activityid")) {
            return;
        }
        a aVarA = b.a().a(Long.valueOf(intent.getLongExtra("activityid", 0L)));
        if (aVarA == null) {
            activity.finish();
            return;
        }
        aVarA.a(activity);
        this.b.put(activity, aVarA);
        aVarA.c();
    }

    @Override
    public void onActivityStop(Activity activity) {
        a aVar = this.b.get(activity);
        if (aVar != null) {
            aVar.g();
        }
    }

    @Override
    public IBinder onServiceBind(Intent intent) {
        return null;
    }

    @Override
    public void onServiceDestroy() {
    }

    @Override
    public int onServiceStartCommand(Intent intent, int i, int i2) {
        if (this.a == null) {
            return 2;
        }
        Message messageObtain = Message.obtain();
        messageObtain.what = CoreConsts.c;
        messageObtain.obj = intent;
        this.a.a(messageObtain);
        return 2;
    }

    @Override
    public boolean start(Context context) {
        c cVarA = c.a();
        this.a = cVarA;
        cVarA.a(context);
        return true;
    }
}
