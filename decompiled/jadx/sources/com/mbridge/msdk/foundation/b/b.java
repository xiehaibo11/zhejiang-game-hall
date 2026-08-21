package com.mbridge.msdk.foundation.b;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.b.a.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.FeedBackButton;
import com.mbridge.msdk.widget.dialog.MBFeedBackDialog;
import java.lang.ref.WeakReference;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;

/* JADX INFO: compiled from: FeedbackManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f3336a = -2;
    public static int b = -2;
    public static volatile boolean c;
    private final ConcurrentHashMap<String, com.mbridge.msdk.foundation.b.a.a> d;
    private final RelativeLayout.LayoutParams e;
    private com.mbridge.msdk.c.a f;

    private b() {
        this.d = new ConcurrentHashMap<>();
        this.e = new RelativeLayout.LayoutParams(f3336a, b);
    }

    /* JADX INFO: compiled from: FeedbackManager.java */
    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final b f3337a = new b();
    }

    public static b a() {
        return a.f3337a;
    }

    public final Activity a(Context context) {
        Activity activity;
        Context contextC = com.mbridge.msdk.foundation.controller.a.f().c();
        Activity activity2 = null;
        try {
            Activity activity3 = contextC instanceof Activity ? (Activity) contextC : null;
            try {
                if ((context instanceof Activity) && (Build.VERSION.SDK_INT < 17 || !((Activity) context).isDestroyed())) {
                    activity3 = (Activity) context;
                }
                WeakReference<Activity> weakReferenceA = com.mbridge.msdk.foundation.controller.a.f().a();
                if (weakReferenceA != null && (activity = weakReferenceA.get()) != null && !activity.isFinishing() && (Build.VERSION.SDK_INT < 17 || !activity.isDestroyed())) {
                    activity3 = activity;
                }
                if (activity3 == null || activity3.isFinishing()) {
                    return null;
                }
                if (Build.VERSION.SDK_INT >= 17) {
                    if (activity3.isDestroyed()) {
                        return null;
                    }
                }
                return activity3;
            } catch (Exception e) {
                e = e;
                activity2 = activity3;
                e.printStackTrace();
                return activity2;
            }
        } catch (Exception e2) {
            e = e2;
        }
    }

    private boolean a(Context context, MBFeedBackDialog mBFeedBackDialog) {
        Activity activityA = a(context);
        if (activityA == null || mBFeedBackDialog == null) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 17 && activityA.isDestroyed()) {
            return false;
        }
        try {
            if (mBFeedBackDialog.isShowing() || activityA.isFinishing()) {
                return false;
            }
            mBFeedBackDialog.show();
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public final boolean a(String str, Context context, MBFeedBackDialog mBFeedBackDialog) {
        if (mBFeedBackDialog == null) {
            z.b("", "mbAlertDialog  is null");
            return false;
        }
        return a(context, mBFeedBackDialog);
    }

    public final void a(String str, int i, ViewGroup viewGroup) {
        com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
        if (aVarA.c() != null) {
            aVarA.a(i);
            if (i == 0) {
                a(str, com.mbridge.msdk.foundation.controller.a.f().j(), viewGroup, null, null);
            }
        }
    }

    public final void a(String str, int i, int i2, int i3, float f, float f2, float f3, String str2, String str3, float f4, JSONArray jSONArray) {
        com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        aVarA.a(ae.b(contextJ, f), ae.b(contextJ, f2), ae.b(contextJ, i), ae.b(contextJ, i2), ae.b(contextJ, i3), f3, str2, str3, f4, jSONArray);
    }

    public final boolean b() {
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        this.f = aVarB;
        if (aVarB == null) {
            this.f = com.mbridge.msdk.c.b.a().b();
        }
        return this.f.aI() != 0;
    }

    public final void a(String str, com.mbridge.msdk.foundation.b.a aVar) {
        com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
        if (aVar != null) {
            aVarA.a(new a.C0254a(str, aVar));
        }
    }

    public final void a(String str, Context context, ViewGroup viewGroup, ViewGroup.LayoutParams layoutParams, com.mbridge.msdk.foundation.b.a aVar) {
        if (b()) {
            com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
            if (aVar != null) {
                aVarA.a(new a.C0254a(str, aVar));
            }
            FeedBackButton feedBackButtonC = aVarA.c();
            if (feedBackButtonC != null) {
                if (layoutParams == null) {
                    int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f);
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

    public final void a(String str, int i) {
        com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
        if (i == 1) {
            aVarA.b();
        } else {
            aVarA.a();
        }
    }

    public final void a(String str, CampaignEx campaignEx) {
        a(str).a(campaignEx);
    }

    public final void b(String str, int i) {
        a(str).b(i);
    }

    public final void c(String str, int i) {
        a(str).c(i);
    }

    public final com.mbridge.msdk.foundation.b.a.a a(String str) {
        com.mbridge.msdk.foundation.b.a.a aVar;
        if (TextUtils.isEmpty(str)) {
            str = com.mbridge.msdk.foundation.controller.a.f().k();
        }
        if (!this.d.containsKey(str)) {
            aVar = new com.mbridge.msdk.foundation.b.a.a(str);
            this.d.put(str, aVar);
        } else {
            aVar = this.d.get(str);
        }
        if (aVar != null) {
            return aVar;
        }
        com.mbridge.msdk.foundation.b.a.a aVar2 = new com.mbridge.msdk.foundation.b.a.a(str);
        this.d.put(str, aVar2);
        return aVar2;
    }

    public final void a(String str, FeedBackButton feedBackButton) {
        a(str).a(feedBackButton);
    }

    public final FeedBackButton b(String str) {
        return a(str).c();
    }

    public final void a(String str, int i, int i2, String str2) {
        com.mbridge.msdk.foundation.b.a.a aVarA = a(str);
        CampaignEx campaignExE = aVarA.e();
        e.a(campaignExE, campaignExE != null ? campaignExE.getCampaignUnitId() : "", aVarA.f(), aVarA.g(), !TextUtils.isEmpty(str2) ? str2 : "", i, campaignExE != null ? campaignExE.getAdType() : 0, i2);
    }

    public final void c(String str) {
        try {
            String strK = TextUtils.isEmpty(str) ? com.mbridge.msdk.foundation.controller.a.f().k() : str;
            com.mbridge.msdk.foundation.b.a.a aVar = this.d.containsKey(strK) ? this.d.get(strK) : null;
            if (aVar != null) {
                aVar.d();
            }
            this.d.remove(str);
            c = false;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
