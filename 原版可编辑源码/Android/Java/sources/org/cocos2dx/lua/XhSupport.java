package org.cocos2dx.lua;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.net.Uri;
import android.util.Log;
import android.widget.Toast;
import com.bianfeng.platform.PaymentInterface;
import com.bianfeng.platform.PlatformSdk;
import com.bianfeng.platform.PlatformSdkListener;
import com.bianfeng.platform.UserInterface;
import com.bianfeng.ymnsdk.YmnSdk;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.heytap.mcssdk.constant.b;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class XhSupport implements PlatformSdkListener {
    private static final String TAG = "XhSupport";
    private static Activity activity;
    private static boolean callbackiniting;
    private static boolean inited;
    private static boolean initing;
    private static XhSupport instance = new XhSupport();

    public static native void xhCallBack(int i, String str);

    public static void init(Activity activity2) {
        activity = activity2;
        try {
            initSdk(false);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static void initSdk(boolean z) {
        if (initing) {
            return;
        }
        if (inited) {
            xhCallBack(100, "sdk already inited");
            xhCallBack(205, "sdk already inited");
            return;
        }
        initing = true;
        PlatformSdk.setListener(instance);
        if (z) {
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    PlatformSdk.getInstance().init(XhSupport.activity);
                }
            });
        } else {
            PlatformSdk.getInstance().init(activity);
        }
    }

    public static void callbackInitSdk() {
        if (callbackiniting) {
            return;
        }
        callbackiniting = true;
        try {
            Log.i("AppActivity", "-----------------权限回调PlatformSdkinit-----------------");
            PlatformSdk.getInstance().init(activity);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static void runOnUiThread(Runnable runnable) {
        Activity activity2 = activity;
        if (activity2 == null || activity2.isFinishing()) {
            return;
        }
        activity.runOnUiThread(runnable);
    }

    @Override
    public void onCallBack(int i, String str) {
        if (i == 100) {
            initing = false;
            inited = true;
        } else if (i == 101) {
            initing = false;
            inited = false;
        }
        if (str == null) {
            str = "";
        }
        xhCallBack(i, str);
    }

    public static String ymnInvoke(String str, String str2, String str3) {
        Log.i(TAG, "----------------------");
        Log.i(TAG, String.format("native called method ymnInvoke %s::%s(%s)", str, str2, str3));
        Log.i(TAG, "----------------------");
        if (activity == null) {
            return null;
        }
        try {
            if (str.endsWith("PlatformSdk")) {
                return invokePlatformSdk(str2, str3);
            }
            if (str.endsWith("UserInterface")) {
                return invokeUserInterface(str2, str3);
            }
            if (str.endsWith("PaymentInterface")) {
                return invokePaymentInterface(str2, str3);
            }
            if (str.equals("Utils")) {
                return invokeUtils(str2, str3);
            }
            if (str.equals("BfAnalytics")) {
                return invokeBfAnalytics(str2, str3);
            }
            return null;
        } catch (JSONException unused) {
            throw new RuntimeException("参数格式异常");
        }
    }

    private static String invokePlatformSdk(String str, String str2) {
        if (PointCategory.INIT.equals(str)) {
            initSdk(true);
            return null;
        }
        if ("getPlatformId".equals(str)) {
            return PlatformSdk.getInstance().getPlatformId();
        }
        if ("getPlatformName".equals(str)) {
            return PlatformSdk.getInstance().getPlatformName();
        }
        if ("getPlatformVersion".equals(str)) {
            return PlatformSdk.getInstance().getPlatformVersion();
        }
        if ("getYmnSdkVersion".equals(str)) {
            return PlatformSdk.getInstance().getSdkVersion();
        }
        return null;
    }

    private static String invokeBfAnalytics(String str, String str2) throws JSONException {
        if ("getDeviceIdSync".equals(str)) {
            return YmnSdk.callFunctionWithResult("getDeviceIdSync", new String[0]);
        }
        if ("onEvent".equals(str)) {
            JSONObject jSONObject = new JSONObject(str2);
            checkJsonStruct(jSONObject, "map", jSONObject.optJSONObject("map"));
            LinkedHashMap linkedHashMap = new LinkedHashMap();
            linkedHashMap.put(b.k, jSONObject.optString(b.k));
            linkedHashMap.put(TTDownloadField.TT_LABEL, jSONObject.optString(TTDownloadField.TT_LABEL));
            linkedHashMap.put("map", jSONObject.optString("map"));
            YmnSdk.callFunction("bfdata_onevent", (LinkedHashMap<String, String>) linkedHashMap);
            return null;
        }
        if ("setFrequentRate".equals(str)) {
            YmnSdk.callFunction("setFrequentRate", str2);
            return null;
        }
        if ("onFrequentEvent".equals(str)) {
            JSONObject jSONObject2 = new JSONObject(str2);
            checkJsonStruct(jSONObject2, "map", jSONObject2.optJSONObject("map"));
            LinkedHashMap linkedHashMap2 = new LinkedHashMap();
            linkedHashMap2.put(b.k, jSONObject2.optString(b.k));
            linkedHashMap2.put(TTDownloadField.TT_LABEL, jSONObject2.optString(TTDownloadField.TT_LABEL));
            linkedHashMap2.put("map", jSONObject2.optString("map"));
            YmnSdk.callFunction("onFrequentEvent", (LinkedHashMap<String, String>) linkedHashMap2);
            return null;
        }
        if (!"flushFrequentEvents".equals(str)) {
            return null;
        }
        YmnSdk.callFunction("flushFrequentEvents");
        return null;
    }

    private static String invokeUserInterface(String str, String str2) throws JSONException {
        if (HostConstant.login.equals(str)) {
            UserInterface.getInstance().login();
            return null;
        }
        if ("callFunction".equals(str)) {
            JSONObject jSONObject = new JSONObject(str2);
            String strOptString = jSONObject.optString("functionName");
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("args");
            checkJsonStruct(jSONObject, "args", jSONArrayOptJSONArray);
            if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() == 0) {
                UserInterface.getInstance().callFunction(strOptString);
                return null;
            }
            UserInterface.getInstance().callFunction(strOptString, convertJsonArray(jSONArrayOptJSONArray));
            return null;
        }
        if ("callFunctionWithResult".equals(str)) {
            JSONObject jSONObject2 = new JSONObject(str2);
            String strOptString2 = jSONObject2.optString("functionName");
            JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray("args");
            if (jSONArrayOptJSONArray2 == null || jSONArrayOptJSONArray2.length() == 0) {
                return UserInterface.getInstance().callFunctionWithResult(strOptString2, new String[0]);
            }
            return UserInterface.getInstance().callFunctionWithResult(strOptString2, convertJsonArray(jSONArrayOptJSONArray2));
        }
        if (!"isSupportFunction".equals(str)) {
            return null;
        }
        if (UserInterface.getInstance().isSupportFunction(new JSONObject(str2).optString("functionName"))) {
            return Boolean.TRUE.toString();
        }
        return Boolean.FALSE.toString();
    }

    private static void checkJsonStruct(JSONObject jSONObject, String str, Object obj) {
        if (obj == null && jSONObject.has(str)) {
            invokeUtils("showToast", "错误：args参数非json结构！");
        }
    }

    private static String[] convertJsonArray(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            arrayList.add(jSONArray.optString(i));
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    private static String invokePaymentInterface(String str, String str2) throws JSONException {
        if (!"payForProduct".equals(str)) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(str2);
        PaymentInterface.getInstance().payForProduct(jSONObject.optString(IPaymentFeature.ARG_CP_ORDER_ID), jSONObject.optString("product_id"), jSONObject.optString("product_name"), jSONObject.optString("product_price"), jSONObject.optString("product_count"), jSONObject.optString("role_id"), jSONObject.optString("role_name"), jSONObject.optString(IPaymentFeature.ARG_ROLE_GRADE), jSONObject.optString(IPaymentFeature.ARG_ROLE_BALANCE), jSONObject.optString(IPaymentFeature.ARG_SERVER_ID), jSONObject.optString("notify_url"), jSONObject.optString("ext"));
        return null;
    }

    private static String invokeUtils(String str, final String str2) {
        if ("showToast".equals(str)) {
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    Toast.makeText(XhSupport.activity, str2, 0).show();
                }
            });
            return null;
        }
        if (!"logcat".equals(str)) {
            return null;
        }
        Log.i(TAG, "out log from native:" + str2);
        return null;
    }

    private static Map<String, Object> jsonToMap(JSONObject jSONObject) {
        HashMap map = new HashMap();
        if (jSONObject == null) {
            return map;
        }
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            map.put(next, jSONObject.opt(next));
        }
        return map;
    }

    public static void onStart() {
        PlatformSdk.getInstance().onStart();
    }

    public static void onResume() {
        PlatformSdk.getInstance().onResume();
    }

    public static void onPause() {
        PlatformSdk.getInstance().onPause();
    }

    public static void onStop() {
        PlatformSdk.getInstance().onStop();
    }

    public static void onNewIntent(Intent intent) {
        PlatformSdk.getInstance().onNewIntent(intent);
    }

    public static void onActivityResult(int i, int i2, Intent intent) {
        PlatformSdk.getInstance().onActivityResult(i, i2, intent);
    }

    public static void release() {
        PlatformSdk.getInstance().release();
    }

    public static void setActivity(Activity activity2) {
        activity = activity2;
    }

    public static int shareBox(String str, int i, int i2) {
        Log.i(TAG, "shareBox:" + str);
        try {
            activity.startActivity(new Intent("android.intent.action.VIEW", Uri.parse("fybox://action/share?uuid=" + str + "&numid=" + i + "&areaid=" + i2)));
            return 0;
        } catch (ActivityNotFoundException e) {
            e.printStackTrace();
            return -2;
        } catch (Exception e2) {
            e2.printStackTrace();
            return -1;
        }
    }
}
