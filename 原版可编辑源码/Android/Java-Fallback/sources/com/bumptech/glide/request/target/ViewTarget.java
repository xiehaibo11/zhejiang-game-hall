package com.bumptech.glide.request.target;

import android.view.View;

public abstract class ViewTarget<T extends android.view.View, Z> extends com.bumptech.glide.request.target.BaseTarget<Z> {
    private static final java.lang.String TAG = "ViewTarget";
    private static boolean isTagUsedAtLeastOnce;
    private static java.lang.Integer tagId;
    private final com.bumptech.glide.request.target.ViewTarget.SizeDeterminer sizeDeterminer;
    protected final T view;

    private static class SizeDeterminer {
        private static final int PENDING_SIZE = 0;
        private final java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> cbs;
        private android.graphics.Point displayDimens;
        private com.bumptech.glide.request.target.ViewTarget.SizeDeterminer.SizeDeterminerLayoutListener layoutListener;
        private final android.view.View view;

        private static class SizeDeterminerLayoutListener implements android.view.ViewTreeObserver.OnPreDrawListener {
            private final java.lang.ref.WeakReference<com.bumptech.glide.request.target.ViewTarget.SizeDeterminer> sizeDeterminerRef;

            public SizeDeterminerLayoutListener(com.bumptech.glide.request.target.ViewTarget.SizeDeterminer r2) {
                    r1 = this;
                    r1.<init>()
                    java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                    r0.<init>(r2)
                    r1.sizeDeterminerRef = r0
                    return
            }

            @Override
            public boolean onPreDraw() {
                    r3 = this;
                    java.lang.String r0 = "ViewTarget"
                    r1 = 2
                    boolean r1 = android.util.Log.isLoggable(r0, r1)
                    if (r1 == 0) goto L1d
                    java.lang.StringBuilder r1 = new java.lang.StringBuilder
                    r1.<init>()
                    java.lang.String r2 = "OnGlobalLayoutListener called listener="
                    r1.append(r2)
                    r1.append(r3)
                    java.lang.String r1 = r1.toString()
                    android.util.Log.v(r0, r1)
                L1d:
                    java.lang.ref.WeakReference<com.bumptech.glide.request.target.ViewTarget$SizeDeterminer> r0 = r3.sizeDeterminerRef
                    java.lang.Object r0 = r0.get()
                    com.bumptech.glide.request.target.ViewTarget$SizeDeterminer r0 = (com.bumptech.glide.request.target.ViewTarget.SizeDeterminer) r0
                    if (r0 == 0) goto L2a
                    com.bumptech.glide.request.target.ViewTarget.SizeDeterminer.access$000(r0)
                L2a:
                    r0 = 1
                    return r0
            }
        }

        public SizeDeterminer(android.view.View r2) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.cbs = r0
                r1.view = r2
                return
        }

        static void access$000(com.bumptech.glide.request.target.ViewTarget.SizeDeterminer r0) {
                r0.checkCurrentDimens()
                return
        }

        private void checkCurrentDimens() {
                r3 = this;
                java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> r0 = r3.cbs
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L9
                return
            L9:
                int r0 = r3.getViewWidthOrParam()
                int r1 = r3.getViewHeightOrParam()
                boolean r2 = r3.isSizeValid(r0)
                if (r2 == 0) goto L35
                boolean r2 = r3.isSizeValid(r1)
                if (r2 != 0) goto L1e
                goto L35
            L1e:
                r3.notifyCbs(r0, r1)
                android.view.View r0 = r3.view
                android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
                boolean r1 = r0.isAlive()
                if (r1 == 0) goto L32
                com.bumptech.glide.request.target.ViewTarget$SizeDeterminer$SizeDeterminerLayoutListener r1 = r3.layoutListener
                r0.removeOnPreDrawListener(r1)
            L32:
                r0 = 0
                r3.layoutListener = r0
            L35:
                return
        }

