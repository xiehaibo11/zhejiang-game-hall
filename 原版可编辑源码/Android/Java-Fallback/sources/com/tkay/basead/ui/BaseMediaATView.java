package com.tkay.basead.ui;

public abstract class BaseMediaATView extends android.widget.FrameLayout {
    protected com.tkay.core.common.f.h a;
    protected com.tkay.core.common.f.j b;
    protected com.tkay.core.common.f.i c;
    protected com.tkay.basead.ui.BaseMediaATView.a d;
    protected boolean e;
    protected android.widget.FrameLayout f;
    private int g;
    private int h;
    private com.tkay.basead.ui.CloseImageView i;

    final class 1 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.BaseMediaATView a;

        1(com.tkay.basead.ui.BaseMediaATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.ui.BaseMediaATView r1 = r0.a
                com.tkay.basead.ui.BaseMediaATView$a r1 = r1.d
                if (r1 == 0) goto Ld
                com.tkay.basead.ui.BaseMediaATView r1 = r0.a
                com.tkay.basead.ui.BaseMediaATView$a r1 = r1.d
                r1.onClickCloseView()
            Ld:
                return
        }
    }

    public interface a {
        void onClickCloseView();
    }

    public BaseMediaATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.g = r1
            r0.h = r1
            return
    }

    public BaseMediaATView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, boolean r4, com.tkay.basead.ui.BaseMediaATView.a r5) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.g = r1
            r0.h = r1
            r0.a = r2
            com.tkay.core.common.f.j r1 = r3.m
            r0.b = r1
            r0.e = r4
            r0.d = r5
            r0.c = r3
            android.content.Context r1 = r0.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r0.getContext()
            java.lang.String r3 = "base_myoffer_media_ad_view"
            java.lang.String r4 = "layout"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.inflate(r2, r0)
            android.content.Context r1 = r0.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "base_media_view_content"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            r0.f = r1
            android.content.Context r1 = r0.getContext()
            java.lang.String r3 = "base_media_ad_close"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            com.tkay.basead.ui.CloseImageView r1 = (com.tkay.basead.ui.CloseImageView) r1
            r0.i = r1
            return
    }

    private void a() {
            r2 = this;
            com.tkay.basead.ui.CloseImageView r0 = r2.i
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r2.e
            if (r1 == 0) goto Le
            r1 = 0
            r0.setVisibility(r1)
            goto L13
        Le:
            r1 = 8
            r0.setVisibility(r1)
        L13:
            com.tkay.basead.ui.CloseImageView r0 = r2.i
            com.tkay.core.common.f.j r1 = r2.b
            int r1 = r1.h()
            a(r0, r1)
            com.tkay.basead.ui.CloseImageView r0 = r2.i
            com.tkay.basead.ui.BaseMediaATView$1 r1 = new com.tkay.basead.ui.BaseMediaATView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    private static void a(com.tkay.basead.ui.a r1, int r2) {
            if (r1 == 0) goto L19
            r0 = 2
            if (r2 == r0) goto L14
            r0 = 3
            if (r2 == r0) goto L11
            r0 = 4
            if (r2 == r0) goto Le
            r2 = 1065353216(0x3f800000, float:1.0)
            goto L16
        Le:
            r2 = 1056964608(0x3f000000, float:0.5)
            goto L16
        L11:
            r2 = 1061158912(0x3f400000, float:0.75)
            goto L16
        L14:
            r2 = 1069547520(0x3fc00000, float:1.5)
        L16:
            r1.setClickAreaScaleFactor(r2)
        L19:
            return
    }

    public void destroy() {
            r0 = this;
            return
    }

    public java.util.List<android.view.View> getClickViews() {
            r1 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
    }

    public int getMediaViewHeight() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public int getMediaViewWidth() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public android.view.View getMonitorClickView() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void init(int r1, int r2) {
            r0 = this;
            r0.g = r1
            r0.h = r2
            com.tkay.basead.ui.CloseImageView r1 = r0.i
            if (r1 == 0) goto L2b
            boolean r2 = r0.e
            if (r2 == 0) goto L11
            r2 = 0
            r1.setVisibility(r2)
            goto L16
        L11:
            r2 = 8
            r1.setVisibility(r2)
        L16:
            com.tkay.basead.ui.CloseImageView r1 = r0.i
            com.tkay.core.common.f.j r2 = r0.b
            int r2 = r2.h()
            a(r1, r2)
            com.tkay.basead.ui.CloseImageView r1 = r0.i
            com.tkay.basead.ui.BaseMediaATView$1 r2 = new com.tkay.basead.ui.BaseMediaATView$1
            r2.<init>(r0)
            r1.setOnClickListener(r2)
        L2b:
            return
    }

    public void notifyClick() {
            r2 = this;
            com.tkay.basead.ui.CloseImageView r0 = r2.i
            if (r0 == 0) goto Lf
            com.tkay.core.common.f.j r1 = r2.b
            if (r1 == 0) goto Lf
            int r1 = r1.g()
            a(r0, r1)
        Lf:
            return
    }
}
