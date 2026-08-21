package com.mbridge.msdk.widget.custom.b;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.support.v4.view.MotionEventCompat;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;
import com.mbridge.msdk.widget.custom.baseview.MBImageView;
import java.lang.reflect.Array;

public final class b {
    public static String a = "FastBlurUtil";
    public static int b = 2048;

    public static Bitmap a(Bitmap bitmap, int i) {
        int[] iArr;
        int i2 = i <= 0 ? 10 : i;
        int width = bitmap.getWidth() / i2;
        int height = bitmap.getHeight() / i2;
        int i3 = 0;
        Bitmap bitmapCreateScaledBitmap = Bitmap.createScaledBitmap(bitmap, width, height, false);
        int width2 = bitmapCreateScaledBitmap.getWidth();
        int height2 = bitmapCreateScaledBitmap.getHeight();
        int i4 = width2 * height2;
        int[] iArr2 = new int[i4];
        bitmapCreateScaledBitmap.getPixels(iArr2, 0, width2, 0, 0, width2, height2);
        int i5 = width2 - 1;
        int i6 = height2 - 1;
        int[] iArr3 = new int[i4];
        int[] iArr4 = new int[i4];
        int[] iArr5 = new int[i4];
        int[] iArr6 = new int[Math.max(width2, height2)];
        int[] iArr7 = new int[20736];
        for (int i7 = 0; i7 < 20736; i7++) {
            iArr7[i7] = i7 / 81;
        }
        int[][] iArr8 = (int[][]) Array.newInstance((Class<?>) int.class, 17, 3);
        int i8 = 0;
        int i9 = 0;
        int i10 = 0;
        while (true) {
            if (i8 >= height2) {
                break;
            }
            int i11 = i3;
            int i12 = i11;
            int i13 = i12;
            int i14 = i13;
            int i15 = i14;
            int i16 = i15;
            int i17 = i16;
            int i18 = i17;
            int i19 = -8;
            int i20 = i18;
            for (int i21 = 8; i19 <= i21; i21 = 8) {
                int i22 = iArr2[i9 + Math.min(i5, Math.max(i19, i3))];
                int[] iArr9 = iArr8[i19 + 8];
                iArr9[i3] = (i22 & 16711680) >> 16;
                iArr9[1] = (i22 & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8;
                iArr9[2] = i22 & 255;
                int iAbs = 9 - Math.abs(i19);
                i20 += iArr9[i3] * iAbs;
                i11 += iArr9[1] * iAbs;
                i12 += iArr9[2] * iAbs;
                if (i19 > 0) {
                    i16 += iArr9[i3];
                    i17 += iArr9[1];
                    i18 += iArr9[2];
                } else {
                    i13 += iArr9[i3];
                    i14 += iArr9[1];
                    i15 += iArr9[2];
                }
                i19++;
            }
            int i23 = i3;
            int i24 = 8;
            while (i23 < width2) {
                iArr3[i9] = iArr7[i20];
                iArr4[i9] = iArr7[i11];
                iArr5[i9] = iArr7[i12];
                int i25 = i20 - i13;
                int i26 = i11 - i14;
                int i27 = i12 - i15;
                int[] iArr10 = iArr8[((i24 - 8) + 17) % 17];
                int i28 = i13 - iArr10[i3];
                int i29 = i14 - iArr10[1];
                int i30 = i15 - iArr10[2];
                if (i8 == 0) {
                    iArr6[i23] = Math.min(i23 + 8 + 1, i5);
                }
                int i31 = iArr2[i10 + iArr6[i23]];
                iArr10[0] = (i31 & 16711680) >> 16;
                iArr10[1] = (i31 & MotionEventCompat.ACTION_POINTER_INDEX_MASK) >> 8;
                iArr10[2] = i31 & 255;
                int i32 = i16 + iArr10[0];
                int i33 = i17 + iArr10[1];
                int i34 = i18 + iArr10[2];
                i20 = i25 + i32;
                i11 = i26 + i33;
                i12 = i27 + i34;
                i24 = (i24 + 1) % 17;
                int[] iArr11 = iArr8[i24 % 17];
                i13 = i28 + iArr11[0];
                i14 = i29 + iArr11[1];
                i15 = i30 + iArr11[2];
                i16 = i32 - iArr11[0];
                i17 = i33 - iArr11[1];
                i18 = i34 - iArr11[2];
                i9++;
                i23++;
                i3 = 0;
            }
            i10 += width2;
            i8++;
            i3 = 0;
        }
        int i35 = 0;
        while (i35 < width2) {
            int i36 = (-8) * width2;
            Bitmap bitmap2 = bitmapCreateScaledBitmap;
            int[] iArr12 = iArr6;
            int i37 = -8;
            int i38 = 0;
            int i39 = 0;
            int i40 = 0;
            int i41 = 0;
            int i42 = 0;
            int i43 = 0;
            int i44 = 0;
            int i45 = 0;
            int i46 = 0;
            for (int i47 = 8; i37 <= i47; i47 = 8) {
                int iMax = Math.max(0, i36) + i35;
                int[] iArr13 = iArr8[i37 + 8];
                iArr13[0] = iArr3[iMax];
                iArr13[1] = iArr4[iMax];
                iArr13[2] = iArr5[iMax];
                int iAbs2 = 9 - Math.abs(i37);
                i38 += iArr3[iMax] * iAbs2;
                i39 += iArr4[iMax] * iAbs2;
                i40 += iArr5[iMax] * iAbs2;
                if (i37 > 0) {
                    i44 += iArr13[0];
                    i45 += iArr13[1];
                    i46 += iArr13[2];
                } else {
                    i41 += iArr13[0];
                    i42 += iArr13[1];
                    i43 += iArr13[2];
                }
                if (i37 < i6) {
                    i36 += width2;
                }
                i37++;
            }
            int i48 = i35;
            int i49 = 0;
            int i50 = 8;
            while (i49 < height2) {
                iArr2[i48] = (iArr2[i48] & (-16777216)) | (iArr7[i38] << 16) | (iArr7[i39] << 8) | iArr7[i40];
                int i51 = i38 - i41;
                int i52 = i39 - i42;
                int i53 = i40 - i43;
                int[] iArr14 = iArr8[((i50 - 8) + 17) % 17];
                int i54 = i41 - iArr14[0];
                int i55 = i42 - iArr14[1];
                int i56 = i43 - iArr14[2];
                if (i35 == 0) {
                    iArr = iArr7;
                    iArr12[i49] = Math.min(i49 + 9, i6) * width2;
                } else {
                    iArr = iArr7;
                }
                int i57 = iArr12[i49] + i35;
                iArr14[0] = iArr3[i57];
                iArr14[1] = iArr4[i57];
                iArr14[2] = iArr5[i57];
                int i58 = i44 + iArr14[0];
                int i59 = i45 + iArr14[1];
                int i60 = i46 + iArr14[2];
                i38 = i51 + i58;
                i39 = i52 + i59;
                i40 = i53 + i60;
                i50 = (i50 + 1) % 17;
                int[] iArr15 = iArr8[i50];
                i41 = i54 + iArr15[0];
                i42 = i55 + iArr15[1];
                i43 = i56 + iArr15[2];
                i44 = i58 - iArr15[0];
                i45 = i59 - iArr15[1];
                i46 = i60 - iArr15[2];
                i48 += width2;
                i49++;
                iArr7 = iArr;
            }
            i35++;
            bitmapCreateScaledBitmap = bitmap2;
            iArr6 = iArr12;
        }
        Bitmap bitmap3 = bitmapCreateScaledBitmap;
        bitmap3.setPixels(iArr2, 0, width2, 0, 0, width2, height2);
        return bitmap3;
    }

    public static void a(final MBImageView mBImageView, String str) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onSuccessLoad(final Bitmap bitmap, String str2) {
                mBImageView.post(new Runnable() {
                    @Override
                    public final void run() {
                        Bitmap bitmap2;
                        if (mBImageView == null || (bitmap2 = bitmap) == null || bitmap2.isRecycled()) {
                            return;
                        }
                        mBImageView.setImageBitmap(bitmap);
                    }
                });
            }

            @Override
            public final void onFailedLoad(String str2, String str3) {
                mBImageView.post(new Runnable() {
                    @Override
                    public final void run() {
                        mBImageView.setBackgroundColor(Color.parseColor("#e6e6e6"));
                    }
                });
            }
        });
    }

    static class 2 implements com.mbridge.msdk.foundation.same.c.c {
        final MBImageView a;
        final int b;
        final int c;
        final ImageView d;
        final DownloadMessageDialog e;

        2(MBImageView mBImageView, int i, int i2, ImageView imageView, DownloadMessageDialog downloadMessageDialog) {
            this.a = mBImageView;
            this.b = i;
            this.c = i2;
            this.d = imageView;
            this.e = downloadMessageDialog;
        }

        @Override
        public final void onSuccessLoad(final Bitmap bitmap, String str) {
            this.a.post(new Runnable() {
                @Override
                public final void run() {
                    Bitmap bitmap2 = bitmap;
                    if (bitmap2 == null || bitmap2.isRecycled()) {
                        return;
                    }
                    if (bitmap.getWidth() >= bitmap.getHeight()) {
                        if (2.this.b >= 2.this.c) {
                            b.a(bitmap, 2.this.a, 2.this.b, 2.this.d);
                        } else {
                            b.b(bitmap, 2.this.a, 2.this.c, 2.this.d);
                        }
                        2.this.e.registerOrientationListener(new DownloadMessageDialog.a() {
                            @Override
                            public final void a(int i) {
                                if (i == 1) {
                                    b.a(bitmap, 2.this.a, 2.this.b, 2.this.d);
                                } else {
                                    b.b(bitmap, 2.this.a, 2.this.c, 2.this.d);
                                }
                            }
                        });
                        return;
                    }
                    b.c(bitmap, 2.this.a, 2.this.b, 2.this.d);
                }
            });
        }

        @Override
        public final void onFailedLoad(String str, String str2) {
            this.a.post(new Runnable() {
                @Override
                public final void run() {
                    if (2.this.d != null) {
                        2.this.d.setBackgroundColor(Color.parseColor("#e6e6e6"));
                    }
                }
            });
        }
    }

    public static void a(MBImageView mBImageView, ImageView imageView, String str, int i, int i2, DownloadMessageDialog downloadMessageDialog) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new 2(mBImageView, i, i2, imageView, downloadMessageDialog));
    }

    private static void a(ImageView imageView, Bitmap bitmap) {
        if (bitmap != null) {
            try {
                if (bitmap.isRecycled()) {
                    return;
                }
                Bitmap bitmapA = a(bitmap, 5);
                imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
                imageView.setImageBitmap(bitmapA);
            } catch (Throwable th) {
                z.d(a, th.getMessage());
            }
        }
    }

    public static void a(Bitmap bitmap, ImageView imageView, int i, ImageView imageView2) {
        if (bitmap != null) {
            try {
                if (!bitmap.isRecycled()) {
                    imageView.setImageBitmap(bitmap);
                }
            } catch (Throwable th) {
                z.d(a, th.getMessage());
                return;
            }
        }
        imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        int iC = i - com.mbridge.msdk.widget.custom.a.b.a().c("20dp");
        int i2 = (int) (iC * 0.5225f);
        if (imageView2 != null) {
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) imageView2.getLayoutParams();
            layoutParams.width = iC;
            layoutParams.height = i2;
            imageView2.setLayoutParams(layoutParams);
            a(imageView2, bitmap);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
        layoutParams2.width = iC;
        layoutParams2.height = i2;
        layoutParams2.setMargins(com.mbridge.msdk.widget.custom.a.b.a().c("1dp"), com.mbridge.msdk.widget.custom.a.b.a().c("15dp"), com.mbridge.msdk.widget.custom.a.b.a().c("1dp"), com.mbridge.msdk.widget.custom.a.b.a().c("15dp"));
        layoutParams2.addRule(9, -1);
        layoutParams2.addRule(11, -1);
        imageView.setLayoutParams(layoutParams2);
    }

    public static void b(Bitmap bitmap, ImageView imageView, int i, ImageView imageView2) {
        if (bitmap != null) {
            try {
                if (!bitmap.isRecycled()) {
                    imageView.setImageBitmap(bitmap);
                }
            } catch (Throwable th) {
                z.d(a, th.getMessage());
                return;
            }
        }
        imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        int iC = (int) ((((double) i) * 0.5d) - ((double) com.mbridge.msdk.widget.custom.a.b.a().c("20dp")));
        int i2 = (int) (iC * 0.5225f);
        if (imageView2 != null) {
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) imageView2.getLayoutParams();
            layoutParams.width = iC;
            layoutParams.height = i2;
            imageView2.setLayoutParams(layoutParams);
            a(imageView2, bitmap);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
        layoutParams2.width = iC;
        layoutParams2.height = i2;
        layoutParams2.setMargins(com.mbridge.msdk.widget.custom.a.b.a().c("1dp"), com.mbridge.msdk.widget.custom.a.b.a().c("15dp"), com.mbridge.msdk.widget.custom.a.b.a().c("1dp"), com.mbridge.msdk.widget.custom.a.b.a().c("15dp"));
        layoutParams2.addRule(9, -1);
        layoutParams2.addRule(11, -1);
        imageView.setLayoutParams(layoutParams2);
    }

    public static void c(Bitmap bitmap, ImageView imageView, int i, ImageView imageView2) {
        if (bitmap != null) {
            try {
                if (!bitmap.isRecycled()) {
                    imageView.setImageBitmap(bitmap);
                }
            } catch (Throwable th) {
                z.d(a, th.getMessage());
                return;
            }
        }
        imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        int iC = i - com.mbridge.msdk.widget.custom.a.b.a().c("20dp");
        int i2 = (int) (iC * 0.5225f);
        if (imageView2 != null) {
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) imageView2.getLayoutParams();
            layoutParams.width = iC;
            layoutParams.height = i2;
            imageView2.setLayoutParams(layoutParams);
            a(imageView2, bitmap);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
        layoutParams2.height = i2;
        layoutParams2.addRule(10, -1);
        layoutParams2.addRule(12, -1);
        imageView.setLayoutParams(layoutParams2);
    }
}
