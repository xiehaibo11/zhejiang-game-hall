package com.bianfeng.pluginlibrary;

import android.app.Activity;
import android.content.Intent;
import android.support.v4.app.NotificationCompat;
import android.util.Log;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.feature.YmnCallback;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class YmnSupport {
    private static final String TAG = "YmnUnitySupport";
    private YmnCallback callback;
    private YmnListener listener;
    private Activity uActivity;

    public YmnSupport() {
        this.uActivity = null;
        this.listener = null;
        this.callback = new 2(this);
    }

    static Activity access$000(YmnSupport r0) {
        return r0.uActivity;
    }

    static YmnListener access$100(YmnSupport r0) {
        return r0.listener;
    }

    public void init(Activity r2) {
        this.uActivity = r2;
        Log.i(TAG, "-----------------YmnSupport.init----------------- 1");     // Catch: Exception -> L5
        YmnSdk.onCreate(this.uActivity);     // Catch: Exception -> L5
        YmnSdk.registCallback(this.callback);     // Catch: Exception -> L5
        runOnUiThread(new 1(this));     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    public void setCallback(YmnListener r1) {
        this.listener = r1;
    }

    private void runOnUiThread(Runnable r2) {
        Activity r0 = this.uActivity;
        if (r0 != null) goto L5;
        return;
    L5:
        if (r0.isFinishing() == true) goto L9;
        this.uActivity.runOnUiThread(r2);
        return;
    }

    public String ymnInvoke(String r5, String r6, String r7) {
        Log.i(TAG, "----------------------");
        Log.i(TAG, String.format("called method ymnInvoke %s::%s(%s)", new Object[]{r5, r6, r7}));
        Log.i(TAG, "----------------------");
        if (r5.endsWith("UserInterface") == false) goto L8;
        return invokeUserInterface(r6, r7);
    L8:
        if (r5.endsWith("PaymentInterface") == false) goto L12;
        return invokePaymentInterface(r6, r7);
    L12:
        if (r5.equals("Utils") == true) goto L14;
        return null;
    L14:
        return invokeUtils(r6, r7);
    L18:
        throw new RuntimeException("参数格式异常");
    }

    private String invokeUserInterface(String r4, String r5) throws JSONException {
        if (HostConstant.login.equals(r4) == false) goto L6;
        YmnSdk.login();
        return null;
    L6:
        if ("isSupportFunction".equals(r4) == false) goto L12;
        if (YmnSdk.isSupportFunction(new JSONObject(r5).optString("functionName")) == false) goto L10;
        Boolean.TRUE.toString();
        return null;
    L10:
        Boolean.FALSE.toString();
        return null;
    L12:
        if ("callFunction".equals(r4) == false) goto L20;
        JSONObject r42 = new JSONObject(r5);
        String r52 = r42.optString("functionName");
        JSONArray r1 = r42.optJSONArray("args");
        checkJsonStruct(r42, "args", r1);
        if (r1 != null) goto L16;
    L19:
        YmnSdk.callFunction(r52);
        return null;
    L16:
        if (r1.length() == 0) goto L19;
        YmnSdk.callFunction(r52, convertJsonArray(r1));
        return null;
    L20:
        JSONObject r0 = new JSONObject(r5);
        Log.i(TAG, r0.toString());
        if (r0.length() != 0) goto L23;
        Log.i(TAG, "callFunction 1111");
        YmnSdk.callFunction(r4);
        return null;
    L23:
        YmnSdk.callFunction(r4, new String[]{r5});
        return null;
    }

    private void checkJsonStruct(JSONObject r1, String r2, Object r3) {
        if (r3 == null) goto L4;
        return;
    L4:
        if (r1.has(r2) == false) goto L8;
        invokeUtils("showToast", "错误：args参数非json结构！");
        return;
    }

    private String[] convertJsonArray(JSONArray r4) {
        ArrayList r0 = new ArrayList();
        int r1 = 0;
    L4:
        if (r1 >= r4.length()) goto L7;
        r0.add(r4.optString(r1));
        r1 = r1 + 1;
        goto L4
    L7:
        return (String[]) r0.toArray(new String[r0.size()]);
    }

    private String invokePaymentInterface(String r3, String r4) throws JSONException {
        if ("payForProduct".equals(r3) == false) goto L7;
        JSONObject r32 = new JSONObject(r4);
        HashMap r42 = new HashMap();
        r42.put(IPaymentFeature.ARG_CP_ORDER_ID, r32.optString(IPaymentFeature.ARG_CP_ORDER_ID));
        r42.put(IPaymentFeature.ARG_PRODUCT_ID, r32.optString(IPaymentFeature.ARG_PRODUCT_ID));
        r42.put(IPaymentFeature.ARG_PRODUCT_NAME, r32.optString(IPaymentFeature.ARG_PRODUCT_NAME));
        r42.put(IPaymentFeature.ARG_PRODUCT_PRICE, r32.optString(IPaymentFeature.ARG_PRODUCT_PRICE));
        r42.put(IPaymentFeature.ARG_PRODUCT_COUNT, r32.optString(IPaymentFeature.ARG_PRODUCT_COUNT));
        r42.put(IPaymentFeature.ARG_ROLE_ID, r32.optString(IPaymentFeature.ARG_ROLE_ID));
        r42.put(IPaymentFeature.ARG_ROLE_NAME, r32.optString(IPaymentFeature.ARG_ROLE_NAME));
        r42.put(IPaymentFeature.ARG_ROLE_GRADE, r32.optString(IPaymentFeature.ARG_ROLE_GRADE));
        r42.put(IPaymentFeature.ARG_ROLE_BALANCE, r32.optString(IPaymentFeature.ARG_ROLE_BALANCE));
        r42.put(IPaymentFeature.ARG_SERVER_ID, r32.optString(IPaymentFeature.ARG_SERVER_ID));
        r42.put(IPaymentFeature.ARG_SERVER_NAME, r32.optString(IPaymentFeature.ARG_SERVER_NAME));
        r42.put(IPaymentFeature.ARG_NOTIFY_URL, r32.optString(IPaymentFeature.ARG_NOTIFY_URL));
        r42.put("ext", r32.optString("ext"));
        YmnSdk.pay(r42);
        return null;
    L7:
        return null;
    }

    public void invokeWechatSetPayParams(String r3, String r4, String r5, String r6) {
        JSONObject r0 = new JSONObject();
        r0.put("wxAppId", r6);     // Catch: Exception -> L5
        r0.put("appId", r3);     // Catch: Exception -> L5
        r0.put("packageId", r5);     // Catch: Exception -> L5
        r0.put("clientKey", r4);     // Catch: Exception -> L5
        YmnSdk.callFunction("wechat_set_pay_params", new String[]{r0.toString()});     // Catch: Exception -> L5
        return;
    L5:
        e = move-exception;
        e.printStackTrace();
    }

    private String invokeUtils(String r2, final String r3) {
        if ("showToast".equals(r2) == false) goto L6;
        runOnUiThread(new 3(this, r3));
        return null;
    L6:
        if ("logcat".equals(r2) == false) goto L11;
        Log.i(TAG, "out log from native:" + r3);
        return null;
    L11:
        return null;
    }

    private Map<String, Object> jsonToMap(JSONObject r5) {
        HashMap r0 = new HashMap();
        if (r5 != null) goto L5;
        return r0;
    L5:
        Iterator<String> r1 = r5.keys();
    L7:
        if (r1.hasNext() == false) goto L9;
        String r2 = r1.next();
        r0.put(r2, r5.opt(r2));
        goto L7
    L9:
        return r0;
    }

    protected void onStart() {
        YmnSdk.onStart();
    }

    protected void onRestart() {
        YmnSdk.onRestart();
    }

    protected void onResume() {
        YmnSdk.onResume();
    }

    protected void onPause() {
        YmnSdk.onPause();
    }

    protected void onStop() {
        YmnSdk.onStop();
    }

    protected void onDestroy() {
        YmnSdk.onDestroy();
        YmnSdk.removeCallback(this.callback);
    }

    protected void onNewIntent(Intent r1) {
        YmnSdk.onNewIntent(r1);
    }

    protected void onActivityResult(int r4, int r5, Intent r6) {
        YmnSdk.onActivityResult(r4, r5, r6);
        if (r5 != 332211) goto L6;
        Log.d("zzx-test-Result", String.valueOf(r6.getIntExtra("code", 0)));
        Log.d("zzx-test-Result", r6.getStringExtra(NotificationCompat.CATEGORY_MESSAGE));
        this.listener.callBack(r6.getIntExtra("code", 0), r6.getStringExtra(NotificationCompat.CATEGORY_MESSAGE));
        return;
    }

    public void onRequestPermissionsResult(int r1, String[] r2, int[] r3) {
        YmnSdk.onRequestPermissionsResult(r1, r2, r3);
    }

    public void onWindowFocusChanged(boolean r2) {
        YmnSdk.onWindowFocusChanged(r2, this.uActivity);
    }

    public void onBackPressed() {
        if (YmnSdk.isSupportFunction(IUserFeature.FUNCTION_EXIT) == false) goto L6;
        YmnSdk.callFunction(IUserFeature.FUNCTION_EXIT);
        return;
    }
}
