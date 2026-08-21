package android.support.transition;

public class Slide extends android.support.transition.Visibility {
    private static final java.lang.String PROPNAME_SCREEN_POSITION = "android:slide:screenPosition";
    private static final android.animation.TimeInterpolator sAccelerate = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateBottom = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateEnd = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateLeft = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateRight = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateStart = null;
    private static final android.support.transition.Slide.CalculateSlide sCalculateTop = null;
    private static final android.animation.TimeInterpolator sDecelerate = null;
    private android.support.transition.Slide.CalculateSlide mSlideCalculator;
    private int mSlideEdge;







    private interface CalculateSlide {
        float getGoneX(android.view.ViewGroup r1, android.view.View r2);

        float getGoneY(android.view.ViewGroup r1, android.view.View r2);
    }

    private static abstract class CalculateSlideHorizontal implements android.support.transition.Slide.CalculateSlide {
        private CalculateSlideHorizontal() {
                r0 = this;
                r0.<init>()
                return
        }

        CalculateSlideHorizontal(android.support.transition.Slide.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public float getGoneY(android.view.ViewGroup r1, android.view.View r2) {
                r0 = this;
                float r1 = r2.getTranslationY()
                return r1
        }
    }

    private static abstract class CalculateSlideVertical implements android.support.transition.Slide.CalculateSlide {
        private CalculateSlideVertical() {
                r0 = this;
                r0.<init>()
                return
        }

        CalculateSlideVertical(android.support.transition.Slide.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public float getGoneX(android.view.ViewGroup r1, android.view.View r2) {
                r0 = this;
                float r1 = r2.getTranslationX()
                return r1
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface GravityFlag {
    }

    static {
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r0.<init>()
            android.support.transition.Slide.sDecelerate = r0
            android.view.animation.AccelerateInterpolator r0 = new android.view.animation.AccelerateInterpolator
            r0.<init>()
            android.support.transition.Slide.sAccelerate = r0
            android.support.transition.Slide$1 r0 = new android.support.transition.Slide$1
            r0.<init>()
            android.support.transition.Slide.sCalculateLeft = r0
            android.support.transition.Slide$2 r0 = new android.support.transition.Slide$2
            r0.<init>()
            android.support.transition.Slide.sCalculateStart = r0
            android.support.transition.Slide$3 r0 = new android.support.transition.Slide$3
            r0.<init>()
            android.support.transition.Slide.sCalculateTop = r0
            android.support.transition.Slide$4 r0 = new android.support.transition.Slide$4
            r0.<init>()
            android.support.transition.Slide.sCalculateRight = r0
            android.support.transition.Slide$5 r0 = new android.support.transition.Slide$5
            r0.<init>()
            android.support.transition.Slide.sCalculateEnd = r0
            android.support.transition.Slide$6 r0 = new android.support.transition.Slide$6
            r0.<init>()
            android.support.transition.Slide.sCalculateBottom = r0
            return
    }

    public Slide() {
            r1 = this;
            r1.<init>()
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateBottom
            r1.mSlideCalculator = r0
            r0 = 80
            r1.mSlideEdge = r0
            r1.setSlideEdge(r0)
            return
    }

    public Slide(int r2) {
            r1 = this;
            r1.<init>()
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateBottom
            r1.mSlideCalculator = r0
            r0 = 80
            r1.mSlideEdge = r0
            r1.setSlideEdge(r2)
            return
    }

    public Slide(android.content.Context r4, android.util.AttributeSet r5) {
            r3 = this;
            r3.<init>(r4, r5)
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateBottom
            r3.mSlideCalculator = r0
            r0 = 80
            r3.mSlideEdge = r0
            int[] r1 = android.support.transition.Styleable.SLIDE
            android.content.res.TypedArray r4 = r4.obtainStyledAttributes(r5, r1)
            org.xmlpull.v1.XmlPullParser r5 = (org.xmlpull.v1.XmlPullParser) r5
            java.lang.String r1 = "slideEdge"
            r2 = 0
            int r5 = android.support.v4.content.res.TypedArrayUtils.getNamedInt(r4, r5, r1, r2, r0)
            r4.recycle()
            r3.setSlideEdge(r5)
            return
    }

    private void captureValues(android.support.transition.TransitionValues r3) {
            r2 = this;
            android.view.View r0 = r3.view
            r1 = 2
            int[] r1 = new int[r1]
            r0.getLocationOnScreen(r1)
            java.util.Map<java.lang.String, java.lang.Object> r3 = r3.values
            java.lang.String r0 = "android:slide:screenPosition"
            r3.put(r0, r1)
            return
    }

    @Override
    public void captureEndValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            super.captureEndValues(r1)
            r0.captureValues(r1)
            return
    }

    @Override
    public void captureStartValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            super.captureStartValues(r1)
            r0.captureValues(r1)
            return
    }

