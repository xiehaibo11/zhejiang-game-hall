package com.sigmob.sdk.mraid;

public class a extends android.widget.FrameLayout {
    static final float a = 30.0f;
    static final float b = 50.0f;
    static final float c = 8.0f;
    private final int d;
    private com.sigmob.sdk.mraid.a.b e;
    private final android.graphics.drawable.StateListDrawable f;
    private com.sigmob.sdk.mraid.a.a g;
    private final int h;
    private final int i;
    private final int j;
    private boolean k;
    private final android.graphics.Rect l;
    private final android.graphics.Rect m;
    private final android.graphics.Rect n;
    private final android.graphics.Rect o;
    private boolean p;
    private com.sigmob.sdk.mraid.a.c q;

    static class 1 {
    }

    public enum a extends java.lang.Enum<com.sigmob.sdk.mraid.a.a> {
        public static final com.sigmob.sdk.mraid.a.a a = null;
        public static final com.sigmob.sdk.mraid.a.a b = null;
        public static final com.sigmob.sdk.mraid.a.a c = null;
        public static final com.sigmob.sdk.mraid.a.a d = null;
        public static final com.sigmob.sdk.mraid.a.a e = null;
        public static final com.sigmob.sdk.mraid.a.a f = null;
        public static final com.sigmob.sdk.mraid.a.a g = null;
        private static final com.sigmob.sdk.mraid.a.a[] i = null;
        private final int h;

        static {
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r1 = 0
                java.lang.String r2 = "TOP_LEFT"
                r3 = 51
                r0.<init>(r2, r1, r3)
                com.sigmob.sdk.mraid.a.a.a = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r2 = 1
                java.lang.String r3 = "TOP_CENTER"
                r4 = 49
                r0.<init>(r3, r2, r4)
                com.sigmob.sdk.mraid.a.a.b = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r3 = 2
                java.lang.String r4 = "TOP_RIGHT"
                r5 = 53
                r0.<init>(r4, r3, r5)
                com.sigmob.sdk.mraid.a.a.c = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r4 = 3
                java.lang.String r5 = "CENTER"
                r6 = 17
                r0.<init>(r5, r4, r6)
                com.sigmob.sdk.mraid.a.a.d = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r5 = 4
                java.lang.String r6 = "BOTTOM_LEFT"
                r7 = 83
                r0.<init>(r6, r5, r7)
                com.sigmob.sdk.mraid.a.a.e = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r6 = 5
                java.lang.String r7 = "BOTTOM_CENTER"
                r8 = 81
                r0.<init>(r7, r6, r8)
                com.sigmob.sdk.mraid.a.a.f = r0
                com.sigmob.sdk.mraid.a$a r0 = new com.sigmob.sdk.mraid.a$a
                r7 = 6
                java.lang.String r8 = "BOTTOM_RIGHT"
                r9 = 85
                r0.<init>(r8, r7, r9)
                com.sigmob.sdk.mraid.a.a.g = r0
                r8 = 7
                com.sigmob.sdk.mraid.a$a[] r8 = new com.sigmob.sdk.mraid.a.a[r8]
                com.sigmob.sdk.mraid.a$a r9 = com.sigmob.sdk.mraid.a.a.a
                r8[r1] = r9
                com.sigmob.sdk.mraid.a$a r1 = com.sigmob.sdk.mraid.a.a.b
                r8[r2] = r1
                com.sigmob.sdk.mraid.a$a r1 = com.sigmob.sdk.mraid.a.a.c
                r8[r3] = r1
                com.sigmob.sdk.mraid.a$a r1 = com.sigmob.sdk.mraid.a.a.d
                r8[r4] = r1
                com.sigmob.sdk.mraid.a$a r1 = com.sigmob.sdk.mraid.a.a.e
                r8[r5] = r1
                com.sigmob.sdk.mraid.a$a r1 = com.sigmob.sdk.mraid.a.a.f
                r8[r6] = r1
                r8[r7] = r0
                com.sigmob.sdk.mraid.a.a.i = r8
                return
        }

        a(java.lang.String r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.h = r3
                return
        }

        public static com.sigmob.sdk.mraid.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.sigmob.sdk.mraid.a$a> r0 = com.sigmob.sdk.mraid.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.sigmob.sdk.mraid.a$a r1 = (com.sigmob.sdk.mraid.a.a) r1
                return r1
        }

        public static com.sigmob.sdk.mraid.a.a[] values() {
                com.sigmob.sdk.mraid.a$a[] r0 = com.sigmob.sdk.mraid.a.a.i
                java.lang.Object r0 = r0.clone()
                com.sigmob.sdk.mraid.a$a[] r0 = (com.sigmob.sdk.mraid.a.a[]) r0
                return r0
        }

