package android.support.transition;

class ViewOverlayApi14 implements android.support.transition.ViewOverlayImpl {
    protected android.support.transition.ViewOverlayApi14.OverlayViewGroup mOverlayViewGroup;

    static class OverlayViewGroup extends android.view.ViewGroup {
        static java.lang.reflect.Method sInvalidateChildInParentFastMethod;
        java.util.ArrayList<android.graphics.drawable.Drawable> mDrawables;
        android.view.ViewGroup mHostView;
        android.view.View mRequestingView;
        android.support.transition.ViewOverlayApi14 mViewOverlay;

        static class TouchInterceptor extends android.view.View {
            TouchInterceptor(android.content.Context r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }
        }

        static {
                java.lang.Class<android.view.ViewGroup> r0 = android.view.ViewGroup.class
                java.lang.String r1 = "invalidateChildInParentFast"
                r2 = 3
                java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> L1c
                r3 = 0
                java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L1c
                r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L1c
                r3 = 1
                java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.NoSuchMethodException -> L1c
                r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L1c
                r3 = 2
                java.lang.Class<android.graphics.Rect> r4 = android.graphics.Rect.class
                r2[r3] = r4     // Catch: java.lang.NoSuchMethodException -> L1c
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> L1c
                android.support.transition.ViewOverlayApi14.OverlayViewGroup.sInvalidateChildInParentFastMethod = r0     // Catch: java.lang.NoSuchMethodException -> L1c
            L1c:
                return
        }

        OverlayViewGroup(android.content.Context r1, android.view.ViewGroup r2, android.view.View r3, android.support.transition.ViewOverlayApi14 r4) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.mDrawables = r1
                r0.mHostView = r2
                r0.mRequestingView = r3
                int r1 = r2.getWidth()
                r0.setRight(r1)
                int r1 = r2.getHeight()
                r0.setBottom(r1)
                r2.addView(r0)
                r0.mViewOverlay = r4
                return
        }

        private void getOffset(int[] r6) {
                r5 = this;
                r0 = 2
                int[] r1 = new int[r0]
                int[] r0 = new int[r0]
                android.view.ViewGroup r2 = r5.mHostView
                r2.getLocationOnScreen(r1)
                android.view.View r2 = r5.mRequestingView
                r2.getLocationOnScreen(r0)
                r2 = 0
                r3 = r0[r2]
                r4 = r1[r2]
                int r3 = r3 - r4
                r6[r2] = r3
                r2 = 1
                r0 = r0[r2]
                r1 = r1[r2]
                int r0 = r0 - r1
                r6[r2] = r0
                return
        }

        public void add(android.graphics.drawable.Drawable r2) {
                r1 = this;
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                if (r0 != 0) goto Lb
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.mDrawables = r0
            Lb:
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                boolean r0 = r0.contains(r2)
                if (r0 != 0) goto L22
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                r0.add(r2)
                android.graphics.Rect r0 = r2.getBounds()
                r1.invalidate(r0)
                r2.setCallback(r1)
            L22:
                return
        }

        public void add(android.view.View r7) {
                r6 = this;
                android.view.ViewParent r0 = r7.getParent()
                boolean r0 = r0 instanceof android.view.ViewGroup
                r1 = 1
                if (r0 == 0) goto L49
                android.view.ViewParent r0 = r7.getParent()
                android.view.ViewGroup r0 = (android.view.ViewGroup) r0
                android.view.ViewGroup r2 = r6.mHostView
                if (r0 == r2) goto L3d
                android.view.ViewParent r2 = r0.getParent()
                if (r2 == 0) goto L3d
                boolean r2 = android.support.v4.view.ViewCompat.isAttachedToWindow(r0)
                if (r2 == 0) goto L3d
                r2 = 2
                int[] r3 = new int[r2]
                int[] r2 = new int[r2]
                r0.getLocationOnScreen(r3)
                android.view.ViewGroup r4 = r6.mHostView
                r4.getLocationOnScreen(r2)
                r4 = 0
                r5 = r3[r4]
                r4 = r2[r4]
                int r5 = r5 - r4
                android.support.v4.view.ViewCompat.offsetLeftAndRight(r7, r5)
                r3 = r3[r1]
                r2 = r2[r1]
                int r3 = r3 - r2
                android.support.v4.view.ViewCompat.offsetTopAndBottom(r7, r3)
            L3d:
                r0.removeView(r7)
                android.view.ViewParent r2 = r7.getParent()
                if (r2 == 0) goto L49
                r0.removeView(r7)
            L49:
                int r0 = r6.getChildCount()
                int r0 = r0 - r1
                super.addView(r7, r0)
                return
        }

