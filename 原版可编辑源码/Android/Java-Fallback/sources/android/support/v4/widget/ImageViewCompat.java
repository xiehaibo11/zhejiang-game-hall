package android.support.v4.widget;

public class ImageViewCompat {
    private ImageViewCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.res.ColorStateList getImageTintList(android.widget.ImageView r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.content.res.ColorStateList r2 = r2.getImageTintList()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableImageSourceView
            if (r0 == 0) goto L16
            android.support.v4.widget.TintableImageSourceView r2 = (android.support.v4.widget.TintableImageSourceView) r2
            android.content.res.ColorStateList r2 = r2.getSupportImageTintList()
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static android.graphics.PorterDuff.Mode getImageTintMode(android.widget.ImageView r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.graphics.PorterDuff$Mode r2 = r2.getImageTintMode()
            return r2
        Lb:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableImageSourceView
            if (r0 == 0) goto L16
            android.support.v4.widget.TintableImageSourceView r2 = (android.support.v4.widget.TintableImageSourceView) r2
            android.graphics.PorterDuff$Mode r2 = r2.getSupportImageTintMode()
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    public static void setImageTintList(android.widget.ImageView r2, android.content.res.ColorStateList r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L35
            r2.setImageTintList(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 != r1) goto L3e
            android.graphics.drawable.Drawable r3 = r2.getDrawable()
            android.content.res.ColorStateList r0 = r2.getImageTintList()
            if (r0 == 0) goto L1f
            android.graphics.PorterDuff$Mode r0 = r2.getImageTintMode()
            if (r0 == 0) goto L1f
            r0 = 1
            goto L20
        L1f:
            r0 = 0
        L20:
            if (r3 == 0) goto L3e
            if (r0 == 0) goto L3e
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L31
            int[] r0 = r2.getDrawableState()
            r3.setState(r0)
        L31:
            r2.setImageDrawable(r3)
            goto L3e
        L35:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableImageSourceView
            if (r0 == 0) goto L3e
            android.support.v4.widget.TintableImageSourceView r2 = (android.support.v4.widget.TintableImageSourceView) r2
            r2.setSupportImageTintList(r3)
        L3e:
            return
    }

    public static void setImageTintMode(android.widget.ImageView r2, android.graphics.PorterDuff.Mode r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L35
            r2.setImageTintMode(r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 != r1) goto L3e
            android.graphics.drawable.Drawable r3 = r2.getDrawable()
            android.content.res.ColorStateList r0 = r2.getImageTintList()
            if (r0 == 0) goto L1f
            android.graphics.PorterDuff$Mode r0 = r2.getImageTintMode()
            if (r0 == 0) goto L1f
            r0 = 1
            goto L20
        L1f:
            r0 = 0
        L20:
            if (r3 == 0) goto L3e
            if (r0 == 0) goto L3e
            boolean r0 = r3.isStateful()
            if (r0 == 0) goto L31
            int[] r0 = r2.getDrawableState()
            r3.setState(r0)
        L31:
            r2.setImageDrawable(r3)
            goto L3e
        L35:
            boolean r0 = r2 instanceof android.support.v4.widget.TintableImageSourceView
            if (r0 == 0) goto L3e
            android.support.v4.widget.TintableImageSourceView r2 = (android.support.v4.widget.TintableImageSourceView) r2
            r2.setSupportImageTintMode(r3)
        L3e:
            return
    }
}