        private android.graphics.Point getDisplayDimens() {
                r3 = this;
                android.graphics.Point r0 = r3.displayDimens
                if (r0 == 0) goto L5
                return r0
            L5:
                android.view.View r0 = r3.view
                android.content.Context r0 = r0.getContext()
                java.lang.String r1 = "window"
                java.lang.Object r0 = r0.getSystemService(r1)
                android.view.WindowManager r0 = (android.view.WindowManager) r0
                android.view.Display r0 = r0.getDefaultDisplay()
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 13
                if (r1 < r2) goto L28
                android.graphics.Point r1 = new android.graphics.Point
                r1.<init>()
                r3.displayDimens = r1
                r0.getSize(r1)
                goto L37
            L28:
                android.graphics.Point r1 = new android.graphics.Point
                int r2 = r0.getWidth()
                int r0 = r0.getHeight()
                r1.<init>(r2, r0)
                r3.displayDimens = r1
            L37:
                android.graphics.Point r0 = r3.displayDimens
                return r0
        }

        private int getSizeForParam(int r2, boolean r3) {
                r1 = this;
                r0 = -2
                if (r2 != r0) goto Le
                android.graphics.Point r2 = r1.getDisplayDimens()
                if (r3 == 0) goto Lc
                int r2 = r2.y
                goto Le
            Lc:
                int r2 = r2.x
            Le:
                return r2
        }

        private int getViewHeightOrParam() {
                r2 = this;
                android.view.View r0 = r2.view
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                android.view.View r1 = r2.view
                int r1 = r1.getHeight()
                boolean r1 = r2.isSizeValid(r1)
                if (r1 == 0) goto L19
                android.view.View r0 = r2.view
                int r0 = r0.getHeight()
                return r0
            L19:
                if (r0 == 0) goto L23
                int r0 = r0.height
                r1 = 1
                int r0 = r2.getSizeForParam(r0, r1)
                return r0
            L23:
                r0 = 0
                return r0
        }

        private int getViewWidthOrParam() {
                r2 = this;
                android.view.View r0 = r2.view
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                android.view.View r1 = r2.view
                int r1 = r1.getWidth()
                boolean r1 = r2.isSizeValid(r1)
                if (r1 == 0) goto L19
                android.view.View r0 = r2.view
                int r0 = r0.getWidth()
                return r0
            L19:
                r1 = 0
                if (r0 == 0) goto L23
                int r0 = r0.width
                int r0 = r2.getSizeForParam(r0, r1)
                return r0
            L23:
                return r1
        }

        private boolean isSizeValid(int r2) {
                r1 = this;
                if (r2 > 0) goto L8
                r0 = -2
                if (r2 != r0) goto L6
                goto L8
            L6:
                r2 = 0
                goto L9
            L8:
                r2 = 1
            L9:
                return r2
        }

        private void notifyCbs(int r3, int r4) {
                r2 = this;
                java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> r0 = r2.cbs
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L16
                java.lang.Object r1 = r0.next()
                com.bumptech.glide.request.target.SizeReadyCallback r1 = (com.bumptech.glide.request.target.SizeReadyCallback) r1
                r1.onSizeReady(r3, r4)
                goto L6
            L16:
                java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> r3 = r2.cbs
                r3.clear()
                return
        }

