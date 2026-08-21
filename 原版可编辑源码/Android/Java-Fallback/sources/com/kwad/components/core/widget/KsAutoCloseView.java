package com.kwad.components.core.widget;

public class KsAutoCloseView extends android.widget.LinearLayout implements android.view.View.OnClickListener {
    private static java.lang.String AZ = "%s秒后自动关闭";
    private android.widget.TextView YP;
    private android.widget.ImageView YQ;
    private com.kwad.components.core.widget.KsAutoCloseView.a YR;
    private boolean YS;
    private boolean YT;
    private int countDown;


    public interface a {
        void dI();

        void dJ();
    }

    static {
            return
    }

    public KsAutoCloseView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 10
            r1.countDown = r0
            r0 = 1
            r1.YS = r0
            r0 = 0
            r1.YT = r0
            r1.R(r2)
            return
    }

    public KsAutoCloseView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r2 = 10
            r0.countDown = r2
            r2 = 1
            r0.YS = r2
            r2 = 0
            r0.YT = r2
            r0.R(r1)
            return
    }

    public KsAutoCloseView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r2 = 10
            r0.countDown = r2
            r2 = 1
            r0.YS = r2
            r2 = 0
            r0.YT = r2
            r0.R(r1)
            return
    }

    public KsAutoCloseView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r2 = 10
            r0.countDown = r2
            r2 = 1
            r0.YS = r2
            r2 = 0
            r0.YT = r2
            r0.R(r1)
            return
    }

    private void R(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_auto_close
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_auto_close_text
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.YP = r2
            int r2 = com.kwad.sdk.R.id.ksad_auto_close_btn
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.YQ = r2
            r2.setOnClickListener(r1)
            return
    }

    static void a(com.kwad.components.core.widget.KsAutoCloseView r0, int r1) {
            r0.w(r1)
            return
    }

    static boolean a(com.kwad.components.core.widget.KsAutoCloseView r0) {
            boolean r0 = r0.YS
            return r0
    }

    static boolean b(com.kwad.components.core.widget.KsAutoCloseView r0) {
            boolean r0 = r0.YT
            return r0
    }

    static int c(com.kwad.components.core.widget.KsAutoCloseView r0) {
            int r0 = r0.countDown
            return r0
    }

    static com.kwad.components.core.widget.KsAutoCloseView.a d(com.kwad.components.core.widget.KsAutoCloseView r0) {
            com.kwad.components.core.widget.KsAutoCloseView$a r0 = r0.YR
            return r0
    }

    static int e(com.kwad.components.core.widget.KsAutoCloseView r2) {
            int r0 = r2.countDown
            int r1 = r0 + (-1)
            r2.countDown = r1
            return r0
    }

    private void w(int r5) {
            r4 = this;
            android.widget.TextView r0 = r4.YP
            java.lang.String r1 = com.kwad.components.core.widget.KsAutoCloseView.AZ
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3 = 0
            r2[r3] = r5
            java.lang.String r5 = java.lang.String.format(r1, r2)
            r0.setText(r5)
            return
    }

    public final void V(int r1) {
            r0 = this;
            if (r1 > 0) goto L3
            return
        L3:
            r0.countDown = r1
            com.kwad.components.core.widget.KsAutoCloseView$1 r1 = new com.kwad.components.core.widget.KsAutoCloseView$1
            r1.<init>(r0)
            r0.post(r1)
            return
    }

    public final void aR(boolean r2) {
            r1 = this;
            r1.YS = r2
            if (r2 == 0) goto L6
            r2 = 0
            goto L8
        L6:
            r2 = 8
        L8:
            android.widget.TextView r0 = r1.YP
            if (r0 == 0) goto Lf
            r0.setVisibility(r2)
        Lf:
            return
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.widget.KsAutoCloseView$a r0 = r1.YR
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.ImageView r0 = r1.YQ
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L12
            com.kwad.components.core.widget.KsAutoCloseView$a r2 = r1.YR
            r2.dJ()
        L12:
            return
    }

    public void setCountDownPaused(boolean r1) {
            r0 = this;
            r0.YT = r1
            return
    }

    public void setViewListener(com.kwad.components.core.widget.KsAutoCloseView.a r1) {
            r0 = this;
            r0.YR = r1
            return
    }
}
