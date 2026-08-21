package com.tkay.expressad.foundation.f;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.f.a.a;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.widget.FeedBackButton;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f6861a = -2;
    public static int b = -2;
    public static volatile boolean c;
    private final ConcurrentHashMap<String, com.tkay.expressad.foundation.f.a.a> d;
    private final RelativeLayout.LayoutParams e;
    private com.tkay.expressad.d.a f;

    /* synthetic */ b(byte b2) {
        this();
    }

    private b() {
        this.d = new ConcurrentHashMap<>();
        this.e = new RelativeLayout.LayoutParams(f6861a, b);
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final b f6862a = new b(0);

        a() {
        }
    }

    public static b a() {
        return a.f6862a;
    }

    public static Activity a(Context context) {
        Activity activity;
        Context contextG = com.tkay.expressad.foundation.b.b.b().g();
        Activity activity2 = null;
        try {
            activity = contextG instanceof Activity ? (Activity) contextG : null;
        } catch (Exception e) {
            e = e;
        }
        try {
            if ((context instanceof Activity) && (Build.VERSION.SDK_INT < 17 || !((Activity) context).isDestroyed())) {
                activity = (Activity) context;
            }
            if (activity == null || activity.isFinishing()) {
                return null;
            }
            if (Build.VERSION.SDK_INT >= 17) {
                if (activity.isDestroyed()) {
                    return null;
                }
            }
            return activity;
        } catch (Exception e2) {
            e = e2;
            activity2 = activity;
            e.printStackTrace();
            return activity2;
        }
    }

    private static boolean b(Context context, com.tkay.expressad.widget.a.a aVar) {
        Activity activityA = a(context);
        if (activityA == null || aVar == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 17 && activityA.isDestroyed()) {
            return false;
        }
        try {
            if (aVar.isShowing() || activityA.isFinishing()) {
                return false;
            }
            aVar.show();
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean a(Context context, com.tkay.expressad.widget.a.a aVar) {
        if (aVar == null) {
            return false;
        }
        return b(context, aVar);
    }

    private void a(String str, int i, ViewGroup viewGroup) {
        com.tkay.expressad.foundation.f.a.a aVarA = a(str);
        if (aVarA.c() != null) {
            aVarA.a(i);
            if (i == 0) {
                a(str, m.a().f(), viewGroup, null, null);
            }
        }
    }

    private void a(String str, int i, int i2, int i3, float f, float f2, float f3, String str2, String str3) {
        com.tkay.expressad.foundation.f.a.a aVarA = a(str);
        Context contextF = m.a().f();
        aVarA.a(t.b(contextF, f), t.b(contextF, f2), t.b(contextF, i), t.b(contextF, i2), t.b(contextF, i3), f3, str2, str3);
    }

    private void a(String str, Context context, ViewGroup viewGroup, ViewGroup.LayoutParams layoutParams) {
        a(str, context, viewGroup, layoutParams, null);
    }

    public final boolean b() {
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.a aVarC = com.tkay.expressad.d.b.c();
        this.f = aVarC;
        return aVarC.K() != 0;
    }

    public final void a(String str, com.tkay.expressad.foundation.f.a aVar) {
        a(str).a(new a.C0461a(str, aVar));
    }

    public final void a(String str, Context context, ViewGroup viewGroup, ViewGroup.LayoutParams layoutParams, com.tkay.expressad.foundation.f.a aVar) {
        if (b()) {
            com.tkay.expressad.foundation.f.a.a aVarA = a(str);
            if (aVar != null) {
                aVarA.a(new a.C0461a(str, aVar));
            }
            FeedBackButton feedBackButtonC = aVarA.c();
            if (feedBackButtonC != null) {
                if (layoutParams == null) {
                    int iB = t.b(m.a().f(), 10.0f);
                    this.e.setMargins(iB, iB, iB, iB);
                    layoutParams = this.e;
                }
                ViewGroup viewGroup2 = (ViewGroup) feedBackButtonC.getParent();
                if (viewGroup2 != null) {
                    viewGroup2.removeView(feedBackButtonC);
                }
                Activity activityA = a(context);
                if (activityA != null && viewGroup == null) {
                    viewGroup = (ViewGroup) activityA.findViewById(R.id.content);
                }
                if (viewGroup != null) {
                    viewGroup.removeView(feedBackButtonC);
                    viewGroup.addView(feedBackButtonC, layoutParams);
                }
            }
        }
    }

    private void c(String str, int i) {
        com.tkay.expressad.foundation.f.a.a aVarA = a(str);
        if (i == 1) {
            aVarA.b();
        } else {
            aVarA.a();
        }
    }

    public final void a(String str, c cVar) {
        a(str).a(cVar);
    }

    public final void a(String str, int i) {
        a(str).b(i);
    }

    public final void b(String str, int i) {
        a(str).c(i);
    }

    public final com.tkay.expressad.foundation.f.a.a a(String str) {
        com.tkay.expressad.foundation.f.a.a aVar;
        if (TextUtils.isEmpty(str)) {
            str = com.tkay.expressad.foundation.b.b.b().e();
        }
        if (!this.d.containsKey(str)) {
            aVar = new com.tkay.expressad.foundation.f.a.a(str);
            this.d.put(str, aVar);
        } else {
            aVar = this.d.get(str);
        }
        if (aVar != null) {
            return aVar;
        }
        com.tkay.expressad.foundation.f.a.a aVar2 = new com.tkay.expressad.foundation.f.a.a(str);
        this.d.put(str, aVar2);
        return aVar2;
    }

    private com.tkay.expressad.foundation.f.a.a d(String str) {
        if (TextUtils.isEmpty(str)) {
            str = com.tkay.expressad.foundation.b.b.b().e();
        }
        if (this.d.containsKey(str)) {
            return this.d.get(str);
        }
        return null;
    }

    public final void a(String str, FeedBackButton feedBackButton) {
        a(str).a(feedBackButton);
    }

    public final FeedBackButton b(String str) {
        return a(str).c();
    }

    private void e(String str) {
        a(str).e();
    }

    public final void c(String str) {
        try {
            String strE = TextUtils.isEmpty(str) ? com.tkay.expressad.foundation.b.b.b().e() : str;
            com.tkay.expressad.foundation.f.a.a aVar = this.d.containsKey(strE) ? this.d.get(strE) : null;
            if (aVar != null) {
                aVar.d();
            }
            this.d.remove(str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
