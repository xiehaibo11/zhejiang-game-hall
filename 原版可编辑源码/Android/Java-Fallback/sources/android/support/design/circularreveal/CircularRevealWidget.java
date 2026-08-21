package android.support.design.circularreveal;

public interface CircularRevealWidget extends android.support.design.circularreveal.CircularRevealHelper.Delegate {

    static class 1 {
    }

    public static class CircularRevealEvaluator implements android.animation.TypeEvaluator<android.support.design.circularreveal.CircularRevealWidget.RevealInfo> {
        public static final android.animation.TypeEvaluator<android.support.design.circularreveal.CircularRevealWidget.RevealInfo> CIRCULAR_REVEAL = null;
        private final android.support.design.circularreveal.CircularRevealWidget.RevealInfo revealInfo;

        static {
                android.support.design.circularreveal.CircularRevealWidget$CircularRevealEvaluator r0 = new android.support.design.circularreveal.CircularRevealWidget$CircularRevealEvaluator
                r0.<init>()
                android.support.design.circularreveal.CircularRevealWidget.CircularRevealEvaluator.CIRCULAR_REVEAL = r0
                return
        }

        public CircularRevealEvaluator() {
                r2 = this;
                r2.<init>()
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = new android.support.design.circularreveal.CircularRevealWidget$RevealInfo
                r1 = 0
                r0.<init>(r1)
                r2.revealInfo = r0
                return
        }

        public android.support.design.circularreveal.CircularRevealWidget.RevealInfo evaluate(float r5, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r6, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r7) {
                r4 = this;
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = r4.revealInfo
                float r1 = r6.centerX
                float r2 = r7.centerX
                float r1 = android.support.design.widget.MathUtils.lerp(r1, r2, r5)
                float r2 = r6.centerY
                float r3 = r7.centerY
                float r2 = android.support.design.widget.MathUtils.lerp(r2, r3, r5)
                float r6 = r6.radius
                float r7 = r7.radius
                float r5 = android.support.design.widget.MathUtils.lerp(r6, r7, r5)
                r0.set(r1, r2, r5)
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r5 = r4.revealInfo
                return r5
        }

