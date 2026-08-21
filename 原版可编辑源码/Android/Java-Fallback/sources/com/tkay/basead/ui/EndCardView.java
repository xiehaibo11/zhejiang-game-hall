package com.tkay.basead.ui;

public class EndCardView extends com.tkay.basead.ui.BaseEndCardView {
    private com.tkay.basead.ui.EndCardView.a e;
    private int f;
    private int g;
    private android.widget.ImageView h;
    private com.tkay.core.common.ui.component.RoundImageView i;
    private android.widget.ImageView j;
    private android.widget.TextView k;
    private final android.view.View.OnClickListener l;


    final class 2 implements com.tkay.core.common.res.b.a {
        final com.tkay.core.common.f.h a;
        final com.tkay.basead.ui.EndCardView b;


        2(com.tkay.basead.ui.EndCardView r1, com.tkay.core.common.f.h r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.basead.ui.EndCardView r1 = r0.b
                com.tkay.basead.ui.EndCardView$a r1 = com.tkay.basead.ui.EndCardView.a(r1)
                if (r1 == 0) goto L11
                com.tkay.basead.ui.EndCardView r1 = r0.b
                com.tkay.basead.ui.EndCardView$a r1 = com.tkay.basead.ui.EndCardView.a(r1)
                r1.b()
            L11:
                return
        }

        @Override
        public final void onSuccess(java.lang.String r2, android.graphics.Bitmap r3) {
                r1 = this;
                com.tkay.core.common.f.h r0 = r1.a
                java.lang.String r0 = r0.u()
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto L32
                com.tkay.basead.ui.EndCardView r2 = r1.b
                android.widget.ImageView r2 = com.tkay.basead.ui.EndCardView.c(r2)
                r2.setImageBitmap(r3)
                com.tkay.basead.ui.EndCardView r2 = r1.b
                com.tkay.basead.ui.EndCardView$2$1 r0 = new com.tkay.basead.ui.EndCardView$2$1
                r0.<init>(r1, r3)
                r2.post(r0)
                com.tkay.basead.ui.EndCardView r2 = r1.b
                android.content.Context r2 = r2.getContext()
                android.graphics.Bitmap r2 = com.tkay.core.common.l.b.a(r2, r3)
                com.tkay.basead.ui.EndCardView r3 = r1.b
                com.tkay.core.common.ui.component.RoundImageView r3 = com.tkay.basead.ui.EndCardView.d(r3)
                r3.setImageBitmap(r2)
            L32:
                return
        }
    }

    final class 3 implements com.tkay.core.common.res.b.a {
        final java.lang.String a;
        final int b;
        final com.tkay.basead.ui.EndCardView c;

        3(com.tkay.basead.ui.EndCardView r1, java.lang.String r2, int r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSuccess(java.lang.String r3, android.graphics.Bitmap r4) {
                r2 = this;
                java.lang.String r0 = r2.a
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                if (r3 == 0) goto L46
                int r3 = r4.getWidth()
                float r3 = (float) r3
                r0 = 1065353216(0x3f800000, float:1.0)
                float r3 = r3 * r0
                int r0 = r4.getHeight()
                float r0 = (float) r0
                float r3 = r3 / r0
                int r0 = r2.b
                float r1 = (float) r0
                float r1 = r1 * r3
                int r3 = (int) r1
                com.tkay.basead.ui.EndCardView r1 = r2.c
                android.widget.ImageView r1 = com.tkay.basead.ui.EndCardView.e(r1)
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                r1.width = r3
                r1.height = r0
                com.tkay.basead.ui.EndCardView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.EndCardView.e(r3)
                r3.setLayoutParams(r1)
                com.tkay.basead.ui.EndCardView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.EndCardView.e(r3)
                android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_XY
                r3.setScaleType(r0)
                com.tkay.basead.ui.EndCardView r3 = r2.c
                android.widget.ImageView r3 = com.tkay.basead.ui.EndCardView.e(r3)
                r3.setImageBitmap(r4)
            L46:
                return
        }
    }

    public interface a {
        void a();

        void b();
    }

    public EndCardView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.tkay.basead.ui.EndCardView$1 r1 = new com.tkay.basead.ui.EndCardView$1
            r1.<init>(r0)
            r0.l = r1
            return
    }

    static com.tkay.basead.ui.EndCardView.a a(com.tkay.basead.ui.EndCardView r0) {
            com.tkay.basead.ui.EndCardView$a r0 = r0.e
            return r0
    }

