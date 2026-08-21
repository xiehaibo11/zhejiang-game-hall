package android.support.design.bottomappbar;

public class BottomAppBar extends android.support.v7.widget.Toolbar implements android.support.design.widget.CoordinatorLayout.AttachedBehavior {
    private static final long ANIMATION_DURATION = 300;
    public static final int FAB_ALIGNMENT_MODE_CENTER = 0;
    public static final int FAB_ALIGNMENT_MODE_END = 1;
    private android.animation.Animator attachAnimator;
    private int fabAlignmentMode;
    android.animation.AnimatorListenerAdapter fabAnimationListener;
    private boolean fabAttached;
    private final int fabOffsetEndMode;
    private boolean hideOnScroll;
    private final android.support.design.shape.MaterialShapeDrawable materialShapeDrawable;
    private android.animation.Animator menuAnimator;
    private android.animation.Animator modeAnimator;
    private final android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment topEdgeTreatment;








    public static class Behavior extends android.support.design.behavior.HideBottomViewOnScrollBehavior<android.support.design.bottomappbar.BottomAppBar> {
        private final android.graphics.Rect fabContentRect;

        public Behavior() {
                r1 = this;
                r1.<init>()
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r1.fabContentRect = r0
                return
        }

        public Behavior(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                android.graphics.Rect r1 = new android.graphics.Rect
                r1.<init>()
                r0.fabContentRect = r1
                return
        }

        private boolean updateFabPositionAndVisibility(android.support.design.widget.FloatingActionButton r3, android.support.design.bottomappbar.BottomAppBar r4) {
                r2 = this;
                android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
                r1 = 17
                r0.anchorGravity = r1
                android.support.design.bottomappbar.BottomAppBar.access$1000(r4, r3)
                r3 = 1
                return r3
        }

        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r3, android.support.design.bottomappbar.BottomAppBar r4, int r5) {
                r2 = this;
                android.support.design.widget.FloatingActionButton r0 = android.support.design.bottomappbar.BottomAppBar.access$1100(r4)
                if (r0 == 0) goto L17
                r2.updateFabPositionAndVisibility(r0, r4)
                android.graphics.Rect r1 = r2.fabContentRect
                r0.getMeasuredContentRect(r1)
                android.graphics.Rect r0 = r2.fabContentRect
                int r0 = r0.height()
                r4.setFabDiameter(r0)
            L17:
                boolean r0 = android.support.design.bottomappbar.BottomAppBar.access$1200(r4)
                if (r0 != 0) goto L20
                android.support.design.bottomappbar.BottomAppBar.access$1300(r4)
            L20:
                r3.onLayoutChild(r4, r5)
                boolean r3 = super.onLayoutChild(r3, r4, r5)
                return r3
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3) {
                r0 = this;
                android.support.design.bottomappbar.BottomAppBar r2 = (android.support.design.bottomappbar.BottomAppBar) r2
                boolean r1 = r0.onLayoutChild(r1, r2, r3)
                return r1
        }

