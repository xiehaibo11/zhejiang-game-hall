package com.tkay.basead.ui;

public final class b {
    private android.view.ViewGroup a;
    private android.widget.ImageView b;
    private int c;

    final class 1 implements java.lang.Runnable {
        final com.tkay.basead.ui.b a;

        1(com.tkay.basead.ui.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.basead.ui.b r0 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.view.ViewGroup r0 = com.tkay.basead.ui.b.a(r0)     // Catch: java.lang.Throwable -> L5e
                boolean r0 = r0 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L5e
                if (r0 == 0) goto L30
                android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r1 = r3.a     // Catch: java.lang.Throwable -> L5e
                int r1 = com.tkay.basead.ui.b.b(r1)     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r2 = r3.a     // Catch: java.lang.Throwable -> L5e
                int r2 = com.tkay.basead.ui.b.b(r2)     // Catch: java.lang.Throwable -> L5e
                r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L5e
                r1 = 13
                r0.addRule(r1)     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r1 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.view.ViewGroup r1 = com.tkay.basead.ui.b.a(r1)     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r2 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.widget.ImageView r2 = com.tkay.basead.ui.b.c(r2)     // Catch: java.lang.Throwable -> L5e
                r1.addView(r2, r0)     // Catch: java.lang.Throwable -> L5e
                return
            L30:
                com.tkay.basead.ui.b r0 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.view.ViewGroup r0 = com.tkay.basead.ui.b.a(r0)     // Catch: java.lang.Throwable -> L5e
                boolean r0 = r0 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L5e
                if (r0 == 0) goto L5e
                android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r1 = r3.a     // Catch: java.lang.Throwable -> L5e
                int r1 = com.tkay.basead.ui.b.b(r1)     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r2 = r3.a     // Catch: java.lang.Throwable -> L5e
                int r2 = com.tkay.basead.ui.b.b(r2)     // Catch: java.lang.Throwable -> L5e
                r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L5e
                r1 = 17
                r0.gravity = r1     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r1 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.view.ViewGroup r1 = com.tkay.basead.ui.b.a(r1)     // Catch: java.lang.Throwable -> L5e
                com.tkay.basead.ui.b r2 = r3.a     // Catch: java.lang.Throwable -> L5e
                android.widget.ImageView r2 = com.tkay.basead.ui.b.c(r2)     // Catch: java.lang.Throwable -> L5e
                r1.addView(r2, r0)     // Catch: java.lang.Throwable -> L5e
            L5e:
                return
        }
    }



    public b(android.view.ViewGroup r4) {
            r3 = this;
            r3.<init>()
            r3.a = r4
            android.widget.ImageView r4 = new android.widget.ImageView
            android.view.ViewGroup r0 = r3.a
            android.content.Context r0 = r0.getContext()
            r4.<init>(r0)
            r3.b = r4
            android.view.ViewGroup r0 = r3.a
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = "myoffer_loading_id"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            r4.setId(r0)
            android.widget.ImageView r4 = r3.b
            android.view.ViewGroup r0 = r3.a
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = "myoffer_loading"
            java.lang.String r2 = "drawable"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            r4.setImageResource(r0)
            android.view.ViewGroup r4 = r3.a
            android.content.res.Resources r4 = r4.getResources()
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()
            r0 = 1
            r1 = 1112014848(0x42480000, float:50.0)
            float r4 = android.util.TypedValue.applyDimension(r0, r1, r4)
            int r4 = (int) r4
            r3.c = r4
            return
    }

    static android.view.ViewGroup a(com.tkay.basead.ui.b r0) {
            android.view.ViewGroup r0 = r0.a
            return r0
    }

    static int b(com.tkay.basead.ui.b r0) {
            int r0 = r0.c
            return r0
    }

    static android.widget.ImageView c(com.tkay.basead.ui.b r0) {
            android.widget.ImageView r0 = r0.b
            return r0
    }

    private void d() {
            r2 = this;
            android.widget.ImageView r0 = r2.b
            if (r0 == 0) goto L9
            android.view.ViewGroup r1 = r2.a
            r1.removeView(r0)
        L9:
            android.view.ViewGroup r0 = r2.a
            com.tkay.basead.ui.b$1 r1 = new com.tkay.basead.ui.b$1
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    public final void a() {
            r3 = this;
            android.view.ViewGroup r0 = r3.a
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            r1 = 1
            r2 = 1106247680(0x41f00000, float:30.0)
            float r0 = android.util.TypedValue.applyDimension(r1, r2, r0)
            int r0 = (int) r0
            r3.c = r0
            return
    }

    public final void b() {
            r2 = this;
            android.widget.ImageView r0 = r2.b
            if (r0 == 0) goto L9
            android.view.ViewGroup r1 = r2.a
            r1.removeView(r0)
        L9:
            android.view.ViewGroup r0 = r2.a
            com.tkay.basead.ui.b$1 r1 = new com.tkay.basead.ui.b$1
            r1.<init>(r2)
            r0.post(r1)
            android.widget.ImageView r0 = r2.b
            com.tkay.basead.ui.b$2 r1 = new com.tkay.basead.ui.b$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    public final void c() {
            r2 = this;
            android.widget.ImageView r0 = r2.b
            if (r0 == 0) goto Le
            android.view.ViewGroup r0 = r2.a
            com.tkay.basead.ui.b$3 r1 = new com.tkay.basead.ui.b$3
            r1.<init>(r2)
            r0.post(r1)
        Le:
            return
    }
}