        int a() {
                r1 = this;
                int r0 = r1.h
                return r0
        }
    }

    public interface b {
        void a();
    }

    private final class c implements java.lang.Runnable {
        final com.sigmob.sdk.mraid.a a;

        private c(com.sigmob.sdk.mraid.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        c(com.sigmob.sdk.mraid.a r1, com.sigmob.sdk.mraid.a.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.sigmob.sdk.mraid.a r0 = r2.a
                r1 = 0
                com.sigmob.sdk.mraid.a.a(r0, r1)
                return
        }
    }

    public a(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public a(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public a(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.l = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.m = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.n = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.o = r2
            android.graphics.drawable.StateListDrawable r2 = new android.graphics.drawable.StateListDrawable
            r2.<init>()
            r0.f = r2
            com.sigmob.sdk.mraid.a$a r2 = com.sigmob.sdk.mraid.a.a.c
            r0.g = r2
            android.graphics.drawable.StateListDrawable r2 = r0.f
            int[] r3 = com.sigmob.sdk.mraid.a.EMPTY_STATE_SET
            r2.setState(r3)
            android.graphics.drawable.StateListDrawable r2 = r0.f
            r2.setCallback(r0)
            android.view.ViewConfiguration r2 = android.view.ViewConfiguration.get(r1)
            int r2 = r2.getScaledTouchSlop()
            r0.d = r2
            r2 = 1112014848(0x42480000, float:50.0)
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r1)
            r0.h = r2
            r2 = 1106247680(0x41f00000, float:30.0)
            int r2 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r1)
            r0.i = r2
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.czhj.sdk.common.utils.Dips.asIntPixels(r2, r1)
            r0.j = r1
            r1 = 0
            r0.setWillNotDraw(r1)
            r1 = 1
            r0.p = r1
            return
    }

    private void a(com.sigmob.sdk.mraid.a.a r1, int r2, android.graphics.Rect r3, android.graphics.Rect r4) {
            r0 = this;
            int r1 = r1.a()
            android.view.Gravity.apply(r1, r2, r2, r3, r4)
            return
    }

    static void a(com.sigmob.sdk.mraid.a r0, boolean r1) {
            r0.setClosePressed(r1)
            return
    }

    private void b(com.sigmob.sdk.mraid.a.a r2, android.graphics.Rect r3, android.graphics.Rect r4) {
            r1 = this;
            int r0 = r1.i
            r1.a(r2, r0, r3, r4)
            return
    }

    private void c() {
            r1 = this;
            r0 = 0
            r1.playSoundEffect(r0)
            com.sigmob.sdk.mraid.a$b r0 = r1.e
            if (r0 == 0) goto Lb
            r0.a()
        Lb:
            return
    }

    private void setClosePressed(boolean r2) {
            r1 = this;
            boolean r0 = r1.b()
            if (r2 != r0) goto L7
            return
        L7:
            android.graphics.drawable.StateListDrawable r0 = r1.f
            if (r2 == 0) goto Le
            int[] r2 = com.sigmob.sdk.mraid.a.SELECTED_STATE_SET
            goto L10
        Le:
            int[] r2 = com.sigmob.sdk.mraid.a.EMPTY_STATE_SET
        L10:
            r0.setState(r2)
            android.graphics.Rect r2 = r1.m
            r1.invalidate(r2)
            return
    }

    public void a(com.sigmob.sdk.mraid.a.a r2, android.graphics.Rect r3, android.graphics.Rect r4) {
            r1 = this;
            int r0 = r1.h
            r1.a(r2, r0, r3, r4)
            return
    }

    boolean a() {
            r1 = this;
            boolean r0 = r1.p
            if (r0 != 0) goto Lf
            android.graphics.drawable.StateListDrawable r0 = r1.f
            boolean r0 = r0.isVisible()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    boolean a(int r2, int r3, int r4) {
            r1 = this;
            android.graphics.Rect r0 = r1.m
            int r0 = r0.left
            int r0 = r0 - r4
            if (r2 < r0) goto L1e
            android.graphics.Rect r0 = r1.m
            int r0 = r0.top
            int r0 = r0 - r4
            if (r3 < r0) goto L1e
            android.graphics.Rect r0 = r1.m
            int r0 = r0.right
            int r0 = r0 + r4
            if (r2 >= r0) goto L1e
            android.graphics.Rect r2 = r1.m
            int r2 = r2.bottom
            int r2 = r2 + r4
            if (r3 >= r2) goto L1e
            r2 = 1
            goto L1f
        L1e:
            r2 = 0
        L1f:
            return r2
    }

    boolean b() {
            r2 = this;
            android.graphics.drawable.StateListDrawable r0 = r2.f
            int[] r0 = r0.getState()
            int[] r1 = com.sigmob.sdk.mraid.a.SELECTED_STATE_SET
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void draw(android.graphics.Canvas r5) {
            r4 = this;
            super.draw(r5)
            boolean r0 = r4.k
            if (r0 == 0) goto L3e
            r0 = 0
            r4.k = r0
            android.graphics.Rect r1 = r4.l
            int r2 = r4.getWidth()
            int r3 = r4.getHeight()
            r1.set(r0, r0, r2, r3)
            com.sigmob.sdk.mraid.a$a r0 = r4.g
            android.graphics.Rect r1 = r4.l
            android.graphics.Rect r2 = r4.m
            r4.a(r0, r1, r2)
            android.graphics.Rect r0 = r4.o
            android.graphics.Rect r1 = r4.m
            r0.set(r1)
            android.graphics.Rect r0 = r4.o
            int r1 = r4.j
            r0.inset(r1, r1)
            com.sigmob.sdk.mraid.a$a r0 = r4.g
            android.graphics.Rect r1 = r4.o
            android.graphics.Rect r2 = r4.n
            r4.b(r0, r1, r2)
            android.graphics.drawable.StateListDrawable r0 = r4.f
            android.graphics.Rect r1 = r4.n
            r0.setBounds(r1)
        L3e:
            android.graphics.drawable.StateListDrawable r0 = r4.f
            boolean r0 = r0.isVisible()
            if (r0 == 0) goto L4b
            android.graphics.drawable.StateListDrawable r0 = r4.f
            r0.draw(r5)
        L4b:
            return
    }

    android.graphics.Rect getCloseBounds() {
            r1 = this;
            android.graphics.Rect r0 = r1.m
            return r0
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            int r0 = r3.getAction()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            float r0 = r3.getX()
            int r0 = (int) r0
            float r3 = r3.getY()
            int r3 = (int) r3
            boolean r3 = r2.a(r0, r3, r1)
            return r3
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            r1 = 1
            r0.k = r1
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            float r0 = r4.getX()
            int r0 = (int) r0
            float r1 = r4.getY()
            int r1 = (int) r1
            int r2 = r3.d
            boolean r0 = r3.a(r0, r1, r2)
            r1 = 0
            if (r0 == 0) goto L4f
            boolean r0 = r3.a()
            if (r0 != 0) goto L1a
            goto L4f
        L1a:
            int r4 = r4.getAction()
            r0 = 1
            if (r4 == 0) goto L4b
            if (r4 == r0) goto L2b
            r2 = 3
            if (r4 == r2) goto L27
            goto L4e
        L27:
            r3.setClosePressed(r1)
            goto L4e
        L2b:
            boolean r4 = r3.b()
            if (r4 == 0) goto L4e
            com.sigmob.sdk.mraid.a$c r4 = r3.q
            if (r4 != 0) goto L3d
            com.sigmob.sdk.mraid.a$c r4 = new com.sigmob.sdk.mraid.a$c
            r1 = 0
            r4.<init>(r3, r1)
            r3.q = r4
        L3d:
            com.sigmob.sdk.mraid.a$c r4 = r3.q
            int r1 = android.view.ViewConfiguration.getPressedStateDuration()
            long r1 = (long) r1
            r3.postDelayed(r4, r1)
            r3.c()
            goto L4e
        L4b:
            r3.setClosePressed(r0)
        L4e:
            return r0
        L4f:
            r3.setClosePressed(r1)
            super.onTouchEvent(r4)
            return r1
    }

    public void setCloseAlwaysInteractable(boolean r1) {
            r0 = this;
            r0.p = r1
            return
    }

    void setCloseBoundChanged(boolean r1) {
            r0 = this;
            r0.k = r1
            return
    }

    void setCloseBounds(android.graphics.Rect r2) {
            r1 = this;
            android.graphics.Rect r0 = r1.m
            r0.set(r2)
            return
    }

    public void setClosePosition(com.sigmob.sdk.mraid.a.a r1) {
            r0 = this;
            com.czhj.sdk.common.utils.Preconditions.checkNotNull(r1)
            r0.g = r1
            r1 = 1
            r0.k = r1
            r0.invalidate()
            return
    }

    public void setCloseVisible(boolean r3) {
            r2 = this;
            android.graphics.drawable.StateListDrawable r0 = r2.f
            r1 = 0
            boolean r3 = r0.setVisible(r3, r1)
            if (r3 == 0) goto Le
            android.graphics.Rect r3 = r2.m
            r2.invalidate(r3)
        Le:
            return
    }

    public void setOnCloseListener(com.sigmob.sdk.mraid.a.b r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
