package com.bianfeng.ymnsdk.sysfunc;

import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.MediaStore;
import android.support.v4.content.FileProvider;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.Logger;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.net.URL;

/* JADX INFO: loaded from: classes.dex */
public class ImgDownload {
    private static Context context = null;
    private static String filePath = null;
    private static Bitmap mBitmap = null;
    private static String mFileName = "bianfeng";
    private static Runnable saveFileRunnable = new Runnable() { // from class: com.bianfeng.ymnsdk.sysfunc.ImgDownload.1
        @Override // java.lang.Runnable
        public void run() {
            try {
                if (!TextUtils.isEmpty(ImgDownload.filePath)) {
                    InputStream inputStreamOpenStream = new URL(ImgDownload.filePath).openStream();
                    Bitmap unused = ImgDownload.mBitmap = BitmapFactory.decodeStream(inputStreamOpenStream);
                    inputStreamOpenStream.close();
                }
                ImgDownload.saveFile(ImgDownload.mBitmap);
                ImgDownload.sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_DOWNLOAD_IMG_SUCCESS, "图片保存成功");
            } catch (Exception e) {
                e.printStackTrace();
                ImgDownload.sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_DOWNLOAD_IMG_FAIL, "图片下载失败==" + e.getMessage());
            }
        }
    };
    private static SysfuncInterface sysfuncInterface;

    public static void donwloadImg(Context context2, String str, SysfuncInterface sysfuncInterface2) {
        context = context2;
        filePath = str;
        sysfuncInterface = sysfuncInterface2;
        new Thread(saveFileRunnable).start();
    }

    public static void saveFile(Bitmap bitmap) {
        Uri uriFromFile;
        String str = Environment.getExternalStorageDirectory() + File.separator + mFileName;
        Logger.e("CACHE_IMG==" + str);
        File file = new File(str);
        if (!file.exists()) {
            file.mkdir();
        }
        String str2 = System.currentTimeMillis() + ".jpg";
        Logger.e(str2 + "==测试");
        File file2 = new File(file, str2);
        Logger.e(file2 + "==测试");
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file2);
            bitmap.compress(Bitmap.CompressFormat.JPEG, 80, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            MediaStore.Images.Media.insertImage(context.getContentResolver(), file2.getAbsolutePath(), str2, (String) null);
        } catch (FileNotFoundException e2) {
            e2.printStackTrace();
            sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_DOWNLOAD_IMG_FAIL, "图片保存失败");
        }
        File file3 = new File(file2.getPath());
        if (Build.VERSION.SDK_INT >= 24) {
            Logger.e(context.getPackageName() + ".fileprovider");
            uriFromFile = FileProvider.getUriForFile(context.getApplicationContext(), context.getApplicationContext().getPackageName() + ".fileprovider", file3);
        } else {
            uriFromFile = Uri.fromFile(file3);
        }
        Logger.e("photoUri==" + uriFromFile);
        context.sendBroadcast(new Intent("android.intent.action.MEDIA_SCANNER_SCAN_FILE", uriFromFile));
    }
}
