package com.bianfeng.ymnsdk.sysfunc.screenshot;

import android.content.Context;
import android.database.ContentObserver;
import android.database.Cursor;
import android.graphics.BitmapFactory;
import android.graphics.Point;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.provider.MediaStore;
import android.text.TextUtils;
import android.view.Display;
import android.view.WindowManager;
import com.bianfeng.ymnsdk.util.Logger;
import com.heytap.mcssdk.constant.a;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ScreenShotLinstenManager {
    private static volatile ScreenShotLinstenManager manager;
    private static Point sScreenRealSize;
    private final Context mContext;
    private MediaContentObserver mExternalObserver;
    private MediaContentObserver mInternalObserver;
    private OnScreenShotListener mListener;
    private long mStartListenTime;
    private static final String[] MEDIA_PROJECTIONS_API_16 = {"_data", "datetaken", "width", "height"};
    private static final String[] KEYWORDS = {"screenshot", "screen_shot", "screen-shot", "screen shot", "screencapture", "screen_capture", "screen-capture", "screen capture", "screencap", "screen_cap", "screen-cap", "screen cap", "截屏", "Screenshots", "截图"};
    private final List<String> sHasCallbackPaths = new ArrayList();
    private final Handler mUiHandler = new Handler(Looper.getMainLooper());

    public interface OnScreenShotListener {
        void onShotSuccess(String str);
    }

    private ScreenShotLinstenManager(Context context) {
        if (context == null) {
            throw new IllegalArgumentException("The context must not be null.");
        }
        this.mContext = context;
        if (sScreenRealSize == null) {
            Point realScreenSize = getRealScreenSize();
            sScreenRealSize = realScreenSize;
            if (realScreenSize != null) {
                Logger.e("Screen Real Size: " + sScreenRealSize.x + " * " + sScreenRealSize.y);
                return;
            }
            Logger.e("Get screen real size failed.");
        }
    }

    public static ScreenShotLinstenManager getInstance(Context context) {
        assertInMainThread();
        if (manager == null) {
            synchronized (ScreenShotLinstenManager.class) {
                if (manager == null) {
                    manager = new ScreenShotLinstenManager(context);
                }
            }
        }
        return manager;
    }

    public void startListen() {
        assertInMainThread();
        Logger.e("Build.VERSION.SDK_INT = " + Build.VERSION.SDK_INT);
        this.sHasCallbackPaths.clear();
        this.mStartListenTime = System.currentTimeMillis();
        this.mInternalObserver = new MediaContentObserver(MediaStore.Images.Media.INTERNAL_CONTENT_URI, this.mUiHandler);
        this.mExternalObserver = new MediaContentObserver(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, this.mUiHandler);
        this.mContext.getContentResolver().registerContentObserver(MediaStore.Images.Media.INTERNAL_CONTENT_URI, Build.VERSION.SDK_INT >= 29, this.mInternalObserver);
        this.mContext.getContentResolver().registerContentObserver(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, Build.VERSION.SDK_INT >= 29, this.mExternalObserver);
    }

    public void stopListen() {
        assertInMainThread();
        if (this.mInternalObserver != null) {
            try {
                this.mContext.getContentResolver().unregisterContentObserver(this.mInternalObserver);
            } catch (Exception e) {
                e.printStackTrace();
            }
            this.mInternalObserver = null;
        }
        if (this.mExternalObserver != null) {
            try {
                this.mContext.getContentResolver().unregisterContentObserver(this.mExternalObserver);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
            this.mExternalObserver = null;
        }
        this.mStartListenTime = 0L;
        this.sHasCallbackPaths.clear();
    }

    private static void assertInMainThread() {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
            throw new IllegalStateException("Call the method must be in main thread: " + (stackTrace.length >= 4 ? stackTrace[3].toString() : null));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleMediaContentChange(Uri uri) {
        Cursor cursorQuery;
        int i;
        int i2;
        try {
            if (uri == null) {
                Logger.e("mContentUri is null");
                return;
            }
            try {
                if (Build.VERSION.SDK_INT >= 30) {
                    cursorQuery = this.mContext.getContentResolver().query(uri, MEDIA_PROJECTIONS_API_16, null, null, "date_added DESC");
                } else {
                    cursorQuery = this.mContext.getContentResolver().query(uri, MEDIA_PROJECTIONS_API_16, null, null, "date_addeddesc limit 1");
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (cursorQuery == null) {
                Logger.e("mCursor为null");
                return;
            }
            if (!cursorQuery.moveToFirst()) {
                Logger.e("查询无数据");
                return;
            }
            int columnIndex = cursorQuery.getColumnIndex("_data");
            int columnIndex2 = cursorQuery.getColumnIndex("datetaken");
            int columnIndex3 = cursorQuery.getColumnIndex("width");
            int columnIndex4 = cursorQuery.getColumnIndex("height");
            String string = cursorQuery.getString(columnIndex);
            long j = cursorQuery.getLong(columnIndex2);
            if (columnIndex3 >= 0 && columnIndex4 >= 0) {
                i = cursorQuery.getInt(columnIndex3);
                i2 = cursorQuery.getInt(columnIndex4);
            } else {
                Point imageSize = getImageSize(string);
                i = imageSize.x;
                i2 = imageSize.y;
            }
            handleMediaRowData(string, j, i, i2);
        } finally {
            Logger.i("查询最后一条数据结束！");
        }
    }

    private void handleMediaRowData(String str, long j, int i, int i2) {
        if (checkScreenShot(str, j, i, i2)) {
            Logger.e("ScreenShot: path = " + str + "; size = " + i + " * " + i2 + "; date = " + j);
            if (this.mListener == null || checkCallback(str)) {
                return;
            }
            this.mListener.onShotSuccess(str);
            return;
        }
        Logger.e("Media content changed, but not screenshot: path = " + str + "; size = " + i + " * " + i2 + "; date = " + j);
    }

    private boolean checkScreenShot(String str, long j, int i, int i2) {
        if (j < this.mStartListenTime || System.currentTimeMillis() - j > a.q) {
            Logger.e("时间超过10秒");
            return false;
        }
        Point point = sScreenRealSize;
        if (point != null && ((i > point.x || i2 > sScreenRealSize.y) && (i2 > sScreenRealSize.x || i > sScreenRealSize.y))) {
            Logger.e("图片尺寸超出屏幕");
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        String lowerCase = str.toLowerCase();
        for (String str2 : KEYWORDS) {
            if (lowerCase.contains(str2)) {
                return true;
            }
        }
        Logger.e("路径中没有包含关键字");
        return false;
    }

    private Point getImageSize(String str) {
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        BitmapFactory.decodeFile(str, options);
        return new Point(options.outWidth, options.outHeight);
    }

    private boolean checkCallback(String str) {
        if (this.sHasCallbackPaths.contains(str)) {
            return true;
        }
        if (this.sHasCallbackPaths.size() >= 20) {
            for (int i = 0; i < 5; i++) {
                this.sHasCallbackPaths.remove(0);
            }
        }
        this.sHasCallbackPaths.add(str);
        return false;
    }

    private Point getRealScreenSize() {
        Point point;
        Exception e;
        try {
            point = new Point();
            try {
                Display defaultDisplay = ((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay();
                if (Build.VERSION.SDK_INT >= 17) {
                    defaultDisplay.getRealSize(point);
                } else {
                    try {
                        point.set(((Integer) Display.class.getMethod("getRawWidth", new Class[0]).invoke(defaultDisplay, new Object[0])).intValue(), ((Integer) Display.class.getMethod("getRawHeight", new Class[0]).invoke(defaultDisplay, new Object[0])).intValue());
                    } catch (Exception e2) {
                        point.set(defaultDisplay.getWidth(), defaultDisplay.getHeight());
                        e2.printStackTrace();
                    }
                }
            } catch (Exception e3) {
                e = e3;
                e.printStackTrace();
            }
        } catch (Exception e4) {
            point = null;
            e = e4;
        }
        return point;
    }

    public void setListener(OnScreenShotListener onScreenShotListener) {
        this.mListener = onScreenShotListener;
    }

    private class MediaContentObserver extends ContentObserver {
        private final Uri mContentUri;

        public MediaContentObserver(Uri uri, Handler handler) {
            super(handler);
            Logger.d("into MediaContentObserver");
            this.mContentUri = uri;
        }

        @Override // android.database.ContentObserver
        public void onChange(boolean z) {
            super.onChange(z);
            Logger.d("ContentObserver onChange");
            ScreenShotLinstenManager.this.handleMediaContentChange(this.mContentUri);
        }
    }
}
