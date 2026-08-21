package com.bianfeng.ymnshare.utils;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.text.TextUtils;
import java.io.ByteArrayOutputStream;
import java.io.FileOutputStream;
import java.util.List;

public class ShareUtils {
    private static final int KB = 1024;
    private static ShareUtils utils;

    private ShareUtils() {
    }

    public static ShareUtils getInstance() {
        if (utils == null) {
            utils = new ShareUtils();
        }
        return utils;
    }

    public static boolean isAPPInstalled(Context context, String str) {
        try {
            List<PackageInfo> installedPackages = context.getPackageManager().getInstalledPackages(0);
            if (installedPackages != null) {
                for (int i = 0; i < installedPackages.size(); i++) {
                    if (installedPackages.get(i).packageName.equals(str)) {
                        return true;
                    }
                }
            }
            return false;
        } catch (Exception unused) {
            return true;
        }
    }

    public byte[] bmpToByteArray(Bitmap bitmap, boolean z) {
        int height;
        int height2;
        if (bitmap == null) {
            return new byte[0];
        }
        if (bitmap.getHeight() > bitmap.getWidth()) {
            height = bitmap.getWidth();
            height2 = bitmap.getWidth();
        } else {
            height = bitmap.getHeight();
            height2 = bitmap.getHeight();
        }
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(height, height2, Bitmap.Config.RGB_565);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        while (true) {
            canvas.drawBitmap(bitmap, new Rect(0, 0, height, height2), new Rect(0, 0, height, height2), (Paint) null);
            if (z) {
                bitmap.recycle();
            }
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            bitmapCreateBitmap.compress(Bitmap.CompressFormat.JPEG, 100, byteArrayOutputStream);
            bitmapCreateBitmap.recycle();
            byte[] byteArray = byteArrayOutputStream.toByteArray();
            try {
                byteArrayOutputStream.close();
                return byteArray;
            } catch (Exception unused) {
                height = bitmap.getHeight();
                height2 = bitmap.getHeight();
            }
        }
    }

    public static byte[] bmpToByteArray(Bitmap bitmap, int i) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        int i2 = i * 1024;
        try {
            bitmap.compress(Bitmap.CompressFormat.PNG, 100, byteArrayOutputStream);
            for (int i3 = 100; byteArrayOutputStream.toByteArray().length > i2 && i3 != 10; i3 -= 10) {
                byteArrayOutputStream.reset();
                bitmap.compress(Bitmap.CompressFormat.JPEG, i3, byteArrayOutputStream);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return byteArrayOutputStream.toByteArray();
    }

    public String buildTransaction(String str) {
        if (str == null) {
            return String.valueOf(System.currentTimeMillis());
        }
        return str + System.currentTimeMillis();
    }

    public void compressBitmapToFile(String str, Double d) {
        Bitmap bitmapDecodeFile;
        try {
            if (TextUtils.isEmpty(str) || (bitmapDecodeFile = BitmapFactory.decodeFile(str)) == null) {
                return;
            }
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap((int) (((double) bitmapDecodeFile.getWidth()) * d.doubleValue()), (int) (((double) bitmapDecodeFile.getHeight()) * d.doubleValue()), Bitmap.Config.ARGB_8888);
            new Canvas(bitmapCreateBitmap).drawBitmap(bitmapDecodeFile, (Rect) null, new Rect(0, 0, (int) (((double) bitmapDecodeFile.getWidth()) * d.doubleValue()), (int) (((double) bitmapDecodeFile.getHeight()) * d.doubleValue())), (Paint) null);
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            bitmapCreateBitmap.compress(Bitmap.CompressFormat.JPEG, (int) (100.0d - (d.doubleValue() * 100.0d)), byteArrayOutputStream);
            FileOutputStream fileOutputStream = new FileOutputStream(str);
            fileOutputStream.write(byteArrayOutputStream.toByteArray());
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void compressBitmapToFile(String str, int i, int i2) {
        Bitmap bitmapDecodeFile;
        try {
            if (TextUtils.isEmpty(str) || (bitmapDecodeFile = BitmapFactory.decodeFile(str)) == null) {
                return;
            }
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(i, i2, Bitmap.Config.ARGB_8888);
            new Canvas(bitmapCreateBitmap).drawBitmap(bitmapDecodeFile, (Rect) null, new Rect(0, 0, i, i2), (Paint) null);
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            bitmapCreateBitmap.compress(Bitmap.CompressFormat.JPEG, 70, byteArrayOutputStream);
            FileOutputStream fileOutputStream = new FileOutputStream(str);
            fileOutputStream.write(byteArrayOutputStream.toByteArray());
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