        @Override
        public android.support.design.circularreveal.CircularRevealWidget.RevealInfo evaluate(float r1, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r2, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r3) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r2 = (android.support.design.circularreveal.CircularRevealWidget.RevealInfo) r2
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r3 = (android.support.design.circularreveal.CircularRevealWidget.RevealInfo) r3
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r1 = r0.evaluate(r1, r2, r3)
                return r1
        }
    }

    public static class CircularRevealProperty extends android.util.Property<android.support.design.circularreveal.CircularRevealWidget, android.support.design.circularreveal.CircularRevealWidget.RevealInfo> {
        public static final android.util.Property<android.support.design.circularreveal.CircularRevealWidget, android.support.design.circularreveal.CircularRevealWidget.RevealInfo> CIRCULAR_REVEAL = null;

        static {
                android.support.design.circularreveal.CircularRevealWidget$CircularRevealProperty r0 = new android.support.design.circularreveal.CircularRevealWidget$CircularRevealProperty
                java.lang.String r1 = "circularReveal"
                r0.<init>(r1)
                android.support.design.circularreveal.CircularRevealWidget.CircularRevealProperty.CIRCULAR_REVEAL = r0
                return
        }

        private CircularRevealProperty(java.lang.String r2) {
                r1 = this;
                java.lang.Class<android.support.design.circularreveal.CircularRevealWidget$RevealInfo> r0 = android.support.design.circularreveal.CircularRevealWidget.RevealInfo.class
                r1.<init>(r0, r2)
                return
        }

        public android.support.design.circularreveal.CircularRevealWidget.RevealInfo get(android.support.design.circularreveal.CircularRevealWidget r1) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r1 = r1.getRevealInfo()
                return r1
        }

        @Override
        public android.support.design.circularreveal.CircularRevealWidget.RevealInfo get(android.support.design.circularreveal.CircularRevealWidget r1) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget r1 = (android.support.design.circularreveal.CircularRevealWidget) r1
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r1 = r0.get(r1)
                return r1
        }

        public void set(android.support.design.circularreveal.CircularRevealWidget r1, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r2) {
                r0 = this;
                r1.setRevealInfo(r2)
                return
        }

        @Override
        public void set(android.support.design.circularreveal.CircularRevealWidget r1, android.support.design.circularreveal.CircularRevealWidget.RevealInfo r2) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget r1 = (android.support.design.circularreveal.CircularRevealWidget) r1
                android.support.design.circularreveal.CircularRevealWidget$RevealInfo r2 = (android.support.design.circularreveal.CircularRevealWidget.RevealInfo) r2
                r0.set(r1, r2)
                return
        }
    }

    public static class CircularRevealScrimColorProperty extends android.util.Property<android.support.design.circularreveal.CircularRevealWidget, java.lang.Integer> {
        public static final android.util.Property<android.support.design.circularreveal.CircularRevealWidget, java.lang.Integer> CIRCULAR_REVEAL_SCRIM_COLOR = null;

        static {
                android.support.design.circularreveal.CircularRevealWidget$CircularRevealScrimColorProperty r0 = new android.support.design.circularreveal.CircularRevealWidget$CircularRevealScrimColorProperty
                java.lang.String r1 = "circularRevealScrimColor"
                r0.<init>(r1)
                android.support.design.circularreveal.CircularRevealWidget.CircularRevealScrimColorProperty.CIRCULAR_REVEAL_SCRIM_COLOR = r0
                return
        }

        private CircularRevealScrimColorProperty(java.lang.String r2) {
                r1 = this;
                java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
                r1.<init>(r0, r2)
                return
        }

        public java.lang.Integer get(android.support.design.circularreveal.CircularRevealWidget r1) {
                r0 = this;
                int r1 = r1.getCircularRevealScrimColor()
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                return r1
        }

        @Override
        public java.lang.Integer get(android.support.design.circularreveal.CircularRevealWidget r1) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget r1 = (android.support.design.circularreveal.CircularRevealWidget) r1
                java.lang.Integer r1 = r0.get(r1)
                return r1
        }

        public void set(android.support.design.circularreveal.CircularRevealWidget r1, java.lang.Integer r2) {
                r0 = this;
                int r2 = r2.intValue()
                r1.setCircularRevealScrimColor(r2)
                return
        }

        @Override
        public void set(android.support.design.circularreveal.CircularRevealWidget r1, java.lang.Integer r2) {
                r0 = this;
                android.support.design.circularreveal.CircularRevealWidget r1 = (android.support.design.circularreveal.CircularRevealWidget) r1
                java.lang.Integer r2 = (java.lang.Integer) r2
                r0.set(r1, r2)
                return
        }
    }

    public static class RevealInfo {
        public static final float INVALID_RADIUS = Float.MAX_VALUE;
        public float centerX;
        public float centerY;
        public float radius;

        private RevealInfo() {
                r0 = this;
                r0.<init>()
                return
        }

        public RevealInfo(float r1, float r2, float r3) {
                r0 = this;
                r0.<init>()
                r0.centerX = r1
                r0.centerY = r2
                r0.radius = r3
                return
        }

        RevealInfo(android.support.design.circularreveal.CircularRevealWidget.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public RevealInfo(android.support.design.circularreveal.CircularRevealWidget.RevealInfo r3) {
                r2 = this;
                float r0 = r3.centerX
                float r1 = r3.centerY
                float r3 = r3.radius
                r2.<init>(r0, r1, r3)
                return
        }

        public boolean isInvalid() {
                r2 = this;
                float r0 = r2.radius
                r1 = 2139095039(0x7f7fffff, float:3.4028235E38)
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 != 0) goto Lb
                r0 = 1
                goto Lc
            Lb:
                r0 = 0
            Lc:
                return r0
        }

        public void set(float r1, float r2, float r3) {
                r0 = this;
                r0.centerX = r1
                r0.centerY = r2
                r0.radius = r3
                return
        }

        public void set(android.support.design.circularreveal.CircularRevealWidget.RevealInfo r3) {
                r2 = this;
                float r0 = r3.centerX
                float r1 = r3.centerY
                float r3 = r3.radius
                r2.set(r0, r1, r3)
                return
        }
    }

    void buildCircularRevealCache();

    void destroyCircularRevealCache();

    void draw(android.graphics.Canvas r1);

    android.graphics.drawable.Drawable getCircularRevealOverlayDrawable();

    int getCircularRevealScrimColor();

    android.support.design.circularreveal.CircularRevealWidget.RevealInfo getRevealInfo();

    boolean isOpaque();

    void setCircularRevealOverlayDrawable(android.graphics.drawable.Drawable r1);

    void setCircularRevealScrimColor(int r1);

    void setRevealInfo(android.support.design.circularreveal.CircularRevealWidget.RevealInfo r1);
}
