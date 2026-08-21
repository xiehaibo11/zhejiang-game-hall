package com.tkay.basead.ui;

public class MraidBannerATView extends com.tkay.basead.ui.BaseBannerATView {
    com.tkay.basead.ui.MraidContainerView u;

    final class 1 implements com.tkay.basead.ui.MraidContainerView.a {
        final com.tkay.basead.ui.MraidBannerATView a;

        1(com.tkay.basead.ui.MraidBannerATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.basead.ui.MraidBannerATView r0 = r1.a     // Catch: java.lang.Throwable -> L5
                r0.b()     // Catch: java.lang.Throwable -> L5
            L5:
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.basead.ui.MraidBannerATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                r0.v(r2)
                com.tkay.basead.ui.MraidBannerATView r2 = r1.a
                r0 = 1
                r2.b(r0)
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }
    }

    public MraidBannerATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MraidBannerATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.c()
            return
    }

    private void o() {
            r10 = this;
            com.tkay.core.common.f.i r0 = r10.c
            com.tkay.core.common.f.j r0 = r0.m
            java.lang.String r0 = r0.r()
            android.content.Context r1 = r10.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r10.getContext()
            java.lang.String r3 = "myoffer_web_banner_ad_layout"
            java.lang.String r4 = "layout"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.inflate(r2, r10)
            android.content.Context r1 = r10.getContext()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.content.Context r3 = r10.getContext()
            r4 = 1134559232(0x43a00000, float:320.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            int r5 = r0.hashCode()
            r6 = -559799608(0xffffffffdea222c8, float:-5.84156E18)
            r7 = 2
            r8 = 1
            r9 = 0
            if (r5 == r6) goto L5e
            r6 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r5 == r6) goto L54
            r6 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r5 == r6) goto L4a
            goto L68
        L4a:
            java.lang.String r5 = "728x90"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r8
            goto L69
        L54:
            java.lang.String r5 = "320x90"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r9
            goto L69
        L5e:
            java.lang.String r5 = "300x250"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r7
            goto L69
        L68:
            r0 = -1
        L69:
            r5 = 1119092736(0x42b40000, float:90.0)
            if (r0 == 0) goto L9a
            if (r0 == r8) goto L87
            if (r0 == r7) goto L72
            goto Laa
        L72:
            android.content.Context r0 = r10.getContext()
            r1 = 1133903872(0x43960000, float:300.0)
            int r3 = com.tkay.core.common.l.h.a(r0, r1)
            android.content.Context r0 = r10.getContext()
            r1 = 1132068864(0x437a0000, float:250.0)
            int r1 = com.tkay.core.common.l.h.a(r0, r1)
            goto Laa
        L87:
            android.content.Context r0 = r10.getContext()
            r1 = 1144258560(0x44340000, float:720.0)
            int r3 = com.tkay.core.common.l.h.a(r0, r1)
            android.content.Context r0 = r10.getContext()
            int r1 = com.tkay.core.common.l.h.a(r0, r5)
            goto Laa
        L9a:
            android.content.Context r0 = r10.getContext()
            int r3 = com.tkay.core.common.l.h.a(r0, r4)
            android.content.Context r0 = r10.getContext()
            int r1 = com.tkay.core.common.l.h.a(r0, r5)
        Laa:
            android.content.res.Resources r0 = r10.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            int r0 = java.lang.Math.min(r3, r0)
            com.tkay.basead.ui.MraidContainerView r3 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r4 = r10.getContext()
            com.tkay.core.common.f.h r5 = r10.d
            com.tkay.core.common.f.i r6 = r10.c
            com.tkay.basead.ui.MraidBannerATView$1 r7 = new com.tkay.basead.ui.MraidBannerATView$1
            r7.<init>(r10)
            r3.<init>(r4, r5, r6, r7)
            r10.u = r3
            r3.init()
            android.content.Context r3 = r10.getContext()
            java.lang.String r4 = "id"
            java.lang.String r5 = "myoffer_banner_web"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            android.view.View r3 = r10.findViewById(r3)
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3
            com.tkay.basead.ui.MraidContainerView r5 = r10.u
            android.content.Context r6 = r10.getContext()
            int r2 = com.tkay.core.common.l.h.a(r6, r2)
            r5.setMinimumHeight(r2)
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r2.<init>(r0, r1)
            r5 = 17
            r2.gravity = r5
            com.tkay.basead.ui.MraidContainerView r5 = r10.u
            r3.addView(r5, r9, r2)
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r2.<init>(r0, r1)
            r10.setLayoutParams(r2)
            android.content.Context r0 = r10.getContext()
            java.lang.String r1 = "myoffer_banner_close"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r4)
            android.view.View r0 = r10.findViewById(r0)
            com.tkay.basead.ui.CloseImageView r0 = (com.tkay.basead.ui.CloseImageView) r0
            r10.t = r0
            com.tkay.core.common.f.i r0 = r10.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.s()
            if (r0 != 0) goto L133
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            r0.setVisibility(r9)
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            com.tkay.core.common.f.i r1 = r10.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.h()
            r10.a(r0, r1)
            return
        L133:
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    protected final void a() {
            r10 = this;
            com.tkay.core.common.f.i r0 = r10.c
            com.tkay.core.common.f.j r0 = r0.m
            java.lang.String r0 = r0.r()
            android.content.Context r1 = r10.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            android.content.Context r2 = r10.getContext()
            java.lang.String r3 = "myoffer_web_banner_ad_layout"
            java.lang.String r4 = "layout"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.inflate(r2, r10)
            android.content.Context r1 = r10.getContext()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.content.Context r3 = r10.getContext()
            r4 = 1134559232(0x43a00000, float:320.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r4)
            int r5 = r0.hashCode()
            r6 = -559799608(0xffffffffdea222c8, float:-5.84156E18)
            r7 = 2
            r8 = 1
            r9 = 0
            if (r5 == r6) goto L5e
            r6 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r5 == r6) goto L54
            r6 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r5 == r6) goto L4a
            goto L68
        L4a:
            java.lang.String r5 = "728x90"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r8
            goto L69
        L54:
            java.lang.String r5 = "320x90"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r9
            goto L69
        L5e:
            java.lang.String r5 = "300x250"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L68
            r0 = r7
            goto L69
        L68:
            r0 = -1
        L69:
            r5 = 1119092736(0x42b40000, float:90.0)
            if (r0 == 0) goto L9a
            if (r0 == r8) goto L87
            if (r0 == r7) goto L72
            goto Laa
        L72:
            android.content.Context r0 = r10.getContext()
            r1 = 1133903872(0x43960000, float:300.0)
            int r3 = com.tkay.core.common.l.h.a(r0, r1)
            android.content.Context r0 = r10.getContext()
            r1 = 1132068864(0x437a0000, float:250.0)
            int r1 = com.tkay.core.common.l.h.a(r0, r1)
            goto Laa
        L87:
            android.content.Context r0 = r10.getContext()
            r1 = 1144258560(0x44340000, float:720.0)
            int r3 = com.tkay.core.common.l.h.a(r0, r1)
            android.content.Context r0 = r10.getContext()
            int r1 = com.tkay.core.common.l.h.a(r0, r5)
            goto Laa
        L9a:
            android.content.Context r0 = r10.getContext()
            int r3 = com.tkay.core.common.l.h.a(r0, r4)
            android.content.Context r0 = r10.getContext()
            int r1 = com.tkay.core.common.l.h.a(r0, r5)
        Laa:
            android.content.res.Resources r0 = r10.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r0 = r0.widthPixels
            int r0 = java.lang.Math.min(r3, r0)
            com.tkay.basead.ui.MraidContainerView r3 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r4 = r10.getContext()
            com.tkay.core.common.f.h r5 = r10.d
            com.tkay.core.common.f.i r6 = r10.c
            com.tkay.basead.ui.MraidBannerATView$1 r7 = new com.tkay.basead.ui.MraidBannerATView$1
            r7.<init>(r10)
            r3.<init>(r4, r5, r6, r7)
            r10.u = r3
            r3.init()
            android.content.Context r3 = r10.getContext()
            java.lang.String r4 = "id"
            java.lang.String r5 = "myoffer_banner_web"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            android.view.View r3 = r10.findViewById(r3)
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3
            com.tkay.basead.ui.MraidContainerView r5 = r10.u
            android.content.Context r6 = r10.getContext()
            int r2 = com.tkay.core.common.l.h.a(r6, r2)
            r5.setMinimumHeight(r2)
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r2.<init>(r0, r1)
            r5 = 17
            r2.gravity = r5
            com.tkay.basead.ui.MraidContainerView r5 = r10.u
            r3.addView(r5, r9, r2)
            android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
            r2.<init>(r0, r1)
            r10.setLayoutParams(r2)
            android.content.Context r0 = r10.getContext()
            java.lang.String r1 = "myoffer_banner_close"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r4)
            android.view.View r0 = r10.findViewById(r0)
            com.tkay.basead.ui.CloseImageView r0 = (com.tkay.basead.ui.CloseImageView) r0
            r10.t = r0
            com.tkay.core.common.f.i r0 = r10.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.s()
            if (r0 != 0) goto L133
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            r0.setVisibility(r9)
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            com.tkay.core.common.f.i r1 = r10.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.h()
            r10.a(r0, r1)
            return
        L133:
            com.tkay.basead.ui.CloseImageView r0 = r10.t
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    protected final void b() {
            r1 = this;
            com.tkay.basead.ui.MraidContainerView r0 = r1.u
            if (r0 != 0) goto L5
            return
        L5:
            super.b()
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            com.tkay.basead.ui.MraidContainerView r0 = r1.u
            if (r0 == 0) goto La
            r0.release()
        La:
            return
    }
}
