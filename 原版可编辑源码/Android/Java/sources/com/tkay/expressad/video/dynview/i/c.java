package com.tkay.expressad.video.dynview.i;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.tkay.core.common.l.d;
import com.tkay.expressad.foundation.h.i;
import java.util.List;

public final class c {
    private static boolean a(List<com.tkay.expressad.foundation.d.c> list) {
        com.tkay.expressad.foundation.d.c cVar;
        if (list == null || list.size() <= 0 || (cVar = list.get(0)) == null) {
            return false;
        }
        return cVar.j();
    }

    private static void a(com.tkay.expressad.foundation.d.c cVar, Activity activity) {
        if (cVar == null || cVar.M() == null) {
            return;
        }
        int iC = cVar.M().c();
        if (activity == null || activity.isFinishing()) {
            return;
        }
        if (iC == 1) {
            activity.setRequestedOrientation(7);
            return;
        }
        if (iC == 2) {
            activity.setRequestedOrientation(6);
        } else if (a((Context) activity)) {
            activity.setRequestedOrientation(6);
        } else {
            activity.setRequestedOrientation(7);
        }
    }

    private static void a(Activity activity) {
        if (a((Context) activity)) {
            activity.setRequestedOrientation(6);
        } else {
            activity.setRequestedOrientation(7);
        }
    }

    private static int b(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar == null || cVar.M() == null) {
            return 1;
        }
        return cVar.M().c();
    }

    public static boolean a(Context context) {
        return context.getResources().getConfiguration().orientation == 2;
    }

    private static String a(long j, Context context) {
        String strF = d.f(context);
        if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.Q) || strF.startsWith(com.tkay.expressad.video.dynview.a.a.R)) {
            return j + " " + context.getString(i.a(context, "tkay_cm_video_auto_play_after", i.g));
        }
        if (strF.startsWith("de")) {
            return com.tkay.expressad.video.dynview.a.a.G + j + " Sekunden";
        }
        if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.T)) {
            return j + com.tkay.expressad.video.dynview.a.a.H;
        }
        if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.U)) {
            return com.tkay.expressad.video.dynview.a.a.I + j + " secondes";
        }
        if (strF.startsWith("ar")) {
            return " ثوان" + j + com.tkay.expressad.video.dynview.a.a.J;
        }
        if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.W)) {
            return com.tkay.expressad.video.dynview.a.a.K + j + " секунд";
        }
        return com.tkay.expressad.video.dynview.a.a.F + j + " s";
    }

    public static boolean a(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            Uri uri = Uri.parse(str);
            if (uri == null) {
                return false;
            }
            String queryParameter = uri.getQueryParameter(com.tkay.expressad.video.dynview.a.a.L);
            if (TextUtils.isEmpty(queryParameter)) {
                return false;
            }
            return queryParameter.equals("1");
        } catch (Throwable unused) {
            return false;
        }
    }

    public static int a(com.tkay.expressad.foundation.d.c cVar) {
        if (cVar != null && cVar.M() != null) {
            int iB = cVar.M().b();
            if (iB == 302 || iB == 802) {
                return -3;
            }
            if (iB == 904) {
                return !a(cVar.M().e()) ? -1 : -3;
            }
        }
        return 100;
    }
}
