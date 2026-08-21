package android.support.v7.widget;

public class AppCompatImageView extends android.widget.ImageView implements android.support.v4.view.TintableBackgroundView, android.support.v4.widget.TintableImageSourceView {
    private final android.support.v7.widget.AppCompatBackgroundHelper mBackgroundTintHelper;
    private final android.support.v7.widget.AppCompatImageHelper mImageHelper;

    public AppCompatImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = android.support.v7.widget.TintContextWrapper.wrap(r1)
            r0.<init>(r1, r2, r3)
            android.support.v7.widget.AppCompatBackgroundHelper r1 = new android.support.v7.widget.AppCompatBackgroundHelper
            r1.<init>(r0)
            r0.mBackgroundTintHelper = r1
            r1.loadFromAttributes(r2, r3)
            android.support.v7.widget.AppCompatImageHelper r1 = new android.support.v7.widget.AppCompatImageHelper
            r1.<init>(r0)
            r0.mImageHelper = r1
            r1.loadFromAttributes(r2, r3)
            return
    }

    @Override
    protected void drawableStateChanged() {
            r1 = this;
            super.drawableStateChanged()
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.applySupportBackgroundTint()
        La:
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L11
            r0.applySupportImageTint()
        L11:
            return
    }

    @Override
    public android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getSupportBackgroundTintList()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L9
            android.graphics.PorterDuff$Mode r0 = r0.getSupportBackgroundTintMode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.content.res.ColorStateList getSupportImageTintList() {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L9
            android.content.res.ColorStateList r0 = r0.getSupportImageTintList()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportImageTintMode() {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L9
            android.graphics.PorterDuff$Mode r0 = r0.getSupportImageTintMode()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public boolean hasOverlappingRendering() {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            boolean r0 = r0.hasOverlappingRendering()
            if (r0 == 0) goto L10
            boolean r0 = super.hasOverlappingRendering()
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            super.setBackgroundDrawable(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundDrawable(r2)
        La:
            return
    }

    @Override
    public void setBackgroundResource(int r2) {
            r1 = this;
            super.setBackgroundResource(r2)
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto La
            r0.onSetBackgroundResource(r2)
        La:
            return
    }

    @Override
    public void setImageBitmap(android.graphics.Bitmap r1) {
            r0 = this;
            super.setImageBitmap(r1)
            android.support.v7.widget.AppCompatImageHelper r1 = r0.mImageHelper
            if (r1 == 0) goto La
            r1.applySupportImageTint()
        La:
            return
    }

    @Override
    public void setImageDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.setImageDrawable(r1)
            android.support.v7.widget.AppCompatImageHelper r1 = r0.mImageHelper
            if (r1 == 0) goto La
            r1.applySupportImageTint()
        La:
            return
    }

    @Override
    public void setImageResource(int r2) {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L7
            r0.setImageResource(r2)
        L7:
            return
    }

    @Override
    public void setImageURI(android.net.Uri r1) {
            r0 = this;
            super.setImageURI(r1)
            android.support.v7.widget.AppCompatImageHelper r1 = r0.mImageHelper
            if (r1 == 0) goto La
            r1.applySupportImageTint()
        La:
            return
    }

    @Override
    public void setSupportBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintList(r2)
        L7:
            return
    }

    @Override
    public void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.AppCompatBackgroundHelper r0 = r1.mBackgroundTintHelper
            if (r0 == 0) goto L7
            r0.setSupportBackgroundTintMode(r2)
        L7:
            return
    }

    @Override
    public void setSupportImageTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L7
            r0.setSupportImageTintList(r2)
        L7:
            return
    }

    @Override
    public void setSupportImageTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.mImageHelper
            if (r0 == 0) goto L7
            r0.setSupportImageTintMode(r2)
        L7:
            return
    }
}
