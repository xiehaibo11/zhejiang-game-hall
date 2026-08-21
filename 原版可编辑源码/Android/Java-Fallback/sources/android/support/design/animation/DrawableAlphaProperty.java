package android.support.design.animation;

public class DrawableAlphaProperty extends android.util.Property<android.graphics.drawable.Drawable, java.lang.Integer> {
    public static final android.util.Property<android.graphics.drawable.Drawable, java.lang.Integer> DRAWABLE_ALPHA_COMPAT = null;
    private final java.util.WeakHashMap<android.graphics.drawable.Drawable, java.lang.Integer> alphaCache;

    static {
            android.support.design.animation.DrawableAlphaProperty r0 = new android.support.design.animation.DrawableAlphaProperty
            r0.<init>()
            android.support.design.animation.DrawableAlphaProperty.DRAWABLE_ALPHA_COMPAT = r0
            return
    }

    private DrawableAlphaProperty() {
            r2 = this;
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.String r1 = "drawableAlphaCompat"
            r2.<init>(r0, r1)
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.alphaCache = r0
            return
    }

    public java.lang.Integer get(android.graphics.drawable.Drawable r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lf
            int r3 = r3.getAlpha()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        Lf:
            java.util.WeakHashMap<android.graphics.drawable.Drawable, java.lang.Integer> r0 = r2.alphaCache
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L20
            java.util.WeakHashMap<android.graphics.drawable.Drawable, java.lang.Integer> r0 = r2.alphaCache
            java.lang.Object r3 = r0.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            return r3
        L20:
            r3 = 255(0xff, float:3.57E-43)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
    }

    @Override
    public java.lang.Integer get(android.graphics.drawable.Drawable r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = (android.graphics.drawable.Drawable) r1
            java.lang.Integer r1 = r0.get(r1)
            return r1
    }

    public void set(android.graphics.drawable.Drawable r3, java.lang.Integer r4) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 >= r1) goto Lb
            java.util.WeakHashMap<android.graphics.drawable.Drawable, java.lang.Integer> r0 = r2.alphaCache
            r0.put(r3, r4)
        Lb:
            int r4 = r4.intValue()
            r3.setAlpha(r4)
            return
    }

    @Override
    public void set(android.graphics.drawable.Drawable r1, java.lang.Integer r2) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = (android.graphics.drawable.Drawable) r1
            java.lang.Integer r2 = (java.lang.Integer) r2
            r0.set(r1, r2)
            return
    }
}
