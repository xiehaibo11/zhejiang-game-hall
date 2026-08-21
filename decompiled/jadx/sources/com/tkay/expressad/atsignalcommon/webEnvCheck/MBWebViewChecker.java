package com.tkay.expressad.atsignalcommon.webEnvCheck;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes3.dex */
public final class MBWebViewChecker {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Boolean f6434a;
    private static volatile Handler b;
    private static Boolean c;

    public static boolean isWebViewAvailable(final Context context) {
        Boolean bool = Boolean.FALSE;
        c = bool;
        if (bool == null || !bool.booleanValue()) {
            return true;
        }
        if (Looper.getMainLooper() == Looper.myLooper()) {
            if (f6434a == null) {
                try {
                    f6434a = Boolean.valueOf(b(context));
                } catch (Exception unused) {
                    f6434a = Boolean.FALSE;
                }
            }
            if (f6434a == null) {
                f6434a = Boolean.FALSE;
            }
            return f6434a.booleanValue();
        }
        if (f6434a == null && b == null) {
            Handler handler = new Handler(Looper.getMainLooper());
            b = handler;
            handler.post(new Runnable() { // from class: com.tkay.expressad.atsignalcommon.webEnvCheck.MBWebViewChecker.1
                @Override // java.lang.Runnable
                public void run() {
                    if (MBWebViewChecker.f6434a == null) {
                        try {
                            Boolean unused2 = MBWebViewChecker.f6434a = Boolean.valueOf(MBWebViewChecker.b(context));
                        } catch (Exception unused3) {
                            Boolean unused4 = MBWebViewChecker.f6434a = Boolean.FALSE;
                        }
                    }
                }
            });
        }
        if (f6434a == null) {
            return true;
        }
        return f6434a.booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(Context context) {
        WebView webView;
        try {
            webView = new WebView(context);
        } catch (Exception unused) {
            webView = null;
        }
        return webView != null;
    }
}
