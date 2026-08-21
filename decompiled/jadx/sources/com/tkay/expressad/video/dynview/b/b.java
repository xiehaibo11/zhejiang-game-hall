package com.tkay.expressad.video.dynview.b;

import android.view.View;
import com.tkay.expressad.video.dynview.c;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile b f7218a;

    private b() {
    }

    public static b a() {
        b bVar;
        if (f7218a == null) {
            synchronized (b.class) {
                if (f7218a == null) {
                    f7218a = new b();
                }
                bVar = f7218a;
            }
            return bVar;
        }
        return f7218a;
    }

    public static void a(View view, c cVar) {
        if (cVar == null) {
            return;
        }
        int iH = cVar.h();
        if (iH == 1) {
            new com.tkay.expressad.video.dynview.j.b().a(view);
            return;
        }
        if (iH == 102 || iH == 202 || iH == 302 || iH == 802 || iH == 904) {
            new com.tkay.expressad.video.dynview.j.b().a(view, cVar);
            return;
        }
        if (iH == 3) {
            new com.tkay.expressad.video.dynview.j.b().b(view, cVar);
        } else if (iH == 4) {
            new com.tkay.expressad.video.dynview.j.b().c(view, cVar);
        } else {
            if (iH != 5) {
                return;
            }
            new com.tkay.expressad.video.dynview.j.b();
        }
    }

    private static void a(View view) {
        new com.tkay.expressad.video.dynview.j.b().a(view);
    }

    private static void c() {
        new com.tkay.expressad.video.dynview.j.b();
    }

    private static void b(View view, c cVar) {
        new com.tkay.expressad.video.dynview.j.b().a(view, cVar);
    }

    private static void c(View view, c cVar) {
        new com.tkay.expressad.video.dynview.j.b().b(view, cVar);
    }

    private static void d(View view, c cVar) {
        new com.tkay.expressad.video.dynview.j.b().c(view, cVar);
    }

    public static void b() {
        if (f7218a != null) {
            f7218a = null;
        }
    }
}
