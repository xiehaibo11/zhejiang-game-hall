package com.tkay.expressad.splash.c;

import android.content.Context;
import com.tkay.core.common.b.m;
import com.tkay.expressad.splash.view.TYSplashNativeView;
import com.tkay.expressad.splash.view.TYSplashView;

/* JADX INFO: loaded from: classes3.dex */
public final class a {
    /* synthetic */ a(byte b) {
        this();
    }

    private a() {
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.c.a$a, reason: collision with other inner class name */
    static class C0474a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final a f7093a = new a(0);

        C0474a() {
        }
    }

    private static a a() {
        return C0474a.f7093a;
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
