package org.cocos2dx.lib;

public class Cocos2dxWebViewHelper {
    private static final java.lang.String TAG = "Cocos2dxWebViewHelper";
    private static org.cocos2dx.lib.Cocos2dxActivity sCocos2dxActivity;
    private static android.os.Handler sHandler;
    private static android.widget.FrameLayout sLayout;
    private static int viewTag;
    private static android.util.SparseArray<org.cocos2dx.lib.Cocos2dxWebView> webViews;



















    static {
            return
    }

    public Cocos2dxWebViewHelper(android.widget.FrameLayout r2) {
            r1 = this;
            r1.<init>()
            org.cocos2dx.lib.Cocos2dxWebViewHelper.sLayout = r2
            android.os.Handler r2 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.myLooper()
            r2.<init>(r0)
            org.cocos2dx.lib.Cocos2dxWebViewHelper.sHandler = r2
            android.content.Context r2 = org.cocos2dx.lib.Cocos2dxActivity.getContext()
            org.cocos2dx.lib.Cocos2dxActivity r2 = (org.cocos2dx.lib.Cocos2dxActivity) r2
            org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity = r2
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>()
            org.cocos2dx.lib.Cocos2dxWebViewHelper.webViews = r2
            return
    }

    public static void _didFailLoading(int r0, java.lang.String r1) {
            didFailLoading(r0, r1)
            return
    }

    public static void _didFinishLoading(int r0, java.lang.String r1) {
            didFinishLoading(r0, r1)
            return
    }

    public static void _onJsCallback(int r0, java.lang.String r1) {
            onJsCallback(r0, r1)
            return
    }

    public static boolean _shouldStartLoading(int r0, java.lang.String r1) {
            boolean r0 = shouldStartLoading(r0, r1)
            r0 = r0 ^ 1
            return r0
    }

    static org.cocos2dx.lib.Cocos2dxActivity access$000() {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            return r0
    }

    static android.widget.FrameLayout access$100() {
            android.widget.FrameLayout r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sLayout
            return r0
    }

    static android.util.SparseArray access$200() {
            android.util.SparseArray<org.cocos2dx.lib.Cocos2dxWebView> r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.webViews
            return r0
    }

    public static <T> T callInMainThread(java.util.concurrent.Callable<T> r1) throws java.util.concurrent.ExecutionException, java.lang.InterruptedException {
            java.util.concurrent.FutureTask r0 = new java.util.concurrent.FutureTask
            r0.<init>(r1)
            android.os.Handler r1 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sHandler
            r1.post(r0)
            java.lang.Object r1 = r0.get()
            return r1
    }

    public static boolean canGoBack(int r1) {
            org.cocos2dx.lib.Cocos2dxWebViewHelper$13 r0 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$13
            r0.<init>(r1)
            r1 = 0
            java.lang.Object r0 = callInMainThread(r0)     // Catch: java.lang.Throwable -> L10
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L10
            boolean r1 = r0.booleanValue()     // Catch: java.lang.Throwable -> L10
        L10:
            return r1
    }

    public static boolean canGoForward(int r1) {
            org.cocos2dx.lib.Cocos2dxWebViewHelper$14 r0 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$14
            r0.<init>(r1)
            r1 = 0
            java.lang.Object r0 = callInMainThread(r0)     // Catch: java.lang.Throwable -> L10
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L10
            boolean r1 = r0.booleanValue()     // Catch: java.lang.Throwable -> L10
        L10:
            return r1
    }

    public static int createWebView() {
            int r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.viewTag
            org.cocos2dx.lib.Cocos2dxActivity r1 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$1 r2 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$1
            r2.<init>(r0)
            r1.runOnUiThread(r2)
            int r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.viewTag
            int r1 = r0 + 1
            org.cocos2dx.lib.Cocos2dxWebViewHelper.viewTag = r1
            return r0
    }

    private static native void didFailLoading(int r0, java.lang.String r1);

    private static native void didFinishLoading(int r0, java.lang.String r1);

    public static void evaluateJS(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$17 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$17
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void goBack(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$15 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$15
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void goForward(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$16 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$16
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void loadData(int r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$7 r7 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$7
            r1 = r7
            r2 = r8
            r3 = r12
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.runOnUiThread(r7)
            return
    }

    public static void loadFile(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$10 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$10
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void loadHTMLString(int r2, java.lang.String r3, java.lang.String r4) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$8 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$8
            r1.<init>(r2, r4, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void loadUrl(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$9 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$9
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    private static native void onJsCallback(int r0, java.lang.String r1);

    public static void reload(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$12 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$12
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void removeWebView(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$2 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$2
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void setBackgroundTransparent(int r2, boolean r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$5 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$5
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setJavascriptInterfaceScheme(int r2, java.lang.String r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$6 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$6
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setScalesPageToFit(int r2, boolean r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$18 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$18
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setVisible(int r2, boolean r3) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$3 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$3
            r1.<init>(r2, r3)
            r0.runOnUiThread(r1)
            return
    }

    public static void setWebViewRect(int r8, int r9, int r10, int r11, int r12) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$4 r7 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$4
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.runOnUiThread(r7)
            return
    }

    private static native boolean shouldStartLoading(int r0, java.lang.String r1);

    public static void stopLoading(int r2) {
            org.cocos2dx.lib.Cocos2dxActivity r0 = org.cocos2dx.lib.Cocos2dxWebViewHelper.sCocos2dxActivity
            org.cocos2dx.lib.Cocos2dxWebViewHelper$11 r1 = new org.cocos2dx.lib.Cocos2dxWebViewHelper$11
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }
}
