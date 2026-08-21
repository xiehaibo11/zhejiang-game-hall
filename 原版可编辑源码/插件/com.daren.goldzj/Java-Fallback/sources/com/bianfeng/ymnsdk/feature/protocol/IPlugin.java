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

public interface IPlugin extends Serializable {
    public static final int STATE_CHECKING = -1;
    public static final int STATE_CLOSED = 0;
    public static final int STATE_EMPTY = -10;
    public static final int STATE_INSTALLED = -3;
    public static final int STATE_INSTALLING = -4;
    public static final int STATE_PENDING_CHECK = -2;
    public static final int STATE_PENDING_INSTALL = -5;
    public static final int STATE_WORKING = 1;

    public static class STATE_NAME {
        static Map<Integer, String> names;

        static {
            names = new HashMap();
            Field[] r0 = IPlugin.class.getDeclaredFields();
            int r1 = r0.length;
            int r2 = 0;
        L3:
            if (r2 >= r1) goto L11;
            Field r3 = r0[r2];
            r3.setAccessible(true);
            String r4 = r3.getName();
            if (r4.startsWith("STATE_") == false) goto L10;
            names.put(Integer.valueOf(r3.getInt(null)), r4);     // Catch: IllegalAccessException -> L8
        L8:
            e = move-exception;
            e.printStackTrace();
        L10:
            r2 = r2 + 1;
            goto L3
        }

        public STATE_NAME() {
        }

        public static String get(Integer r1) {
            String r12 = names.get(r1);
            if (TextUtils.isEmpty(r12) == false) goto L6;
            return "UNSET";
        L6:
            return r12;
        }
    }

    void callFunction(String r1, LinkedHashMap<String, String> r2);

    void callFunction(String r1, String... r2);

    String callFunctionWithResult(String r1, LinkedHashMap<String, String> r2);

    String callFunctionWithResult(String r1, String... r2);

    String getPluginId();

    String getPluginName();

    int getPluginVersion();

    String getSdkVersion();

    boolean isDebugMode();

    boolean isSupportFunction(String r1);

    void onActivityResult(int r1, int r2, Intent r3);

    void onDestroy();

    void onInit(Context r1);

    void onLogin(Map<String, String> r1);

    void onNewIntent(Intent r1);

    void onPause();

    void onPay(Map<String, String> r1);

    void onRestart();

    void onResume();

    void onStart();

    void onStop();

    void onWindowFocusChanged(boolean r1, Activity r2);

    void setDebugMode(boolean r1);
}
