package com.tkay.core.common.l.a;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewTreeObserver;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final int f6227a;
    final ViewTreeObserver.OnPreDrawListener b;
    private int c;
    private final ArrayList<View> d;
    private long e;
    private final Map<View, a> f;
    private final b g;
    private d h;
    private final c i;
    private final Handler j;
    private boolean k;

    interface d {
        void a(List<View> list);
    }

    static /* synthetic */ boolean d(f fVar) {
        fVar.k = false;
        return false;
    }

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f6229a;
        int b;
        long c;
        View d;
        Integer e;

        a() {
        }
    }

    public f() {
        this(new WeakHashMap(10), new b(), new Handler(Looper.getMainLooper()));
    }

    public f(int i) {
        this(new WeakHashMap(10), new b(), new Handler(Looper.getMainLooper()));
        this.c = i;
    }

    private f(Map<View, a> map, b bVar, Handler handler) {
        this.c = 100;
        this.f6227a = 50;
        this.e = 0L;
        this.f = map;
        this.g = bVar;
        this.j = handler;
        this.i = new c();
        this.d = new ArrayList<>(50);
        this.b = new ViewTreeObserver.OnPreDrawListener() { // from class: com.tkay.core.common.l.a.f.1
            @Override // android.view.ViewTreeObserver.OnPreDrawListener
            public final boolean onPreDraw() {
                f.this.c();
                return true;
            }
        };
    }

    final void a(d dVar) {
        this.h = dVar;
    }

    private void a(View view, View view2, int i, Integer num) {
        a(view, view2, i, i, num);
    }

    final void a(View view, View view2, int i, int i2, Integer num) {
        try {
            if (a(view2.getContext(), view2)) {
                a aVar = this.f.get(view2);
                if (aVar == null) {
                    aVar = new a();
                    this.f.put(view2, aVar);
                    c();
                }
                int iMin = Math.min(i2, i);
                aVar.d = view;
                aVar.f6229a = i;
                aVar.b = iMin;
                aVar.c = this.e;
                aVar.e = num;
                view2.getViewTreeObserver().addOnPreDrawListener(this.b);
                long j = this.e + 1;
                this.e = j;
                if (j % 50 == 0) {
                    a(j - 50);
                }
            }
        } catch (Throwable unused) {
        }
    }

    private void a(long j) {
        for (Map.Entry<View, a> entry : this.f.entrySet()) {
            if (entry.getValue().c < j) {
                this.d.add(entry.getKey());
            }
        }
        Iterator<View> it = this.d.iterator();
        while (it.hasNext()) {
            a(it.next());
        }
        this.d.clear();
    }

    final void a(View view) {
        this.f.remove(view);
    }

    final void a() {
        this.f.clear();
        this.j.removeMessages(0);
        this.k = false;
    }

    final void b() {
        a();
        this.h = null;
    }

    final void c() {
        if (this.k) {
            return;
        }
        this.k = true;
        this.j.postDelayed(this.i, this.c);
    }

    class c implements Runnable {
        private final ArrayList<View> c = new ArrayList<>();
        private final ArrayList<View> b = new ArrayList<>();

        c() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            for (Map.Entry entry : f.this.f.entrySet()) {
                View view = (View) entry.getKey();
                int i = ((a) entry.getValue()).f6229a;
                int i2 = ((a) entry.getValue()).b;
                Integer num = ((a) entry.getValue()).e;
                View view2 = ((a) entry.getValue()).d;
                if (!f.this.g.a(view2, view, i, num)) {
                    if (!f.this.g.a(view2, view, i2, null)) {
                        this.c.add(view);
                    }
                } else {
                    this.b.add(view);
                    try {
                        view.getViewTreeObserver().removeOnPreDrawListener(f.this.b);
                    } catch (Throwable unused) {
                    }
                }
            }
            if (f.this.h != null) {
                f.this.h.a(this.b);
            }
            this.b.clear();
            this.c.clear();
            f.d(f.this);
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Rect f6230a = new Rect();

        private static boolean a(long j, int i) {
            return SystemClock.uptimeMillis() - j >= ((long) i);
        }

        public final boolean a(View view, View view2, int i, Integer num) {
            if (view2 == null || !view2.isShown() || view.getParent() == null || view2.getWindowVisibility() != 0 || !view2.getGlobalVisibleRect(this.f6230a)) {
                return false;
            }
            long jHeight = ((long) this.f6230a.height()) * ((long) this.f6230a.width());
            long height = ((long) view2.getHeight()) * ((long) view2.getWidth());
            if (height <= 0) {
                return false;
            }
            return (num == null || num.intValue() <= 0) ? jHeight * 100 >= ((long) i) * height : jHeight >= ((long) num.intValue());
        }
    }

    private static boolean a(Context context, View view) {
        View rootView;
        View viewFindViewById = null;
        View viewFindViewById2 = !(context instanceof Activity) ? null : ((Activity) context).getWindow().getDecorView().findViewById(R.id.content);
        if (view != null && (rootView = view.getRootView()) != null && (viewFindViewById = rootView.findViewById(R.id.content)) == null) {
            viewFindViewById = rootView;
        }
        if (viewFindViewById2 == null) {
            viewFindViewById2 = viewFindViewById;
        }
        return viewFindViewById2 != null && viewFindViewById2.getViewTreeObserver().isAlive();
    }

    private void a(View view, int i, Integer num) {
        a(view, view, i, i, num);
    }
}
