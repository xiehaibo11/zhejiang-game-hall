package android.support.v4.graphics.drawable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public interface WrappedDrawable {
    android.graphics.drawable.Drawable getWrappedDrawable();

    void setWrappedDrawable(android.graphics.drawable.Drawable r1);
}
