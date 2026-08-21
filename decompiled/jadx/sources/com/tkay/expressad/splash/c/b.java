package com.tkay.expressad.splash.c;

import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.expressad.splash.c.e;
import com.tkay.expressad.splash.view.TYSplashView;
import java.io.File;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f7094a = "ResManager";
    private static int b = 1;
    private static ConcurrentHashMap<String, Boolean> c = new ConcurrentHashMap<>();

    private static com.tkay.expressad.foundation.d.c a(com.tkay.expressad.foundation.d.c cVar) {
        if (!TextUtils.isEmpty(cVar.c()) || (!TextUtils.isEmpty(cVar.d()) && cVar.d().contains("<MBTPLMARK>"))) {
            cVar.a(true);
            cVar.b(false);
        } else {
            cVar.a(false);
            cVar.b(true);
        }
        return cVar;
    }

    public static void a(final TYSplashView tYSplashView, final com.tkay.expressad.foundation.d.c cVar, final com.tkay.expressad.splash.view.a aVar) {
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.be(), new com.tkay.expressad.foundation.g.d.c() { // from class: com.tkay.expressad.splash.c.b.1
            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(Bitmap bitmap, String str) {
                b.c.put(cVar.be(), Boolean.TRUE);
                com.tkay.expressad.splash.view.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.a();
                }
                TYSplashView tYSplashView2 = tYSplashView;
                if (tYSplashView2 != null) {
                    tYSplashView2.setImageReady(true);
                }
            }

            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(String str, String str2) {
                b.c.put(cVar.be(), Boolean.FALSE);
                com.tkay.expressad.splash.view.a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.b();
                }
                TYSplashView tYSplashView2 = tYSplashView;
                if (tYSplashView2 != null) {
                    tYSplashView2.setImageReady(false);
                }
            }
        });
        if (TextUtils.isEmpty(cVar.bd())) {
            return;
        }
        com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(cVar.bd(), new com.tkay.expressad.foundation.g.d.c() { // from class: com.tkay.expressad.splash.c.b.2
            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(Bitmap bitmap, String str) {
            }

            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(String str, String str2) {
            }
        });
    }

    private static void a(TYSplashView tYSplashView, String str, com.tkay.expressad.foundation.d.c cVar, String str2, String str3, boolean z, int i, boolean z2) {
        e.c cVar2 = new e.c();
        cVar2.c(str3);
        cVar2.b(str2);
        cVar2.a(cVar);
        cVar2.a(str);
        cVar2.b(z);
        cVar2.a(i);
        cVar2.a(z2);
        e.a.f7116a.a(tYSplashView, cVar2, null);
    }

    private static String b(String str) {
        try {
            File file = new File(str);
            if (!file.exists()) {
                return "";
            }
            return "file:///" + file.getAbsolutePath();
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Exception e) {
                e.getMessage();
                return "";
            }
        }
    }

    public static boolean a(TYSplashView tYSplashView, com.tkay.expressad.foundation.d.c cVar) {
        if (tYSplashView == null) {
            return false;
        }
        boolean zIsVideoReady = TextUtils.isEmpty(cVar.S()) ? true : tYSplashView.isVideoReady();
        if (zIsVideoReady && !TextUtils.isEmpty(cVar.c())) {
            zIsVideoReady = tYSplashView.isH5Ready();
        }
        if (zIsVideoReady && TextUtils.isEmpty(cVar.c()) && !TextUtils.isEmpty(cVar.d())) {
            zIsVideoReady = tYSplashView.isH5Ready();
        }
        if (TextUtils.isEmpty(cVar.c()) && TextUtils.isEmpty(cVar.d())) {
            zIsVideoReady = false;
        }
        if (!cVar.j()) {
            return zIsVideoReady;
        }
        if (TextUtils.isEmpty(cVar.be())) {
            return false;
        }
        return tYSplashView.isImageReady();
    }

    public static void a(String str) {
        c.remove(str);
    }
}
