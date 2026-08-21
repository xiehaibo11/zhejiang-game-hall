package com.bianfeng.ymnsdk;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.util.Log;
import com.bianfeng.platform.executor.AppConfig;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.YmnProperties;
import com.bianfeng.ymnsdk.feature.c;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.e;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnUtilsdk;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.sigmob.sdk.base.mta.PointCategory;
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
        public void onCallBack(int code, String msg) {
            Logger.d(String.format("dispatcher callbacks(%d) for result(%d | %s)", Integer.valueOf(YmnSdkWrapper.callbacks.size()), Integer.valueOf(code), msg));
            for (YmnCallback callback : YmnSdkWrapper.callbacks) {
                callback.onCallBack(code, msg);
            }
        }
    };
    private static volatile boolean inited;
    private static boolean mIsCallInit;
    private static PermissionCallback permissionCallback;
    private static Map<String, YmnPluginWrapper> pluginAutoFunctions;

    public interface PermissionCallback {
        void onFinish();
    }

    public interface ShowPermissionCallback {
        void onNotShow();

        void onShow();
    }

    public static void registCallback(YmnCallback callback) {
        Logger.i("registCallback的类名：" + callback.getClass().getName());
        callbacks.add(callback);
    }

    public static void removeCallback(YmnCallback callback) {
        callbacks.remove(callback);
    }

    public static void clearCallbacks() {
        callbacks.clear();
    }

    public static void dispatchMessage(int code, String msg) {
        dispatcher.onCallBack(code, msg);
    }

    public static void initialize(Activity activity2) {
        activity = activity2;
        Log.i("ymnsdk", "YmnSdkWrapper initialize: ");
        YmnUtilsdk.setAgreePrivacy();
        UtilsSdk.initDeviceInfo(activity2);
        YmnDataFunUtils.getInstance().initContext(activity2);
        innerInit(activity2);
        YmnURLManagerV2.init(activity2);
        mIsCallInit = true;
    }

    public static void onCreate(Activity activity2) {
        activity = activity2;
        c.a(activity2);
        YmnURLManagerV2.init(activity2);
    }

    public static void innerInit(Context base) {
        if (!inited) {
            inited = true;
            Log.i("ymnsdk", "YmnSdkWrapper innerInit: inited==" + inited);
            Context context = base instanceof Activity ? base.getApplicationContext() : base;
            YmnUtilsdk.init(context);
            AppConfig.init(context);
            d.c(context);
            YmnProperties.init(context);
            e.d(context);
            c.a(dispatcher);
        }
        c.b(base);
    }

    public static void registPluginFeatureWrapper(YmnPluginWrapper plugin) {
        if (pluginAutoFunctions == null) {
            pluginAutoFunctions = new HashMap();
        }
        String pluginName = plugin.getPluginName();
        pluginAutoFunctions.put(pluginName + "_plugin_init", plugin);
    }

    public static boolean isSupportFunction(String functionName) {
        return c.a(functionName);
    }

    public static void callFunction(final String functionName) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (YmnSdkWrapper.pluginAutoFunctions != null && YmnSdkWrapper.pluginAutoFunctions.containsKey(functionName) && functionName.contains(PointCategory.INIT)) {
                    ((YmnPluginWrapper) YmnSdkWrapper.pluginAutoFunctions.get(functionName)).onContextChanged(YmnSdkWrapper.activity);
                    ((YmnPluginWrapper) YmnSdkWrapper.pluginAutoFunctions.get(functionName)).onInit(YmnSdkWrapper.activity);
                } else {
                    c.a(functionName, new String[0]);
                }
            }
        });
    }

    public static void callFunction(final String functionName, final String... args) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (YmnStrategy.isJsonParamers(args)) {
                    c.a(functionName, YmnStrategy.arrayParamersAsMap(args));
                } else {
                    c.a(functionName, args);
                }
            }
        });
    }

    public static void callFunction(final String functionName, final LinkedHashMap<String, String> data) {
        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                c.a(functionName, (LinkedHashMap<String, String>) data);
            }
        });
    }

    public static String callFunctionWithResult(String functionName, String... args) {
        if (YmnStrategy.isJsonParamers(args)) {
            return c.b(functionName, YmnStrategy.arrayParamersAsMap(args));
        }
        return c.b(functionName, args);
    }

    public static String callFunctionWithResult(String functionName, LinkedHashMap<String, String> data) {
        return c.b(functionName, data);
    }

    public static void setDebugMode(boolean mode) {
        c.a(mode);
    }

    public static void onStart() {
        c.e();
    }

    public static void onRestart() {
        c.c();
    }

    public static void onPause() {
        if (mIsCallInit) {
            YmnDataFunUtils.getInstance().onPause();
        }
        c.b();
    }

    public static void onResume() {
        Logger.i("YmnSdkWrapper onResume");
        if (mIsCallInit) {
            YmnDataFunUtils.getInstance().onResume();
        }
        c.d();
    }

    public static void onStop() {
        c.f();
    }

    public static void onDestroy() {
        if (mIsCallInit) {
            YmnDataFunUtils.getInstance().onDestroy();
        }
        c.a();
    }

    public static void onNewIntent(Intent intent) {
        c.a(intent);
    }

    public static void onActivityResult(int requestCode, int resultCode, Intent data) {
        c.a(requestCode, resultCode, data);
    }

    public static void runOnUiThread(Runnable runnable) {
        Activity activity2 = activity;
        if (activity2 == null || activity2.isFinishing()) {
            Logger.e("activity is null or finishing, ignore target to ui thread");
        } else {
            activity.runOnUiThread(runnable);
        }
    }

    public static void requestPermisssion(PermissionCallback callback, String[] permissionStr) {
        requestPermisssion(callback, permissionStr, 1);
    }

    public static void requestPermisssion(PermissionCallback callback, String[] permissionStr, int code) {
        String[] permisions;
        PackageManager packageManager = activity.getPackageManager();
        String packageName = activity.getPackageName();
        if (permissionStr != null) {
            permisions = permissionStr;
        } else {
            try {
                permisions = packageManager.getPackageInfo(packageName, 4096).requestedPermissions;
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        setPermissionCallback(callback);
        if (permisions != null) {
            activity.requestPermissions(permisions, code);
        }
    }

    public static void setPermissionCallback(PermissionCallback permissionCallback2) {
        permissionCallback = permissionCallback2;
    }

    public static void onWindowFocusChanged(boolean hasFocus, Activity activity2) {
        c.a(hasFocus, activity2);
    }

    public static void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        PermissionCallback permissionCallback2;
        c.a(requestCode, permissions, grantResults);
        if (requestCode == 1 && (permissionCallback2 = permissionCallback) != null) {
            permissionCallback2.onFinish();
        }
    }

    public static Map<String, Object> jsonToMap(String jsonString) {
        try {
            JSONObject jsonObject = new JSONObject(jsonString);
            Iterator<String> keyIter = jsonObject.keys();
            Map<String, Object> valueMap = new HashMap<>();
            while (keyIter.hasNext()) {
                String key = keyIter.next();
                Object value = jsonObject.get(key);
                valueMap.put(key, value);
            }
            return valueMap;
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static Set<YmnCallback> getCallbacks() {
        return callbacks;
    }

    public static void setCallbacks(Set<YmnCallback> callbacks2) {
        callbacks = callbacks2;
    }
}
