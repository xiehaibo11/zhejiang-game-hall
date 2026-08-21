package com.tkay.core.common.l;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.support.v4.view.MotionEventCompat;
import java.io.FileDescriptor;
import java.lang.reflect.Array;

/* JADX INFO: loaded from: classes3.dex */
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static android.graphics.Bitmap a(android.content.Context r6, android.graphics.Bitmap r7) {
        /*
            boolean r0 = r7.isRecycled()
            r1 = 0
            if (r0 == 0) goto L17
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            java.lang.String r6 = r6.q()
            java.lang.String r7 = "Error"
            java.lang.String r0 = "Error, cannot access an invalid/free'd bitmap here!"
            com.tkay.core.common.k.c.a(r7, r0, r6)
            return r1
        L17:
            int r0 = r7.getWidth()     // Catch: java.lang.Throwable -> L85
            int r0 = r0 / 3
            int r2 = r7.getHeight()     // Catch: java.lang.Throwable -> L85
            int r2 = r2 / 3
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L85
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r2, r3)     // Catch: java.lang.Throwable -> L85
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L85
            r3 = 17
            if (r2 < r3) goto L69
            android.renderscript.RenderScript r6 = android.renderscript.RenderScript.create(r6)     // Catch: java.lang.Throwable -> L85
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r6)     // Catch: java.lang.Throwable -> L66
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r6, r2)     // Catch: java.lang.Throwable -> L66
            android.renderscript.Allocation r7 = android.renderscript.Allocation.createFromBitmap(r6, r7)     // Catch: java.lang.Throwable -> L62
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r6, r0)     // Catch: java.lang.Throwable -> L5f
            r4 = 1103626240(0x41c80000, float:25.0)
            r2.setRadius(r4)     // Catch: java.lang.Throwable -> L5d
            r2.setInput(r7)     // Catch: java.lang.Throwable -> L5d
            r2.forEach(r3)     // Catch: java.lang.Throwable -> L5d
            r3.copyTo(r0)     // Catch: java.lang.Throwable -> L5d
            android.graphics.Canvas r4 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L5d
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L5d
            r5 = 855638016(0x33000000, float:2.9802322E-8)
            r4.drawColor(r5)     // Catch: java.lang.Throwable -> L5d
            r1 = r6
            goto L70
        L5d:
            r0 = move-exception
            goto L8a
        L5f:
            r0 = move-exception
            r3 = r1
            goto L8a
        L62:
            r0 = move-exception
            r7 = r1
            r3 = r7
            goto L8a
        L66:
            r0 = move-exception
            r7 = r1
            goto L88
        L69:
            android.graphics.Bitmap r0 = a(r0)     // Catch: java.lang.Throwable -> L85
            r7 = r1
            r2 = r7
            r3 = r2
        L70:
            if (r1 == 0) goto L75
            r1.destroy()     // Catch: java.lang.Throwable -> L75
        L75:
            if (r2 == 0) goto L7a
            r2.destroy()     // Catch: java.lang.Throwable -> L7a
        L7a:
            if (r7 == 0) goto L7f
            r7.destroy()     // Catch: java.lang.Throwable -> L7f
        L7f:
            if (r3 == 0) goto L84
            r3.destroy()     // Catch: java.lang.Throwable -> L84
        L84:
            return r0
        L85:
            r0 = move-exception
            r6 = r1
            r7 = r6
        L88:
            r2 = r7
            r3 = r2
        L8a:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> La2
            if (r6 == 0) goto L92
            r6.destroy()     // Catch: java.lang.Throwable -> L92
        L92:
            if (r2 == 0) goto L97
            r2.destroy()     // Catch: java.lang.Throwable -> L97
        L97:
            if (r7 == 0) goto L9c
            r7.destroy()     // Catch: java.lang.Throwable -> L9c
        L9c:
            if (r3 == 0) goto La1
            r3.destroy()     // Catch: java.lang.Throwable -> La1
        La1:
            return r1
        La2:
            r0 = move-exception
            if (r6 == 0) goto La8
            r6.destroy()     // Catch: java.lang.Throwable -> La8
        La8:
            if (r2 == 0) goto Lad
            r2.destroy()     // Catch: java.lang.Throwable -> Lad
        Lad:
            if (r7 == 0) goto Lb2
            r7.destroy()     // Catch: java.lang.Throwable -> Lb2
        Lb2:
            if (r3 == 0) goto Lb7
            r3.destroy()     // Catch: java.lang.Throwable -> Lb7
        Lb7:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.l.b.a(android.content.Context, android.graphics.Bitmap):android.graphics.Bitmap");
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
