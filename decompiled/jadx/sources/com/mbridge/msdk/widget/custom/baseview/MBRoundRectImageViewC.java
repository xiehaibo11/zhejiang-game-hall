package com.mbridge.msdk.widget.custom.baseview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: loaded from: classes3.dex */
public class MBRoundRectImageViewC extends MBImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Paint f4454a;

    public MBRoundRectImageViewC(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f4454a = new Paint();
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        try {
            Drawable drawable = getDrawable();
            if (drawable == null) {
                super.onDraw(canvas);
                return;
            }
            Bitmap bitmapA = a(((BitmapDrawable) drawable).getBitmap());
            Bitmap bitmapA2 = null;
            if (bitmapA != null && !bitmapA.isRecycled()) {
                bitmapA2 = a(bitmapA, com.mbridge.msdk.widget.custom.b.a.a(getContext(), 10.0f));
            }
            if (bitmapA2 == null || bitmapA2.isRecycled()) {
                return;
            }
            Rect rect = new Rect(0, 0, bitmapA2.getWidth(), bitmapA2.getHeight());
            this.f4454a.reset();
            canvas.drawBitmap(bitmapA2, rect, rect, this.f4454a);
        } catch (Exception e) {
            z.d("MBRoundRectImageViewC", e.getMessage());
        }
    }

    private Bitmap a(Bitmap bitmap) {
        if (bitmap != null && !bitmap.isRecycled()) {
            try {
                int width = getWidth();
                float height = getHeight() / bitmap.getHeight();
                Matrix matrix = new Matrix();
                matrix.postScale(width / bitmap.getWidth(), height);
                return Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight(), matrix, true);
            } catch (Exception e) {
                z.d("MBRoundRectImageViewC", e.getMessage());
            }
        }
        return bitmap;
    }

    private Bitmap a(Bitmap bitmap, int i) {
        if (bitmap != null && !bitmap.isRecycled()) {
            try {
                BitmapShader bitmapShader = new BitmapShader(bitmap, Shader.TileMode.CLAMP, Shader.TileMode.CLAMP);
                Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_4444);
                Canvas canvas = new Canvas(bitmapCreateBitmap);
                Paint paint = new Paint();
                paint.setAntiAlias(true);
                paint.setShader(bitmapShader);
                float f = i;
                canvas.drawRoundRect(new RectF(0.0f, 0.0f, bitmap.getWidth(), bitmap.getHeight()), f, f, paint);
                return bitmapCreateBitmap;
            } catch (Exception e) {
                z.d("MBRoundRectImageViewC", e.getMessage());
            }
        }
        return bitmap;
    }
}
