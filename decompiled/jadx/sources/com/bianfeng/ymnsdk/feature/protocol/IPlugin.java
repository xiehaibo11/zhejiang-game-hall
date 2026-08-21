package com.bianfeng.ymnsdk.feature.protocol;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import java.io.Serializable;
import java.lang.reflect.Field;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface IPlugin extends Serializable {
    public static final int STATE_CHECKING = -1;
    public static final int STATE_CLOSED = 0;
    public static final int STATE_EMPTY = -10;
    public static final int STATE_INSTALLED = -3;
    public static final int STATE_INSTALLING = -4;
    public static final int STATE_PENDING_CHECK = -2;
    public static final int STATE_PENDING_INSTALL = -5;
    public static final int STATE_WORKING = 1;

    void callFunction(String str, LinkedHashMap<String, String> linkedHashMap);

    void callFunction(String str, String... strArr);

    String callFunctionWithResult(String str, LinkedHashMap<String, String> linkedHashMap);

    String callFunctionWithResult(String str, String... strArr);

    String getPluginId();

    String getPluginName();

    int getPluginVersion();

    String getSdkVersion();

    boolean isDebugMode();

    boolean isSupportFunction(String str);

    void onActivityResult(int i, int i2, Intent intent);

    void onDestroy();

    void onInit(Context context);

    void onLogin(Map<String, String> map);

    void onNewIntent(Intent intent);

    void onPause();

    void onPay(Map<String, String> map);

    void onRestart();

    void onResume();

    void onStart();

    void onStop();

    void onWindowFocusChanged(boolean z, Activity activity);

    void setDebugMode(boolean z);

    public static class STATE_NAME {
        static Map<Integer, String> names = new HashMap();

        static {
            Field[] fields = IPlugin.class.getDeclaredFields();
            for (Field field : fields) {
                field.setAccessible(true);
                String name = field.getName();
                if (name.startsWith("STATE_")) {
                    try {
                        names.put(Integer.valueOf(field.getInt(null)), name);
                    } catch (IllegalAccessException e) {
                        e.printStackTrace();
                    }
                }
            }
        }

        public static String get(Integer state) {
            String name = names.get(state);
            return TextUtils.isEmpty(name) ? "UNSET" : name;
        }
    }
}
