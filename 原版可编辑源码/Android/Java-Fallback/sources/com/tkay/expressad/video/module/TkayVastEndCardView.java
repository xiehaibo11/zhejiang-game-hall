package com.tkay.expressad.video.module;

public class TkayVastEndCardView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.f {
    private static final java.lang.String n = "tkay_reward_endcard_vast";
    private android.view.ViewGroup o;
    private android.view.View p;
    private android.view.View q;



    public TkayVastEndCardView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TkayVastEndCardView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void a() {
            r3 = this;
            boolean r0 = r3.f
            if (r0 == 0) goto L22
            r3.setMatchParent()
            java.lang.String r0 = "tkay_reward_endcard_vast_bg"
            int r0 = r3.findColor(r0)
            r3.setBackgroundResource(r0)
            r0 = 1
            r3.setClickable(r0)
            android.view.ViewGroup r0 = r3.o
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = 13
            r2 = -1
            r0.addRule(r1, r2)
        L22:
            return
    }

    private boolean b() {
            r4 = this;
            java.lang.String r0 = "tkay_rl_content"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r4.o = r0
            java.lang.String r0 = "tkay_iv_vastclose"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            r4.p = r0
            java.lang.String r0 = "tkay_iv_vastok"
            int r0 = r4.findID(r0)
            android.view.View r0 = r4.findViewById(r0)
            r4.q = r0
            r1 = 3
            android.view.View[] r1 = new android.view.View[r1]
            android.view.ViewGroup r2 = r4.o
            r3 = 0
            r1[r3] = r2
            android.view.View r2 = r4.p
            r3 = 1
            r1[r3] = r2
            r2 = 2
            r1[r2] = r0
            boolean r0 = r4.isNotNULL(r1)
            return r0
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L1b
            android.view.View r0 = r2.p
            com.tkay.expressad.video.module.TkayVastEndCardView$1 r1 = new com.tkay.expressad.video.module.TkayVastEndCardView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.q
            com.tkay.expressad.video.module.TkayVastEndCardView$2 r1 = new com.tkay.expressad.video.module.TkayVastEndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L1b:
            return
    }

    @Override
    public void init(android.content.Context r4) {
            r3 = this;
            java.lang.String r4 = "tkay_reward_endcard_vast"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L6d
            android.view.LayoutInflater r0 = r3.c
            r0.inflate(r4, r3)
            java.lang.String r4 = "tkay_rl_content"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            r3.o = r4
            java.lang.String r4 = "tkay_iv_vastclose"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            r3.p = r4
            java.lang.String r4 = "tkay_iv_vastok"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            r3.q = r4
            r0 = 3
            android.view.View[] r0 = new android.view.View[r0]
            r1 = 0
            android.view.ViewGroup r2 = r3.o
            r0[r1] = r2
            android.view.View r1 = r3.p
            r2 = 1
            r0[r2] = r1
            r1 = 2
            r0[r1] = r4
            boolean r4 = r3.isNotNULL(r0)
            r3.f = r4
            r3.c()
            boolean r4 = r3.f
            if (r4 == 0) goto L6d
            r3.setMatchParent()
            java.lang.String r4 = "tkay_reward_endcard_vast_bg"
            int r4 = r3.findColor(r4)
            r3.setBackgroundResource(r4)
            r3.setClickable(r2)
            android.view.ViewGroup r4 = r3.o
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r4 = (android.widget.RelativeLayout.LayoutParams) r4
            r0 = 13
            r1 = -1
            r4.addRule(r0, r1)
        L6d:
            return
    }

    public void notifyShowListener() {
            r3 = this;
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 111(0x6f, float:1.56E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r1) {
            r0 = this;
            return
    }
}
