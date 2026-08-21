package com.kwad.components.ad.splashscreen.widget;

public class CloseCountDownView extends android.widget.LinearLayout {
    private com.kwad.components.ad.splashscreen.widget.CloseCountDownView.a Ep;
    private java.lang.String Fc;
    private int Fd;
    private android.widget.TextView Fe;
    private android.widget.TextView Ff;
    private android.widget.ImageView Fg;
    private java.lang.Runnable Fh;
    private boolean nL;



    public interface a {
        void dJ();

        void kV();
    }

    public CloseCountDownView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "%ss"
            r1.Fc = r0
            r0 = 5
            r1.Fd = r0
            r0 = 0
            r1.nL = r0
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1 r0 = new com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1
            r0.<init>(r1)
            r1.Fh = r0
            r1.Z(r2)
            return
    }

    public CloseCountDownView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r2 = "%ss"
            r0.Fc = r2
            r2 = 5
            r0.Fd = r2
            r2 = 0
            r0.nL = r2
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1 r2 = new com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1
            r2.<init>(r0)
            r0.Fh = r2
            r0.Z(r1)
            return
    }

    public CloseCountDownView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r2 = "%ss"
            r0.Fc = r2
            r2 = 5
            r0.Fd = r2
            r2 = 0
            r0.nL = r2
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1 r2 = new com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1
            r2.<init>(r0)
            r0.Fh = r2
            r0.Z(r1)
            return
    }

    public CloseCountDownView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r2 = "%ss"
            r0.Fc = r2
            r2 = 5
            r0.Fd = r2
            r2 = 0
            r0.nL = r2
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1 r2 = new com.kwad.components.ad.splashscreen.widget.CloseCountDownView$1
            r2.<init>(r0)
            r0.Fh = r2
            r0.Z(r1)
            return
    }

    private void Z(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.setOrientation(r0)
            int r0 = com.kwad.sdk.R.layout.ksad_endcard_close_view
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_ad_endcard_second
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.Fe = r2
            int r2 = com.kwad.sdk.R.id.ksad_ad_endcard_line
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.Ff = r2
            int r2 = com.kwad.sdk.R.id.ksad_splash_endcard_close_img
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.Fg = r2
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$2 r0 = new com.kwad.components.ad.splashscreen.widget.CloseCountDownView$2
            r0.<init>(r1)
            r2.setOnClickListener(r0)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0, int r1) {
            r0.ad(r1)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0) {
            boolean r0 = r0.nL
            return r0
    }

    private void ad(int r5) {
            r4 = this;
            android.widget.TextView r0 = r4.Fe
            java.lang.String r1 = r4.Fc
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3 = 0
            r2[r3] = r5
            java.lang.String r5 = java.lang.String.format(r1, r2)
            r0.setText(r5)
            return
    }

    static int b(com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0) {
            int r0 = r0.Fd
            return r0
    }

    static com.kwad.components.ad.splashscreen.widget.CloseCountDownView.a c(com.kwad.components.ad.splashscreen.widget.CloseCountDownView r0) {
            com.kwad.components.ad.splashscreen.widget.CloseCountDownView$a r0 = r0.Ep
            return r0
    }

    static int d(com.kwad.components.ad.splashscreen.widget.CloseCountDownView r2) {
            int r0 = r2.Fd
            int r1 = r0 + (-1)
            r2.Fd = r1
            return r0
    }

    private void eX() {
            r1 = this;
            java.lang.Runnable r0 = r1.Fh
            r1.post(r0)
            return
    }

    private void eY() {
            r1 = this;
            r0 = 1
            r1.nL = r0
            return
    }

    private void eZ() {
            r1 = this;
            r0 = 0
            r1.nL = r0
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdInfo r4) {
            r3 = this;
            boolean r0 = com.kwad.sdk.core.response.b.a.bV(r4)
            int r4 = com.kwad.sdk.core.response.b.a.bU(r4)
            r3.Fd = r4
            r4 = 0
            if (r0 == 0) goto L23
            android.widget.TextView r0 = r3.Fe
            r0.setVisibility(r4)
            android.widget.TextView r0 = r3.Ff
            r0.setVisibility(r4)
            int r0 = r3.Fd
            r3.ad(r0)
            android.content.Context r0 = r3.getContext()
            r1 = 1094713344(0x41400000, float:12.0)
            goto L29
        L23:
            android.content.Context r0 = r3.getContext()
            r1 = 1082130432(0x40800000, float:4.0)
        L29:
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            android.content.Context r2 = r3.getContext()
            int r1 = com.kwad.sdk.d.a.a.a(r2, r1)
            r3.setPadding(r0, r4, r1, r4)
            r3.eX()
            return
    }

    public final void aK() {
            r0 = this;
            r0.eZ()
            return
    }

    public final void aL() {
            r0 = this;
            r0.eY()
            return
    }

    public final void bd() {
            r2 = this;
            android.os.Handler r0 = r2.getHandler()
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.getHandler()
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        Le:
            return
    }

    public void setOnViewClickListener(com.kwad.components.ad.splashscreen.widget.CloseCountDownView.a r1) {
            r0 = this;
            r0.Ep = r1
            return
    }
}
