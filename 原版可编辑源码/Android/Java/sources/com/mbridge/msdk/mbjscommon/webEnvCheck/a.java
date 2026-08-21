package com.mbridge.msdk.mbjscommon.webEnvCheck;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebView;
import com.mbridge.msdk.c.b;

public final class a {
    private static volatile Boolean a;
    private static volatile Handler b;
    private static Boolean c;

    public static boolean a(final Context context) {
        com.mbridge.msdk.c.a aVarG;
        try {
            aVarG = b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        } catch (Exception unused) {
            aVarG = null;
        }
        if (aVarG != null) {
            c = Boolean.valueOf(aVarG.d());
        } else {
            c = false;
        }
        Boolean bool = c;
        if (bool == null || !bool.booleanValue()) {
            return true;
        }
        if (Looper.getMainLooper() == Looper.myLooper()) {
            if (a == null) {
                try {
                    a = Boolean.valueOf(c(context));
                } catch (Exception unused2) {
                    a = false;
                }
            }
            if (a == null) {
                a = new Boolean(false);
            }
            return a.booleanValue();
        }
        if (a == null && b == null) {
            b = new Handler(Looper.getMainLooper());
            b.post(new Runnable() {
                @Override
                public final void run() {
                    if (a.a == null) {
                        try {
                            Boolean unused3 = a.a = Boolean.valueOf(a.c(context));
                        } catch (Exception unused4) {
                            Boolean unused5 = a.a = false;
                        }
                    }
                }
            });
        }
        if (a == null) {
            return true;
        }
        return a.booleanValue();
    }

    private static boolean c(Context context) {
        WebView webView;
        try {
            webView = new WebView(context);
        } catch (Exception unused) {
            webView = null;
        }
        return webView != null;
    }
}
