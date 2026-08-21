package com.kwad.sdk.ranger;

import android.app.Activity;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.ranger.d;
import com.kwad.sdk.utils.s;
import com.kwad.sdk.utils.y;
import java.util.List;

public final class a {
    public static final String TAG = "Ranger_" + b.class.getSimpleName();

    static void a(Activity activity, List<d.a> list) {
        try {
            for (d.a aVar : list) {
                if (aVar != null) {
                    String strE = "";
                    if (TextUtils.equals(activity.getClass().getName(), aVar.aGL)) {
                        strE = aVar.aGL;
                    } else if (!TextUtils.isEmpty(aVar.aGM) && activity.getClass().getName().startsWith(aVar.aGL)) {
                        strE = e(activity, aVar.aGM);
                    }
                    if (!TextUtils.isEmpty(strE)) {
                        int iC = y.c("ksadsdk_perf_ranger", strE, 0) + 1;
                        y.b("ksadsdk_perf_ranger", strE, iC);
                        com.kwad.sdk.core.e.c.d(TAG, "act:" + strE + " num:" + iC);
                    }
                }
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.e(TAG, "record:" + Log.getStackTraceString(th));
        }
    }

    static void a(d dVar) {
        final List<d.a> list = dVar.aGH;
        if (list == null || list.isEmpty()) {
            return;
        }
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.a(new com.kwad.sdk.core.c.d() {
            @Override
            public final void a(Activity activity, Bundle bundle) {
                super.a(activity, bundle);
                try {
                    a.a(activity, list);
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.e(a.TAG, Log.getStackTraceString(th));
                }
            }
        });
    }

    private static String e(Object obj, String str) {
        Object objF;
        return (TextUtils.isEmpty(str) || (objF = s.f(obj, str)) == null) ? "" : objF.getClass().getName();
    }
}
