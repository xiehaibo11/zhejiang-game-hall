package android.support.v4.app;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Parcelable;
import android.view.View;
import android.widget.ImageView;
import java.util.List;
import java.util.Map;

public abstract class SharedElementCallback {
    private static final String BUNDLE_SNAPSHOT_BITMAP = "sharedElement:snapshot:bitmap";
    private static final String BUNDLE_SNAPSHOT_IMAGE_MATRIX = "sharedElement:snapshot:imageMatrix";
    private static final String BUNDLE_SNAPSHOT_IMAGE_SCALETYPE = "sharedElement:snapshot:imageScaleType";
    private static final int MAX_IMAGE_SIZE = 1048576;
    private Matrix mTempMatrix;

    public interface OnSharedElementsReadyListener {
        void onSharedElementsReady();
    }

    public void onMapSharedElements(List<String> r1, Map<String, View> r2) {
    }

    public void onRejectSharedElements(List<View> r1) {
    }

    public void onSharedElementEnd(List<String> r1, List<View> r2, List<View> r3) {
    }

    public void onSharedElementStart(List<String> r1, List<View> r2, List<View> r3) {
    }

    public SharedElementCallback() {
    }

    public Parcelable onCaptureSharedElementSnapshot(View r6, Matrix r7, RectF r8) {
        if ((r6 instanceof ImageView) == false) goto L13;
        ImageView r0 = (ImageView) r6;
        Drawable r1 = r0.getDrawable();
        Drawable r2 = r0.getBackground();
        if (r1 == null) goto L13;
        if (r2 != null) goto L13;
        Bitmap r12 = createDrawableBitmap(r1);
        if (r12 == null) goto L13;
        Bundle r62 = new Bundle();
        r62.putParcelable(BUNDLE_SNAPSHOT_BITMAP, r12);
        r62.putString(BUNDLE_SNAPSHOT_IMAGE_SCALETYPE, r0.getScaleType().toString());
        if (r0.getScaleType() != ImageView.ScaleType.MATRIX) goto L12;
        float[] r82 = new float[9];
        r0.getImageMatrix().getValues(r82);
        r62.putFloatArray(BUNDLE_SNAPSHOT_IMAGE_MATRIX, r82);
    L12:
        return r62;
    L13:
        int r02 = Math.round(r8.width());
        int r13 = Math.round(r8.height());
        if (r02 <= 0) goto L21;
        if (r13 <= 0) goto L22;
        float r22 = Math.min(1.0f, 1048576.0f / (r02 * r13));
        int r03 = (int) (r02 * r22);
        int r14 = (int) (r13 * r22);
        if (this.mTempMatrix != null) goto L19;
        this.mTempMatrix = new Matrix();
    L19:
        this.mTempMatrix.set(r7);
        this.mTempMatrix.postTranslate(-r8.left, -r8.top);
        this.mTempMatrix.postScale(r22, r22);
        Bitmap r23 = Bitmap.createBitmap(r03, r14, Bitmap.Config.ARGB_8888);
        Canvas r72 = new Canvas(r23);
        r72.concat(this.mTempMatrix);
        r6.draw(r72);
        return r23;
    L22:
        return null;
    L21:
        return null;
    }

    private static Bitmap createDrawableBitmap(Drawable r9) {
        int r0 = r9.getIntrinsicWidth();
        int r1 = r9.getIntrinsicHeight();
        if (r0 <= 0) goto L14;
        if (r1 <= 0) goto L16;
        float r2 = Math.min(1.0f, 1048576.0f / (r0 * r1));
        if ((r9 instanceof BitmapDrawable) == true) goto L9;
    L12:
        int r02 = (int) (r0 * r2);
        int r12 = (int) (r1 * r2);
        Bitmap r22 = Bitmap.createBitmap(r02, r12, Bitmap.Config.ARGB_8888);
        Canvas r3 = new Canvas(r22);
        Rect r4 = r9.getBounds();
        int r5 = r4.left;
        int r6 = r4.top;
        int r7 = r4.right;
        int r42 = r4.bottom;
        r9.setBounds(0, 0, r02, r12);
        r9.draw(r3);
        r9.setBounds(r5, r6, r7, r42);
        return r22;
    L9:
        if (r2 != 1.0f) goto L12;
        return ((BitmapDrawable) r9).getBitmap();
    L16:
        return null;
    L14:
        return null;
    }

    public View onCreateSnapshotView(Context r3, Parcelable r4) {
        if ((r4 instanceof Bundle) == false) goto L11;
        Bundle r42 = (Bundle) r4;
        Bitmap r0 = (Bitmap) r42.getParcelable(BUNDLE_SNAPSHOT_BITMAP);
        if (r0 != null) goto L7;
        return null;
    L7:
        ImageView r1 = new ImageView(r3);
        r1.setImageBitmap(r0);
        r1.setScaleType(ImageView.ScaleType.valueOf(r42.getString(BUNDLE_SNAPSHOT_IMAGE_SCALETYPE)));
        if (r1.getScaleType() != ImageView.ScaleType.MATRIX) goto L14;
        float[] r32 = r42.getFloatArray(BUNDLE_SNAPSHOT_IMAGE_MATRIX);
        Matrix r43 = new Matrix();
        r43.setValues(r32);
        r1.setImageMatrix(r43);
        return r1;
    L14:
        return r1;
    L11:
        if ((r4 instanceof Bitmap) == false) goto L16;
        ImageView r12 = new ImageView(r3);
        r12.setImageBitmap((Bitmap) r4);
        return r12;
    L16:
        return null;
    }

    public void onSharedElementsArrived(List<String> r1, List<View> r2, OnSharedElementsReadyListener r3) {
        r3.onSharedElementsReady();
    }
}
