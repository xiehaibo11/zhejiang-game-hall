package com.mbridge.msdk.video.module;

public class MBridgeVastEndCardView extends com.mbridge.msdk.video.module.MBridgeBaseView {
    private android.view.ViewGroup n;
    private android.view.View o;
    private android.view.View p;



    public MBridgeVastEndCardView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeVastEndCardView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L1b
            android.view.View r0 = r2.o
            com.mbridge.msdk.video.module.MBridgeVastEndCardView$1 r1 = new com.mbridge.msdk.video.module.MBridgeVastEndCardView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.p
            com.mbridge.msdk.video.module.MBridgeVastEndCardView$2 r1 = new com.mbridge.msdk.video.module.MBridgeVastEndCardView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L1b:
            return
    }

    @Override
    public void init(android.content.Context r4) {
            r3 = this;
            java.lang.String r4 = "mbridge_reward_endcard_vast"
            int r4 = r3.findLayout(r4)
            if (r4 < 0) goto L6d
            android.view.LayoutInflater r0 = r3.c
            r0.inflate(r4, r3)
            java.lang.String r4 = "mbridge_rl_content"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4
            r3.n = r4
            java.lang.String r4 = "mbridge_iv_vastclose"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            r3.o = r4
            java.lang.String r4 = "mbridge_iv_vastok"
            int r4 = r3.findID(r4)
            android.view.View r4 = r3.findViewById(r4)
            r3.p = r4
            r0 = 3
            android.view.View[] r0 = new android.view.View[r0]
            r1 = 0
            android.view.ViewGroup r2 = r3.n
            r0[r1] = r2
            android.view.View r1 = r3.o
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
            java.lang.String r4 = "mbridge_reward_endcard_vast_bg"
            int r4 = r3.findColor(r4)
            r3.setBackgroundResource(r4)
            r3.setClickable(r2)
            android.view.ViewGroup r4 = r3.n
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
            com.mbridge.msdk.video.module.a.a r0 = r3.e
            r1 = 111(0x6f, float:1.56E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    public void preLoadData(com.mbridge.msdk.video.js.factory.b r1) {
            r0 = this;
            return
    }
}
