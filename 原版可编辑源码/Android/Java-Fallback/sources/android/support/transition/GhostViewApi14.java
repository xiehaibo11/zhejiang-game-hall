package android.support.transition;

class GhostViewApi14 extends android.view.View implements android.support.transition.GhostViewImpl {
    android.graphics.Matrix mCurrentMatrix;
    private int mDeltaX;
    private int mDeltaY;
    private final android.graphics.Matrix mMatrix;
    private final android.view.ViewTreeObserver.OnPreDrawListener mOnPreDrawListener;
    int mReferences;
    android.view.ViewGroup mStartParent;
    android.view.View mStartView;
    final android.view.View mView;


    GhostViewApi14(android.view.View r2) {
            r1 = this;
            android.content.Context r0 = r2.getContext()
            r1.<init>(r0)
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r1.mMatrix = r0
            android.support.transition.GhostViewApi14$1 r0 = new android.support.transition.GhostViewApi14$1
            r0.<init>(r1)
            r1.mOnPreDrawListener = r0
            r1.mView = r2
            r2 = 2
            r0 = 0
            r1.setLayerType(r2, r0)
            return
    }

    static android.support.transition.GhostViewImpl addGhost(android.view.View r1, android.view.ViewGroup r2) {
            android.support.transition.GhostViewApi14 r0 = getGhostView(r1)
            if (r0 != 0) goto L16
            android.widget.FrameLayout r2 = findFrameLayout(r2)
            if (r2 != 0) goto Le
            r1 = 0
            return r1
        Le:
            android.support.transition.GhostViewApi14 r0 = new android.support.transition.GhostViewApi14
            r0.<init>(r1)
            r2.addView(r0)
        L16:
            int r1 = r0.mReferences
            int r1 = r1 + 1
            r0.mReferences = r1
            return r0
    }

    private static android.widget.FrameLayout findFrameLayout(android.view.ViewGroup r1) {
        L0:
            boolean r0 = r1 instanceof android.widget.FrameLayout
            if (r0 != 0) goto L11
            android.view.ViewParent r1 = r1.getParent()
            boolean r0 = r1 instanceof android.view.ViewGroup
            if (r0 != 0) goto Le
            r1 = 0
            return r1
        Le:
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            goto L0
        L11:
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1
            return r1
    }

    static android.support.transition.GhostViewApi14 getGhostView(android.view.View r1) {
            int r0 = android.support.transition.R.id.ghost_view
            java.lang.Object r1 = r1.getTag(r0)
            android.support.transition.GhostViewApi14 r1 = (android.support.transition.GhostViewApi14) r1
            return r1
    }

    static void removeGhost(android.view.View r2) {
            android.support.transition.GhostViewApi14 r2 = getGhostView(r2)
            if (r2 == 0) goto L1e
            int r0 = r2.mReferences
            int r0 = r0 + (-1)
            r2.mReferences = r0
            if (r0 > 0) goto L1e
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto L1e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r0.endViewTransition(r2)
            r0.removeView(r2)
        L1e:
            return
    }

    private static void setGhostView(android.view.View r1, android.support.transition.GhostViewApi14 r2) {
            int r0 = android.support.transition.R.id.ghost_view
            r1.setTag(r0, r2)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r6 = this;
            super.onAttachedToWindow()
            android.view.View r0 = r6.mView
            setGhostView(r0, r6)
            r0 = 2
            int[] r1 = new int[r0]
            int[] r0 = new int[r0]
            r6.getLocationOnScreen(r1)
            android.view.View r2 = r6.mView
            r2.getLocationOnScreen(r0)
            r2 = 0
            r3 = r0[r2]
            float r3 = (float) r3
            android.view.View r4 = r6.mView
            float r4 = r4.getTranslationX()
            float r3 = r3 - r4
            int r3 = (int) r3
            r0[r2] = r3
            r3 = 1
            r4 = r0[r3]
            float r4 = (float) r4
            android.view.View r5 = r6.mView
            float r5 = r5.getTranslationY()
            float r4 = r4 - r5
            int r4 = (int) r4
            r0[r3] = r4
            r4 = r0[r2]
            r2 = r1[r2]
            int r4 = r4 - r2
            r6.mDeltaX = r4
            r0 = r0[r3]
            r1 = r1[r3]
            int r0 = r0 - r1
            r6.mDeltaY = r0
            android.view.View r0 = r6.mView
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnPreDrawListener r1 = r6.mOnPreDrawListener
            r0.addOnPreDrawListener(r1)
            android.view.View r0 = r6.mView
            r1 = 4
            r0.setVisibility(r1)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            android.view.View r0 = r2.mView
            android.view.ViewTreeObserver r0 = r0.getViewTreeObserver()
            android.view.ViewTreeObserver$OnPreDrawListener r1 = r2.mOnPreDrawListener
            r0.removeOnPreDrawListener(r1)
            android.view.View r0 = r2.mView
            r1 = 0
            r0.setVisibility(r1)
            android.view.View r0 = r2.mView
            r1 = 0
            setGhostView(r0, r1)
            super.onDetachedFromWindow()
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r4) {
            r3 = this;
            android.graphics.Matrix r0 = r3.mMatrix
            android.graphics.Matrix r1 = r3.mCurrentMatrix
            r0.set(r1)
            android.graphics.Matrix r0 = r3.mMatrix
            int r1 = r3.mDeltaX
            float r1 = (float) r1
            int r2 = r3.mDeltaY
            float r2 = (float) r2
            r0.postTranslate(r1, r2)
            android.graphics.Matrix r0 = r3.mMatrix
            r4.setMatrix(r0)
            android.view.View r0 = r3.mView
            r0.draw(r4)
            return
    }

    @Override
    public void reserveEndViewTransition(android.view.ViewGroup r1, android.view.View r2) {
            r0 = this;
            r0.mStartParent = r1
            r0.mStartView = r2
            return
    }

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            super.setVisibility(r2)
            android.view.View r0 = r1.mView
            if (r2 != 0) goto L9
            r2 = 4
            goto La
        L9:
            r2 = 0
        La:
            r0.setVisibility(r2)
            return
    }
}
