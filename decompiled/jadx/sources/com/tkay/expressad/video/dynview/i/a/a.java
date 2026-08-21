package com.tkay.expressad.video.dynview.i.a;

import android.graphics.Bitmap;
import android.view.View;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.video.dynview.c;
import com.tkay.expressad.video.dynview.g.a;
import com.tkay.expressad.video.dynview.i.b;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f7233a;
    private View b;
    private Bitmap c;
    private Bitmap d;

    private a() {
    }

    public static a a() {
        a aVar;
        if (f7233a == null) {
            synchronized (a.class) {
                if (f7233a == null) {
                    f7233a = new a();
                }
                aVar = f7233a;
            }
            return aVar;
        }
        return f7233a;
    }

    public final void a(Map map, c cVar, View view) {
        Bitmap bitmap;
        List<com.tkay.expressad.foundation.d.c> listG;
        this.b = view;
        int iE = cVar.e();
        float fD = cVar.d();
        float fC = cVar.c();
        if (map != null && map.size() > 1 && (listG = cVar.g()) != null && listG.size() > 1) {
            if (map.get(p.a(listG.get(0).be())) != null && (map.get(p.a(listG.get(0).be())) instanceof Bitmap)) {
                Bitmap bitmap2 = (Bitmap) map.get(p.a(listG.get(0).be()));
                if (listG.get(0) != null && bitmap2 != null && !bitmap2.isRecycled()) {
                    b.a();
                    this.c = b.a(bitmap2, 0);
                }
            }
            if (map.get(p.a(listG.get(1).be())) != null && (map.get(p.a(listG.get(1).be())) instanceof Bitmap)) {
                Bitmap bitmap3 = (Bitmap) map.get(p.a(listG.get(1).be()));
                if (listG.get(1) != null && !bitmap3.isRecycled()) {
                    b.a();
                    this.d = b.a(bitmap3, 1);
                }
            }
        }
        Bitmap bitmap4 = this.c;
        if (bitmap4 == null || bitmap4.isRecycled() || (bitmap = this.d) == null || bitmap.isRecycled()) {
            return;
        }
        a(iE, fD, fC, this.c, this.d);
    }

    private synchronized void a(int i, float f, float f2, Bitmap bitmap, Bitmap bitmap2) {
        a.C0479a c0479aA = com.tkay.expressad.video.dynview.g.a.a();
        c0479aA.a(i).a(bitmap).b(bitmap2);
        if (i != 2 || f > f2) {
            c0479aA.a(f).b(f2);
        } else {
            c0479aA.a(f2).b(f);
        }
        this.b.setBackgroundDrawable(c0479aA.b());
    }

    public final void b() {
        if (this.b != null) {
            this.b = null;
        }
        Bitmap bitmap = this.c;
        if (bitmap != null && !bitmap.isRecycled()) {
            this.c.recycle();
            this.c = null;
        }
        Bitmap bitmap2 = this.d;
        if (bitmap2 == null || bitmap2.isRecycled()) {
            return;
        }
        this.d.recycle();
        this.d = null;
    }
}
