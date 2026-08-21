package com.bianfeng.ymnsdk.sysfunc;

public class ImgDownload {
    private static android.content.Context context = null;
    private static java.lang.String filePath = null;
    private static android.graphics.Bitmap mBitmap = null;
    private static java.lang.String mFileName = "bianfeng";
    private static java.lang.Runnable saveFileRunnable;
    private static com.bianfeng.ymnsdk.sysfunc.SysfuncInterface sysfuncInterface;


    static {
            com.bianfeng.ymnsdk.sysfunc.ImgDownload$1 r0 = new com.bianfeng.ymnsdk.sysfunc.ImgDownload$1
            r0.<init>()
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.saveFileRunnable = r0
            return
    }

    public ImgDownload() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.filePath
            return r0
    }

    static android.graphics.Bitmap access$100() {
            android.graphics.Bitmap r0 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.mBitmap
            return r0
    }

    static android.graphics.Bitmap access$102(android.graphics.Bitmap r0) {
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.mBitmap = r0
            return r0
    }

    static com.bianfeng.ymnsdk.sysfunc.SysfuncInterface access$200() {
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r0 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.sysfuncInterface
            return r0
    }

    public static void donwloadImg(android.content.Context r0, java.lang.String r1, com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r2) {
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.context = r0
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.filePath = r1
            com.bianfeng.ymnsdk.sysfunc.ImgDownload.sysfuncInterface = r2
            java.lang.Thread r0 = new java.lang.Thread
            java.lang.Runnable r1 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.saveFileRunnable
            r0.<init>(r1)
            r0.start()
            return
    }

    public static void saveFile(android.graphics.Bitmap r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.mFileName
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CACHE_IMG=="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 != 0) goto L3c
            r1.mkdir()
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r2 = java.lang.System.currentTimeMillis()
            r0.append(r2)
            java.lang.String r2 = ".jpg"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = "==测试"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r1)
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L8f
            r1.<init>(r2)     // Catch: java.lang.Exception -> L8f
            android.graphics.Bitmap$CompressFormat r3 = android.graphics.Bitmap.CompressFormat.JPEG     // Catch: java.lang.Exception -> L8f
            r4 = 80
            r5.compress(r3, r4, r1)     // Catch: java.lang.Exception -> L8f
            r1.flush()     // Catch: java.lang.Exception -> L8f
            r1.close()     // Catch: java.lang.Exception -> L8f
            goto L93
        L8f:
            r5 = move-exception
            r5.printStackTrace()
        L93:
            android.content.Context r5 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.context     // Catch: java.io.FileNotFoundException -> La2
            android.content.ContentResolver r5 = r5.getContentResolver()     // Catch: java.io.FileNotFoundException -> La2
            java.lang.String r1 = r2.getAbsolutePath()     // Catch: java.io.FileNotFoundException -> La2
            r3 = 0
            android.provider.MediaStore.Images.Media.insertImage(r5, r1, r0, r3)     // Catch: java.io.FileNotFoundException -> La2
            goto Laf
        La2:
            r5 = move-exception
            r5.printStackTrace()
            com.bianfeng.ymnsdk.sysfunc.SysfuncInterface r5 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.sysfuncInterface
            r0 = 1113(0x459, float:1.56E-42)
            java.lang.String r1 = "图片保存失败"
            r5.sendResult(r0, r1)
        Laf:
            java.io.File r5 = new java.io.File
            java.lang.String r0 = r2.getPath()
            r5.<init>(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 24
            if (r0 < r1) goto Lfc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.context
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".fileprovider"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            android.content.Context r0 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.context
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r3 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.context
            android.content.Context r3 = r3.getApplicationContext()
            java.lang.String r3 = r3.getPackageName()
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.net.Uri r5 = android.support.v4.content.FileProvider.getUriForFile(r0, r1, r5)
            goto L100
        Lfc:
            android.net.Uri r5 = android.net.Uri.fromFile(r5)
        L100:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "photoUri=="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            android.content.Context r0 = com.bianfeng.ymnsdk.sysfunc.ImgDownload.context
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.MEDIA_SCANNER_SCAN_FILE"
            r1.<init>(r2, r5)
            r0.sendBroadcast(r1)
            return
    }
}
