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
    private static Set<YmnCallback> callbacks = new HashSet();
    private static YmnCallback dispatcher = new YmnCallback() {
        @Override
        public void onCallBack(int i, String str) {
            Logger.d(String.format("dispatcher callbacks(%d) for result(%d | %s)", Integer.valueOf(YmnSdkWrapper.callbacks.size()), Integer.valueOf(i), str));
            Iterator it = YmnSdkWrapper.callbacks.iterator();
            while (it.hasNext()) {
                ((YmnCallback) it.next()).onCallBack(i, str);
            }
        }
    };
    private static volatile boolean inited;
    private static PermissionCallback permissionCallback;

    public interface PermissionCallback {
        void onFinish();
    }

    public interface ShowPermissionCallback {
        void onNotShow();

        void onShow();
    }

    public static void callFunction(final String str) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                c.a(str, new String[0]);
            }
        });
    }

    public static String callFunctionWithResult(String str, String... strArr) {
        return YmnStrategy.isJsonParamers(strArr) ? c.b(str, YmnStrategy.arrayParamersAsMap(strArr)) : c.b(str, strArr);
    }

    public static void clearCallbacks() {
        callbacks.clear();
    }

    public static void dispatchMessage(int i, String str) {
        dispatcher.onCallBack(i, str);
    }

    public static void initialize(Activity activity2) {
        activity = activity2;
        Log.i("ymnsdk", "YmnSdkWrapper initialize: ");
        YmnUtilsdk.setAgreePrivacy();
        YmnDataFunUtils.getInstance().initContext(activity2);
        innerInit(activity2);
        YmnURLManagerV2.init(activity2);
    }

    public static void innerInit(Context context) {
        if (!inited) {
            inited = true;
            Log.i("ymnsdk", "YmnSdkWrapper innerInit: inited==" + inited);
            Context applicationContext = context instanceof Activity ? context.getApplicationContext() : context;
            YmnUtilsdk.init(applicationContext);
            AppConfig.init(applicationContext);
            d.c(applicationContext);
            YmnProperties.init(applicationContext);
            e.d(applicationContext);
            c.a(dispatcher);
        }
        c.b(context);
    }

    public static boolean isSupportFunction(String str) {
        return c.a(str);
    }

    public static Map<String, Object> jsonToMap(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            Iterator<String> itKeys = jSONObject.keys();
            HashMap map = new HashMap();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                map.put(next, jSONObject.get(next));
            }
            return map;
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static void onActivityResult(int i, int i2, Intent intent) {
        c.a(i, i2, intent);
    }

    public static void onCreate(Activity activity2) {
        activity = activity2;
        c.a(activity2);
        YmnURLManagerV2.init(activity2);
    }

    public static void onDestroy() {
        YmnDataFunUtils.getInstance().onDestroy();
        c.a();
    }

    public static void onNewIntent(Intent intent) {
        c.a(intent);
    }

    public static void onPause() {
        YmnDataFunUtils.getInstance().onPause();
        c.b();
    }

    public static void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        PermissionCallback permissionCallback2;
        c.a(i, strArr, iArr);
        if (i == 1 && (permissionCallback2 = permissionCallback) != null) {
            permissionCallback2.onFinish();
        }
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

    public static void onWindowFocusChanged(boolean z, Activity activity2) {
        c.a(z, activity2);
    }

    public static void registCallback(YmnCallback ymnCallback) {
        Logger.i("registCallback的类名：" + ymnCallback.getClass().getName());
        callbacks.add(ymnCallback);
    }

    public static void removeCallback(YmnCallback ymnCallback) {
        callbacks.remove(ymnCallback);
    }

    public static void requestPermisssion(PermissionCallback permissionCallback2, String[] strArr) {
        requestPermisssion(permissionCallback2, strArr, 1);
    }

    public static void runOnUiThread(Runnable runnable) {
        Activity activity2 = activity;
        if (activity2 == null || activity2.isFinishing()) {
            Logger.e("activity is null or finishing, ignore target to ui thread");
        } else {
            activity.runOnUiThread(runnable);
        }
    }

    public static void setDebugMode(boolean z) {
        c.a(z);
    }

    public static void setPermissionCallback(PermissionCallback permissionCallback2) {
        permissionCallback = permissionCallback2;
    }

    public static void callFunction(final String str, final String... strArr) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (YmnStrategy.isJsonParamers(strArr)) {
                    c.a(str, YmnStrategy.arrayParamersAsMap(strArr));
                } else {
                    c.a(str, strArr);
                }
            }
        });
    }

    public static void requestPermisssion(PermissionCallback permissionCallback2, String[] strArr, int i) {
        PackageManager packageManager = activity.getPackageManager();
        String packageName = activity.getPackageName();
        if (strArr == null) {
            try {
                strArr = packageManager.getPackageInfo(packageName, 4096).requestedPermissions;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        setPermissionCallback(permissionCallback2);
        if (strArr != null) {
            activity.requestPermissions(strArr, i);
        }
    }

    public static void callFunction(final String str, final LinkedHashMap<String, String> linkedHashMap) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                c.a(str, (LinkedHashMap<String, String>) linkedHashMap);
            }
        });
    }

    public static String callFunctionWithResult(String str, LinkedHashMap<String, String> linkedHashMap) {
        return c.b(str, linkedHashMap);
    }
}
