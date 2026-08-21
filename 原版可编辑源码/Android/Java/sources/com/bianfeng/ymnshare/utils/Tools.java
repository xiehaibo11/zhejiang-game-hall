package com.bianfeng.ymnshare.utils;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.URL;

public class Tools {
    public static String IMAGE_NAME = "iv_share_";
    public static int i;

    public static final File saveImageToSdCard(Context context, String str) {
        File fileCreateStableImageFile;
        boolean z;
        try {
            fileCreateStableImageFile = createStableImageFile(context);
        } catch (Exception e) {
            e = e;
            fileCreateStableImageFile = null;
        }
        try {
            Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(((HttpURLConnection) new URL(str).openConnection()).getInputStream());
            FileOutputStream fileOutputStream = new FileOutputStream(fileCreateStableImageFile);
            bitmapDecodeStream.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
            z = true;
        } catch (Exception e2) {
            e = e2;
            e.printStackTrace();
            z = false;
        }
        if (z) {
            return fileCreateStableImageFile;
        }
        return null;
    }

    public static File createStableImageFile(Context context) throws IOException {
        i++;
        return new File(context.getExternalCacheDir(), IMAGE_NAME + i + ".jpg");
    }

    public static void setUriCache(Uri uri) {
        try {
            Method declaredMethod = Class.forName("com.bianfeng.ymnsdk.ymnlink.YmnLinkCache").getDeclaredMethod("setLaunchData", Uri.class);
            declaredMethod.setAccessible(true);
            declaredMethod.invoke(null, uri);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
