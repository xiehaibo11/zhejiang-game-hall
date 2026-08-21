package com.tkay.expressad.atsignalcommon.webEnvCheck;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebView;

public final class MBWebViewChecker {
    private static volatile Boolean a;
    private static volatile Handler b;
    private static Boolean c;

    public static boolean isWebViewAvailable(final Context context) {
        Boolean bool = Boolean.FALSE;
        c = bool;
        if (bool == null || !bool.booleanValue()) {
            return true;
        }
        if (Looper.getMainLooper() == Looper.myLooper()) {
            if (a == null) {
                try {
                    a = Boolean.valueOf(b(context));
                } catch (Exception unused) {
                    a = Boolean.FALSE;
                }
            }
            if (a == null) {
                a = Boolean.FALSE;
            }
            return a.booleanValue();
        }
        if (a == null && b == null) {
            Handler handler = new Handler(Looper.getMainLooper());
            b = handler;
            handler.post(new Runnable() {
                @Override
                public void run() {
                    if (MBWebViewChecker.a == null) {
                        try {
                            Boolean unused2 = MBWebViewChecker.a = Boolean.valueOf(MBWebViewChecker.b(context));
                        } catch (Exception unused3) {
                            Boolean unused4 = MBWebViewChecker.a = Boolean.FALSE;
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

    private static boolean b(Context context) {
        WebView webView;
        try {
            webView = new WebView(context);
        } catch (Exception unused) {
            webView = null;
        }
        return webView != null;
    }
}