    private void a(com.tkay.core.common.f.h r6) {
            r5 = this;
            android.content.Context r0 = r5.getContext()     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            com.tkay.core.common.res.b r0 = com.tkay.core.common.res.b.a(r0)     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            com.tkay.core.common.res.e r1 = new com.tkay.core.common.res.e     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            r2 = 1
            java.lang.String r3 = r6.u()     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            int r2 = r5.f     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            int r3 = r5.g     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            com.tkay.basead.ui.EndCardView$2 r4 = new com.tkay.basead.ui.EndCardView$2     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            r4.<init>(r5, r6)     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            r0.a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L1f java.lang.OutOfMemoryError -> L24
            return
        L1f:
            r6 = move-exception
            r6.printStackTrace()
            return
        L24:
            r6 = move-exception
            r6.printStackTrace()
            return
    }

    static android.widget.TextView b(com.tkay.basead.ui.EndCardView r0) {
            android.widget.TextView r0 = r0.k
            return r0
    }

    private void b() {
            r4 = this;
            com.tkay.basead.ui.ScanningAnimTextView r0 = new com.tkay.basead.ui.ScanningAnimTextView
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.k = r0
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_cta_learn_more"
            java.lang.String r3 = "string"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.setText(r1)
            android.widget.TextView r0 = r4.k
            java.lang.String r1 = "#ffffffff"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r1)
            android.widget.TextView r0 = r4.k
            r1 = 1096810496(0x41600000, float:14.0)
            r0.setTextSize(r1)
            android.widget.TextView r0 = r4.k
            r1 = 17
            r0.setGravity(r1)
            android.widget.TextView r0 = r4.k
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_splash_bg_rectangle_btn_cta_asseblem"
            java.lang.String r3 = "drawable"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.setBackgroundResource(r1)
            android.widget.TextView r0 = r4.k
            android.view.View$OnClickListener r1 = r4.l
            r0.setOnClickListener(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r4.getContext()
            r2 = 1111490560(0x42400000, float:48.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r2 = -1
            r0.<init>(r2, r1)
            r1 = 12
            r0.addRule(r1)
            android.content.Context r1 = r4.getContext()
            r2 = 1119879168(0x42c00000, float:96.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.bottomMargin = r1
            android.content.Context r1 = r4.getContext()
            r2 = 1103101952(0x41c00000, float:24.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.leftMargin = r1
            android.content.Context r1 = r4.getContext()
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r0.rightMargin = r1
            android.widget.TextView r1 = r4.k
            r4.addView(r1, r0)
            return
    }

    private void b(com.tkay.core.common.f.h r7) {
            r6 = this;
            com.tkay.core.common.ui.component.RoundImageView r0 = new com.tkay.core.common.ui.component.RoundImageView
            android.content.Context r1 = r6.getContext()
            r0.<init>(r1)
            r6.j = r0
            android.content.Context r0 = r6.getContext()
            r1 = 1094713344(0x41400000, float:12.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r0)
            r2 = 11
            r1.addRule(r2)
            r2 = 12
            r1.addRule(r2)
            android.widget.ImageView r2 = r6.j
            r6.addView(r2, r1)
            java.lang.String r7 = r7.v()
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L54
            android.widget.ImageView r1 = r6.j
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            int r2 = r1.width
            int r1 = r1.height
            android.content.Context r3 = r6.getContext()
            com.tkay.core.common.res.b r3 = com.tkay.core.common.res.b.a(r3)
            com.tkay.core.common.res.e r4 = new com.tkay.core.common.res.e
            r5 = 1
            r4.<init>(r5, r7)
            com.tkay.basead.ui.EndCardView$3 r5 = new com.tkay.basead.ui.EndCardView$3
            r5.<init>(r6, r7, r0)
            r3.a(r4, r2, r1, r5)
        L54:
            return
    }

    static android.widget.ImageView c(com.tkay.basead.ui.EndCardView r0) {
            android.widget.ImageView r0 = r0.h
            return r0
    }

    static com.tkay.core.common.ui.component.RoundImageView d(com.tkay.basead.ui.EndCardView r0) {
            com.tkay.core.common.ui.component.RoundImageView r0 = r0.i
            return r0
    }

    static android.widget.ImageView e(com.tkay.basead.ui.EndCardView r0) {
            android.widget.ImageView r0 = r0.j
            return r0
    }

    @Override
    protected final void a() {
            r0 = this;
            return
    }

    public android.view.View getLearnMoreButton() {
            r1 = this;
            android.widget.TextView r0 = r1.k
            return r0
    }

    public void init(boolean r8, boolean r9, com.tkay.basead.ui.EndCardView.a r10) {
            r7 = this;
            android.content.Context r0 = r7.getContext()
            java.lang.String r1 = "myoffer_end_card_id"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            r7.setId(r0)
            r7.e = r10
            com.tkay.core.common.ui.component.RoundImageView r10 = new com.tkay.core.common.ui.component.RoundImageView
            android.content.Context r0 = r7.getContext()
            r10.<init>(r0)
            r7.i = r10
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP
            r10.setScaleType(r0)
            com.tkay.core.common.ui.component.RoundImageView r10 = new com.tkay.core.common.ui.component.RoundImageView
            android.content.Context r0 = r7.getContext()
            r10.<init>(r0)
            r7.h = r10
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r10.<init>(r0, r0)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            int r2 = r7.f
            int r3 = r7.g
            r1.<init>(r2, r3)
            r2 = 13
            r1.addRule(r2)
            com.tkay.core.common.ui.component.RoundImageView r2 = r7.i
            r7.addView(r2, r10)
            android.widget.ImageView r10 = r7.h
            r7.addView(r10, r1)
            r10 = 12
            if (r8 == 0) goto La2
            com.tkay.core.common.f.h r8 = r7.b
            com.tkay.core.common.ui.component.RoundImageView r1 = new com.tkay.core.common.ui.component.RoundImageView
            android.content.Context r2 = r7.getContext()
            r1.<init>(r2)
            r7.j = r1
            android.content.Context r1 = r7.getContext()
            r2 = 1094713344(0x41400000, float:12.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = -2
            r2.<init>(r3, r1)
            r3 = 11
            r2.addRule(r3)
            r2.addRule(r10)
            android.widget.ImageView r3 = r7.j
            r7.addView(r3, r2)
            java.lang.String r8 = r8.v()
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 != 0) goto La2
            android.widget.ImageView r2 = r7.j
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            int r3 = r2.width
            int r2 = r2.height
            android.content.Context r4 = r7.getContext()
            com.tkay.core.common.res.b r4 = com.tkay.core.common.res.b.a(r4)
            com.tkay.core.common.res.e r5 = new com.tkay.core.common.res.e
            r6 = 1
            r5.<init>(r6, r8)
            com.tkay.basead.ui.EndCardView$3 r6 = new com.tkay.basead.ui.EndCardView$3
            r6.<init>(r7, r8, r1)
            r4.a(r5, r3, r2, r6)
        La2:
            if (r9 == 0) goto L128
            com.tkay.basead.ui.ScanningAnimTextView r8 = new com.tkay.basead.ui.ScanningAnimTextView
            android.content.Context r9 = r7.getContext()
            r8.<init>(r9)
            r7.k = r8
            android.content.Context r9 = r7.getContext()
            java.lang.String r1 = "myoffer_cta_learn_more"
            java.lang.String r2 = "string"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r2)
            r8.setText(r9)
            android.widget.TextView r8 = r7.k
            java.lang.String r9 = "#ffffffff"
            int r9 = android.graphics.Color.parseColor(r9)
            r8.setTextColor(r9)
            android.widget.TextView r8 = r7.k
            r9 = 1096810496(0x41600000, float:14.0)
            r8.setTextSize(r9)
            android.widget.TextView r8 = r7.k
            r9 = 17
            r8.setGravity(r9)
            android.widget.TextView r8 = r7.k
            android.content.Context r9 = r7.getContext()
            java.lang.String r1 = "myoffer_splash_bg_rectangle_btn_cta_asseblem"
            java.lang.String r2 = "drawable"
            int r9 = com.tkay.core.common.l.h.a(r9, r1, r2)
            r8.setBackgroundResource(r9)
            android.widget.TextView r8 = r7.k
            android.view.View$OnClickListener r9 = r7.l
            r8.setOnClickListener(r9)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r9 = r7.getContext()
            r1 = 1111490560(0x42400000, float:48.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r1)
            r8.<init>(r0, r9)
            r8.addRule(r10)
            android.content.Context r9 = r7.getContext()
            r10 = 1119879168(0x42c00000, float:96.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.bottomMargin = r9
            android.content.Context r9 = r7.getContext()
            r10 = 1103101952(0x41c00000, float:24.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.leftMargin = r9
            android.content.Context r9 = r7.getContext()
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
            r8.rightMargin = r9
            android.widget.TextView r9 = r7.k
            r7.addView(r9, r8)
        L128:
            android.view.View$OnClickListener r8 = r7.l
            r7.setOnClickListener(r8)
            return
    }

    public void load() {
            r6 = this;
            com.tkay.core.common.f.h r0 = r6.b
            android.content.Context r1 = r6.getContext()     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            com.tkay.core.common.res.b r1 = com.tkay.core.common.res.b.a(r1)     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            com.tkay.core.common.res.e r2 = new com.tkay.core.common.res.e     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            r3 = 1
            java.lang.String r4 = r0.u()     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            int r3 = r6.f     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            int r4 = r6.g     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            com.tkay.basead.ui.EndCardView$2 r5 = new com.tkay.basead.ui.EndCardView$2     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            r5.<init>(r6, r0)     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            r1.a(r2, r3, r4, r5)     // Catch: java.lang.Exception -> L21 java.lang.OutOfMemoryError -> L26
            return
        L21:
            r0 = move-exception
            r0.printStackTrace()
            return
        L26:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    public void setSize(int r1, int r2) {
            r0 = this;
            r0.f = r1
            r0.g = r2
            return
    }
}
