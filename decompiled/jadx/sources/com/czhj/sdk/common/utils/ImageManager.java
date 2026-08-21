package com.czhj.sdk.common.utils;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Environment;
import android.os.Handler;
import android.text.TextUtils;
import android.util.LruCache;
import android.widget.ImageView;
import com.czhj.sdk.logger.SigmobLog;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes.dex */
public class ImageManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ImageManager f1802a;
    private Context b;
    private final String c = "SigImageCache";
    private ExecutorService d = Executors.newFixedThreadPool(4);
    private LruCache<String, Bitmap> e = new LruCache<>(4194304);
    private Handler f = new Handler();
    private File g;
    private ImageView h;

    public interface BitmapLoadedListener {
        void onBitmapLoadFailed();

        void onBitmapLoaded(Bitmap bitmap);
    }

    public class RequestCreatorRunnable implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f1806a;
        int b;
        int c;
        ImageView d;

        public RequestCreatorRunnable(String str) {
            this.f1806a = str;
        }

        private Bitmap a() {
            String str = this.f1806a;
            File file = new File(ImageManager.this.a(), Md5Util.md5(str.substring(str.lastIndexOf("/") + 1)));
            if (!file.exists() || file.length() <= 0) {
                return null;
            }
            return BitmapFactory.decodeFile(file.getAbsolutePath());
        }

        private void b() {
            ImageManager.this.f.post(new Runnable() { // from class: com.czhj.sdk.common.utils.ImageManager.RequestCreatorRunnable.2
                @Override // java.lang.Runnable
                public void run() {
                    if (RequestCreatorRunnable.this.c == 0 || RequestCreatorRunnable.this.d == null) {
                        return;
                    }
                    RequestCreatorRunnable.this.d.setImageResource(RequestCreatorRunnable.this.c);
                }
            });
        }

        public RequestCreatorRunnable error(int i) {
            this.c = i;
            return this;
        }

        public void into(ImageView imageView) {
            this.d = imageView;
            int i = this.b;
            if (i != 0 && imageView != null) {
                imageView.setImageResource(i);
            }
            if (TextUtils.isEmpty(this.f1806a)) {
                return;
            }
            Bitmap bitmap = (Bitmap) ImageManager.this.e.get(this.f1806a);
            if (bitmap != null) {
                imageView.setImageBitmap(bitmap);
                return;
            }
            Bitmap bitmapA = a();
            if (bitmapA == null) {
                ImageManager.this.d.submit(this);
            } else {
                imageView.setImageBitmap(bitmapA);
                ImageManager.this.e.put(this.f1806a, bitmapA);
            }
        }

        public RequestCreatorRunnable placeholder(int i) {
            this.b = i;
            return this;
        }

        @Override // java.lang.Runnable
        public void run() {
            try {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.f1806a).openConnection();
                httpURLConnection.setRequestMethod("GET");
                httpURLConnection.setConnectTimeout(2000);
                if (httpURLConnection.getResponseCode() == 200) {
                    final Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(httpURLConnection.getInputStream());
                    ImageManager.this.f.post(new Runnable() { // from class: com.czhj.sdk.common.utils.ImageManager.RequestCreatorRunnable.1
                        @Override // java.lang.Runnable
                        public void run() {
                            RequestCreatorRunnable.this.d.setImageBitmap(bitmapDecodeStream);
                        }
                    });
                    ImageManager.this.e.put(this.f1806a, bitmapDecodeStream);
                    bitmapDecodeStream.compress(Bitmap.CompressFormat.PNG, 100, new FileOutputStream(new File(ImageManager.this.a(), Md5Util.md5(this.f1806a.substring(this.f1806a.lastIndexOf("/") + 1)))));
                } else {
                    b();
                }
            } catch (FileNotFoundException unused) {
            } catch (Exception e) {
                e.printStackTrace();
                b();
            }
        }
    }

    public ImageManager(Context context) {
        this.b = context.getApplicationContext();
    }

    private static ImageManager a(Context context) {
        if (f1802a == null) {
            synchronized (ImageManager.class) {
                if (f1802a == null) {
                    f1802a = new ImageManager(context);
                }
            }
        }
        return f1802a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public File a() {
        File file = this.g;
        return (file != null && file.isDirectory() && this.g.exists()) ? this.g : Environment.getExternalStorageState().equals("mounted") ? new File(this.b.getExternalCacheDir(), "SigImageCache") : new File(this.b.getCacheDir(), "SigImageCache");
    }

    public static ImageManager with(Context context) {
        return a(context);
    }

    public void clearCache() {
        String str;
        try {
            File[] fileArrClearCacheFileByCount = FileUtil.clearCacheFileByCount(FileUtil.orderByDate(a().getAbsolutePath()), 100);
            if (fileArrClearCacheFileByCount == null) {
                str = "native ad file list is null";
            } else {
                str = "native ad file remain num: " + fileArrClearCacheFileByCount.length;
            }
            SigmobLog.i(str);
        } catch (Throwable th) {
            SigmobLog.e("clean native ad file error", th);
        }
    }

    public ImageManager customCachePath(File file) {
        this.g = file;
        return this;
    }

    public void getBitmap(final String str, final BitmapLoadedListener bitmapLoadedListener) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        Bitmap bitmap = this.e.get(str);
        Bitmap bitmapDecodeFile = null;
        if (bitmap != null) {
            bitmapLoadedListener.onBitmapLoaded(bitmap);
            return;
        }
        File file = new File(a(), Md5Util.md5(str.substring(str.lastIndexOf("/") + 1)));
        if (file.exists() && file.length() > 0) {
            bitmapDecodeFile = BitmapFactory.decodeFile(file.getAbsolutePath());
        }
        if (bitmapDecodeFile == null) {
            this.d.submit(new Runnable() { // from class: com.czhj.sdk.common.utils.ImageManager.1
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                        httpURLConnection.setRequestMethod("GET");
                        httpURLConnection.setConnectTimeout(2000);
                        if (httpURLConnection.getResponseCode() == 200) {
                            final Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(httpURLConnection.getInputStream());
                            httpURLConnection.disconnect();
                            ImageManager.this.f.post(new Runnable() { // from class: com.czhj.sdk.common.utils.ImageManager.1.1
                                @Override // java.lang.Runnable
                                public void run() {
                                    bitmapLoadedListener.onBitmapLoaded(bitmapDecodeStream);
                                }
                            });
                            ImageManager.this.e.put(str, bitmapDecodeStream);
                            bitmapDecodeStream.compress(Bitmap.CompressFormat.PNG, 100, new FileOutputStream(new File(ImageManager.this.a(), Md5Util.md5(str.substring(str.lastIndexOf("/") + 1)))));
                        }
                    } catch (Exception unused) {
                        ImageManager.this.f.post(new Runnable() { // from class: com.czhj.sdk.common.utils.ImageManager.1.2
                            @Override // java.lang.Runnable
                            public void run() {
                                bitmapLoadedListener.onBitmapLoadFailed();
                            }
                        });
                    }
                }
            });
        } else {
            this.e.put(str, bitmapDecodeFile);
            bitmapLoadedListener.onBitmapLoaded(bitmapDecodeFile);
        }
    }

    public RequestCreatorRunnable load(String str) {
        return new RequestCreatorRunnable(str);
    }
}
