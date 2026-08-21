package android.support.v7.widget;

import android.R;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Shader;
import android.graphics.drawable.AnimationDrawable;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.ClipDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.RoundRectShape;
import android.graphics.drawable.shapes.Shape;
import android.support.v4.graphics.drawable.WrappedDrawable;
import android.util.AttributeSet;
import android.widget.ProgressBar;

class AppCompatProgressBarHelper {
    private static final int[] TINT_ATTRS = null;
    private Bitmap mSampleTile;
    private final ProgressBar mView;

    static {
        TINT_ATTRS = new int[]{R.attr.indeterminateDrawable, R.attr.progressDrawable};
    }

    AppCompatProgressBarHelper(ProgressBar r1) {
        this.mView = r1;
    }

    void loadFromAttributes(AttributeSet r4, int r5) {
        TintTypedArray r42 = TintTypedArray.obtainStyledAttributes(this.mView.getContext(), r4, TINT_ATTRS, r5, 0);
        Drawable r52 = r42.getDrawableIfKnown(0);
        if (r52 == null) goto L5;
        this.mView.setIndeterminateDrawable(tileifyIndeterminate(r52));
    L5:
        Drawable r53 = r42.getDrawableIfKnown(1);
        if (r53 == null) goto L8;
        this.mView.setProgressDrawable(tileify(r53, false));
    L8:
        r42.recycle();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private Drawable tileify(Drawable r8, boolean r9) {
        if ((r8 instanceof WrappedDrawable) == false) goto L8;
        WrappedDrawable r0 = (WrappedDrawable) r8;
        Drawable r1 = r0.getWrappedDrawable();
        if (r1 == null) goto L37;
        r0.setWrappedDrawable(tileify(r1, r9));
        return r8;
    L37:
        return r8;
    L8:
        if ((r8 instanceof LayerDrawable) == false) goto L24;
        LayerDrawable r82 = (LayerDrawable) r8;
        int r92 = r82.getNumberOfLayers();
        Drawable[] r02 = new Drawable[r92];
        int r2 = 0;
        int r3 = 0;
    L10:
        if (r3 >= r92) goto L19;
        int r4 = r82.getId(r3);
        Drawable r5 = r82.getDrawable(r3);
        if (r4 != 16908301) goto L14;
    L17:
        boolean r42 = true;
    L18:
        r02[r3] = tileify(r5, r42);
        r3 = r3 + 1;
        goto L10
    L14:
        if (r4 == 16908303) goto L17;
        r42 = false;
        goto L18
    L19:
        LayerDrawable r12 = new LayerDrawable(r02);
    L20:
        if (r2 >= r92) goto L22;
        r12.setId(r2, r82.getId(r2));
        r2 = r2 + 1;
        goto L20
    L22:
        return r12;
    L24:
        if ((r8 instanceof BitmapDrawable) == false) goto L39;
        BitmapDrawable r83 = (BitmapDrawable) r8;
        Bitmap r03 = r83.getBitmap();
        if (this.mSampleTile != null) goto L28;
        this.mSampleTile = r03;
    L28:
        ShapeDrawable r22 = new ShapeDrawable(getDrawableShape());
        BitmapShader r32 = new BitmapShader(r03, Shader.TileMode.REPEAT, Shader.TileMode.CLAMP);
        r22.getPaint().setShader(r32);
        r22.getPaint().setColorFilter(r83.getPaint().getColorFilter());
        if (r9 == false) goto L32;
        return new ClipDrawable(r22, 3, 1);
    L32:
        return r22;
    L39:
        return r8;
    }

    private Drawable tileifyIndeterminate(Drawable r7) {
        if ((r7 instanceof AnimationDrawable) == false) goto L11;
        AnimationDrawable r72 = (AnimationDrawable) r7;
        int r0 = r72.getNumberOfFrames();
        AnimationDrawable r1 = new AnimationDrawable();
        r1.setOneShot(r72.isOneShot());
        int r2 = 0;
    L6:
        if (r2 >= r0) goto L8;
        Drawable r4 = tileify(r72.getFrame(r2), true);
        r4.setLevel(10000);
        r1.addFrame(r4, r72.getDuration(r2));
        r2 = r2 + 1;
        goto L6
    L8:
        r1.setLevel(10000);
        return r1;
    L11:
        return r7;
    }

    private Shape getDrawableShape() {
        return new RoundRectShape(new float[]{5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f}, null, null);
    }

    Bitmap getSampleTime() {
        return this.mSampleTile;
    }
}
