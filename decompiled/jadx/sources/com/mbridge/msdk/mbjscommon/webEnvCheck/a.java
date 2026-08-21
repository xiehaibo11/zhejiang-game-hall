package com.mbridge.msdk.mbjscommon.webEnvCheck;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebView;
import com.mbridge.msdk.c.b;

/* JADX INFO: compiled from: MBWebViewChecker.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Boolean f3726a;
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
            if (f3726a == null) {
                try {
                    f3726a = Boolean.valueOf(c(context));
                } catch (Exception unused2) {
                    f3726a = false;
                }
            }
            if (f3726a == null) {
                f3726a = new Boolean(false);
            }
            return f3726a.booleanValue();
        }
        if (f3726a == null && b == null) {
            b = new Handler(Looper.getMainLooper());
            b.post(new Runnable() { // from class: com.mbridge.msdk.mbjscommon.webEnvCheck.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    if (a.f3726a == null) {
                        try {
                            Boolean unused3 = a.f3726a = Boolean.valueOf(a.c(context));
                        } catch (Exception unused4) {
                            Boolean unused5 = a.f3726a = false;
                        }
                    }
                }
            });
        }
        if (f3726a == null) {
            return true;
        }
        return f3726a.booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean c(Context context) {
        WebView webView;
        try {
            webView = new WebView(context);
        } catch (Exception unused) {
            webView = null;
        }
        return webView != null;
    }
}
