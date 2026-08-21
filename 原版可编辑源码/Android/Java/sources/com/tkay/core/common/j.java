package com.tkay.core.common;

import android.app.Activity;
import android.content.Context;
import com.tkay.core.api.TYMediationRequestInfo;
import java.lang.ref.WeakReference;
import java.util.Map;

public abstract class j {
    public String a;
    public TYMediationRequestInfo b;
    public String c;
    public int d;
    public com.tkay.core.common.b.b e;
    public com.tkay.core.common.b.a f;
    public Map<String, Object> g;
    private Context h;
    private WeakReference<Activity> i;

    public final void a(Context context) {
        this.h = com.tkay.core.common.b.m.a().f();
        if (context == null || !(context instanceof Activity)) {
            return;
        }
        this.i = new WeakReference<>((Activity) context);
    }

    public final Context a() {
        Activity activity;
        WeakReference<Activity> weakReference = this.i;
        if (weakReference != null && (activity = weakReference.get()) != null) {
            return activity;
        }
        Activity activityE = com.tkay.core.common.b.m.a().E();
        return activityE != null ? activityE : this.h;
    }

    private int b() {
        return this.d;
    }
}