        public void clear() {
                r1 = this;
                r1.removeAllViews()
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                if (r0 == 0) goto La
                r0.clear()
            La:
                return
        }

        @Override
        protected void dispatchDraw(android.graphics.Canvas r6) {
                r5 = this;
                r0 = 2
                int[] r1 = new int[r0]
                int[] r0 = new int[r0]
                android.view.ViewGroup r2 = r5.mHostView
                r2.getLocationOnScreen(r1)
                android.view.View r2 = r5.mRequestingView
                r2.getLocationOnScreen(r0)
                r2 = 0
                r3 = r0[r2]
                r4 = r1[r2]
                int r3 = r3 - r4
                float r3 = (float) r3
                r4 = 1
                r0 = r0[r4]
                r1 = r1[r4]
                int r0 = r0 - r1
                float r0 = (float) r0
                r6.translate(r3, r0)
                android.graphics.Rect r0 = new android.graphics.Rect
                android.view.View r1 = r5.mRequestingView
                int r1 = r1.getWidth()
                android.view.View r3 = r5.mRequestingView
                int r3 = r3.getHeight()
                r0.<init>(r2, r2, r1, r3)
                r6.clipRect(r0)
                super.dispatchDraw(r6)
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r5.mDrawables
                if (r0 != 0) goto L3d
                r0 = r2
                goto L41
            L3d:
                int r0 = r0.size()
            L41:
                if (r2 >= r0) goto L51
                java.util.ArrayList<android.graphics.drawable.Drawable> r1 = r5.mDrawables
                java.lang.Object r1 = r1.get(r2)
                android.graphics.drawable.Drawable r1 = (android.graphics.drawable.Drawable) r1
                r1.draw(r6)
                int r2 = r2 + 1
                goto L41
            L51:
                return
        }

        @Override
        public boolean dispatchTouchEvent(android.view.MotionEvent r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        public void invalidateChildFast(android.view.View r4, android.graphics.Rect r5) {
                r3 = this;
                android.view.ViewGroup r0 = r3.mHostView
                if (r0 == 0) goto L22
                int r0 = r4.getLeft()
                int r4 = r4.getTop()
                r1 = 2
                int[] r1 = new int[r1]
                r3.getOffset(r1)
                r2 = 0
                r2 = r1[r2]
                int r0 = r0 + r2
                r2 = 1
                r1 = r1[r2]
                int r4 = r4 + r1
                r5.offset(r0, r4)
                android.view.ViewGroup r4 = r3.mHostView
                r4.invalidate(r5)
            L22:
                return
        }

        @Override
        public android.view.ViewParent invalidateChildInParent(int[] r5, android.graphics.Rect r6) {
                r4 = this;
                android.view.ViewGroup r0 = r4.mHostView
                if (r0 == 0) goto L2c
                r0 = 0
                r1 = r5[r0]
                r2 = 1
                r3 = r5[r2]
                r6.offset(r1, r3)
                android.view.ViewGroup r1 = r4.mHostView
                boolean r1 = r1 instanceof android.view.ViewGroup
                if (r1 == 0) goto L29
                r5[r0] = r0
                r5[r2] = r0
                r1 = 2
                int[] r1 = new int[r1]
                r4.getOffset(r1)
                r0 = r1[r0]
                r1 = r1[r2]
                r6.offset(r0, r1)
                android.view.ViewParent r5 = super.invalidateChildInParent(r5, r6)
                return r5
            L29:
                r4.invalidate(r6)
            L2c:
                r5 = 0
                return r5
        }

        protected android.view.ViewParent invalidateChildInParentFast(int r6, int r7, android.graphics.Rect r8) {
                r5 = this;
                android.view.ViewGroup r0 = r5.mHostView
                boolean r0 = r0 instanceof android.view.ViewGroup
                if (r0 == 0) goto L34
                java.lang.reflect.Method r0 = android.support.transition.ViewOverlayApi14.OverlayViewGroup.sInvalidateChildInParentFastMethod
                if (r0 == 0) goto L34
                r0 = 2
                int[] r1 = new int[r0]     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r5.getOffset(r1)     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                java.lang.reflect.Method r1 = android.support.transition.ViewOverlayApi14.OverlayViewGroup.sInvalidateChildInParentFastMethod     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                android.view.ViewGroup r2 = r5.mHostView     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r3 = 3
                java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r4 = 0
                java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r3[r4] = r6     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r6 = 1
                java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r3[r6] = r7     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r3[r0] = r8     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                r1.invoke(r2, r3)     // Catch: java.lang.reflect.InvocationTargetException -> L2b java.lang.IllegalAccessException -> L30
                goto L34
            L2b:
                r6 = move-exception
                r6.printStackTrace()
                goto L34
            L30:
                r6 = move-exception
                r6.printStackTrace()
            L34:
                r6 = 0
                return r6
        }

        @Override
        public void invalidateDrawable(android.graphics.drawable.Drawable r1) {
                r0 = this;
                android.graphics.Rect r1 = r1.getBounds()
                r0.invalidate(r1)
                return
        }

        boolean isEmpty() {
                r1 = this;
                int r0 = r1.getChildCount()
                if (r0 != 0) goto L12
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                if (r0 == 0) goto L10
                int r0 = r0.size()
                if (r0 != 0) goto L12
            L10:
                r0 = 1
                goto L13
            L12:
                r0 = 0
            L13:
                return r0
        }

        @Override
        protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
                r0 = this;
                return
        }

