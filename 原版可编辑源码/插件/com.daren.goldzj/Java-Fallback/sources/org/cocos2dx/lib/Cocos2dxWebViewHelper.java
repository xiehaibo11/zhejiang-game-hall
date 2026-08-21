package org.cocos2dx.lib;

import android.os.Handler;
import android.os.Looper;
import android.util.SparseArray;
import android.widget.FrameLayout;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;

public class Cocos2dxWebViewHelper {
    private static final String TAG = "Cocos2dxWebViewHelper";
    private static Cocos2dxActivity sCocos2dxActivity;
    private static Handler sHandler;
    private static FrameLayout sLayout;
    private static int viewTag;
    private static SparseArray<Cocos2dxWebView> webViews;

    static {
    }

    private static native void didFailLoading(int r0, String r1);

    private static native void didFinishLoading(int r0, String r1);

    private static native void onJsCallback(int r0, String r1);

    private static native boolean shouldStartLoading(int r0, String r1);

    static Cocos2dxActivity access$000() {
        return sCocos2dxActivity;
    }

    static FrameLayout access$100() {
        return sLayout;
    }

    static SparseArray access$200() {
        return webViews;
    }

    public Cocos2dxWebViewHelper(FrameLayout r2) {
        sLayout = r2;
        sHandler = new Handler(Looper.myLooper());
        sCocos2dxActivity = (Cocos2dxActivity) Cocos2dxActivity.getContext();
        webViews = new SparseArray();
    }

    public static boolean _shouldStartLoading(int r0, String r1) {
        return !shouldStartLoading(r0, r1);
    }

    public static void _didFinishLoading(int r0, String r1) {
        didFinishLoading(r0, r1);
    }

    public static void _didFailLoading(int r0, String r1) {
        didFailLoading(r0, r1);
    }

    public static void _onJsCallback(int r0, String r1) {
        onJsCallback(r0, r1);
    }

    public static int createWebView() {
        final int r0 = viewTag;
        sCocos2dxActivity.runOnUiThread(new 1(r0));
        int r02 = viewTag;
        viewTag = r02 + 1;
        return r02;
    }

    public static void removeWebView(final int r2) {
        sCocos2dxActivity.runOnUiThread(new 2(r2));
    }

    public static void setVisible(final int r2, final boolean r3) {
        sCocos2dxActivity.runOnUiThread(new 3(r2, r3));
    }

    public static void setWebViewRect(final int r8, final int r9, final int r10, final int r11, final int r12) {
        sCocos2dxActivity.runOnUiThread(new 4(r8, r9, r10, r11, r12));
    }

    public static void setBackgroundTransparent(final int r2, final boolean r3) {
        sCocos2dxActivity.runOnUiThread(new 5(r2, r3));
    }

    public static void setJavascriptInterfaceScheme(final int r2, final String r3) {
        sCocos2dxActivity.runOnUiThread(new 6(r2, r3));
    }

    public static void loadData(final int r8, final String r9, final String r10, final String r11, final String r12) {
        sCocos2dxActivity.runOnUiThread(new 7(r8, r12, r9, r10, r11));
    }

    public static void loadHTMLString(final int r2, final String r3, final String r4) {
        sCocos2dxActivity.runOnUiThread(new 8(r2, r4, r3));
    }

    public static void loadUrl(final int r2, final String r3) {
        sCocos2dxActivity.runOnUiThread(new 9(r2, r3));
    }

    public static void loadFile(final int r2, final String r3) {
        sCocos2dxActivity.runOnUiThread(new 10(r2, r3));
    }

    public static void stopLoading(final int r2) {
        sCocos2dxActivity.runOnUiThread(new 11(r2));
    }

    public static void reload(final int r2) {
        sCocos2dxActivity.runOnUiThread(new 12(r2));
    }

    public static <T> T callInMainThread(Callable<T> r1) throws ExecutionException, InterruptedException {
        FutureTask r0 = new FutureTask(r1);
        sHandler.post(r0);
        return (T) r0.get();
    }

    public static boolean canGoBack(final int r1) {
        return ((Boolean) callInMainThread(new 13(r1))).booleanValue();
    L8:
        return false;
    }

    public static boolean canGoForward(final int r1) {
        return ((Boolean) callInMainThread(new 14(r1))).booleanValue();
    L8:
        return false;
    }

    public static void goBack(final int r2) {
        sCocos2dxActivity.runOnUiThread(new 15(r2));
    }

    public static void goForward(final int r2) {
        sCocos2dxActivity.runOnUiThread(new 16(r2));
    }

    public static void evaluateJS(final int r2, final String r3) {
        sCocos2dxActivity.runOnUiThread(new 17(r2, r3));
    }

    public static void setScalesPageToFit(final int r2, final boolean r3) {
        sCocos2dxActivity.runOnUiThread(new 18(r2, r3));
    }
}
