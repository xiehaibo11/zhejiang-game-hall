package com.mbridge.msdk.video.dynview.i;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import com.mbridge.msdk.MBridgeConstans;

/* JADX INFO: compiled from: BlurUtil.java */
/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f4151a;

    public static a a() {
        if (f4151a == null) {
            synchronized (a.class) {
                if (f4151a == null) {
                    f4151a = new a();
                }
            }
        }
        return f4151a;
    }

    public final Bitmap a(Bitmap bitmap, int i) {
        try {
            if (Build.VERSION.SDK_INT >= 17) {
                Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_4444);
                RenderScript renderScriptCreate = RenderScript.create(com.mbridge.msdk.foundation.controller.a.f().j());
                ScriptIntrinsicBlur scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScriptCreate, Element.U8_4(renderScriptCreate));
                Allocation allocationCreateFromBitmap = Allocation.createFromBitmap(renderScriptCreate, bitmap);
                Allocation allocationCreateFromBitmap2 = Allocation.createFromBitmap(renderScriptCreate, bitmapCreateBitmap);
                scriptIntrinsicBlurCreate.setRadius(18.0f);
                scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
                scriptIntrinsicBlurCreate.forEach(allocationCreateFromBitmap2);
                allocationCreateFromBitmap2.copyTo(bitmapCreateBitmap);
                renderScriptCreate.destroy();
                return bitmapCreateBitmap;
            }
            return a(i);
        } catch (Throwable unused) {
            return null;
        }
    }

    private static Bitmap a(int i) {
        Bitmap bitmapCreateBitmap = null;
        try {
            bitmapCreateBitmap = Bitmap.createBitmap(100, 100, Bitmap.Config.ARGB_4444);
            if (i == 1) {
                bitmapCreateBitmap.eraseColor(Color.parseColor("#FF0000"));
            } else {
                bitmapCreateBitmap.eraseColor(Color.parseColor("#FFFFFF"));
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
        return bitmapCreateBitmap;
    }
}
