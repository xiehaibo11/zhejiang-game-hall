package com.sigmob.sdk.base.common;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import java.lang.ref.WeakReference;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public abstract class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f4849a;
    protected Context b;
    protected RelativeLayout c;
    protected j d;
    protected e e;
    private RelativeLayout f;
    private WeakReference<Activity> g;

    protected i(Activity activity, String str, j jVar) {
        this.b = activity.getApplicationContext();
        this.g = new WeakReference<>(activity);
        this.f4849a = str;
        this.d = jVar;
        this.c = new RelativeLayout(this.b);
    }

    public void a(int i, int i2, Intent intent) {
    }

    protected void a(Context context, int i, Bundle bundle) {
        e eVar;
        if (bundle != null) {
            try {
                if (bundle.getBoolean(com.sigmob.sdk.base.h.v, false)) {
                    int i2 = context.getResources().getDisplayMetrics().widthPixels;
                    int i3 = context.getResources().getDisplayMetrics().heightPixels;
                    if (i == 6) {
                        int iMin = (Math.min(i2, i3) * 85) / 100;
                        eVar = new e((iMin * 16) / 9, iMin);
                    } else {
                        int iMin2 = (Math.min(i2, i3) * 85) / 100;
                        eVar = new e(iMin2, (iMin2 * 16) / 9);
                    }
                    this.e = eVar;
                    this.f = new RelativeLayout(context);
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(this.e.a(), this.e.b());
                    layoutParams.addRule(13);
                    this.f.setLayoutParams(layoutParams);
                    this.c.removeAllViews();
                    this.c.addView(this.f);
                }
            } catch (Throwable unused) {
            }
        }
    }

    public abstract void a(Configuration configuration);

    public abstract void a(Bundle bundle);

    protected void a(String str) {
        String str2 = this.f4849a;
        if (str2 != null) {
            BaseBroadcastReceiver.a(this.b, str2, str);
        } else {
            SigmobLog.w("Tried to broadcast a video event without a broadcast identifier to send to.");
        }
    }

    protected void a(String str, int i) {
        String str2 = this.f4849a;
        if (str2 != null) {
            BaseBroadcastReceiver.a(this.b, str2, str, i);
        } else {
            SigmobLog.w("Tried to broadcast a video event without a broadcast identifier to send to.");
        }
    }

    protected void a(String str, Map<String, Object> map) {
        String str2 = this.f4849a;
        if (str2 != null) {
            BaseBroadcastReceiver.a(this.b, str2, map, str, 0);
        } else {
            SigmobLog.w("Tried to broadcast a video event without a broadcast identifier to send to.");
        }
    }

    public abstract void b();

    public abstract void c();

    public abstract void d();

    public void e() {
        ViewUtil.removeFromParent(this.c);
        this.c = null;
    }

    public abstract void f();

    public boolean g() {
        return true;
    }

    protected j h() {
        return this.d;
    }

    protected Context i() {
        return this.b;
    }

    protected ViewGroup j() {
        RelativeLayout relativeLayout = this.f;
        return relativeLayout != null ? relativeLayout : this.c;
    }

    protected Activity k() {
        Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
        if (activityFromViewTop != null) {
            return activityFromViewTop;
        }
        WeakReference<Activity> weakReference = this.g;
        if (weakReference != null) {
            return weakReference.get();
        }
        return null;
    }
}
