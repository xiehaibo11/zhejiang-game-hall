package com.qq.e.ads.nativ.widget;

public class NativeAdContainer extends android.widget.FrameLayout {
    private com.qq.e.ads.nativ.widget.ViewStatusListener a;
    private com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus b;

    static class 1 {
        static final int[] a = null;

        static {
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus[] r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.qq.e.ads.nativ.widget.NativeAdContainer.1.a = r0
                r1 = 1
                r0[r1] = r1     // Catch: java.lang.NoSuchFieldError -> Lc
            Lc:
                int[] r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.1.a     // Catch: java.lang.NoSuchFieldError -> L11
                r1 = 2
                r0[r1] = r1     // Catch: java.lang.NoSuchFieldError -> L11
            L11:
                return
        }
    }

    private enum ViewStatus extends java.lang.Enum<com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus> {
        public static final com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus ATTACHED = null;
        public static final com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus DETACHED = null;
        public static final com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus INIT = null;
        private static final com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus[] a = null;

        static {
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r0 = new com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus
                r1 = 0
                java.lang.String r2 = "INIT"
                r0.<init>(r2, r1)
                com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.INIT = r0
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r0 = new com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus
                r2 = 1
                java.lang.String r3 = "ATTACHED"
                r0.<init>(r3, r2)
                com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.ATTACHED = r0
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r0 = new com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus
                r3 = 2
                java.lang.String r4 = "DETACHED"
                r0.<init>(r4, r3)
                com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.DETACHED = r0
                r4 = 3
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus[] r4 = new com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus[r4]
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r5 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.INIT
                r4[r1] = r5
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r1 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.ATTACHED
                r4[r2] = r1
                r4[r3] = r0
                com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.a = r4
                return
        }

        ViewStatus(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus valueOf(java.lang.String r1) {
                java.lang.Class<com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus> r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r1 = (com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus) r1
                return r1
        }

        public static com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus[] values() {
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus[] r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.a
                java.lang.Object r0 = r0.clone()
                com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus[] r0 = (com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus[]) r0
                return r0
        }
    }

    static {
            return
    }

    public NativeAdContainer(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r1 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.INIT
            r0.b = r1
            return
    }

    public NativeAdContainer(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r1 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.INIT
            r0.b = r1
            return
    }

    public NativeAdContainer(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r1 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.INIT
            r0.b = r1
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            com.qq.e.ads.nativ.widget.ViewStatusListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onDispatchTouchEvent(r2)
        L7:
            boolean r2 = super.dispatchTouchEvent(r2)
            return r2
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            java.lang.String r0 = "NativeAdContainer onAttachedToWindow"
            com.qq.e.comm.util.GDTLogger.d(r0)
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.ATTACHED
            r1.b = r0
            com.qq.e.ads.nativ.widget.ViewStatusListener r0 = r1.a
            if (r0 == 0) goto L13
            r0.onAttachToWindow()
        L13:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            java.lang.String r0 = "NativeAdContainer onDetachedFromWindow"
            com.qq.e.comm.util.GDTLogger.d(r0)
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r0 = com.qq.e.ads.nativ.widget.NativeAdContainer.ViewStatus.DETACHED
            r1.b = r0
            com.qq.e.ads.nativ.widget.ViewStatusListener r0 = r1.a
            if (r0 == 0) goto L13
            r0.onDetachFromWindow()
        L13:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r3) {
            r2 = this;
            super.onWindowFocusChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onWindowFocusChanged: hasWindowFocus: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
            com.qq.e.ads.nativ.widget.ViewStatusListener r0 = r2.a
            if (r0 == 0) goto L1e
            r0.onWindowFocusChanged(r3)
        L1e:
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r3) {
            r2 = this;
            super.onWindowVisibilityChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onWindowVisibilityChanged: visibility: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qq.e.comm.util.GDTLogger.d(r0)
            com.qq.e.ads.nativ.widget.ViewStatusListener r0 = r2.a
            if (r0 == 0) goto L1e
            r0.onWindowVisibilityChanged(r3)
        L1e:
            return
    }

    public void setViewStatusListener(com.qq.e.ads.nativ.widget.ViewStatusListener r2) {
            r1 = this;
            r1.a = r2
            if (r2 == 0) goto L1c
            com.qq.e.ads.nativ.widget.NativeAdContainer$ViewStatus r2 = r1.b
            int r2 = r2.ordinal()
            r0 = 1
            if (r2 == r0) goto L17
            r0 = 2
            if (r2 == r0) goto L11
            goto L1c
        L11:
            com.qq.e.ads.nativ.widget.ViewStatusListener r2 = r1.a
            r2.onDetachFromWindow()
            goto L1c
        L17:
            com.qq.e.ads.nativ.widget.ViewStatusListener r2 = r1.a
            r2.onAttachToWindow()
        L1c:
            return
    }
}
