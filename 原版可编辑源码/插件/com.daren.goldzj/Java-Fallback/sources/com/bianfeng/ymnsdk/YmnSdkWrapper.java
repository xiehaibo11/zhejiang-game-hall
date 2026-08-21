package com.bianfeng.ymnsdk;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.util.Log;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.c;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnUtilsdk;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import org.json.JSONException;
import org.json.JSONObject;

public class YmnSdkWrapper {
    private static final int REQUEST_PERMISSIONS_CODE = 1;
    public static Activity activity;
    private static Set<YmnCallback> callbacks;
    private static YmnCallback dispatcher;
    private static volatile boolean inited;
    private static PermissionCallback permissionCallback;

    public interface PermissionCallback {
        void onFinish();
    }

    public interface ShowPermissionCallback {
        void onNotShow();

        void onShow();
    }

    static {
        callbacks = new HashSet();
        dispatcher = new 1();
    }

    public YmnSdkWrapper() {
    }

    static Set access$000() {
        return callbacks;
    }

    public static void callFunction(final String r1) {
        runOnUiThread(new 2(r1));
    }

    public static String callFunctionWithResult(String r1, String... r2) {
        if (YmnStrategy.isJsonParamers(r2) == false) goto L7;
        return c.b(r1, YmnStrategy.arrayParamersAsMap(r2));
    L7:
        return c.b(r1, r2);
    }

    public static void clearCallbacks() {
        callbacks.clear();
    }

    public static void dispatchMessage(int r1, String r2) {
        dispatcher.onCallBack(r1, r2);
    }

    public static void initialize(Activity r2) {
        activity = r2;
        Log.i("ymnsdk", "YmnSdkWrapper initialize: ");
        YmnUtilsdk.setAgreePrivacy();
        YmnDataFunUtils.getInstance().initContext(r2);
        innerInit(r2);
        YmnURLManagerV2.init(r2);
    }

    public static void innerInit(Context r2) {
        if (inited == true) goto L9;
        inited = true;
        Log.i("ymnsdk", "YmnSdkWrapper innerInit: inited==" + inited);
        if ((r2 instanceof Activity) == false) goto L7;
        Context r0 = r2.getApplicationContext();
    L8:
        YmnUtilsdk.init(r0);
        AppConfig.init(r0);
        d.c(r0);
        YmnProperties.init(r0);
        e.d(r0);
        c.a(dispatcher);
        goto L9
    L7:
        r0 = r2;
    L9:
        c.b(r2);
    }

    public static boolean isSupportFunction(String r0) {
        return c.a(r0);
    }

    public static Map<String, Object> jsonToMap(String r4) {
        JSONObject r0 = new JSONObject(r4);     // Catch: JSONException -> L8
        Iterator<String> r42 = r0.keys();     // Catch: JSONException -> L8
        HashMap r1 = new HashMap();     // Catch: JSONException -> L8
    L3:
        if (r42.hasNext() == false) goto L7;
        String r2 = r42.next();     // Catch: JSONException -> L8
        r1.put(r2, r0.get(r2));     // Catch: JSONException -> L8
        goto L3
    L7:
        return r1;
    L8:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public static void onActivityResult(int r0, int r1, Intent r2) {
        c.a(r0, r1, r2);
    }

    public static void onCreate(Activity r0) {
        activity = r0;
        c.a(r0);
        YmnURLManagerV2.init(r0);
    }

    public static void onDestroy() {
        YmnDataFunUtils.getInstance().onDestroy();
        c.a();
    }

    public static void onNewIntent(Intent r0) {
        c.a(r0);
    }

    public static void onPause() {
        YmnDataFunUtils.getInstance().onPause();
        c.b();
    }

    public static void onRequestPermissionsResult(int r0, String[] r1, int[] r2) {
        c.a(r0, r1, r2);
        if (r0 != 1) goto L10;
        PermissionCallback r02 = permissionCallback;
        if (r02 == null) goto L9;
        r02.onFinish();
        return;
    L9:
        return;
    }

    public static void onRestart() {
        c.c();
    }

    public static void onResume() {
        Logger.i("YmnSdkWrapper onResume");
        YmnDataFunUtils.getInstance().onResume();
        c.d();
    }

    public static void onStart() {
        c.e();
    }

    public static void onStop() {
        c.f();
    }

    public static void onWindowFocusChanged(boolean r0, Activity r1) {
        c.a(r0, r1);
    }

    public static void registCallback(YmnCallback r2) {
        Logger.i("registCallback的类名：" + r2.getClass().getName());
        callbacks.add(r2);
    }

    public static void removeCallback(YmnCallback r1) {
        callbacks.remove(r1);
    }

    public static void requestPermisssion(PermissionCallback r1, String[] r2) {
        requestPermisssion(r1, r2, 1);
    }

    public static void runOnUiThread(Runnable r1) {
        Activity r0 = activity;
        if (r0 != null) goto L5;
    L8:
        Logger.e("activity is null or finishing, ignore target to ui thread");
        return;
    L5:
        if (r0.isFinishing() == true) goto L8;
        activity.runOnUiThread(r1);
    }

    public static void setDebugMode(boolean r0) {
        c.a(r0);
    }

    public static void setPermissionCallback(PermissionCallback r0) {
        permissionCallback = r0;
    }

    public static void callFunction(final String r1, final String... r2) {
        runOnUiThread(new 3(r2, r1));
    }

    public static void requestPermisssion(PermissionCallback r2, String[] r3, int r4) {
        PackageManager r0 = activity.getPackageManager();
        String r1 = activity.getPackageName();
        if (r3 == null) goto L14;
    L7:
        setPermissionCallback(r2);     // Catch: Exception -> L11
        if (r3 == null) goto L16;
        activity.requestPermissions(r3, r4);     // Catch: Exception -> L11
        return;
    L11:
        e = move-exception;
        e.printStackTrace();
        return;
    L16:
        return;
    L14:
        r3 = r0.getPackageInfo(r1, 4096).requestedPermissions;     // Catch: Exception -> L11
        goto L7
    }

    public static void callFunction(final String r1, final LinkedHashMap<String, String> r2) {
        runOnUiThread(new 4(r1, r2));
    }

    public static String callFunctionWithResult(String r0, LinkedHashMap<String, String> r1) {
        return c.b(r0, r1);
    }
}
