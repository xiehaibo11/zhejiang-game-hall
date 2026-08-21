package com.tkay.basead.ui;

public class MraidEndCardView extends com.tkay.basead.ui.BaseEndCardView {
    private static java.lang.String g;
    com.tkay.basead.ui.MraidContainerView e;
    com.tkay.basead.ui.MraidEndCardView.a f;


    public interface a {
        void a();

        void a(java.lang.String r1);

        void b();
    }

    static {
            java.lang.Class<com.tkay.basead.ui.MraidEndCardView> r0 = com.tkay.basead.ui.MraidEndCardView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.MraidEndCardView.g = r0
            return
    }

    public MraidEndCardView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = -1
            r0.setBackgroundColor(r1)
            return
    }

    @Override
    protected final void a() {
            r1 = this;
            com.tkay.basead.ui.MraidContainerView r0 = r1.e
            if (r0 == 0) goto L7
            r0.release()
        L7:
            return
    }

    public void init(boolean r6) {
            r5 = this;
            com.tkay.basead.ui.MraidContainerView r0 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.b
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.MraidEndCardView$1 r4 = new com.tkay.basead.ui.MraidEndCardView$1
            r4.<init>(r5)
            r0.<init>(r1, r2, r3, r4)
            r5.e = r0
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
            com.tkay.basead.ui.MraidContainerView r0 = r5.e
            r1 = 1
            r0.setNeedRegisterVolumeChangeReceiver(r1)
            com.tkay.basead.ui.MraidContainerView r0 = r5.e
            r0.init()
            if (r6 == 0) goto L2f
            com.tkay.basead.ui.MraidContainerView r6 = r5.e
            r6.loadMraidWebView()
        L2f:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            com.tkay.basead.ui.MraidContainerView r0 = r1.e
            if (r0 == 0) goto La
            r0.fireMraidIsViewable(r2)
        La:
            return
    }

    public void setEndCardListener(com.tkay.basead.ui.MraidEndCardView.a r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
