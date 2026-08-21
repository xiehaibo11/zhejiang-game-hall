package com.bianfeng.ymnsdk.sysfunc.screenshot;

public class ScreenShotLinstenManager {
    private static final java.lang.String[] KEYWORDS = null;
    private static final java.lang.String[] MEDIA_PROJECTIONS_API_16 = null;
    private static volatile com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager manager;
    private static android.graphics.Point sScreenRealSize;
    private final android.content.Context mContext;
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.MediaContentObserver mExternalObserver;
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.MediaContentObserver mInternalObserver;
    private com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.OnScreenShotListener mListener;
    private long mStartListenTime;
    private final android.os.Handler mUiHandler;
    private final java.util.List<java.lang.String> sHasCallbackPaths;

    private class MediaContentObserver extends android.database.ContentObserver {
        private final android.net.Uri mContentUri;
        final com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager this$0;

        public MediaContentObserver(com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r1, android.net.Uri r2, android.os.Handler r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r3)
                java.lang.String r1 = "into MediaContentObserver"
                com.bianfeng.ymnsdk.util.Logger.d(r1)
                r0.mContentUri = r2
                return
        }

        @Override
        public void onChange(boolean r2) {
                r1 = this;
                super.onChange(r2)
                java.lang.String r2 = "ContentObserver onChange"
                com.bianfeng.ymnsdk.util.Logger.d(r2)
                com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r2 = r1.this$0
                android.net.Uri r0 = r1.mContentUri
                com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.access$000(r2, r0)
                return
        }
    }

    public interface OnScreenShotListener {
        void onShotSuccess(java.lang.String r1);
    }

    static {
            java.lang.String r0 = "_data"
            java.lang.String r1 = "datetaken"
            java.lang.String r2 = "width"
            java.lang.String r3 = "height"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.MEDIA_PROJECTIONS_API_16 = r0
            java.lang.String r1 = "screenshot"
            java.lang.String r2 = "screen_shot"
            java.lang.String r3 = "screen-shot"
            java.lang.String r4 = "screen shot"
            java.lang.String r5 = "screencapture"
            java.lang.String r6 = "screen_capture"
            java.lang.String r7 = "screen-capture"
            java.lang.String r8 = "screen capture"
            java.lang.String r9 = "screencap"
            java.lang.String r10 = "screen_cap"
            java.lang.String r11 = "screen-cap"
            java.lang.String r12 = "screen cap"
            java.lang.String r13 = "截屏"
            java.lang.String r14 = "Screenshots"
            java.lang.String r15 = "截图"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15}
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.KEYWORDS = r0
            return
    }

    private ScreenShotLinstenManager(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.sHasCallbackPaths = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mUiHandler = r0
            if (r3 == 0) goto L50
            r2.mContext = r3
            android.graphics.Point r3 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            if (r3 != 0) goto L4f
            android.graphics.Point r3 = r2.getRealScreenSize()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize = r3
            if (r3 == 0) goto L4a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "Screen Real Size: "
            r3.append(r0)
            android.graphics.Point r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            int r0 = r0.x
            r3.append(r0)
            java.lang.String r0 = " * "
            r3.append(r0)
            android.graphics.Point r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            int r0 = r0.y
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r3)
            goto L4f
        L4a:
            java.lang.String r3 = "Get screen real size failed."
            com.bianfeng.ymnsdk.util.Logger.e(r3)
        L4f:
            return
        L50:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "The context must not be null."
            r3.<init>(r0)
            throw r3
    }

    static void access$000(com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r0, android.net.Uri r1) {
            r0.handleMediaContentChange(r1)
            return
    }

    private static void assertInMainThread() {
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L35
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StackTraceElement[] r0 = r0.getStackTrace()
            r1 = 0
            int r2 = r0.length
            r3 = 4
            if (r2 < r3) goto L1e
            r1 = 3
            r0 = r0[r1]
            java.lang.String r1 = r0.toString()
        L1e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Call the method must be in main thread: "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L35:
            return
    }

    private boolean checkCallback(java.lang.String r4) {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.sHasCallbackPaths
            boolean r0 = r0.contains(r4)
            if (r0 == 0) goto La
            r4 = 1
            return r4
        La:
            java.util.List<java.lang.String> r0 = r3.sHasCallbackPaths
            int r0 = r0.size()
            r1 = 20
            r2 = 0
            if (r0 < r1) goto L21
            r0 = 0
        L16:
            r1 = 5
            if (r0 >= r1) goto L21
            java.util.List<java.lang.String> r1 = r3.sHasCallbackPaths
            r1.remove(r2)
            int r0 = r0 + 1
            goto L16
        L21:
            java.util.List<java.lang.String> r0 = r3.sHasCallbackPaths
            r0.add(r4)
            return r2
    }

    private boolean checkScreenShot(java.lang.String r5, long r6, int r8, int r9) {
            r4 = this;
            long r0 = r4.mStartListenTime
            r2 = 0
            int r3 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r3 < 0) goto L57
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r6
            r6 = 10000(0x2710, double:4.9407E-320)
            int r3 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r3 <= 0) goto L13
            goto L57
        L13:
            android.graphics.Point r6 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            if (r6 == 0) goto L33
            int r6 = r6.x
            if (r8 > r6) goto L21
            android.graphics.Point r6 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            int r6 = r6.y
            if (r9 <= r6) goto L33
        L21:
            android.graphics.Point r6 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            int r6 = r6.x
            if (r9 > r6) goto L2d
            android.graphics.Point r6 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.sScreenRealSize
            int r6 = r6.y
            if (r8 <= r6) goto L33
        L2d:
            java.lang.String r5 = "图片尺寸超出屏幕"
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            return r2
        L33:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L3a
            return r2
        L3a:
            java.lang.String r5 = r5.toLowerCase()
            java.lang.String[] r6 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.KEYWORDS
            int r7 = r6.length
            r8 = 0
        L42:
            if (r8 >= r7) goto L51
            r9 = r6[r8]
            boolean r9 = r5.contains(r9)
            if (r9 == 0) goto L4e
            r5 = 1
            return r5
        L4e:
            int r8 = r8 + 1
            goto L42
        L51:
            java.lang.String r5 = "路径中没有包含关键字"
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            return r2
        L57:
            java.lang.String r5 = "时间超过10秒"
            com.bianfeng.ymnsdk.util.Logger.e(r5)
            return r2
    }

    private android.graphics.Point getImageSize(java.lang.String r3) {
            r2 = this;
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            android.graphics.BitmapFactory.decodeFile(r3, r0)
            android.graphics.Point r3 = new android.graphics.Point
            int r1 = r0.outWidth
            int r0 = r0.outHeight
            r3.<init>(r1, r0)
            return r3
    }

    public static com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager getInstance(android.content.Context r2) {
            assertInMainThread()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.manager
            if (r0 != 0) goto L1a
            java.lang.Class<com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager> r0 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r1 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.manager     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r1 = new com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager     // Catch: java.lang.Throwable -> L17
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L17
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.manager = r1     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            goto L1a
        L17:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L17
            throw r2
        L1a:
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager r2 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.manager
            return r2
    }

    private android.graphics.Point getRealScreenSize() {
            r8 = this;
            r0 = 0
            android.graphics.Point r1 = new android.graphics.Point     // Catch: java.lang.Exception -> L61
            r1.<init>()     // Catch: java.lang.Exception -> L61
            android.content.Context r0 = r8.mContext     // Catch: java.lang.Exception -> L5f
            java.lang.String r2 = "window"
            java.lang.Object r0 = r0.getSystemService(r2)     // Catch: java.lang.Exception -> L5f
            android.view.WindowManager r0 = (android.view.WindowManager) r0     // Catch: java.lang.Exception -> L5f
            android.view.Display r0 = r0.getDefaultDisplay()     // Catch: java.lang.Exception -> L5f
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L5f
            r3 = 17
            if (r2 < r3) goto L1e
            r0.getRealSize(r1)     // Catch: java.lang.Exception -> L5f
            goto L68
        L1e:
            java.lang.Class<android.view.Display> r2 = android.view.Display.class
            java.lang.String r3 = "getRawWidth"
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L4f
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Exception -> L4f
            java.lang.Class<android.view.Display> r3 = android.view.Display.class
            java.lang.String r5 = "getRawHeight"
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L4f
            java.lang.reflect.Method r3 = r3.getMethod(r5, r6)     // Catch: java.lang.Exception -> L4f
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L4f
            java.lang.Object r2 = r2.invoke(r0, r5)     // Catch: java.lang.Exception -> L4f
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L4f
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L4f
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L4f
            java.lang.Object r3 = r3.invoke(r0, r4)     // Catch: java.lang.Exception -> L4f
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L4f
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L4f
            r1.set(r2, r3)     // Catch: java.lang.Exception -> L4f
            goto L68
        L4f:
            r2 = move-exception
            int r3 = r0.getWidth()     // Catch: java.lang.Exception -> L5f
            int r0 = r0.getHeight()     // Catch: java.lang.Exception -> L5f
            r1.set(r3, r0)     // Catch: java.lang.Exception -> L5f
            r2.printStackTrace()     // Catch: java.lang.Exception -> L5f
            goto L68
        L5f:
            r0 = move-exception
            goto L65
        L61:
            r1 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
        L65:
            r0.printStackTrace()
        L68:
            return r1
    }

    private void handleMediaContentChange(android.net.Uri r12) {
            r11 = this;
            java.lang.String r0 = "查询最后一条数据结束！"
            if (r12 != 0) goto La
            java.lang.String r12 = "mContentUri is null"
            com.bianfeng.ymnsdk.util.Logger.e(r12)
            return
        La:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r2 = 30
            if (r1 < r2) goto L22
            android.content.Context r1 = r11.mContext     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            android.content.ContentResolver r2 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String[] r4 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.MEDIA_PROJECTIONS_API_16     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r5 = 0
            r6 = 0
            java.lang.String r7 = "date_added DESC"
            r3 = r12
            android.database.Cursor r12 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            goto L33
        L22:
            android.content.Context r1 = r11.mContext     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            android.content.ContentResolver r2 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String[] r4 = com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.MEDIA_PROJECTIONS_API_16     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            r5 = 0
            r6 = 0
            java.lang.String r7 = "date_addeddesc limit 1"
            r3 = r12
            android.database.Cursor r12 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
        L33:
            if (r12 != 0) goto L3e
            java.lang.String r12 = "mCursor为null"
            com.bianfeng.ymnsdk.util.Logger.e(r12)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            return
        L3e:
            boolean r1 = r12.moveToFirst()     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            if (r1 != 0) goto L4d
            java.lang.String r12 = "查询无数据"
            com.bianfeng.ymnsdk.util.Logger.e(r12)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            return
        L4d:
            java.lang.String r1 = "_data"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r2 = "datetaken"
            int r2 = r12.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r3 = "width"
            int r3 = r12.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r4 = "height"
            int r4 = r12.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            java.lang.String r6 = r12.getString(r1)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            long r7 = r12.getLong(r2)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            if (r3 < 0) goto L7a
            if (r4 < 0) goto L7a
            int r1 = r12.getInt(r3)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            int r12 = r12.getInt(r4)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            goto L82
        L7a:
            android.graphics.Point r12 = r11.getImageSize(r6)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            int r1 = r12.x     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            int r12 = r12.y     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
        L82:
            r10 = r12
            r9 = r1
            r5 = r11
            r5.handleMediaRowData(r6, r7, r9, r10)     // Catch: java.lang.Throwable -> L89 java.lang.Exception -> L8b
            goto L8f
        L89:
            r12 = move-exception
            goto L93
        L8b:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Throwable -> L89
        L8f:
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            return
        L93:
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            throw r12
    }

    private void handleMediaRowData(java.lang.String r6, long r7, int r9, int r10) {
            r5 = this;
            boolean r0 = r5.checkScreenShot(r6, r7, r9, r10)
            java.lang.String r1 = "; date = "
            java.lang.String r2 = " * "
            java.lang.String r3 = "; size = "
            if (r0 == 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "ScreenShot: path = "
            r0.append(r4)
            r0.append(r6)
            r0.append(r3)
            r0.append(r9)
            r0.append(r2)
            r0.append(r10)
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r7)
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$OnScreenShotListener r7 = r5.mListener
            if (r7 == 0) goto L68
            boolean r7 = r5.checkCallback(r6)
            if (r7 != 0) goto L68
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$OnScreenShotListener r7 = r5.mListener
            r7.onShotSuccess(r6)
            goto L68
        L42:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "Media content changed, but not screenshot: path = "
            r0.append(r4)
            r0.append(r6)
            r0.append(r3)
            r0.append(r9)
            r0.append(r2)
            r0.append(r10)
            r0.append(r1)
            r0.append(r7)
            java.lang.String r6 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r6)
        L68:
            return
    }

    public void setListener(com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager.OnScreenShotListener r1) {
            r0 = this;
            r0.mListener = r1
            return
    }

    public void startListen() {
            r7 = this;
            assertInMainThread()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Build.VERSION.SDK_INT = "
            r0.append(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.e(r0)
            java.util.List<java.lang.String> r0 = r7.sHasCallbackPaths
            r0.clear()
            long r0 = java.lang.System.currentTimeMillis()
            r7.mStartListenTime = r0
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r0 = new com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver
            android.net.Uri r1 = android.provider.MediaStore.Images.Media.INTERNAL_CONTENT_URI
            android.os.Handler r2 = r7.mUiHandler
            r0.<init>(r7, r1, r2)
            r7.mInternalObserver = r0
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r0 = new com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver
            android.net.Uri r1 = android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI
            android.os.Handler r2 = r7.mUiHandler
            r0.<init>(r7, r1, r2)
            r7.mExternalObserver = r0
            android.content.Context r0 = r7.mContext
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r1 = android.provider.MediaStore.Images.Media.INTERNAL_CONTENT_URI
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 1
            r4 = 0
            r5 = 29
            if (r2 < r5) goto L4c
            r2 = 1
            goto L4d
        L4c:
            r2 = 0
        L4d:
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r6 = r7.mInternalObserver
            r0.registerContentObserver(r1, r2, r6)
            android.content.Context r0 = r7.mContext
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r1 = android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r5) goto L5f
            goto L60
        L5f:
            r3 = 0
        L60:
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r2 = r7.mExternalObserver
            r0.registerContentObserver(r1, r3, r2)
            return
    }

    public void stopListen() {
            r3 = this;
            assertInMainThread()
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r0 = r3.mInternalObserver
            r1 = 0
            if (r0 == 0) goto L1a
            android.content.Context r0 = r3.mContext     // Catch: java.lang.Exception -> L14
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L14
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r2 = r3.mInternalObserver     // Catch: java.lang.Exception -> L14
            r0.unregisterContentObserver(r2)     // Catch: java.lang.Exception -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            r3.mInternalObserver = r1
        L1a:
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r0 = r3.mExternalObserver
            if (r0 == 0) goto L30
            android.content.Context r0 = r3.mContext     // Catch: java.lang.Exception -> L2a
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L2a
            com.bianfeng.ymnsdk.sysfunc.screenshot.ScreenShotLinstenManager$MediaContentObserver r2 = r3.mExternalObserver     // Catch: java.lang.Exception -> L2a
            r0.unregisterContentObserver(r2)     // Catch: java.lang.Exception -> L2a
            goto L2e
        L2a:
            r0 = move-exception
            r0.printStackTrace()
        L2e:
            r3.mExternalObserver = r1
        L30:
            r0 = 0
            r3.mStartListenTime = r0
            java.util.List<java.lang.String> r0 = r3.sHasCallbackPaths
            r0.clear()
            return
    }
}
