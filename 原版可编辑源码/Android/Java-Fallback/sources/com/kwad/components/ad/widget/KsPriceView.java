package com.kwad.components.ad.widget;

public class KsPriceView extends android.widget.TextView implements com.kwad.components.core.widget.d {
    private static java.lang.String Hx = "¥%s 到手约 ¥%s";
    private static java.lang.String Hy = "¥%s  ¥%s";
    private static java.lang.String Hz = "¥%s";
    private java.lang.String HA;
    private java.lang.String HB;
    private boolean HC;
    private com.kwad.components.ad.widget.KsPriceView.a Hw;

    public static class a {
        private int HD;
        private int HE;
        private int HF;
        private int HG;
        private int HH;
        private int HI;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        static int a(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HF = r1
                return r1
        }

        static int b(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HG = r1
                return r1
        }

        static int c(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HH = r1
                return r1
        }

        static int d(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HI = r1
                return r1
        }

        static int e(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HD = r1
                return r1
        }

        static int f(com.kwad.components.ad.widget.KsPriceView.a r0, int r1) {
                r0.HE = r1
                return r1
        }

        public final com.kwad.components.ad.widget.KsPriceView.a ag(int r1) {
                r0 = this;
                r0.HE = r1
                return r0
        }

        public final com.kwad.components.ad.widget.KsPriceView.a ah(int r1) {
                r0 = this;
                r0.HH = r1
                return r0
        }

        public final com.kwad.components.ad.widget.KsPriceView.a ai(int r1) {
                r0 = this;
                r0.HI = r1
                return r0
        }

        public final int lW() {
                r1 = this;
                int r0 = r1.HF
                return r0
        }

        public final int lX() {
                r1 = this;
                int r0 = r1.HH
                return r0
        }

        public final int lY() {
                r1 = this;
                int r0 = r1.HG
                return r0
        }

        public final int lZ() {
                r1 = this;
                int r0 = r1.HI
                return r0
        }

        public final int ma() {
                r1 = this;
                int r0 = r1.HD
                return r0
        }

        public final int mb() {
                r1 = this;
                int r0 = r1.HE
                return r0
        }
    }

    static {
            return
    }

