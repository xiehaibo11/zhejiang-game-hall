package com.tkay.expressad.widget;

public class TYAdChoice extends com.tkay.expressad.widget.TYImageView {
    private static java.lang.String a = "TYAdChoice";
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private android.content.Context e;

    final class 1 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.widget.TYAdChoice a;

        1(com.tkay.expressad.widget.TYAdChoice r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.widget.TYAdChoice r2 = r0.a
                r2.setImageBitmap(r1)
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    static {
            return
    }

    public TYAdChoice(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r2
            r1.a()
            return
    }

    public TYAdChoice(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r2 = ""
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r0.e = r1
            r0.a()
            return
    }

    public TYAdChoice(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r2 = ""
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r0.e = r1
            r0.a()
            return
    }

    private void a() {
            r1 = this;
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_CENTER
            r1.setScaleType(r0)
            r0 = 1
            r1.setClickable(r0)
            return
    }

    private boolean a(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            if (r2 == 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.c()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.b()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3a
            com.tkay.expressad.foundation.d.c$a r4 = r4.v()
            java.lang.String r4 = r4.d()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L3a
            r4 = r0
            goto L3b
        L3a:
            r4 = r1
        L3b:
            if (r4 != 0) goto L72
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            r4.e()
            com.tkay.expressad.d.a r4 = com.tkay.expressad.d.b.b()
            if (r4 == 0) goto L70
            java.lang.String r2 = r4.H()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L70
            java.lang.String r2 = r4.J()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L70
            java.lang.String r4 = r4.I()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L70
            goto L71
        L70:
            r0 = r1
        L71:
            r4 = r0
        L72:
            java.lang.String r0 = r3.b
            r3.setImageUrl(r0)
            return r4
    }

    private void b() {
            r3 = this;
            android.content.Context r0 = r3.e
            if (r0 == 0) goto L12
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r3.b
            com.tkay.expressad.widget.TYAdChoice$1 r2 = new com.tkay.expressad.widget.TYAdChoice$1
            r2.<init>(r3)
            r0.a(r1, r2)
        L12:
            return
    }

    private void c() {
            r3 = this;
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            android.content.Context r0 = r3.e
            java.lang.String r1 = r3.d
            r2 = 0
            com.tkay.expressad.foundation.h.s.a(r0, r1, r2)
        L10:
            return
    }

    @Override
    public boolean performClick() {
            r3 = this;
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            android.content.Context r0 = r3.e
            java.lang.String r1 = r3.d
            r2 = 0
            com.tkay.expressad.foundation.h.s.a(r0, r1, r2)
        L10:
            r0 = 1
            return r0
    }

    public void setCampaign(com.tkay.expressad.out.d r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.tkay.expressad.foundation.d.c
            if (r0 == 0) goto L91
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            if (r2 == 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.c()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.tkay.expressad.foundation.d.c$a r2 = r4.v()
            java.lang.String r2 = r2.b()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L40
            com.tkay.expressad.foundation.d.c$a r4 = r4.v()
            java.lang.String r4 = r4.d()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L40
            r4 = r0
            goto L41
        L40:
            r4 = r1
        L41:
            if (r4 != 0) goto L78
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            r4.e()
            com.tkay.expressad.d.a r4 = com.tkay.expressad.d.b.b()
            if (r4 == 0) goto L76
            java.lang.String r2 = r4.H()
            r3.b = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L76
            java.lang.String r2 = r4.J()
            r3.d = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L76
            java.lang.String r4 = r4.I()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L76
            goto L77
        L76:
            r0 = r1
        L77:
            r4 = r0
        L78:
            java.lang.String r0 = r3.b
            r3.setImageUrl(r0)
            if (r4 == 0) goto L91
            android.content.Context r4 = r3.e
            if (r4 == 0) goto L91
            com.tkay.expressad.foundation.g.d.b r4 = com.tkay.expressad.foundation.g.d.b.a(r4)
            java.lang.String r0 = r3.b
            com.tkay.expressad.widget.TYAdChoice$1 r1 = new com.tkay.expressad.widget.TYAdChoice$1
            r1.<init>(r3)
            r4.a(r0, r1)
        L91:
            return
    }
}