        public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r2, android.support.design.bottomappbar.BottomAppBar r3, android.view.View r4, android.view.View r5, int r6, int r7) {
                r1 = this;
                boolean r0 = r3.getHideOnScroll()
                if (r0 == 0) goto Le
                boolean r2 = super.onStartNestedScroll(r2, r3, r4, r5, r6, r7)
                if (r2 == 0) goto Le
                r2 = 1
                goto Lf
            Le:
                r2 = 0
            Lf:
                return r2
        }

        @Override
        public boolean onStartNestedScroll(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3, android.view.View r4, int r5, int r6) {
                r0 = this;
                android.support.design.bottomappbar.BottomAppBar r2 = (android.support.design.bottomappbar.BottomAppBar) r2
                boolean r1 = r0.onStartNestedScroll(r1, r2, r3, r4, r5, r6)
                return r1
        }

        protected void slideDown(android.support.design.bottomappbar.BottomAppBar r3) {
                r2 = this;
                super.slideDown(r3)
                android.support.design.widget.FloatingActionButton r3 = android.support.design.bottomappbar.BottomAppBar.access$1100(r3)
                if (r3 == 0) goto L37
                android.graphics.Rect r0 = r2.fabContentRect
                r3.getContentRect(r0)
                int r0 = r3.getMeasuredHeight()
                android.graphics.Rect r1 = r2.fabContentRect
                int r1 = r1.height()
                int r0 = r0 - r1
                float r0 = (float) r0
                r3.clearAnimation()
                android.view.ViewPropertyAnimator r1 = r3.animate()
                int r3 = r3.getPaddingBottom()
                int r3 = -r3
                float r3 = (float) r3
                float r3 = r3 + r0
                android.view.ViewPropertyAnimator r3 = r1.translationY(r3)
                android.animation.TimeInterpolator r0 = android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR
                android.view.ViewPropertyAnimator r3 = r3.setInterpolator(r0)
                r0 = 175(0xaf, double:8.65E-322)
                r3.setDuration(r0)
            L37:
                return
        }

        @Override
        protected void slideDown(android.view.View r1) {
                r0 = this;
                android.support.design.bottomappbar.BottomAppBar r1 = (android.support.design.bottomappbar.BottomAppBar) r1
                r0.slideDown(r1)
                return
        }

        protected void slideUp(android.support.design.bottomappbar.BottomAppBar r3) {
                r2 = this;
                super.slideUp(r3)
                android.support.design.widget.FloatingActionButton r0 = android.support.design.bottomappbar.BottomAppBar.access$1100(r3)
                if (r0 == 0) goto L23
                r0.clearAnimation()
                android.view.ViewPropertyAnimator r0 = r0.animate()
                float r3 = android.support.design.bottomappbar.BottomAppBar.access$1400(r3)
                android.view.ViewPropertyAnimator r3 = r0.translationY(r3)
                android.animation.TimeInterpolator r0 = android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR
                android.view.ViewPropertyAnimator r3 = r3.setInterpolator(r0)
                r0 = 225(0xe1, double:1.11E-321)
                r3.setDuration(r0)
            L23:
                return
        }

        @Override
        protected void slideUp(android.view.View r1) {
                r0 = this;
                android.support.design.bottomappbar.BottomAppBar r1 = (android.support.design.bottomappbar.BottomAppBar) r1
                r0.slideUp(r1)
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface FabAlignmentMode {
    }

    static class SavedState extends android.support.v4.view.AbsSavedState {
        public static final android.os.Parcelable.Creator<android.support.design.bottomappbar.BottomAppBar.SavedState> CREATOR = null;
        int fabAlignmentMode;
        boolean fabAttached;


        static {
                android.support.design.bottomappbar.BottomAppBar$SavedState$1 r0 = new android.support.design.bottomappbar.BottomAppBar$SavedState$1
                r0.<init>()
                android.support.design.bottomappbar.BottomAppBar.SavedState.CREATOR = r0
                return
        }

        public SavedState(android.os.Parcel r1, java.lang.ClassLoader r2) {
                r0 = this;
                r0.<init>(r1, r2)
                int r2 = r1.readInt()
                r0.fabAlignmentMode = r2
                int r1 = r1.readInt()
                if (r1 == 0) goto L11
                r1 = 1
                goto L12
            L11:
                r1 = 0
            L12:
                r0.fabAttached = r1
                return
        }

        public SavedState(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void writeToParcel(android.os.Parcel r1, int r2) {
                r0 = this;
                super.writeToParcel(r1, r2)
                int r2 = r0.fabAlignmentMode
                r1.writeInt(r2)
                boolean r2 = r0.fabAttached
                r1.writeInt(r2)
                return
        }
    }

    public BottomAppBar(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public BottomAppBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.bottomAppBarStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public BottomAppBar(android.content.Context r9, android.util.AttributeSet r10, int r11) {
            r8 = this;
            r8.<init>(r9, r10, r11)
            r0 = 1
            r8.fabAttached = r0
            android.support.design.bottomappbar.BottomAppBar$7 r1 = new android.support.design.bottomappbar.BottomAppBar$7
            r1.<init>(r8)
            r8.fabAnimationListener = r1
            int[] r4 = android.support.design.R.styleable.BottomAppBar
            int r6 = android.support.design.R.style.Widget_MaterialComponents_BottomAppBar
            r1 = 0
            int[] r7 = new int[r1]
            r2 = r9
            r3 = r10
            r5 = r11
            android.content.res.TypedArray r10 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r2, r3, r4, r5, r6, r7)
            int r11 = android.support.design.R.styleable.BottomAppBar_backgroundTint
            android.content.res.ColorStateList r9 = android.support.design.resources.MaterialResources.getColorStateList(r9, r10, r11)
            int r11 = android.support.design.R.styleable.BottomAppBar_fabCradleMargin
            int r11 = r10.getDimensionPixelOffset(r11, r1)
            float r11 = (float) r11
            int r2 = android.support.design.R.styleable.BottomAppBar_fabCradleRoundedCornerRadius
            int r2 = r10.getDimensionPixelOffset(r2, r1)
            float r2 = (float) r2
            int r3 = android.support.design.R.styleable.BottomAppBar_fabCradleVerticalOffset
            int r3 = r10.getDimensionPixelOffset(r3, r1)
            float r3 = (float) r3
            int r4 = android.support.design.R.styleable.BottomAppBar_fabAlignmentMode
            int r4 = r10.getInt(r4, r1)
            r8.fabAlignmentMode = r4
            int r4 = android.support.design.R.styleable.BottomAppBar_hideOnScroll
            boolean r1 = r10.getBoolean(r4, r1)
            r8.hideOnScroll = r1
            r10.recycle()
            android.content.res.Resources r10 = r8.getResources()
            int r1 = android.support.design.R.dimen.mtrl_bottomappbar_fabOffsetEndMode
            int r10 = r10.getDimensionPixelOffset(r1)
            r8.fabOffsetEndMode = r10
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r10 = new android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment
            r10.<init>(r11, r2, r3)
            r8.topEdgeTreatment = r10
            android.support.design.shape.ShapePathModel r10 = new android.support.design.shape.ShapePathModel
            r10.<init>()
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r11 = r8.topEdgeTreatment
            r10.setTopEdge(r11)
            android.support.design.shape.MaterialShapeDrawable r11 = new android.support.design.shape.MaterialShapeDrawable
            r11.<init>(r10)
            r8.materialShapeDrawable = r11
            r11.setShadowEnabled(r0)
            android.support.design.shape.MaterialShapeDrawable r10 = r8.materialShapeDrawable
            android.graphics.Paint$Style r11 = android.graphics.Paint.Style.FILL
            r10.setPaintStyle(r11)
            android.support.design.shape.MaterialShapeDrawable r10 = r8.materialShapeDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r10, r9)
            android.support.design.shape.MaterialShapeDrawable r9 = r8.materialShapeDrawable
            android.support.v4.view.ViewCompat.setBackground(r8, r9)
            return
    }

    static android.animation.Animator access$002(android.support.design.bottomappbar.BottomAppBar r0, android.animation.Animator r1) {
            r0.modeAnimator = r1
            return r1
    }

    static android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment access$100(android.support.design.bottomappbar.BottomAppBar r0) {
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r0.topEdgeTreatment
            return r0
    }

    static void access$1000(android.support.design.bottomappbar.BottomAppBar r0, android.support.design.widget.FloatingActionButton r1) {
            r0.addFabAnimationListeners(r1)
            return
    }

    static android.support.design.widget.FloatingActionButton access$1100(android.support.design.bottomappbar.BottomAppBar r0) {
            android.support.design.widget.FloatingActionButton r0 = r0.findDependentFab()
            return r0
    }

    static boolean access$1200(android.support.design.bottomappbar.BottomAppBar r0) {
            boolean r0 = r0.isAnimationRunning()
            return r0
    }

    static void access$1300(android.support.design.bottomappbar.BottomAppBar r0) {
            r0.setCutoutState()
            return
    }

    static float access$1400(android.support.design.bottomappbar.BottomAppBar r0) {
            float r0 = r0.getFabTranslationY()
            return r0
    }

    static android.support.design.shape.MaterialShapeDrawable access$200(android.support.design.bottomappbar.BottomAppBar r0) {
            android.support.design.shape.MaterialShapeDrawable r0 = r0.materialShapeDrawable
            return r0
    }

    static android.animation.Animator access$302(android.support.design.bottomappbar.BottomAppBar r0, android.animation.Animator r1) {
            r0.menuAnimator = r1
            return r1
    }

    static void access$400(android.support.design.bottomappbar.BottomAppBar r0, android.support.v7.widget.ActionMenuView r1, int r2, boolean r3) {
            r0.translateActionMenuView(r1, r2, r3)
            return
    }

    static android.animation.Animator access$502(android.support.design.bottomappbar.BottomAppBar r0, android.animation.Animator r1) {
            r0.attachAnimator = r1
            return r1
    }

    static boolean access$600(android.support.design.bottomappbar.BottomAppBar r0) {
            boolean r0 = r0.fabAttached
            return r0
    }

    static void access$700(android.support.design.bottomappbar.BottomAppBar r0, boolean r1) {
            r0.maybeAnimateAttachChange(r1)
            return
    }

    static int access$800(android.support.design.bottomappbar.BottomAppBar r0) {
            int r0 = r0.fabAlignmentMode
            return r0
    }

    static void access$900(android.support.design.bottomappbar.BottomAppBar r0, int r1, boolean r2) {
            r0.maybeAnimateMenuView(r1, r2)
            return
    }

    private void addFabAnimationListeners(android.support.design.widget.FloatingActionButton r2) {
            r1 = this;
            r1.removeFabAnimationListeners(r2)
            android.animation.AnimatorListenerAdapter r0 = r1.fabAnimationListener
            r2.addOnHideAnimationListener(r0)
            android.animation.AnimatorListenerAdapter r0 = r1.fabAnimationListener
            r2.addOnShowAnimationListener(r0)
            return
    }

    private void cancelAnimations() {
            r1 = this;
            android.animation.Animator r0 = r1.attachAnimator
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            android.animation.Animator r0 = r1.menuAnimator
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            android.animation.Animator r0 = r1.modeAnimator
            if (r0 == 0) goto L15
            r0.cancel()
        L15:
            return
    }

    private void createCradleShapeAnimation(boolean r4, java.util.List<android.animation.Animator> r5) {
            r3 = this;
            if (r4 == 0) goto Lb
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r3.topEdgeTreatment
            float r1 = r3.getFabTranslationX()
            r0.setHorizontalOffset(r1)
        Lb:
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            android.support.design.shape.MaterialShapeDrawable r2 = r3.materialShapeDrawable
            float r2 = r2.getInterpolation()
            r0[r1] = r2
            r1 = 1
            if (r4 == 0) goto L1d
            r4 = 1065353216(0x3f800000, float:1.0)
            goto L1e
        L1d:
            r4 = 0
        L1e:
            r0[r1] = r4
            android.animation.ValueAnimator r4 = android.animation.ValueAnimator.ofFloat(r0)
            android.support.design.bottomappbar.BottomAppBar$6 r0 = new android.support.design.bottomappbar.BottomAppBar$6
            r0.<init>(r3)
            r4.addUpdateListener(r0)
            r0 = 300(0x12c, double:1.48E-321)
            r4.setDuration(r0)
            r5.add(r4)
            return
    }

    private void createCradleTranslationAnimation(int r4, java.util.List<android.animation.Animator> r5) {
            r3 = this;
            boolean r0 = r3.fabAttached
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r2 = r3.topEdgeTreatment
            float r2 = r2.getHorizontalOffset()
            r0[r1] = r2
            r1 = 1
            int r4 = r3.getFabTranslationX(r4)
            float r4 = (float) r4
            r0[r1] = r4
            android.animation.ValueAnimator r4 = android.animation.ValueAnimator.ofFloat(r0)
            android.support.design.bottomappbar.BottomAppBar$2 r0 = new android.support.design.bottomappbar.BottomAppBar$2
            r0.<init>(r3)
            r4.addUpdateListener(r0)
            r0 = 300(0x12c, double:1.48E-321)
            r4.setDuration(r0)
            r5.add(r4)
            return
    }

    private void createFabTranslationXAnimation(int r4, java.util.List<android.animation.Animator> r5) {
            r3 = this;
            android.support.design.widget.FloatingActionButton r0 = r3.findDependentFab()
            r1 = 1
            float[] r1 = new float[r1]
            int r4 = r3.getFabTranslationX(r4)
            float r4 = (float) r4
            r2 = 0
            r1[r2] = r4
            java.lang.String r4 = "translationX"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r0, r4, r1)
            r0 = 300(0x12c, double:1.48E-321)
            r4.setDuration(r0)
            r5.add(r4)
            return
    }

    private void createFabTranslationYAnimation(boolean r4, java.util.List<android.animation.Animator> r5) {
            r3 = this;
            android.support.design.widget.FloatingActionButton r0 = r3.findDependentFab()
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 1
            float[] r1 = new float[r1]
            r2 = 0
            float r4 = r3.getFabTranslationY(r4)
            r1[r2] = r4
            java.lang.String r4 = "translationY"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r0, r4, r1)
            r0 = 300(0x12c, double:1.48E-321)
            r4.setDuration(r0)
            r5.add(r4)
            return
    }

    private void createMenuViewTranslationAnimation(int r8, boolean r9, java.util.List<android.animation.Animator> r10) {
            r7 = this;
            android.support.v7.widget.ActionMenuView r0 = r7.getActionMenuView()
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 1
            float[] r2 = new float[r1]
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 0
            r2[r4] = r3
            java.lang.String r5 = "alpha"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r0, r5, r2)
            boolean r6 = r7.fabAttached
            if (r6 != 0) goto L21
            if (r9 == 0) goto L28
            boolean r6 = r7.isVisibleFab()
            if (r6 == 0) goto L28
        L21:
            int r6 = r7.fabAlignmentMode
            if (r6 == r1) goto L34
            if (r8 != r1) goto L28
            goto L34
        L28:
            float r8 = r0.getAlpha()
            int r8 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r8 >= 0) goto L5c
            r10.add(r2)
            goto L5c
        L34:
            float[] r3 = new float[r1]
            r6 = 0
            r3[r4] = r6
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r0, r5, r3)
            android.support.design.bottomappbar.BottomAppBar$4 r5 = new android.support.design.bottomappbar.BottomAppBar$4
            r5.<init>(r7, r0, r8, r9)
            r3.addListener(r5)
            android.animation.AnimatorSet r8 = new android.animation.AnimatorSet
            r8.<init>()
            r5 = 150(0x96, double:7.4E-322)
            r8.setDuration(r5)
            r9 = 2
            android.animation.Animator[] r9 = new android.animation.Animator[r9]
            r9[r4] = r3
            r9[r1] = r2
            r8.playSequentially(r9)
            r10.add(r8)
        L5c:
            return
    }

    private android.support.design.widget.FloatingActionButton findDependentFab() {
            r4 = this;
            android.view.ViewParent r0 = r4.getParent()
            boolean r0 = r0 instanceof android.support.design.widget.CoordinatorLayout
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            android.view.ViewParent r0 = r4.getParent()
            android.support.design.widget.CoordinatorLayout r0 = (android.support.design.widget.CoordinatorLayout) r0
            java.util.List r0 = r0.getDependents(r4)
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r0.next()
            android.view.View r2 = (android.view.View) r2
            boolean r3 = r2 instanceof android.support.design.widget.FloatingActionButton
            if (r3 == 0) goto L18
            android.support.design.widget.FloatingActionButton r2 = (android.support.design.widget.FloatingActionButton) r2
            return r2
        L2b:
            return r1
    }

    private android.support.v7.widget.ActionMenuView getActionMenuView() {
            r3 = this;
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r3.getChildAt(r0)
            boolean r2 = r1 instanceof android.support.v7.widget.ActionMenuView
            if (r2 == 0) goto L12
            android.support.v7.widget.ActionMenuView r1 = (android.support.v7.widget.ActionMenuView) r1
            return r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r0 = 0
            return r0
    }

    private float getFabTranslationX() {
            r1 = this;
            int r0 = r1.fabAlignmentMode
            int r0 = r1.getFabTranslationX(r0)
            float r0 = (float) r0
            return r0
    }

    private int getFabTranslationX(int r4) {
            r3 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r3)
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r4 != r2) goto L1b
            int r4 = r3.getMeasuredWidth()
            int r4 = r4 / 2
            int r1 = r3.fabOffsetEndMode
            int r4 = r4 - r1
            if (r0 == 0) goto L19
            r2 = -1
        L19:
            int r1 = r4 * r2
        L1b:
            return r1
    }

    private float getFabTranslationY() {
            r1 = this;
            boolean r0 = r1.fabAttached
            float r0 = r1.getFabTranslationY(r0)
            return r0
    }

    private float getFabTranslationY(boolean r7) {
            r6 = this;
            android.support.design.widget.FloatingActionButton r0 = r6.findDependentFab()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r0.getContentRect(r2)
            int r3 = r2.height()
            float r3 = (float) r3
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 != 0) goto L1e
            int r1 = r0.getMeasuredHeight()
            float r3 = (float) r1
        L1e:
            int r1 = r0.getHeight()
            int r4 = r2.bottom
            int r1 = r1 - r4
            float r1 = (float) r1
            int r4 = r0.getHeight()
            int r2 = r2.height()
            int r4 = r4 - r2
            float r2 = (float) r4
            float r4 = r6.getCradleVerticalOffset()
            float r4 = -r4
            r5 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 / r5
            float r4 = r4 + r3
            float r4 = r4 + r1
            int r0 = r0.getPaddingBottom()
            float r0 = (float) r0
            float r2 = r2 - r0
            int r0 = r6.getMeasuredHeight()
            int r0 = -r0
            float r0 = (float) r0
            if (r7 == 0) goto L49
            goto L4a
        L49:
            r4 = r2
        L4a:
            float r0 = r0 + r4
            return r0
    }

    private boolean isAnimationRunning() {
            r1 = this;
            android.animation.Animator r0 = r1.attachAnimator
            if (r0 == 0) goto La
            boolean r0 = r0.isRunning()
            if (r0 != 0) goto L1e
        La:
            android.animation.Animator r0 = r1.menuAnimator
            if (r0 == 0) goto L14
            boolean r0 = r0.isRunning()
            if (r0 != 0) goto L1e
        L14:
            android.animation.Animator r0 = r1.modeAnimator
            if (r0 == 0) goto L20
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L20
        L1e:
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
    }

    private boolean isVisibleFab() {
            r1 = this;
            android.support.design.widget.FloatingActionButton r0 = r1.findDependentFab()
            if (r0 == 0) goto Le
            boolean r0 = r0.isOrWillBeShown()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    private void maybeAnimateAttachChange(boolean r3) {
            r2 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r2)
            if (r0 != 0) goto L7
            return
        L7:
            android.animation.Animator r0 = r2.attachAnimator
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r3 == 0) goto L1d
            boolean r1 = r2.isVisibleFab()
            if (r1 == 0) goto L1d
            r1 = 1
            goto L1e
        L1d:
            r1 = 0
        L1e:
            r2.createCradleShapeAnimation(r1, r0)
            r2.createFabTranslationYAnimation(r3, r0)
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            r3.playTogether(r0)
            r2.attachAnimator = r3
            android.support.design.bottomappbar.BottomAppBar$5 r0 = new android.support.design.bottomappbar.BottomAppBar$5
            r0.<init>(r2)
            r3.addListener(r0)
            android.animation.Animator r3 = r2.attachAnimator
            r3.start()
            return
    }

    private void maybeAnimateMenuView(int r4, boolean r5) {
            r3 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r3)
            if (r0 != 0) goto L7
            return
        L7:
            android.animation.Animator r0 = r3.menuAnimator
            if (r0 == 0) goto Le
            r0.cancel()
        Le:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r3.isVisibleFab()
            r2 = 0
            if (r1 != 0) goto L1c
            r4 = r2
            r5 = r4
        L1c:
            r3.createMenuViewTranslationAnimation(r4, r5, r0)
            android.animation.AnimatorSet r4 = new android.animation.AnimatorSet
            r4.<init>()
            r4.playTogether(r0)
            r3.menuAnimator = r4
            android.support.design.bottomappbar.BottomAppBar$3 r5 = new android.support.design.bottomappbar.BottomAppBar$3
            r5.<init>(r3)
            r4.addListener(r5)
            android.animation.Animator r4 = r3.menuAnimator
            r4.start()
            return
    }

    private void maybeAnimateModeChange(int r2) {
            r1 = this;
            int r0 = r1.fabAlignmentMode
            if (r0 == r2) goto L34
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r1)
            if (r0 != 0) goto Lb
            goto L34
        Lb:
            android.animation.Animator r0 = r1.modeAnimator
            if (r0 == 0) goto L12
            r0.cancel()
        L12:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.createCradleTranslationAnimation(r2, r0)
            r1.createFabTranslationXAnimation(r2, r0)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r2.playTogether(r0)
            r1.modeAnimator = r2
            android.support.design.bottomappbar.BottomAppBar$1 r0 = new android.support.design.bottomappbar.BottomAppBar$1
            r0.<init>(r1)
            r2.addListener(r0)
            android.animation.Animator r2 = r1.modeAnimator
            r2.start()
        L34:
            return
    }

    private void removeFabAnimationListeners(android.support.design.widget.FloatingActionButton r2) {
            r1 = this;
            android.animation.AnimatorListenerAdapter r0 = r1.fabAnimationListener
            r2.removeOnHideAnimationListener(r0)
            android.animation.AnimatorListenerAdapter r0 = r1.fabAnimationListener
            r2.removeOnShowAnimationListener(r0)
            return
    }

    private void setCutoutState() {
            r4 = this;
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r4.topEdgeTreatment
            float r1 = r4.getFabTranslationX()
            r0.setHorizontalOffset(r1)
            android.support.design.widget.FloatingActionButton r0 = r4.findDependentFab()
            android.support.design.shape.MaterialShapeDrawable r1 = r4.materialShapeDrawable
            boolean r2 = r4.fabAttached
            r3 = 1065353216(0x3f800000, float:1.0)
            if (r2 == 0) goto L1d
            boolean r2 = r4.isVisibleFab()
            if (r2 == 0) goto L1d
            r2 = r3
            goto L1e
        L1d:
            r2 = 0
        L1e:
            r1.setInterpolation(r2)
            if (r0 == 0) goto L31
            float r1 = r4.getFabTranslationY()
            r0.setTranslationY(r1)
            float r1 = r4.getFabTranslationX()
            r0.setTranslationX(r1)
        L31:
            android.support.v7.widget.ActionMenuView r0 = r4.getActionMenuView()
            if (r0 == 0) goto L4c
            r0.setAlpha(r3)
            boolean r1 = r4.isVisibleFab()
            if (r1 != 0) goto L45
            r1 = 0
            r4.translateActionMenuView(r0, r1, r1)
            goto L4c
        L45:
            int r1 = r4.fabAlignmentMode
            boolean r2 = r4.fabAttached
            r4.translateActionMenuView(r0, r1, r2)
        L4c:
            return
    }

    private void translateActionMenuView(android.support.v7.widget.ActionMenuView r9, int r10, boolean r11) {
            r8 = this;
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r8)
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            r3 = r1
            r4 = r3
        Ld:
            int r5 = r8.getChildCount()
            if (r3 >= r5) goto L47
            android.view.View r5 = r8.getChildAt(r3)
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            boolean r6 = r6 instanceof android.support.v7.widget.Toolbar.LayoutParams
            if (r6 == 0) goto L32
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            android.support.v7.widget.Toolbar$LayoutParams r6 = (android.support.v7.widget.Toolbar.LayoutParams) r6
            int r6 = r6.gravity
            r7 = 8388615(0x800007, float:1.1754953E-38)
            r6 = r6 & r7
            r7 = 8388611(0x800003, float:1.1754948E-38)
            if (r6 != r7) goto L32
            r6 = r2
            goto L33
        L32:
            r6 = r1
        L33:
            if (r6 == 0) goto L44
            if (r0 == 0) goto L3c
            int r5 = r5.getLeft()
            goto L40
        L3c:
            int r5 = r5.getRight()
        L40:
            int r4 = java.lang.Math.max(r4, r5)
        L44:
            int r3 = r3 + 1
            goto Ld
        L47:
            if (r0 == 0) goto L4e
            int r0 = r9.getRight()
            goto L52
        L4e:
            int r0 = r9.getLeft()
        L52:
            int r4 = r4 - r0
            if (r10 != r2) goto L59
            if (r11 == 0) goto L59
            float r10 = (float) r4
            goto L5a
        L59:
            r10 = 0
        L5a:
            r9.setTranslationX(r10)
            return
    }

    public android.content.res.ColorStateList getBackgroundTint() {
            r1 = this;
            android.support.design.shape.MaterialShapeDrawable r0 = r1.materialShapeDrawable
            android.content.res.ColorStateList r0 = r0.getTintList()
            return r0
    }

    @Override
    public android.support.design.widget.CoordinatorLayout.Behavior<android.support.design.bottomappbar.BottomAppBar> getBehavior() {
            r1 = this;
            android.support.design.bottomappbar.BottomAppBar$Behavior r0 = new android.support.design.bottomappbar.BottomAppBar$Behavior
            r0.<init>()
            return r0
    }

    public float getCradleVerticalOffset() {
            r1 = this;
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            float r0 = r0.getCradleVerticalOffset()
            return r0
    }

    public int getFabAlignmentMode() {
            r1 = this;
            int r0 = r1.fabAlignmentMode
            return r0
    }

    public float getFabCradleMargin() {
            r1 = this;
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            float r0 = r0.getFabCradleMargin()
            return r0
    }

    public float getFabCradleRoundedCornerRadius() {
            r1 = this;
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            float r0 = r0.getFabCradleRoundedCornerRadius()
            return r0
    }

    public boolean getHideOnScroll() {
            r1 = this;
            boolean r0 = r1.hideOnScroll
            return r0
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            r0.cancelAnimations()
            r0.setCutoutState()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.bottomappbar.BottomAppBar.SavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r2)
            return
        L8:
            android.support.design.bottomappbar.BottomAppBar$SavedState r2 = (android.support.design.bottomappbar.BottomAppBar.SavedState) r2
            android.os.Parcelable r0 = r2.getSuperState()
            super.onRestoreInstanceState(r0)
            int r0 = r2.fabAlignmentMode
            r1.fabAlignmentMode = r0
            boolean r2 = r2.fabAttached
            r1.fabAttached = r2
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r2 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.design.bottomappbar.BottomAppBar$SavedState r1 = new android.support.design.bottomappbar.BottomAppBar$SavedState
            r1.<init>(r0)
            int r0 = r2.fabAlignmentMode
            r1.fabAlignmentMode = r0
            boolean r0 = r2.fabAttached
            r1.fabAttached = r0
            return r1
    }

    public void replaceMenu(int r2) {
            r1 = this;
            android.view.Menu r0 = r1.getMenu()
            r0.clear()
            r1.inflateMenu(r2)
            return
    }

    public void setBackgroundTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.shape.MaterialShapeDrawable r0 = r1.materialShapeDrawable
            android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r2)
            return
    }

    public void setCradleVerticalOffset(float r2) {
            r1 = this;
            float r0 = r1.getCradleVerticalOffset()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            r0.setCradleVerticalOffset(r2)
            android.support.design.shape.MaterialShapeDrawable r2 = r1.materialShapeDrawable
            r2.invalidateSelf()
        L12:
            return
    }

    public void setFabAlignmentMode(int r2) {
            r1 = this;
            r1.maybeAnimateModeChange(r2)
            boolean r0 = r1.fabAttached
            r1.maybeAnimateMenuView(r2, r0)
            r1.fabAlignmentMode = r2
            return
    }

    public void setFabCradleMargin(float r2) {
            r1 = this;
            float r0 = r1.getFabCradleMargin()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            r0.setFabCradleMargin(r2)
            android.support.design.shape.MaterialShapeDrawable r2 = r1.materialShapeDrawable
            r2.invalidateSelf()
        L12:
            return
    }

    public void setFabCradleRoundedCornerRadius(float r2) {
            r1 = this;
            float r0 = r1.getFabCradleRoundedCornerRadius()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            r0.setFabCradleRoundedCornerRadius(r2)
            android.support.design.shape.MaterialShapeDrawable r2 = r1.materialShapeDrawable
            r2.invalidateSelf()
        L12:
            return
    }

    void setFabDiameter(int r2) {
            r1 = this;
            float r2 = (float) r2
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            float r0 = r0.getFabDiameter()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L15
            android.support.design.bottomappbar.BottomAppBarTopEdgeTreatment r0 = r1.topEdgeTreatment
            r0.setFabDiameter(r2)
            android.support.design.shape.MaterialShapeDrawable r2 = r1.materialShapeDrawable
            r2.invalidateSelf()
        L15:
            return
    }

    public void setHideOnScroll(boolean r1) {
            r0 = this;
            r0.hideOnScroll = r1
            return
    }

    @Override
    public void setSubtitle(java.lang.CharSequence r1) {
            r0 = this;
            return
    }

    @Override
    public void setTitle(java.lang.CharSequence r1) {
            r0 = this;
            return
    }
}