    public KsPriceView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.kwad.components.ad.widget.KsPriceView$a r0 = new com.kwad.components.ad.widget.KsPriceView$a
            r0.<init>()
            r1.Hw = r0
            r1.R(r2)
            return
    }

    public KsPriceView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.kwad.components.ad.widget.KsPriceView$a r2 = new com.kwad.components.ad.widget.KsPriceView$a
            r2.<init>()
            r0.Hw = r2
            r0.R(r1)
            return
    }

    public KsPriceView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.components.ad.widget.KsPriceView$a r2 = new com.kwad.components.ad.widget.KsPriceView$a
            r2.<init>()
            r0.Hw = r2
            r0.R(r1)
            return
    }

    public KsPriceView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            com.kwad.components.ad.widget.KsPriceView$a r2 = new com.kwad.components.ad.widget.KsPriceView$a
            r2.<init>()
            r0.Hw = r2
            r0.R(r1)
            return
    }

    private void R(android.content.Context r4) {
            r3 = this;
            r0 = 1
            r3.setMaxLines(r0)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r1 = r1.getColor(r2)
            com.kwad.components.ad.widget.KsPriceView.a.a(r0, r1)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_order_price_size
            int r1 = r1.getDimensionPixelSize(r2)
            com.kwad.components.ad.widget.KsPriceView.a.b(r0, r1)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.color.ksad_reward_original_price
            int r1 = r1.getColor(r2)
            com.kwad.components.ad.widget.KsPriceView.a.c(r0, r1)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_order_original_price_size
            int r1 = r1.getDimensionPixelSize(r2)
            com.kwad.components.ad.widget.KsPriceView.a.d(r0, r1)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r1 = r1.getColor(r2)
            com.kwad.components.ad.widget.KsPriceView.a.e(r0, r1)
            com.kwad.components.ad.widget.KsPriceView$a r0 = r3.Hw
            android.content.res.Resources r4 = r4.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_reward_order_price_size
            int r4 = r4.getDimensionPixelSize(r1)
            com.kwad.components.ad.widget.KsPriceView.a.f(r0, r4)
            return
    }

    private static android.text.SpannableString a(java.lang.String r6, java.lang.String r7, boolean r8, com.kwad.components.ad.widget.KsPriceView.a r9) {
            r0 = 0
            r1 = 1
            if (r7 != 0) goto Lf
            java.lang.String r8 = com.kwad.components.ad.widget.KsPriceView.Hz
            java.lang.Object[] r2 = new java.lang.Object[r1]
            r2[r0] = r6
            java.lang.String r8 = java.lang.String.format(r8, r2)
            goto L21
        Lf:
            if (r8 == 0) goto L14
            java.lang.String r8 = com.kwad.components.ad.widget.KsPriceView.Hy
            goto L16
        L14:
            java.lang.String r8 = com.kwad.components.ad.widget.KsPriceView.Hx
        L16:
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r0] = r6
            r2[r1] = r7
            java.lang.String r8 = java.lang.String.format(r8, r2)
        L21:
            android.text.SpannableString r2 = new android.text.SpannableString
            r2.<init>(r8)
            java.lang.String r3 = "¥"
            boolean r3 = r8.startsWith(r3)
            if (r3 == 0) goto L48
            android.text.style.ForegroundColorSpan r3 = new android.text.style.ForegroundColorSpan
            int r4 = r9.ma()
            r3.<init>(r4)
            r4 = 17
            r2.setSpan(r3, r0, r1, r4)
            android.text.style.AbsoluteSizeSpan r3 = new android.text.style.AbsoluteSizeSpan
            int r5 = r9.mb()
            r3.<init>(r5)
            r2.setSpan(r3, r0, r1, r4)
        L48:
            int r0 = r8.indexOf(r6)
            if (r0 >= 0) goto L50
            r6 = 0
            return r6
        L50:
            int r6 = r6.length()
            android.text.style.ForegroundColorSpan r3 = new android.text.style.ForegroundColorSpan
            int r4 = r9.lW()
            r3.<init>(r4)
            int r6 = r6 + r0
            r4 = 18
            r2.setSpan(r3, r0, r6, r4)
            android.text.style.AbsoluteSizeSpan r3 = new android.text.style.AbsoluteSizeSpan
            int r5 = r9.lY()
            r3.<init>(r5)
            r2.setSpan(r3, r0, r6, r4)
            if (r7 == 0) goto L9c
            int r6 = r8.lastIndexOf(r7)
            int r6 = r6 - r1
            int r7 = r7.length()
            int r7 = r7 + r1
            android.text.style.ForegroundColorSpan r8 = new android.text.style.ForegroundColorSpan
            int r0 = r9.lX()
            r8.<init>(r0)
            int r7 = r7 + r6
            r2.setSpan(r8, r6, r7, r4)
            android.text.style.AbsoluteSizeSpan r8 = new android.text.style.AbsoluteSizeSpan
            int r9 = r9.lZ()
            r8.<init>(r9)
            r2.setSpan(r8, r6, r7, r4)
            android.text.style.StrikethroughSpan r8 = new android.text.style.StrikethroughSpan
            r8.<init>()
            r2.setSpan(r8, r6, r7, r4)
        L9c:
            return r2
    }

    @Override
    public final void a(com.kwad.components.core.widget.e r3) {
            r2 = this;
            com.kwad.components.ad.widget.KsPriceView$a r0 = r2.Hw
            int r3 = r3.sv()
            com.kwad.components.ad.widget.KsPriceView.a.a(r0, r3)
            java.lang.String r3 = r2.HA
            java.lang.String r0 = r2.HB
            boolean r1 = r2.HC
            r2.d(r3, r0, r1)
            return
    }

    public final void d(java.lang.String r3, java.lang.String r4, boolean r5) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Ld
            return
        Ld:
            r2.HA = r3
            r2.HB = r4
            r2.HC = r5
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            r0 = 0
            if (r4 == 0) goto L1c
            r2.HB = r0
        L1c:
            if (r3 == 0) goto L2c
            java.lang.String r4 = "¥"
            boolean r1 = r3.startsWith(r4)
            if (r1 == 0) goto L2c
            java.lang.String r1 = ""
            java.lang.String r3 = r3.replaceFirst(r4, r1)
        L2c:
            com.kwad.components.ad.widget.KsPriceView$a r4 = r2.Hw
            int r4 = r4.lW()
            r2.setTextColor(r4)
            java.lang.String r4 = r2.HB     // Catch: java.lang.Exception -> L3e
            com.kwad.components.ad.widget.KsPriceView$a r1 = r2.Hw     // Catch: java.lang.Exception -> L3e
            android.text.SpannableString r0 = a(r3, r4, r5, r1)     // Catch: java.lang.Exception -> L3e
            goto L42
        L3e:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
        L42:
            if (r0 == 0) goto L47
            r2.setText(r0)
        L47:
            return
    }

    public final void f(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.d(r2, r3, r0)
            return
    }

    public com.kwad.components.ad.widget.KsPriceView.a getConfig() {
            r1 = this;
            com.kwad.components.ad.widget.KsPriceView$a r0 = r1.Hw
            return r0
    }
}
