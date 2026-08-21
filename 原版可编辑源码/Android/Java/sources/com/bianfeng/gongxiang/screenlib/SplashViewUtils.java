package com.bianfeng.gongxiang.screenlib;

import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.WindowManager;
import android.widget.ImageView;

class SplashViewUtils {
    private static SplashViewUtils viewUtils;
    private Bitmap bitmap;
    private int height;
    private ImageView ret_img;
    private int width;

    private SplashViewUtils() {
    }

    public static SplashViewUtils getInstance() {
        if (viewUtils == null) {
            synchronized (SplashViewUtils.class) {
                if (viewUtils == null) {
                    viewUtils = new SplashViewUtils();
                }
            }
        }
        return viewUtils;
    }

    public void showSplashView(Activity activity, String str) {
        try {
            this.ret_img = new ImageView(activity);
            getScreenSize(activity);
            Bitmap bitmap = getBitmap(activity, str);
            this.bitmap = bitmap;
            this.ret_img.setImageBitmap(bitmap);
            this.ret_img.setScaleType(ImageView.ScaleType.FIT_XY);
            activity.addContentView(this.ret_img, new WindowManager.LayoutParams(-1, -1));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private Bitmap getBitmap(Activity activity, String str) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        options.inSampleSize = calculateInSampleSize(options, BitmapFactory.decodeResource(activity.getResources(), getId(activity, str), options));
        options.inJustDecodeBounds = false;
        return BitmapFactory.decodeResource(activity.getResources(), getId(activity, str), options);
    }

    private int calculateInSampleSize(BitmapFactory.Options options, Bitmap bitmap) {
        int i = options.outWidth;
        int i2 = options.outHeight;
        Log.i("ymnsdk111", "height111111111==" + i2 + "width==" + i);
        int i3 = 1;
        if (i2 > this.height || i > this.width) {
            int i4 = i2 / 2;
            int i5 = i / 2;
            while (i5 / i3 >= this.height && i4 / i3 >= this.width) {
                i3 *= 2;
            }
        }
        return i3;
    }

    private void getScreenSize(Activity activity) {
        DisplayMetrics displayMetrics = new DisplayMetrics();
        activity.getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
        this.width = displayMetrics.widthPixels;
        this.height = displayMetrics.heightPixels;
    }

    public void removeView(Activity activity) {
        try {
            activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (SplashViewUtils.this.ret_img != null) {
                        SplashViewUtils.this.ret_img.setVisibility(8);
                    }
                    if (SplashViewUtils.this.bitmap != null && !SplashViewUtils.this.bitmap.isRecycled()) {
                        SplashViewUtils.this.bitmap.recycle();
                        SplashViewUtils.this.bitmap = null;
                    }
                    System.gc();
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private int getId(Context context, String str) {
        String[] strArrSplit = str.split("\\.");
        return getId(context, strArrSplit[2], strArrSplit[1]);
    }

    private int getId(Context context, String str, String str2) {
        try {
            return context.getResources().getIdentifier(str, str2, context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }
}
