package com.tkay.basead.ui;

public class ClickToReLoadView extends android.widget.LinearLayout {
    private android.widget.ImageView a;
    private android.widget.TextView b;
    private com.tkay.basead.ui.ClickToReLoadView.a c;
    private int d;

    final class 1 implements android.view.View.OnClickListener {
        long a;
        final com.tkay.basead.ui.ClickToReLoadView b;

        1(com.tkay.basead.ui.ClickToReLoadView r1) {
                r0 = this;
                r0.b = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r7) {
                r6 = this;
                long r0 = java.lang.System.currentTimeMillis()
                long r2 = r6.a
                long r2 = r0 - r2
                r4 = 1000(0x3e8, double:4.94E-321)
                int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r7 <= 0) goto L21
                r6.a = r0
                com.tkay.basead.ui.ClickToReLoadView r7 = r6.b
                com.tkay.basead.ui.ClickToReLoadView$a r7 = com.tkay.basead.ui.ClickToReLoadView.a(r7)
                if (r7 == 0) goto L21
                com.tkay.basead.ui.ClickToReLoadView r7 = r6.b
                com.tkay.basead.ui.ClickToReLoadView$a r7 = com.tkay.basead.ui.ClickToReLoadView.a(r7)
                r7.a()
            L21:
                return
        }
    }

    public interface a {
        void a();
    }

    public ClickToReLoadView(android.content.Context r8) {
            r7 = this;
            r7.<init>(r8)
            r0 = 1
            r7.setOrientation(r0)
            r0 = 17
            r7.setGravity(r0)
            r1 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            r7.d = r1
            android.widget.ImageView r1 = new android.widget.ImageView
            r1.<init>(r8)
            r7.a = r1
            java.lang.String r2 = "drawable"
            java.lang.String r3 = "myoffer_webview_reload_icon"
            int r3 = com.tkay.core.common.l.h.a(r8, r3, r2)
            r1.setImageResource(r3)
            r1 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r1, r1)
            r3.gravity = r0
            int r1 = r7.d
            r3.bottomMargin = r1
            android.widget.TextView r1 = new android.widget.TextView
            r1.<init>(r8)
            r7.b = r1
            android.content.res.Resources r4 = r7.getResources()
            java.lang.String r5 = "myoffer_webview_reload"
            java.lang.String r6 = "string"
            int r5 = com.tkay.core.common.l.h.a(r8, r5, r6)
            java.lang.CharSequence r4 = r4.getText(r5)
            r1.setText(r4)
            android.widget.TextView r1 = r7.b
            android.content.res.Resources r4 = r7.getResources()
            java.lang.String r5 = "color_reload_button"
            java.lang.String r6 = "color"
            int r5 = com.tkay.core.common.l.h.a(r8, r5, r6)
            int r4 = r4.getColor(r5)
            r1.setTextColor(r4)
            android.widget.TextView r1 = r7.b
            java.lang.String r4 = "myoffer_webview_bg_reload_button"
            int r2 = com.tkay.core.common.l.h.a(r8, r4, r2)
            r1.setBackgroundResource(r2)
            r1 = 1091567616(0x41100000, float:9.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            r2 = 1084227584(0x40a00000, float:5.0)
            int r8 = com.tkay.core.common.l.h.a(r8, r2)
            android.widget.TextView r2 = r7.b
            r2.setPadding(r1, r8, r1, r8)
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r8.<init>(r1, r1)
            r8.gravity = r0
            int r0 = r7.d
            r8.topMargin = r0
            android.widget.ImageView r0 = r7.a
            r7.addView(r0, r3)
            android.widget.TextView r0 = r7.b
            r7.addView(r0, r8)
            android.widget.TextView r8 = r7.b
            com.tkay.basead.ui.ClickToReLoadView$1 r0 = new com.tkay.basead.ui.ClickToReLoadView$1
            r0.<init>(r7)
            r8.setOnClickListener(r0)
            return
    }

    static com.tkay.basead.ui.ClickToReLoadView.a a(com.tkay.basead.ui.ClickToReLoadView r0) {
            com.tkay.basead.ui.ClickToReLoadView$a r0 = r0.c
            return r0
    }

    private void a() {
            r2 = this;
            android.widget.TextView r0 = r2.b
            com.tkay.basead.ui.ClickToReLoadView$1 r1 = new com.tkay.basead.ui.ClickToReLoadView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    private void a(android.content.Context r8) {
            r7 = this;
            r0 = 1
            r7.setOrientation(r0)
            r0 = 17
            r7.setGravity(r0)
            r1 = 1092616192(0x41200000, float:10.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            r7.d = r1
            android.widget.ImageView r1 = new android.widget.ImageView
            r1.<init>(r8)
            r7.a = r1
            java.lang.String r2 = "drawable"
            java.lang.String r3 = "myoffer_webview_reload_icon"
            int r3 = com.tkay.core.common.l.h.a(r8, r3, r2)
            r1.setImageResource(r3)
            r1 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r1, r1)
            r3.gravity = r0
            int r1 = r7.d
            r3.bottomMargin = r1
            android.widget.TextView r1 = new android.widget.TextView
            r1.<init>(r8)
            r7.b = r1
            android.content.res.Resources r4 = r7.getResources()
            java.lang.String r5 = "myoffer_webview_reload"
            java.lang.String r6 = "string"
            int r5 = com.tkay.core.common.l.h.a(r8, r5, r6)
            java.lang.CharSequence r4 = r4.getText(r5)
            r1.setText(r4)
            android.widget.TextView r1 = r7.b
            android.content.res.Resources r4 = r7.getResources()
            java.lang.String r5 = "color_reload_button"
            java.lang.String r6 = "color"
            int r5 = com.tkay.core.common.l.h.a(r8, r5, r6)
            int r4 = r4.getColor(r5)
            r1.setTextColor(r4)
            android.widget.TextView r1 = r7.b
            java.lang.String r4 = "myoffer_webview_bg_reload_button"
            int r2 = com.tkay.core.common.l.h.a(r8, r4, r2)
            r1.setBackgroundResource(r2)
            r1 = 1091567616(0x41100000, float:9.0)
            int r1 = com.tkay.core.common.l.h.a(r8, r1)
            r2 = 1084227584(0x40a00000, float:5.0)
            int r8 = com.tkay.core.common.l.h.a(r8, r2)
            android.widget.TextView r2 = r7.b
            r2.setPadding(r1, r8, r1, r8)
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r8.<init>(r1, r1)
            r8.gravity = r0
            int r0 = r7.d
            r8.topMargin = r0
            android.widget.ImageView r0 = r7.a
            r7.addView(r0, r3)
            android.widget.TextView r0 = r7.b
            r7.addView(r0, r8)
            return
    }

    private void b() {
            r2 = this;
            android.widget.ImageView r0 = r2.a     // Catch: java.lang.Throwable -> L19
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L19
            android.widget.TextView r0 = r2.b     // Catch: java.lang.Throwable -> L19
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L19
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L19
            r1 = 0
            r0.topMargin = r1     // Catch: java.lang.Throwable -> L19
            android.widget.TextView r1 = r2.b     // Catch: java.lang.Throwable -> L19
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L19
        L19:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            int r1 = r0.getHeight()
            android.content.Context r2 = r0.getContext()
            r3 = 1120403456(0x42c80000, float:100.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            if (r1 >= r2) goto L2c
            android.widget.ImageView r1 = r0.a     // Catch: java.lang.Throwable -> L2c
            r2 = 8
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L2c
            android.widget.TextView r1 = r0.b     // Catch: java.lang.Throwable -> L2c
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()     // Catch: java.lang.Throwable -> L2c
            android.widget.LinearLayout$LayoutParams r1 = (android.widget.LinearLayout.LayoutParams) r1     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L2c
            r2 = 0
            r1.topMargin = r2     // Catch: java.lang.Throwable -> L2c
            android.widget.TextView r2 = r0.b     // Catch: java.lang.Throwable -> L2c
            r2.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L2c
        L2c:
            return
    }

    public void setListener(com.tkay.basead.ui.ClickToReLoadView.a r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