        public void remove(android.graphics.drawable.Drawable r2) {
                r1 = this;
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                if (r0 == 0) goto L12
                r0.remove(r2)
                android.graphics.Rect r0 = r2.getBounds()
                r1.invalidate(r0)
                r0 = 0
                r2.setCallback(r0)
            L12:
                return
        }

        public void remove(android.view.View r1) {
                r0 = this;
                super.removeView(r1)
                boolean r1 = r0.isEmpty()
                if (r1 == 0) goto Le
                android.view.ViewGroup r1 = r0.mHostView
                r1.removeView(r0)
            Le:
                return
        }

        @Override
        protected boolean verifyDrawable(android.graphics.drawable.Drawable r2) {
                r1 = this;
                boolean r0 = super.verifyDrawable(r2)
                if (r0 != 0) goto L13
                java.util.ArrayList<android.graphics.drawable.Drawable> r0 = r1.mDrawables
                if (r0 == 0) goto L11
                boolean r2 = r0.contains(r2)
                if (r2 == 0) goto L11
                goto L13
            L11:
                r2 = 0
                goto L14
            L13:
                r2 = 1
            L14:
                return r2
        }
    }

    private ViewOverlayApi14() {
            r0 = this;
            r0.<init>()
            return
    }

    ViewOverlayApi14(android.content.Context r2, android.view.ViewGroup r3, android.view.View r4) {
            r1 = this;
            r1.<init>()
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = new android.support.transition.ViewOverlayApi14$OverlayViewGroup
            r0.<init>(r2, r3, r4, r1)
            r1.mOverlayViewGroup = r0
            return
    }

    static android.support.transition.ViewOverlayApi14 createFrom(android.view.View r5) {
            android.view.ViewGroup r0 = getContentView(r5)
            if (r0 == 0) goto L27
            int r1 = r0.getChildCount()
            r2 = 0
        Lb:
            if (r2 >= r1) goto L1d
            android.view.View r3 = r0.getChildAt(r2)
            boolean r4 = r3 instanceof android.support.transition.ViewOverlayApi14.OverlayViewGroup
            if (r4 == 0) goto L1a
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r3 = (android.support.transition.ViewOverlayApi14.OverlayViewGroup) r3
            android.support.transition.ViewOverlayApi14 r5 = r3.mViewOverlay
            return r5
        L1a:
            int r2 = r2 + 1
            goto Lb
        L1d:
            android.support.transition.ViewGroupOverlayApi14 r1 = new android.support.transition.ViewGroupOverlayApi14
            android.content.Context r2 = r0.getContext()
            r1.<init>(r2, r0, r5)
            return r1
        L27:
            r5 = 0
            return r5
    }

    static android.view.ViewGroup getContentView(android.view.View r2) {
        L0:
            if (r2 == 0) goto L21
            int r0 = r2.getId()
            r1 = 16908290(0x1020002, float:2.3877235E-38)
            if (r0 != r1) goto L12
            boolean r0 = r2 instanceof android.view.ViewGroup
            if (r0 == 0) goto L12
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            return r2
        L12:
            android.view.ViewParent r0 = r2.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L0
            android.view.ViewParent r2 = r2.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            goto L0
        L21:
            r2 = 0
            return r2
    }

    @Override
    public void add(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            r0.add(r2)
            return
    }

    @Override
    public void clear() {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            r0.clear()
            return
    }

    android.view.ViewGroup getOverlayView() {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            return r0
    }

    boolean isEmpty() {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            boolean r0 = r0.isEmpty()
            return r0
    }

    @Override
    public void remove(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.transition.ViewOverlayApi14$OverlayViewGroup r0 = r1.mOverlayViewGroup
            r0.remove(r2)
            return
    }
}
