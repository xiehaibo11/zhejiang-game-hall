package com.tkay.expressad.video.dynview.i;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import com.tkay.core.common.b.m;

public class b {
    private static volatile b a;

    public static b a() {
        if (a == null) {
            synchronized (b.class) {
                if (a == null) {
                    a = new b();
                }
            }
        }
        return a;
    }

    /* JADX WARN: Removed duplicated region for block: B:57:0x006b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0070 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0075 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:67:0x007a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Bitmap a(Bitmap bitmap, int i) {
        Allocation allocationCreateFromBitmap;
        RenderScript renderScriptCreate;
        ScriptIntrinsicBlur scriptIntrinsicBlurCreate;
        Allocation allocationCreateFromBitmap2;
        Bitmap bitmapA;
        RenderScript renderScript = null;
        try {
            if (Build.VERSION.SDK_INT >= 17) {
                bitmapA = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_4444);
                renderScriptCreate = RenderScript.create(m.a().f());
                try {
                    scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScriptCreate, Element.U8_4(renderScriptCreate));
                    try {
                        allocationCreateFromBitmap = Allocation.createFromBitmap(renderScriptCreate, bitmap);
                        try {
                            allocationCreateFromBitmap2 = Allocation.createFromBitmap(renderScriptCreate, bitmapA);
                        } catch (Throwable unused) {
                            allocationCreateFromBitmap2 = null;
                        }
                    } catch (Throwable unused2) {
                        allocationCreateFromBitmap = null;
                        allocationCreateFromBitmap2 = null;
                    }
                } catch (Throwable unused3) {
                    allocationCreateFromBitmap = null;
                    scriptIntrinsicBlurCreate = null;
                    allocationCreateFromBitmap2 = scriptIntrinsicBlurCreate;
                    if (renderScriptCreate != null) {
                        try {
                            renderScriptCreate.destroy();
                        } catch (Throwable unused4) {
                        }
                    }
                    if (scriptIntrinsicBlurCreate != null) {
                        try {
                            scriptIntrinsicBlurCreate.destroy();
                        } catch (Throwable unused5) {
                        }
                    }
                    if (allocationCreateFromBitmap != null) {
                        try {
                            allocationCreateFromBitmap.destroy();
                        } catch (Throwable unused6) {
                        }
                    }
                    if (allocationCreateFromBitmap2 != null) {
                        try {
                            allocationCreateFromBitmap2.destroy();
                        } catch (Throwable unused7) {
                        }
                    }
                    return null;
                }
                try {
                    scriptIntrinsicBlurCreate.setRadius(18.0f);
                    scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
                    scriptIntrinsicBlurCreate.forEach(allocationCreateFromBitmap2);
                    allocationCreateFromBitmap2.copyTo(bitmapA);
                    renderScript = renderScriptCreate;
                } catch (Throwable unused8) {
                    if (renderScriptCreate != null) {
                    }
                    if (scriptIntrinsicBlurCreate != null) {
                    }
                    if (allocationCreateFromBitmap != null) {
                    }
                    if (allocationCreateFromBitmap2 != null) {
                    }
                    return null;
                }
            } else {
                bitmapA = a(i);
                allocationCreateFromBitmap = null;
                scriptIntrinsicBlurCreate = null;
                allocationCreateFromBitmap2 = null;
            }
            if (renderScript != null) {
                try {
                    renderScript.destroy();
                } catch (Throwable unused9) {
                }
            }
            if (scriptIntrinsicBlurCreate != null) {
                try {
                    scriptIntrinsicBlurCreate.destroy();
                } catch (Throwable unused10) {
                }
            }
            if (allocationCreateFromBitmap != null) {
                try {
                    allocationCreateFromBitmap.destroy();
                } catch (Throwable unused11) {
                }
            }
            if (allocationCreateFromBitmap2 != null) {
                try {
                    allocationCreateFromBitmap2.destroy();
                } catch (Throwable unused12) {
                }
            }
            return bitmapA;
        } catch (Throwable unused13) {
            allocationCreateFromBitmap = null;
            renderScriptCreate = null;
            scriptIntrinsicBlurCreate = null;
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
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
        return bitmapCreateBitmap;
    }
}
