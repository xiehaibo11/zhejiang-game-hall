package com.tkay.expressad.splash.c;

import android.content.Context;
import com.tkay.core.common.b.m;
import com.tkay.expressad.splash.view.TYSplashNativeView;
import com.tkay.expressad.splash.view.TYSplashView;

public final class a {
    a(byte b) {
        this();
    }

    private a() {
    }

    static class a {
        private static final a a = new a(0);

        a() {
        }
    }

    private static a a() {
        return a.a;
    }

    public static void a(TYSplashView tYSplashView, com.tkay.expressad.splash.a.b bVar, com.tkay.expressad.splash.b.a aVar) {
        Context context = tYSplashView.getContext();
        if (context == null) {
            context = m.a().f();
        }
        try {
            aVar.a(new TYSplashNativeView(context, tYSplashView, bVar));
        } catch (Throwable unused) {
            aVar.a("View render error.");
        }
    }

    private static void a(Context context, TYSplashView tYSplashView, com.tkay.expressad.splash.a.b bVar, com.tkay.expressad.splash.b.a aVar) {
        try {
            TYSplashNativeView tYSplashNativeView = new TYSplashNativeView(context, tYSplashView, bVar);
            if (aVar != null) {
                aVar.a(tYSplashNativeView);
            }
        } catch (Throwable unused) {
            if (aVar != null) {
                aVar.a("View render error.");
            }
        }
    }
}
