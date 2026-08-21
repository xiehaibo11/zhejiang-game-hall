package com.tkay.expressad.widget;

public class TYImageView extends android.widget.ImageView {
    private static final java.lang.String a = "at-widget-imageview";
    private android.graphics.Bitmap b;
    private java.lang.String c;

    final class 1 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.widget.TYImageView a;

        1(com.tkay.expressad.widget.TYImageView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.widget.TYImageView r2 = r0.a
                r2.setImageBitmap(r1)
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    public TYImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.b = r1
            return
    }

    public TYImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.b = r1
            return
    }

    public TYImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.b = r1
            return
    }

    private void a() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            if (r0 == 0) goto L18
            android.content.Context r0 = r3.getContext()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            java.lang.String r1 = r3.c
            com.tkay.expressad.widget.TYImageView$1 r2 = new com.tkay.expressad.widget.TYImageView$1
            r2.<init>(r3)
            r0.a(r1, r2)
        L18:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            android.graphics.Bitmap r0 = r2.b     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L25
            android.graphics.Bitmap r0 = r2.b     // Catch: java.lang.Throwable -> L28
            boolean r0 = r0.isRecycled()     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L25
            android.content.Context r3 = r2.getContext()     // Catch: java.lang.Throwable -> L28
            if (r3 == 0) goto L24
            android.content.Context r3 = r2.getContext()     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.foundation.g.d.b r3 = com.tkay.expressad.foundation.g.d.b.a(r3)     // Catch: java.lang.Throwable -> L28
            java.lang.String r0 = r2.c     // Catch: java.lang.Throwable -> L28
            com.tkay.expressad.widget.TYImageView$1 r1 = new com.tkay.expressad.widget.TYImageView$1     // Catch: java.lang.Throwable -> L28
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L28
            r3.a(r0, r1)     // Catch: java.lang.Throwable -> L28
        L24:
            return
        L25:
            super.onDraw(r3)     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    @Override
    public void setImageBitmap(android.graphics.Bitmap r2) {
            r1 = this;
            r1.b = r2
            if (r2 == 0) goto L11
            boolean r0 = r2.isRecycled()
            if (r0 == 0) goto L11
            r2 = 0
            r1.b = r2
            super.setImageBitmap(r2)
            return
        L11:
            super.setImageBitmap(r2)
            return
    }

    public void setImageUrl(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