        public void getSize(com.bumptech.glide.request.target.SizeReadyCallback r4) {
                r3 = this;
                int r0 = r3.getViewWidthOrParam()
                int r1 = r3.getViewHeightOrParam()
                boolean r2 = r3.isSizeValid(r0)
                if (r2 == 0) goto L18
                boolean r2 = r3.isSizeValid(r1)
                if (r2 == 0) goto L18
                r4.onSizeReady(r0, r1)
                goto L39
            L18:
                java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> r0 = r3.cbs
                boolean r0 = r0.contains(r4)
                if (r0 != 0) goto L25
                java.util.List<com.bumptech.glide.request.target.SizeReadyCallback> r0 = r3.cbs
                r0.add(r4)
            L25:
                com.bumptech.glide.request.target.ViewTarget$SizeDeterminer$SizeDeterminerLayoutListener r4 = r3.layoutListener
                if (r4 != 0) goto L39
                android.view.View r4 = r3.view
                android.view.ViewTreeObserver r4 = r4.getViewTreeObserver()
                com.bumptech.glide.request.target.ViewTarget$SizeDeterminer$SizeDeterminerLayoutListener r0 = new com.bumptech.glide.request.target.ViewTarget$SizeDeterminer$SizeDeterminerLayoutListener
                r0.<init>(r3)
                r3.layoutListener = r0
                r4.addOnPreDrawListener(r0)
            L39:
                return
        }
    }

    static {
            return
    }

    public ViewTarget(T r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto Lf
            r1.view = r2
            com.bumptech.glide.request.target.ViewTarget$SizeDeterminer r0 = new com.bumptech.glide.request.target.ViewTarget$SizeDeterminer
            r0.<init>(r2)
            r1.sizeDeterminer = r0
            return
        Lf:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "View must not be null!"
            r2.<init>(r0)
            throw r2
    }

    private java.lang.Object getTag() {
            r2 = this;
            java.lang.Integer r0 = com.bumptech.glide.request.target.ViewTarget.tagId
            if (r0 != 0) goto Lb
            T extends android.view.View r0 = r2.view
            java.lang.Object r0 = r0.getTag()
            return r0
        Lb:
            T extends android.view.View r1 = r2.view
            int r0 = r0.intValue()
            java.lang.Object r0 = r1.getTag(r0)
            return r0
    }

    private void setTag(java.lang.Object r3) {
            r2 = this;
            java.lang.Integer r0 = com.bumptech.glide.request.target.ViewTarget.tagId
            if (r0 != 0) goto Ld
            r0 = 1
            com.bumptech.glide.request.target.ViewTarget.isTagUsedAtLeastOnce = r0
            T extends android.view.View r0 = r2.view
            r0.setTag(r3)
            goto L16
        Ld:
            T extends android.view.View r1 = r2.view
            int r0 = r0.intValue()
            r1.setTag(r0, r3)
        L16:
            return
    }

    public static void setTagId(int r1) {
            java.lang.Integer r0 = com.bumptech.glide.request.target.ViewTarget.tagId
            if (r0 != 0) goto Lf
            boolean r0 = com.bumptech.glide.request.target.ViewTarget.isTagUsedAtLeastOnce
            if (r0 != 0) goto Lf
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            com.bumptech.glide.request.target.ViewTarget.tagId = r1
            return
        Lf:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot set the tag id more than once or change the tag id after the first request has been made"
            r1.<init>(r0)
            throw r1
    }

    @Override
    public com.bumptech.glide.request.Request getRequest() {
            r2 = this;
            java.lang.Object r0 = r2.getTag()
            if (r0 == 0) goto L15
            boolean r1 = r0 instanceof com.bumptech.glide.request.Request
            if (r1 == 0) goto Ld
            com.bumptech.glide.request.Request r0 = (com.bumptech.glide.request.Request) r0
            goto L16
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "You must not call setTag() on a view Glide is targeting"
            r0.<init>(r1)
            throw r0
        L15:
            r0 = 0
        L16:
            return r0
    }

    @Override
    public void getSize(com.bumptech.glide.request.target.SizeReadyCallback r2) {
            r1 = this;
            com.bumptech.glide.request.target.ViewTarget$SizeDeterminer r0 = r1.sizeDeterminer
            r0.getSize(r2)
            return
    }

    public T getView() {
            r1 = this;
            T extends android.view.View r0 = r1.view
            return r0
    }

    @Override
    public void setRequest(com.bumptech.glide.request.Request r1) {
            r0 = this;
            r0.setTag(r1)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Target for: "
            r0.append(r1)
            T extends android.view.View r1 = r2.view
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
