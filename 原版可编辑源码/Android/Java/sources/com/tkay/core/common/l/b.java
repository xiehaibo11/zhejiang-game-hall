package com.tkay.core.common.l;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import android.support.v4.view.MotionEventCompat;
import java.io.FileDescriptor;
import java.lang.reflect.Array;

public final class b {
    public static int[] a(String str) {
        try {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeFile(str, options);
            return new int[]{options.outWidth, options.outHeight};
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        } catch (OutOfMemoryError unused) {
            return null;
        }
    }

    private static Bitmap a(String str, int i, int i2) {
        try {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeFile(str, options);
            options.inSampleSize = a(options.outWidth, options.outHeight, i, i2);
            options.inJustDecodeBounds = false;
            return BitmapFactory.decodeFile(str, options);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        } catch (OutOfMemoryError unused) {
            return null;
        }
    }

    public static Bitmap a(FileDescriptor fileDescriptor, int i, int i2) {
        try {
            BitmapFactory.Options options = new BitmapFactory.Options();
            options.inJustDecodeBounds = true;
            BitmapFactory.decodeFileDescriptor(fileDescriptor, null, options);
            options.inSampleSize = a(options.outWidth, options.outHeight, i, i2);
            options.inJustDecodeBounds = false;
            return BitmapFactory.decodeFileDescriptor(fileDescriptor, null, options);
        } catch (OutOfMemoryError e) {
            e.printStackTrace();
            return null;
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    private static int a(int i, int i2, int i3, int i4) {
        int i5 = 1;
        if (i3 <= 0 && i4 <= 0) {
            return 1;
        }
        while (i / i5 > i3 && i2 / i5 > i4) {
            i5 *= 2;
        }
        return i5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:69:0x009e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x008f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0094 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0099 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Bitmap a(Context context, Bitmap bitmap) {
        RenderScript renderScriptCreate;
        Allocation allocationCreateFromBitmap;
        ScriptIntrinsicBlur scriptIntrinsicBlurCreate;
        Allocation allocationCreateFromBitmap2;
        ScriptIntrinsicBlur scriptIntrinsicBlur;
        Allocation allocation;
        RenderScript renderScript = null;
        if (bitmap.isRecycled()) {
            com.tkay.core.common.k.c.a("Error", "Error, cannot access an invalid/free'd bitmap here!", com.tkay.core.common.b.m.a().q());
            return null;
        }
        try {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth() / 3, bitmap.getHeight() / 3, Bitmap.Config.ARGB_8888);
            if (Build.VERSION.SDK_INT >= 17) {
                renderScriptCreate = RenderScript.create(context);
                try {
                    scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScriptCreate, Element.U8_4(renderScriptCreate));
                    try {
                        allocationCreateFromBitmap = Allocation.createFromBitmap(renderScriptCreate, bitmap);
                        try {
                            allocationCreateFromBitmap2 = Allocation.createFromBitmap(renderScriptCreate, bitmapCreateBitmap);
                            try {
                                scriptIntrinsicBlurCreate.setRadius(25.0f);
                                scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
                                scriptIntrinsicBlurCreate.forEach(allocationCreateFromBitmap2);
                                allocationCreateFromBitmap2.copyTo(bitmapCreateBitmap);
                                new Canvas(bitmapCreateBitmap).drawColor(855638016);
                                renderScript = renderScriptCreate;
                                scriptIntrinsicBlur = scriptIntrinsicBlurCreate;
                                allocation = allocationCreateFromBitmap2;
                            } catch (Throwable th) {
                                th = th;
                                try {
                                    th.printStackTrace();
                                    if (renderScriptCreate != null) {
                                    }
                                    if (scriptIntrinsicBlurCreate != 0) {
                                    }
                                    if (allocationCreateFromBitmap != null) {
                                    }
                                    if (allocationCreateFromBitmap2 != 0) {
                                    }
                                    return null;
                                } finally {
                                }
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            allocationCreateFromBitmap2 = 0;
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        allocationCreateFromBitmap = null;
                        allocationCreateFromBitmap2 = 0;
                    }
                } catch (Throwable th4) {
                    th = th4;
                    allocationCreateFromBitmap = null;
                    scriptIntrinsicBlurCreate = allocationCreateFromBitmap;
                    allocationCreateFromBitmap2 = scriptIntrinsicBlurCreate;
                    th.printStackTrace();
                    if (renderScriptCreate != null) {
                        try {
                            renderScriptCreate.destroy();
                        } catch (Throwable unused) {
                        }
                    }
                    if (scriptIntrinsicBlurCreate != 0) {
                        try {
                            scriptIntrinsicBlurCreate.destroy();
                        } catch (Throwable unused2) {
                        }
                    }
                    if (allocationCreateFromBitmap != null) {
                        try {
                            allocationCreateFromBitmap.destroy();
                        } catch (Throwable unused3) {
                        }
                    }
                    if (allocationCreateFromBitmap2 != 0) {
                        try {
                            allocationCreateFromBitmap2.destroy();
                        } catch (Throwable unused4) {
                        }
                    }
                    return null;
                }
            } else {
                bitmapCreateBitmap = a(bitmapCreateBitmap);
                allocationCreateFromBitmap = null;
                scriptIntrinsicBlur = null;
                allocation = null;
            }
            if (renderScript != null) {
                try {
                    renderScript.destroy();
                } catch (Throwable unused5) {
                }
            }
            if (scriptIntrinsicBlur != null) {
                try {
                    scriptIntrinsicBlur.destroy();
                } catch (Throwable unused6) {
                }
            }
            if (allocationCreateFromBitmap != null) {
                try {
                    allocationCreateFromBitmap.destroy();
                } catch (Throwable unused7) {
                }
            }
            if (allocation != null) {
                try {
                    allocation.destroy();
                } catch (Throwable unused8) {
                }
            }
            return bitmapCreateBitmap;
        } catch (Throwable th5) {
            th = th5;
            renderScriptCreate = null;
            allocationCreateFromBitmap = null;
        }
    }

    private static Bitmap a(Bitmap bitmap) {
        int i;
        int[] iArr;
        int width = bitmap.getWidth();
        int height = bitmap.getHeight();
        int i2 = width * height;
        int[] iArr2 = new int[i2];
        bitmap.getPixels(iArr2, 0, width, 0, 0, width, height);
        int i3 = width - 1;
        int i4 = height - 1;
        int[] iArr3 = new int[i2];
        int[] iArr4 = new int[i2];
        int[] iArr5 = new int[i2];
        int[] iArr6 = new int[Math.max(width, height)];
        int[] iArr7 = new int[173056];
        for (int i5 = 0; i5 < 173056; i5++) {
            iArr7[i5] = i5 / 676;
        }
        int[][] iArr8 = (int[][]) Array.newInstance((Class<?>) int.class, 51, 3);
        int i6 = 0;
        int i7 = 0;
        int i8 = 0;
        while (true) {
            if (i6 >= height) {
                break;
            }
            int i9 = -25;
            int i10 = 0;
            int i11 = 0;
            int i12 = 0;
            int i13 = 0;
            int i14 = 0;
            int i15 = 0;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            for (int i19 = 25; i9 <= i19; i19 = 25) {
                int i20 = height;
                int i21 = iArr2[Math.min(i3, Math.max(i9, 0)) + i7];
                int[] iArr9 = iArr8[i9 + 25];
                iArr9[0] = (i21 & 16711680) >> 16;
                iArr9[1] = (i21 & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8;
                iArr9[2] = i21 & 255;
                int iAbs = 26 - Math.abs(i9);
                i10 += iArr9[0] * iAbs;
                i11 += iArr9[1] * iAbs;
                i12 += iArr9[2] * iAbs;
                if (i9 > 0) {
                    i16 += iArr9[0];
                    i17 += iArr9[1];
                    i18 += iArr9[2];
                } else {
                    i13 += iArr9[0];
                    i14 += iArr9[1];
                    i15 += iArr9[2];
                }
                i9++;
                height = i20;
            }
            int i22 = height;
            int i23 = 25;
            int i24 = 0;
            while (i24 < width) {
                iArr3[i7] = iArr7[i10];
                iArr4[i7] = iArr7[i11];
                iArr5[i7] = iArr7[i12];
                int i25 = i10 - i13;
                int i26 = i11 - i14;
                int i27 = i12 - i15;
                int[] iArr10 = iArr8[((i23 - 25) + 51) % 51];
                int i28 = i13 - iArr10[0];
                int i29 = i14 - iArr10[1];
                int i30 = i15 - iArr10[2];
                if (i6 == 0) {
                    iArr = iArr7;
                    iArr6[i24] = Math.min(i24 + 25 + 1, i3);
                } else {
                    iArr = iArr7;
                }
                int i31 = iArr2[iArr6[i24] + i8];
                iArr10[0] = (i31 & 16711680) >> 16;
                iArr10[1] = (i31 & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8;
                iArr10[2] = i31 & 255;
                int i32 = i16 + iArr10[0];
                int i33 = i17 + iArr10[1];
                int i34 = i18 + iArr10[2];
                i10 = i25 + i32;
                i11 = i26 + i33;
                i12 = i27 + i34;
                i23 = (i23 + 1) % 51;
                int[] iArr11 = iArr8[i23 % 51];
                i13 = i28 + iArr11[0];
                i14 = i29 + iArr11[1];
                i15 = i30 + iArr11[2];
                i16 = i32 - iArr11[0];
                i17 = i33 - iArr11[1];
                i18 = i34 - iArr11[2];
                i7++;
                i24++;
                iArr7 = iArr;
            }
            i8 += width;
            i6++;
            height = i22;
        }
        int[] iArr12 = iArr7;
        int i35 = height;
        int i36 = 0;
        while (i36 < width) {
            int i37 = width * (-25);
            int[] iArr13 = iArr6;
            int[] iArr14 = iArr2;
            int i38 = -25;
            int i39 = 0;
            int i40 = 0;
            int i41 = 0;
            int i42 = 0;
            int i43 = 0;
            int i44 = 0;
            int i45 = 0;
            int i46 = 0;
            int i47 = 0;
            for (int i48 = 25; i38 <= i48; i48 = 25) {
                int iMax = Math.max(0, i37) + i36;
                int[] iArr15 = iArr8[i38 + 25];
                iArr15[0] = iArr3[iMax];
                iArr15[1] = iArr4[iMax];
                iArr15[2] = iArr5[iMax];
                int iAbs2 = 26 - Math.abs(i38);
                i39 += iArr3[iMax] * iAbs2;
                i40 += iArr4[iMax] * iAbs2;
                i41 += iArr5[iMax] * iAbs2;
                if (i38 > 0) {
                    i45 += iArr15[0];
                    i46 += iArr15[1];
                    i47 += iArr15[2];
                } else {
                    i42 += iArr15[0];
                    i43 += iArr15[1];
                    i44 += iArr15[2];
                }
                if (i38 < i4) {
                    i37 += width;
                }
                i38++;
            }
            int i49 = i36;
            int i50 = i35;
            int i51 = 0;
            int i52 = 25;
            while (i51 < i50) {
                iArr14[i49] = (iArr14[i49] & (-16777216)) | (iArr12[i39] << 16) | (iArr12[i40] << 8) | iArr12[i41];
                int i53 = i39 - i42;
                int i54 = i40 - i43;
                int i55 = i41 - i44;
                int[] iArr16 = iArr8[((i52 - 25) + 51) % 51];
                int i56 = i42 - iArr16[0];
                int i57 = i43 - iArr16[1];
                int i58 = i44 - iArr16[2];
                if (i36 == 0) {
                    i = i50;
                    iArr13[i51] = Math.min(i51 + 26, i4) * width;
                } else {
                    i = i50;
                }
                int i59 = iArr13[i51] + i36;
                iArr16[0] = iArr3[i59];
                iArr16[1] = iArr4[i59];
                iArr16[2] = iArr5[i59];
                int i60 = i45 + iArr16[0];
                int i61 = i46 + iArr16[1];
                int i62 = i47 + iArr16[2];
                i39 = i53 + i60;
                i40 = i54 + i61;
                i41 = i55 + i62;
                i52 = (i52 + 1) % 51;
                int[] iArr17 = iArr8[i52];
                i42 = i56 + iArr17[0];
                i43 = i57 + iArr17[1];
                i44 = i58 + iArr17[2];
                i45 = i60 - iArr17[0];
                i46 = i61 - iArr17[1];
                i47 = i62 - iArr17[2];
                i49 += width;
                i51++;
                i50 = i;
            }
            i35 = i50;
            i36++;
            iArr6 = iArr13;
            iArr2 = iArr14;
        }
        bitmap.setPixels(iArr2, 0, width, 0, 0, width, i35);
        return bitmap;
    }
}
