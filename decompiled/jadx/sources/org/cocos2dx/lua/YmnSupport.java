package org.cocos2dx.lua;

import android.app.Activity;
import android.content.Intent;
import android.os.Environment;
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
import com.google.gson.Gson;
import com.heytap.mcssdk.constant.b;
import com.sigmob.sdk.base.mta.PointCategory;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class YmnSupport implements PlatformSdkListener {
    private static final String TAG = "YmnSupport";
    private static Activity activity;
    private static boolean callbackiniting;
    private static boolean inited;
    private static boolean initing;
    private static YmnSupport instance = new YmnSupport();

    public static native void ymnCallBack(int i, String str);

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
            ymnCallBack(100, "sdk already inited");
            ymnCallBack(205, "sdk already inited");
            return;
        }
        initing = true;
        PlatformSdk.setListener(instance);
        if (z) {
            runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.YmnSupport.1
                @Override // java.lang.Runnable
                public void run() {
                    PlatformSdk.getInstance().init(YmnSupport.activity);
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

    @Override // com.bianfeng.platform.PlatformSdkListener
    public void onCallBack(int i, String str) {
        if (i == 100) {
            initing = false;
            inited = true;
        } else if (i == 101) {
            initing = false;
            inited = false;
        }
        Log.i("AppActivity", i + str);
        if (str == null) {
            str = "";
        }
        ymnCallBack(i, str);
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
            if (str.equals("FilePathInterface")) {
                return invokeFilePathInterface(str2, str3);
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
        LinkedHashMap linkedHashMap;
        if (HostConstant.login.equals(str)) {
            UserInterface.getInstance().login();
        } else if ("callFunction".equals(str)) {
            JSONObject jSONObject = new JSONObject(str2);
            String strOptString = jSONObject.optString("functionName");
            if (strOptString.equals("ZFBBUY")) {
                strOptString = "alipay_pay";
            } else if (strOptString.equals("WXBUY")) {
                strOptString = "weixin_pay";
            }
            Log.i(TAG, String.format("spideman_functionName :(%s)", strOptString));
            String strOptString2 = jSONObject.optString("args");
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("args");
            if (!strOptString2.isEmpty() && jSONArrayOptJSONArray == null) {
                linkedHashMap = (LinkedHashMap) new Gson().fromJson(strOptString2, LinkedHashMap.class);
            } else {
                checkJsonStruct(jSONObject, "args", jSONArrayOptJSONArray);
                linkedHashMap = null;
            }
            if ((linkedHashMap == null || linkedHashMap.isEmpty()) && (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() == 0)) {
                YmnSdk.callFunction(strOptString);
            } else if (linkedHashMap != null) {
                YmnSdk.callFunction(strOptString, (LinkedHashMap<String, String>) linkedHashMap);
            } else if (jSONArrayOptJSONArray != null) {
                YmnSdk.callFunction(strOptString, convertJsonArray(jSONArrayOptJSONArray));
            } else {
                invokeUtils("showToast", "错误：" + strOptString + "调用错误！！");
            }
        } else {
            if ("callFunctionWithResult".equals(str)) {
                JSONObject jSONObject2 = new JSONObject(str2);
                String strOptString3 = jSONObject2.optString("functionName");
                JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray("args");
                if (jSONArrayOptJSONArray2 == null || jSONArrayOptJSONArray2.length() == 0) {
                    return UserInterface.getInstance().callFunctionWithResult(strOptString3, new String[0]);
                }
                return UserInterface.getInstance().callFunctionWithResult(strOptString3, convertJsonArray(jSONArrayOptJSONArray2));
            }
            if ("isSupportFunction".equals(str)) {
                if (UserInterface.getInstance().isSupportFunction(new JSONObject(str2).optString("functionName"))) {
                    return Boolean.TRUE.toString();
                }
                return Boolean.FALSE.toString();
            }
        }
        return null;
    }

    private static String invokeFilePathInterface(String str, String str2) throws JSONException {
        String absolutePath;
        if (!"getStoragePath".equals(str)) {
            return null;
        }
        if ("mounted".equals(Environment.getExternalStorageState())) {
            absolutePath = activity.getExternalFilesDir(str2).getAbsolutePath();
        } else {
            absolutePath = activity.getFilesDir() + File.separator + str2;
        }
        File file = new File(absolutePath);
        if (!file.exists()) {
            Log.i("AppActivity", "spideman555");
            file.mkdirs();
        }
        Log.i("AppActivity", "spideman" + absolutePath);
        return absolutePath;
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
            runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.YmnSupport.2
                @Override // java.lang.Runnable
                public void run() {
                    Toast.makeText(YmnSupport.activity, str2, 0).show();
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
}
