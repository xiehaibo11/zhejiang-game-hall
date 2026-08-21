package android.support.v4.graphics.drawable;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Rect;
import android.os.Build;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v4.graphics.BitmapCompat;
import android.support.v4.view.GravityCompat;
import android.util.Log;
import java.io.InputStream;

public final class RoundedBitmapDrawableFactory {
    private static final String TAG = "RoundedBitmapDrawableFa";

    private static class DefaultRoundedBitmapDrawable extends RoundedBitmapDrawable {
        DefaultRoundedBitmapDrawable(Resources r1, Bitmap r2) {
            super(r1, r2);
        }

        @Override
        public void setMipMap(boolean r2) {
            if (this.mBitmap == null) goto L6;
            BitmapCompat.setHasMipMap(this.mBitmap, r2);
            invalidateSelf();
            return;
        }

        @Override
        public boolean hasMipMap() {
            if (this.mBitmap != null) goto L5;
        L7:
            return false;
        L5:
            if (BitmapCompat.hasMipMap(this.mBitmap) == false) goto L7;
            return true;
        }

        @Override
        void gravityCompatApply(int r7, int r8, int r9, Rect r10, Rect r11) {
            GravityCompat.apply(r7, r8, r9, r10, r11, 0);
        }
    }

    @NonNull
    public static RoundedBitmapDrawable create(@NonNull Resources r2, @Nullable Bitmap r3) {
        if (Build.VERSION.SDK_INT < 21) goto L7;
        return new RoundedBitmapDrawable21(r2, r3);
    L7:
        return new DefaultRoundedBitmapDrawable(r2, r3);
    }

    @NonNull
    public static RoundedBitmapDrawable create(@NonNull Resources r2, @NonNull String r3) {
        RoundedBitmapDrawable r22 = create(r2, BitmapFactory.decodeFile(r3));
        if (r22.getBitmap() != null) goto L5;
        Log.w(TAG, "RoundedBitmapDrawable cannot decode " + r3);
    L5:
        return r22;
    }

    @NonNull
    public static RoundedBitmapDrawable create(@NonNull Resources r2, @NonNull InputStream r3) {
        RoundedBitmapDrawable r22 = create(r2, BitmapFactory.decodeStream(r3));
        if (r22.getBitmap() != null) goto L5;
        Log.w(TAG, "RoundedBitmapDrawable cannot decode " + r3);
    L5:
        return r22;
    }

    private RoundedBitmapDrawableFactory() {
    }
}