    public int getSlideEdge() {
            r1 = this;
            int r0 = r1.mSlideEdge
            return r0
    }

    @Override
    public android.animation.Animator onAppear(android.view.ViewGroup r10, android.view.View r11, android.support.transition.TransitionValues r12, android.support.transition.TransitionValues r13) {
            r9 = this;
            if (r13 != 0) goto L4
            r10 = 0
            return r10
        L4:
            java.util.Map<java.lang.String, java.lang.Object> r12 = r13.values
            java.lang.String r0 = "android:slide:screenPosition"
            java.lang.Object r12 = r12.get(r0)
            int[] r12 = (int[]) r12
            int[] r12 = (int[]) r12
            float r6 = r11.getTranslationX()
            float r7 = r11.getTranslationY()
            android.support.transition.Slide$CalculateSlide r0 = r9.mSlideCalculator
            float r4 = r0.getGoneX(r10, r11)
            android.support.transition.Slide$CalculateSlide r0 = r9.mSlideCalculator
            float r5 = r0.getGoneY(r10, r11)
            r10 = 0
            r2 = r12[r10]
            r10 = 1
            r3 = r12[r10]
            android.animation.TimeInterpolator r8 = android.support.transition.Slide.sDecelerate
            r0 = r11
            r1 = r13
            android.animation.Animator r10 = android.support.transition.TranslationAnimationCreator.createAnimation(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r10
    }

    @Override
    public android.animation.Animator onDisappear(android.view.ViewGroup r10, android.view.View r11, android.support.transition.TransitionValues r12, android.support.transition.TransitionValues r13) {
            r9 = this;
            if (r12 != 0) goto L4
            r10 = 0
            return r10
        L4:
            java.util.Map<java.lang.String, java.lang.Object> r13 = r12.values
            java.lang.String r0 = "android:slide:screenPosition"
            java.lang.Object r13 = r13.get(r0)
            int[] r13 = (int[]) r13
            int[] r13 = (int[]) r13
            float r4 = r11.getTranslationX()
            float r5 = r11.getTranslationY()
            android.support.transition.Slide$CalculateSlide r0 = r9.mSlideCalculator
            float r6 = r0.getGoneX(r10, r11)
            android.support.transition.Slide$CalculateSlide r0 = r9.mSlideCalculator
            float r7 = r0.getGoneY(r10, r11)
            r10 = 0
            r2 = r13[r10]
            r10 = 1
            r3 = r13[r10]
            android.animation.TimeInterpolator r8 = android.support.transition.Slide.sAccelerate
            r0 = r11
            r1 = r12
            android.animation.Animator r10 = android.support.transition.TranslationAnimationCreator.createAnimation(r0, r1, r2, r3, r4, r5, r6, r7, r8)
            return r10
    }

    public void setSlideEdge(int r2) {
            r1 = this;
            r0 = 3
            if (r2 == r0) goto L39
            r0 = 5
            if (r2 == r0) goto L34
            r0 = 48
            if (r2 == r0) goto L2f
            r0 = 80
            if (r2 == r0) goto L2a
            r0 = 8388611(0x800003, float:1.1754948E-38)
            if (r2 == r0) goto L25
            r0 = 8388613(0x800005, float:1.175495E-38)
            if (r2 != r0) goto L1d
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateEnd
            r1.mSlideCalculator = r0
            goto L3d
        L1d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid slide direction"
            r2.<init>(r0)
            throw r2
        L25:
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateStart
            r1.mSlideCalculator = r0
            goto L3d
        L2a:
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateBottom
            r1.mSlideCalculator = r0
            goto L3d
        L2f:
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateTop
            r1.mSlideCalculator = r0
            goto L3d
        L34:
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateRight
            r1.mSlideCalculator = r0
            goto L3d
        L39:
            android.support.transition.Slide$CalculateSlide r0 = android.support.transition.Slide.sCalculateLeft
            r1.mSlideCalculator = r0
        L3d:
            r1.mSlideEdge = r2
            android.support.transition.SidePropagation r0 = new android.support.transition.SidePropagation
            r0.<init>()
            r0.setSide(r2)
            r1.setPropagation(r0)
            return
    }
}
