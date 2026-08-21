package com.czhj.volley.toolbox;

public class NetworkImageView extends android.widget.ImageView {
    private java.lang.String a;
    private int b;
    private int c;
    private com.czhj.volley.toolbox.ImageLoader d;
    private com.czhj.volley.toolbox.ImageLoader.ImageContainer e;

    class 1 implements com.czhj.volley.toolbox.ImageLoader.ImageListener {
        final boolean a;
        final com.czhj.volley.toolbox.NetworkImageView b;


        1(com.czhj.volley.toolbox.NetworkImageView r1, boolean r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void onErrorResponse(com.czhj.volley.VolleyError r2) {
                r1 = this;
                com.czhj.volley.toolbox.NetworkImageView r2 = r1.b
                int r2 = com.czhj.volley.toolbox.NetworkImageView.a(r2)
                if (r2 == 0) goto L11
                com.czhj.volley.toolbox.NetworkImageView r2 = r1.b
                int r0 = com.czhj.volley.toolbox.NetworkImageView.a(r2)
                r2.setImageResource(r0)
            L11:
                return
        }

        @Override
        public void onResponse(com.czhj.volley.toolbox.ImageLoader.ImageContainer r2, boolean r3) {
                r1 = this;
                if (r3 == 0) goto L11
                boolean r3 = r1.a
                if (r3 == 0) goto L11
                com.czhj.volley.toolbox.NetworkImageView r3 = r1.b
                com.czhj.volley.toolbox.NetworkImageView$1$1 r0 = new com.czhj.volley.toolbox.NetworkImageView$1$1
                r0.<init>(r1, r2)
                r3.post(r0)
                return
            L11:
                android.graphics.Bitmap r3 = r2.getBitmap()
                if (r3 == 0) goto L21
                com.czhj.volley.toolbox.NetworkImageView r3 = r1.b
                android.graphics.Bitmap r2 = r2.getBitmap()
                r3.setImageBitmap(r2)
                goto L32
            L21:
                com.czhj.volley.toolbox.NetworkImageView r2 = r1.b
                int r2 = com.czhj.volley.toolbox.NetworkImageView.b(r2)
                if (r2 == 0) goto L32
                com.czhj.volley.toolbox.NetworkImageView r2 = r1.b
                int r3 = com.czhj.volley.toolbox.NetworkImageView.b(r2)
                r2.setImageResource(r3)
            L32:
                return
        }
    }

    public NetworkImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public NetworkImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public NetworkImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    static int a(com.czhj.volley.toolbox.NetworkImageView r0) {
            int r0 = r0.c
            return r0
    }

    private void a() {
            r1 = this;
            int r0 = r1.b
            if (r0 == 0) goto L8
            r1.setImageResource(r0)
            goto Lc
        L8:
            r0 = 0
            r1.setImageBitmap(r0)
        Lc:
            return
    }

    static int b(com.czhj.volley.toolbox.NetworkImageView r0) {
            int r0 = r0.b
            return r0
    }

    void a(boolean r9) {
            r8 = this;
            int r0 = r8.getWidth()
            int r1 = r8.getHeight()
            android.widget.ImageView$ScaleType r7 = r8.getScaleType()
            android.view.ViewGroup$LayoutParams r2 = r8.getLayoutParams()
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L2c
            android.view.ViewGroup$LayoutParams r2 = r8.getLayoutParams()
            int r2 = r2.width
            r5 = -2
            if (r2 != r5) goto L1f
            r2 = r3
            goto L20
        L1f:
            r2 = r4
        L20:
            android.view.ViewGroup$LayoutParams r6 = r8.getLayoutParams()
            int r6 = r6.height
            if (r6 != r5) goto L2a
            r5 = r3
            goto L2e
        L2a:
            r5 = r4
            goto L2e
        L2c:
            r2 = r4
            r5 = r2
        L2e:
            if (r2 == 0) goto L33
            if (r5 == 0) goto L33
            goto L34
        L33:
            r3 = r4
        L34:
            if (r0 != 0) goto L3b
            if (r1 != 0) goto L3b
            if (r3 != 0) goto L3b
            return
        L3b:
            java.lang.String r3 = r8.a
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L51
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r9 = r8.e
            if (r9 == 0) goto L4d
            r9.cancelRequest()
            r9 = 0
            r8.e = r9
        L4d:
            r8.a()
            return
        L51:
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = r8.e
            if (r3 == 0) goto L72
            java.lang.String r3 = r3.getRequestUrl()
            if (r3 == 0) goto L72
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = r8.e
            java.lang.String r3 = r3.getRequestUrl()
            java.lang.String r6 = r8.a
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L6a
            return
        L6a:
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = r8.e
            r3.cancelRequest()
            r8.a()
        L72:
            if (r2 == 0) goto L75
            r0 = r4
        L75:
            if (r5 == 0) goto L79
            r6 = r4
            goto L7a
        L79:
            r6 = r1
        L7a:
            com.czhj.volley.toolbox.ImageLoader r2 = r8.d
            java.lang.String r3 = r8.a
            com.czhj.volley.toolbox.NetworkImageView$1 r4 = new com.czhj.volley.toolbox.NetworkImageView$1
            r4.<init>(r8, r9)
            r5 = r0
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r9 = r2.get(r3, r4, r5, r6, r7)
            r8.e = r9
            return
    }

    @Override
    protected void drawableStateChanged() {
            r0 = this;
            super.drawableStateChanged()
            r0.invalidate()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r0 = r1.e
            if (r0 == 0) goto Ld
            r0.cancelRequest()
            r0 = 0
            r1.setImageBitmap(r0)
            r1.e = r0
        Ld:
            super.onDetachedFromWindow()
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            r1 = 1
            r0.a(r1)
            return
    }

    public void setDefaultImageResId(int r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setErrorImageResId(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setImageUrl(java.lang.String r1, com.czhj.volley.toolbox.ImageLoader r2) {
            r0 = this;
            com.czhj.volley.toolbox.Threads.a()
            r0.a = r1
            r0.d = r2
            r1 = 0
            r0.a(r1)
            return
    }
}
