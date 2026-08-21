package com.sigmob.sdk.base.blurkit;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final float f4787a = 1.0f;
    private static a b;
    private static RenderScript c;

    private Bitmap a(View view) {
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(view.getWidth(), view.getHeight(), Bitmap.Config.ARGB_8888);
        view.draw(new Canvas(bitmapCreateBitmap));
        return bitmapCreateBitmap;
    }

    private Bitmap a(View view, float f) {
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap((int) (view.getWidth() * f), (int) (view.getHeight() * f), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        Matrix matrix = new Matrix();
        matrix.preScale(f, f);
        canvas.setMatrix(matrix);
        view.draw(canvas);
        return bitmapCreateBitmap;
    }

    public static a a() {
        a aVar = b;
        if (aVar != null) {
            return aVar;
        }
        throw new RuntimeException("BlurKit not initialized!");
    }

    public static void a(Context context) {
        if (b != null) {
            return;
        }
        b = new a();
        c = RenderScript.create(context.getApplicationContext());
    }

    public Bitmap a(Bitmap bitmap, int i) {
        Allocation allocationCreateFromBitmap = Allocation.createFromBitmap(c, bitmap);
        Allocation allocationCreateTyped = Allocation.createTyped(c, allocationCreateFromBitmap.getType());
        if (Build.VERSION.SDK_INT >= 17) {
            RenderScript renderScript = c;
            ScriptIntrinsicBlur scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScript, Element.U8_4(renderScript));
            scriptIntrinsicBlurCreate.setRadius(i);
            scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
            scriptIntrinsicBlurCreate.forEach(allocationCreateTyped);
        }
        allocationCreateTyped.copyTo(bitmap);
        return bitmap;
    }

    public Bitmap a(View view, int i) {
        return a(a(view), i);
    }

    public Bitmap a(View view, int i, float f) {
        return a(a(view, f), i);
    }
}
