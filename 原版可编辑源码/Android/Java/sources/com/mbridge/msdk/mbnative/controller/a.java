package com.mbridge.msdk.mbnative.controller;

import android.graphics.Rect;
import android.os.Handler;
import android.view.View;
import android.view.ViewTreeObserver;
import com.mbridge.msdk.foundation.tools.z;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

public final class a {
    private WeakReference<ViewTreeObserver> a;
    private List<View> b;
    private ViewTreeObserver.OnPreDrawListener c;
    private a d;
    private Handler e;
    private boolean f;

    public interface a {
        void a(ArrayList<View> arrayList, ArrayList<View> arrayList2);
    }

    public a(List<View> list, a aVar, Handler handler) {
        ArrayList arrayList = new ArrayList();
        this.b = arrayList;
        this.c = null;
        this.d = aVar;
        this.e = handler;
        if (list != null) {
            this.b = list;
        } else {
            arrayList.clear();
        }
        try {
            b();
        } catch (Throwable th) {
            z.c("ImpressionTracker", th.getMessage(), th);
        }
        try {
            this.c = new ViewTreeObserver.OnPreDrawListener() {
                @Override
                public final boolean onPreDraw() {
                    a.this.b();
                    return true;
                }
            };
        } catch (Throwable th2) {
            z.c("ImpressionTracker", th2.getMessage(), th2);
        }
    }

    private void b() {
        if (this.f) {
            return;
        }
        Handler handler = this.e;
        if (handler != null) {
            handler.postDelayed(new Runnable() {
                @Override
                public final void run() {
                    a.b(a.this);
                }
            }, 100L);
        }
        this.f = true;
    }

    public final void a(View view) {
        View view2;
        final View viewA = null;
        if (view != null) {
            viewA = d.a(view.getContext(), view);
            this.b.add(view);
        } else {
            List<View> list = this.b;
            if (list != null && list.size() > 0) {
                for (int i = 0; i < this.b.size() && ((view2 = this.b.get(i)) == null || (viewA = d.a(view2.getContext(), view2)) == null); i++) {
                }
            }
        }
        if (viewA == null) {
            return;
        }
        viewA.post(new Runnable() {
            @Override
            public final void run() {
                ViewTreeObserver viewTreeObserver = viewA.getViewTreeObserver();
                if (viewTreeObserver == null || viewTreeObserver.isAlive()) {
                    a.this.a = new WeakReference(viewTreeObserver);
                    if (a.this.c != null) {
                        viewTreeObserver.addOnPreDrawListener(a.this.c);
                    }
                }
            }
        });
    }

    public final void a() {
        try {
            this.f = false;
            if (this.a != null && this.a.get() != null) {
                ViewTreeObserver viewTreeObserver = this.a.get();
                if (viewTreeObserver != null && viewTreeObserver.isAlive()) {
                    viewTreeObserver.removeOnPreDrawListener(this.c);
                }
                this.a.clear();
            }
            this.d = null;
            this.c = null;
            if (this.b != null) {
                this.b.clear();
            }
            this.b = null;
        } catch (Throwable unused) {
        }
    }

    static void b(a aVar) {
        boolean z;
        try {
            aVar.f = false;
            if (aVar.b == null || aVar.b.size() <= 0) {
                return;
            }
            ArrayList<View> arrayList = new ArrayList<>();
            ArrayList<View> arrayList2 = new ArrayList<>();
            for (int i = 0; i < aVar.b.size(); i++) {
                View view = aVar.b.get(i);
                if (view != null && view.getVisibility() == 0) {
                    Rect rect = new Rect();
                    if (view.getGlobalVisibleRect(rect)) {
                        long jHeight = rect.height() * rect.width();
                        long height = view.getHeight() * view.getWidth();
                        z = height > 0 && jHeight > height * 0.4d;
                    }
                }
                if (z) {
                    arrayList.add(view);
                } else {
                    arrayList2.add(view);
                }
            }
            if (aVar.d != null) {
                aVar.d.a(arrayList, arrayList2);
            }
            if (arrayList.size() > 0) {
                aVar.a();
            }
            arrayList.clear();
            arrayList2.clear();
        } catch (Exception unused) {
        }
    }
}
