package android.support.design.button;

class MaterialButtonBackgroundDrawable extends android.graphics.drawable.RippleDrawable {
    MaterialButtonBackgroundDrawable(android.content.res.ColorStateList r1, android.graphics.drawable.InsetDrawable r2, android.graphics.drawable.Drawable r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r3) {
            r2 = this;
            r0 = 0
            android.graphics.drawable.Drawable r1 = r2.getDrawable(r0)
            if (r1 == 0) goto L1c
            android.graphics.drawable.Drawable r1 = r2.getDrawable(r0)
            android.graphics.drawable.InsetDrawable r1 = (android.graphics.drawable.InsetDrawable) r1
            android.graphics.drawable.Drawable r1 = r1.getDrawable()
            android.graphics.drawable.LayerDrawable r1 = (android.graphics.drawable.LayerDrawable) r1
            android.graphics.drawable.Drawable r0 = r1.getDrawable(r0)
            android.graphics.drawable.GradientDrawable r0 = (android.graphics.drawable.GradientDrawable) r0
            r0.setColorFilter(r3)
        L1c:
            return
    }
}
