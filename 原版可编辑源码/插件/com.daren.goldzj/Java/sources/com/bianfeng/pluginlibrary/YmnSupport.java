package com.bianfeng.pluginlibrary;

import android.app.Activity;
import android.content.Intent;
import android.support.v4.app.NotificationCompat;
import android.util.Log;
import android.widget.Toast;
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
    private Activity uActivity = null;
    private YmnListener listener = null;
    private YmnCallback callback = new YmnCallback() {
        /* JADX WARN: Failed to find 'out' block for switch in B:11:0x0037. Please report as an issue. */
        /*  JADX ERROR: UnsupportedOperationException in pass: RegionMakerVisitor
            java.lang.UnsupportedOperationException
            	at java.base/java.util.Collections$UnmodifiableCollection.add(Unknown Source)
            	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker$1.leaveRegion(SwitchRegionMaker.java:390)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:70)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:23)
            	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.insertBreaksForCase(SwitchRegionMaker.java:370)
            	at jadx.core.dex.visitors.regions.maker.SwitchRegionMaker.insertBreaks(SwitchRegionMaker.java:85)
            	at jadx.core.dex.visitors.regions.PostProcessRegions.leaveRegion(PostProcessRegions.java:33)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:70)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
            	at java.base/java.util.ArrayList.forEach(Unknown Source)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
            	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:19)
            	at jadx.core.dex.visitors.regions.PostProcessRegions.process(PostProcessRegions.java:23)
            	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:31)
            */
        @Override
        public void onCallBack(int r3, java.lang.String r4) {
            /*
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "code :"
                r0.append(r1)
                java.lang.String r1 = java.lang.String.valueOf(r3)
                r0.append(r1)
                java.lang.String r1 = " msg: "
                r0.append(r1)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "YmnUnitySupport"
                android.util.Log.i(r1, r0)
                r0 = 112(0x70, float:1.57E-43)
                if (r3 == r0) goto L3a
                r0 = 115(0x73, float:1.61E-43)
                if (r3 == r0) goto L3a
                r0 = 116(0x74, float:1.63E-43)
                if (r3 == r0) goto L3a
                switch(r3) {
                    case 100: goto L3a;
                    case 101: goto L3a;
                    case 102: goto L3a;
                    default: goto L31;
                }
            L31:
                switch(r3) {
                    case 105: goto L3a;
                    case 106: goto L3a;
                    case 107: goto L3a;
                    case 108: goto L3a;
                    default: goto L34;
                }
            L34:
                switch(r3) {
                    case 200: goto L3a;
                    case 201: goto L3a;
                    case 202: goto L3a;
                    default: goto L37;
                }
            L37:
                switch(r3) {
                    case 205: goto L3a;
                    case 206: goto L3a;
                    case 207: goto L3a;
                    default: goto L3a;
                }
            L3a:
                com.bianfeng.pluginlibrary.YmnSupport r0 = com.bianfeng.pluginlibrary.YmnSupport.this
                com.bianfeng.pluginlibrary.YmnListener r0 = com.bianfeng.pluginlibrary.YmnSupport.access$100(r0)
                r0.callBack(r3, r4)
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.pluginlibrary.YmnSupport.2.onCallBack(int, java.lang.String):void");
        }
    };

    public void init(Activity activity) {
        this.uActivity = activity;
        try {
            Log.i(TAG, "-----------------YmnSupport.init----------------- 1");
            YmnSdk.onCreate(this.uActivity);
            YmnSdk.registCallback(this.callback);
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    YmnSdk.initialize(YmnSupport.this.uActivity);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void setCallback(YmnListener ymnListener) {
        this.listener = ymnListener;
    }

    private void runOnUiThread(Runnable runnable) {
        Activity activity = this.uActivity;
        if (activity == null || activity.isFinishing()) {
            return;
        }
        this.uActivity.runOnUiThread(runnable);
    }

    public String ymnInvoke(String str, String str2, String str3) {
        Log.i(TAG, "----------------------");
        Log.i(TAG, String.format("called method ymnInvoke %s::%s(%s)", str, str2, str3));
        Log.i(TAG, "----------------------");
        try {
            if (str.endsWith("UserInterface")) {
                return invokeUserInterface(str2, str3);
            }
            if (str.endsWith("PaymentInterface")) {
                return invokePaymentInterface(str2, str3);
            }
            if (str.equals("Utils")) {
                return invokeUtils(str2, str3);
            }
            return null;
        } catch (JSONException unused) {
            throw new RuntimeException("参数格式异常");
        }
    }

    private String invokeUserInterface(String str, String str2) throws JSONException {
        if (HostConstant.login.equals(str)) {
            YmnSdk.login();
            return null;
        }
        if ("isSupportFunction".equals(str)) {
            if (YmnSdk.isSupportFunction(new JSONObject(str2).optString("functionName"))) {
                Boolean.TRUE.toString();
                return null;
            }
            Boolean.FALSE.toString();
            return null;
        }
        if ("callFunction".equals(str)) {
            JSONObject jSONObject = new JSONObject(str2);
            String strOptString = jSONObject.optString("functionName");
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("args");
            checkJsonStruct(jSONObject, "args", jSONArrayOptJSONArray);
            if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() == 0) {
                YmnSdk.callFunction(strOptString);
                return null;
            }
            YmnSdk.callFunction(strOptString, convertJsonArray(jSONArrayOptJSONArray));
            return null;
        }
        JSONObject jSONObject2 = new JSONObject(str2);
        Log.i(TAG, jSONObject2.toString());
        if (jSONObject2.length() == 0) {
            Log.i(TAG, "callFunction 1111");
            YmnSdk.callFunction(str);
            return null;
        }
        YmnSdk.callFunction(str, str2);
        return null;
    }

    private void checkJsonStruct(JSONObject jSONObject, String str, Object obj) {
        if (obj == null && jSONObject.has(str)) {
            invokeUtils("showToast", "错误：args参数非json结构！");
        }
    }

    private String[] convertJsonArray(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            arrayList.add(jSONArray.optString(i));
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    private String invokePaymentInterface(String str, String str2) throws JSONException {
        if (!"payForProduct".equals(str)) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(str2);
        HashMap map = new HashMap();
        map.put(IPaymentFeature.ARG_CP_ORDER_ID, jSONObject.optString(IPaymentFeature.ARG_CP_ORDER_ID));
        map.put(IPaymentFeature.ARG_PRODUCT_ID, jSONObject.optString(IPaymentFeature.ARG_PRODUCT_ID));
        map.put(IPaymentFeature.ARG_PRODUCT_NAME, jSONObject.optString(IPaymentFeature.ARG_PRODUCT_NAME));
        map.put(IPaymentFeature.ARG_PRODUCT_PRICE, jSONObject.optString(IPaymentFeature.ARG_PRODUCT_PRICE));
        map.put(IPaymentFeature.ARG_PRODUCT_COUNT, jSONObject.optString(IPaymentFeature.ARG_PRODUCT_COUNT));
        map.put(IPaymentFeature.ARG_ROLE_ID, jSONObject.optString(IPaymentFeature.ARG_ROLE_ID));
        map.put(IPaymentFeature.ARG_ROLE_NAME, jSONObject.optString(IPaymentFeature.ARG_ROLE_NAME));
        map.put(IPaymentFeature.ARG_ROLE_GRADE, jSONObject.optString(IPaymentFeature.ARG_ROLE_GRADE));
        map.put(IPaymentFeature.ARG_ROLE_BALANCE, jSONObject.optString(IPaymentFeature.ARG_ROLE_BALANCE));
        map.put(IPaymentFeature.ARG_SERVER_ID, jSONObject.optString(IPaymentFeature.ARG_SERVER_ID));
        map.put(IPaymentFeature.ARG_SERVER_NAME, jSONObject.optString(IPaymentFeature.ARG_SERVER_NAME));
        map.put(IPaymentFeature.ARG_NOTIFY_URL, jSONObject.optString(IPaymentFeature.ARG_NOTIFY_URL));
        map.put("ext", jSONObject.optString("ext"));
        YmnSdk.pay(map);
        return null;
    }

    public void invokeWechatSetPayParams(String str, String str2, String str3, String str4) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("wxAppId", str4);
            jSONObject.put("appId", str);
            jSONObject.put("packageId", str3);
            jSONObject.put("clientKey", str2);
            YmnSdk.callFunction("wechat_set_pay_params", jSONObject.toString());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private String invokeUtils(String str, final String str2) {
        if ("showToast".equals(str)) {
            runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    Toast.makeText(YmnSupport.this.uActivity, str2, 0).show();
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

    private Map<String, Object> jsonToMap(JSONObject jSONObject) {
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

    protected void onNewIntent(Intent intent) {
        YmnSdk.onNewIntent(intent);
    }

    protected void onActivityResult(int i, int i2, Intent intent) {
        YmnSdk.onActivityResult(i, i2, intent);
        if (i2 == 332211) {
            Log.d("zzx-test-Result", String.valueOf(intent.getIntExtra("code", 0)));
            Log.d("zzx-test-Result", intent.getStringExtra(NotificationCompat.CATEGORY_MESSAGE));
            this.listener.callBack(intent.getIntExtra("code", 0), intent.getStringExtra(NotificationCompat.CATEGORY_MESSAGE));
        }
    }

    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        YmnSdk.onRequestPermissionsResult(i, strArr, iArr);
    }

    public void onWindowFocusChanged(boolean z) {
        YmnSdk.onWindowFocusChanged(z, this.uActivity);
    }

    public void onBackPressed() {
        if (YmnSdk.isSupportFunction(IUserFeature.FUNCTION_EXIT)) {
            YmnSdk.callFunction(IUserFeature.FUNCTION_EXIT);
        }
    }
}
