package com.reyun.tracking.sdk;

import android.app.Application;
import android.content.ContentValues;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.reyun.tracking.utils.IAttributionQueryListener;
import com.reyun.tracking.utils.IDeepLinkListener;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.mipush.sdk.MiPushClient;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.bouncycastle.math.ec.Tnaf;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class Tracking {
    private static final int HEART_BEAT_TIME;
    public static final String KEY_ACCOUNT = "account";
    public static final String KEY_INSTALL_SEND_SUCCESS_TIME = "key_install_send_success_time";
    public static final String KEY_INTERVAL = "interval";
    public static final String KEY_TIME_TRACK = "time_track";
    public static boolean SEND_DATA_WITH_HEARTBEAT = false;
    private static final String STR_UNKNOWN = "unknown";
    public static final String TAG = "TrackingIO";
    private static final String VALUE_FROM = "tkio";
    public static final String XML_INSTALL = "tracking_install";
    public static final String XML_INTERVAL = "tracking_interval";
    public static final String XML_LOGIN = "tracking_login";
    public static final String XML_PKG_INFO = "tracking_pkgInfo";
    private static boolean _antiCheat = false;
    private static Map _installParams = null;
    private static String _oid = null;
    private static Map _startupParams = null;
    private static IAttributionQueryListener attributionQueryListener = null;
    private static Runnable dataShareRunnable = null;
    private static IDeepLinkListener deepLinkListener = null;
    private static boolean isInstallSent = false;
    private static boolean isPreInit = false;
    private static boolean isSDKInited = false;
    private static volatile boolean isSdkExit = false;
    private static Application mApplication = null;
    private static String m_appKey = null;
    private static String m_channelid = "_default_";
    private static Context m_context = null;
    private static Handler myTimehandler = null;
    private static Handler mydbhandler = null;
    private static p onDataUploadListener = null;
    private static o onSDKInitCompleteListener = null;
    private static String sCyid = null;
    private static Map sInstallParams = null;
    private static boolean uploadMac = true;

    static {
        HEART_BEAT_TIME = com.reyun.tracking.a.i.f4704a ? 10000 : 3000;
        isSDKInited = false;
        myTimehandler = new d(Looper.getMainLooper());
        mydbhandler = new i(Looper.getMainLooper());
    }

    public static void activation() {
        if (!isSDKInited) {
            Log.e(TAG, "必须先调用初始化方法");
        } else {
            a.a().a(new m(new e()));
        }
    }

    public static long addRecordToDbase(String str, JSONObject jSONObject, int i) {
        try {
            byte[] bArrJsonObjToByteArray = jsonObjToByteArray(jSONObject);
            ContentValues contentValues = new ContentValues();
            contentValues.put("what", str);
            contentValues.put("value", bArrJsonObjToByteArray);
            contentValues.put(RemoteMessageConst.Notification.PRIORITY, Integer.valueOf(i));
            return com.reyun.tracking.utils.i.a(m_context, TAG).a(contentValues);
        } catch (Throwable th) {
            com.reyun.tracking.a.a.b(TAG, "Exception in addRecordToDbase:" + th.getMessage());
            return -1L;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void afterInit(Map map, Map map2, boolean z) {
        if (m_context == null) {
            com.reyun.tracking.a.a.d(TAG, "context destoryed!");
            return;
        }
        o oVar = onSDKInitCompleteListener;
        if (oVar != null) {
            oVar.a();
        }
        sInstallParams = map2;
        com.reyun.tracking.a.a.d(TAG, "afterInit");
        com.reyun.tracking.utils.d.a(m_context, "gettime", "receive/gettime", new f(map));
        if (z) {
            com.reyun.tracking.a.a.p(m_context);
            com.reyun.tracking.a.a.q(m_context);
        }
    }

    public static void exitSdk() {
        isSDKInited = false;
        com.reyun.tracking.a.a.e();
        com.reyun.tracking.a.a.d();
        com.reyun.tracking.utils.p.b();
        Handler handler = myTimehandler;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
        a.a().a(new h(), 500L);
        com.reyun.tracking.utils.i.a(m_context, TAG).a();
    }

    public static String getAppId() {
        String str = m_appKey;
        return (str == null || "".equals(str)) ? "unknown" : m_appKey;
    }

    public static IAttributionQueryListener getAttributionQueryListener() {
        return attributionQueryListener;
    }

    public static String getChannelId() {
        String str = m_channelid;
        return (str == null || "".equals(str)) ? "unknown" : m_channelid;
    }

    static Context getContext() {
        return m_context;
    }

    public static Runnable getDataShareRunnable() {
        return dataShareRunnable;
    }

    public static IDeepLinkListener getDeepLinkListener() {
        return deepLinkListener;
    }

    public static String getDeviceId() {
        Context context = m_context;
        return context == null ? "unknown" : com.reyun.tracking.a.a.b(context);
    }

    public static String getImei2() {
        Context context = m_context;
        return context == null ? "unknown" : com.reyun.tracking.a.a.d(context);
    }

    public static String getMeid() {
        Context context = m_context;
        return context == null ? "unknown" : com.reyun.tracking.a.a.e(context);
    }

    public static p getOnDataUploadListener() {
        return onDataUploadListener;
    }

    public static boolean getUploadMac() {
        return uploadMac;
    }

    public static String getsCyid() {
        return sCyid;
    }

    public static void initWithKeyAndChannelId(Application application, InitParameters initParameters) {
        initWithKeyAndChannelId(application, initParameters.appKey, initParameters.channelId, initParameters.startupParams, initParameters.installParams, initParameters.cyid, initParameters.antiCheat);
    }

    public static void initWithKeyAndChannelId(Application application, String str, String str2) {
        Map map = (Map) null;
        initWithKeyAndChannelId(application, str, str2, map, map, (String) null, false);
    }

    public static void initWithKeyAndChannelId(Application application, String str, String str2, String str3, String str4, String str5, boolean z) {
        try {
            initWithKeyAndChannelId(application, str, str2, jsonToMap(new JSONObject(str3)), jsonToMap(new JSONObject(str4)), str5, z);
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void initWithKeyAndChannelId(Application application, String str, String str2, Map map, Map map2, String str3, boolean z) {
        if (!isPreInit) {
            Log.e(TAG, "initWithKeyAndChannelId Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        m_appKey = str;
        if (!com.reyun.tracking.a.a.a(str)) {
            Log.w(TAG, "Your appKey is incorrect! init failed!");
            return;
        }
        m_channelid = com.reyun.tracking.a.a.a(str2, "unknown", "initWithKeyAndChannelId : channelid is NULL");
        if (application == null || application.getApplicationContext() == null) {
            Log.w(TAG, "appContext can not be null!");
            return;
        }
        mApplication = application;
        Context applicationContext = application.getApplicationContext();
        m_context = applicationContext;
        if (applicationContext == null) {
            Log.e(TAG, "appContext can not be null!");
            return;
        }
        sCyid = str3;
        String strA = com.reyun.tracking.a.a.a(applicationContext);
        String strA2 = com.reyun.tracking.a.a.a(m_context, Process.myPid());
        if (strA2 == null) {
            Log.e(TAG, "processName is null! init FAILED!");
            return;
        }
        if (strA.equals("unknown")) {
            Log.e(TAG, "pkgName is unknown! init FAILED!");
            return;
        }
        if (!strA.equals(strA2)) {
            Log.e(TAG, "Only main process can init sdk");
            return;
        }
        Log.i(TAG, "Initial sdk successful!");
        if (isSDKInited) {
            return;
        }
        isSDKInited = true;
        _startupParams = map;
        _installParams = map2;
        _antiCheat = z;
        activation();
    }

    private static byte[] jsonObjToByteArray(JSONObject jSONObject) {
        if (jSONObject != null) {
            try {
                return jSONObject.toString().getBytes("utf-8");
            } catch (Throwable unused) {
            }
        }
        return null;
    }

    private static Map jsonToMap(JSONObject jSONObject) {
        HashMap map = new HashMap();
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            try {
                String next = itKeys.next();
                map.put(next, jSONObject.get(next));
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return map;
    }

    public static byte mapApi2Byte(String str) {
        if (str == "receive/batch") {
            return (byte) 1;
        }
        if (str == "receive/tkio/startup") {
            return (byte) 3;
        }
        if (str == "receive/tkio/register") {
            return (byte) 4;
        }
        if (str == "receive/tkio/install") {
            return (byte) 2;
        }
        if (str == "receive/tkio/loggedin") {
            return (byte) 5;
        }
        if (str == "receive/tkio/payment") {
            return (byte) 6;
        }
        if (str == "receive/tkio/event") {
            return (byte) 7;
        }
        if (str == "receive/gettime") {
            return (byte) 0;
        }
        if (str == "receive/pkginfo") {
            return (byte) 17;
        }
        if (str == "dpquery") {
            return (byte) 13;
        }
        if (str == "receive/tkio/appduration") {
            return Tnaf.POW_2_WIDTH;
        }
        if (str == "receive/tkio/pageduration") {
            return (byte) 14;
        }
        if (str == "receive/tkio/adshow") {
            return (byte) 10;
        }
        if (str == "receive/tkio/adclick") {
            return (byte) 11;
        }
        return str == "receive/tkio/sdklog" ? (byte) 21 : (byte) -1;
    }

    public static void preInit(Context context, String str) {
        if (!com.reyun.tracking.a.a.a(str)) {
            Log.e(TAG, "Your appKey is incorrect! preInit failed!");
        } else {
            isPreInit = true;
            com.reyun.tracking.a.a.d(TAG, "preInit init success");
        }
    }

    private static com.reyun.tracking.utils.k queryRecordFromDatabase(int i) {
        try {
            return com.reyun.tracking.utils.i.a(m_context, TAG).a(i);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void removeDataShareRunnable() {
        dataShareRunnable = null;
    }

    public static void sendFailedRecord() {
        a.a().b(new k());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int sendFailureRecord(int i) {
        try {
            com.reyun.tracking.a.a.a(TAG, "sendFailureRecord");
            com.reyun.tracking.utils.k kVarQueryRecordFromDatabase = queryRecordFromDatabase(i);
            if (kVarQueryRecordFromDatabase != null && kVarQueryRecordFromDatabase.f4750a != null && kVarQueryRecordFromDatabase.f4750a.size() != 0) {
                com.reyun.tracking.a.a.a(TAG, "sendFailureRecord :" + kVarQueryRecordFromDatabase.f4750a.size());
                mydbhandler.sendMessage(mydbhandler.obtainMessage(1, i, 0, kVarQueryRecordFromDatabase));
                return kVarQueryRecordFromDatabase.f4750a.size();
            }
            com.reyun.tracking.a.a.a(TAG, "sendFailureRecord-nocache");
            return 0;
        } catch (Throwable th) {
            com.reyun.tracking.a.a.a(TAG, "sendFailureRecord!" + th.getMessage());
            return 0;
        }
    }

    private static void sendOrSava(String str, String str2, JSONObject jSONObject, String str3) {
        sendOrSava(str, str2, jSONObject, str3, 1);
    }

    private static void sendOrSava(String str, String str2, JSONObject jSONObject, String str3, int i) {
        sendOrSava(str, str2, jSONObject, str3, i, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void sendOrSava(String str, String str2, JSONObject jSONObject, String str3, int i, Map map) {
        boolean z = "install".equals(str) || isInstallSent;
        boolean z2 = com.reyun.tracking.utils.b.a(m_context) && !SEND_DATA_WITH_HEARTBEAT && z;
        com.reyun.tracking.a.a.d(TAG, "sendOrSave:" + z2 + Constants.ACCEPT_TIME_SEPARATOR_SP + z + " what:" + str + " what2:" + str2 + " isInstallSent:" + isInstallSent);
        a.a().a(new l(str, jSONObject, str2, z2, str3, i, map));
    }

    public static void setAdClick(String str, String str2) {
        setAdClick(str, str2, (Map) null);
    }

    public static void setAdClick(String str, String str2, String str3) {
        try {
            setAdClick(str, str2, jsonToMap(new JSONObject(str3)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setAdClick(String str, String str2, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setAdClick Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setAdClick Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setAdClick Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            Log.w(TAG, "setAdClick Error: adPlatform cannot be NULL");
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            Log.w(TAG, "setAdClick Error: adId cannot be NULL");
            return;
        }
        try {
            com.reyun.tracking.a.a.b(map);
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "adclick", com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
            JSONObject jSONObject = jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY);
            jSONObject.put("_adPlatform", str);
            jSONObject.put("_adId", str2);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
            sendOrSava("adclick", "adclick", jSONObjectA, "receive/tkio/adclick");
        } catch (Throwable unused) {
        }
    }

    public static void setAdShow(String str, String str2, String str3) {
        setAdShow(str, str2, str3, (Map) null);
    }

    public static void setAdShow(String str, String str2, String str3, String str4) {
        try {
            setAdShow(str, str2, str3, jsonToMap(new JSONObject(str4)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setAdShow(String str, String str2, String str3, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setAdShow Error preInit init failed :Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setAdShow Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setAdShow Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            Log.w(TAG, "setAdShow Error: adPlatform cannot be NULL");
            return;
        }
        if (TextUtils.isEmpty(str2)) {
            Log.w(TAG, "setAdShow Error: adId cannot be NULL");
            return;
        }
        try {
            com.reyun.tracking.a.a.b(map);
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "adshow", com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
            JSONObject jSONObject = jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY);
            jSONObject.put("_adPlatform", str);
            jSONObject.put("_adId", str2);
            jSONObject.put("_fill", str3);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
            sendOrSava("adshow", "adshow", jSONObjectA, "receive/tkio/adshow");
        } catch (Throwable unused) {
        }
    }

    public static void setAppDuration(long j) {
        setAppDuration(j, (Map) null);
    }

    public static void setAppDuration(long j, String str) {
        try {
            setAppDuration(j, jsonToMap(new JSONObject(str)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setAppDuration(long j, Map map) {
        try {
            if (!isPreInit) {
                Log.e(TAG, "setAppDuration Error:preInit init failed! Did you call the method 'preInit'?");
                return;
            }
            com.reyun.tracking.a.a.b(map);
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "appduration", com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
            JSONObject jSONObject = jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY);
            String strC = com.reyun.tracking.a.a.c(jSONObject.optString("_deviceid", "unknown") + jSONObject.optLong("_create_timestamp", System.currentTimeMillis()));
            jSONObject.put("_appduration", j / 1000);
            jSONObject.put("_sessionid", strC);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
            sendOrSava("appduration", "appduration", jSONObjectA, "receive/tkio/appduration");
        } catch (Throwable unused) {
        }
    }

    public static void setAttributionQueryListener(IAttributionQueryListener iAttributionQueryListener) {
        attributionQueryListener = iAttributionQueryListener;
    }

    public static void setDataShare(boolean z) {
        dataShareRunnable = new g(z);
    }

    public static void setDebugMode(boolean z) {
        com.reyun.tracking.a.i.f4704a = z;
    }

    public static void setDeepLinkListener(IDeepLinkListener iDeepLinkListener) {
        deepLinkListener = iDeepLinkListener;
    }

    public static void setEncrypt(boolean z) {
        com.reyun.tracking.a.i.d = z;
    }

    public static void setEvent(String str) {
        setEvent(str, (Map) null);
    }

    public static void setEvent(String str, String str2) {
        try {
            setEvent(str, jsonToMap(new JSONObject(str2)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setEvent(String str, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setEvent Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setEvent Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        String strA = com.reyun.tracking.a.a.a(map);
        if (strA != null) {
            Log.w(TAG, "setEvent Error: Invalid key of map " + strA);
            return;
        }
        String strA2 = com.reyun.tracking.a.a.a(str, "unknown", "调用setEvent时 eventName 为空");
        if ("unknown".equals(strA2)) {
            Log.w(TAG, "setEvent Error: param eventName cannot be NULL");
            return;
        }
        com.reyun.tracking.a.a.b(map);
        if (!"electricityDataEvent".equals(strA2) && !"gyroDataEvent".equals(strA2) && !"paymentStart".equals(strA2) && !com.tkay.expressad.foundation.d.f.i.equals(strA2) && !"order".equals(strA2) && !"invoke".equals(strA2)) {
            if (!strA2.matches("^event_([1-9]|1[0-9]|2[0-9]|30)$")) {
                Log.w(TAG, "setEvent Error: only supported eventName: event_1 - event_12 or invoke");
                return;
            } else {
                if (map == null) {
                    map = new HashMap();
                }
                map.put("_isReyunDefaultEvent", "1");
            }
        }
        try {
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, strA2, com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
            com.reyun.tracking.a.a.a(map, jSONObjectA);
            sendOrSava("userEvent", "userEvent", jSONObjectA, "receive/tkio/event");
        } catch (Throwable unused) {
        }
    }

    public static void setEventJsonString(String str, String str2) {
        try {
            setEvent(str, jsonToMap(new JSONObject(str2)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setIsInstallSent(boolean z) {
        isInstallSent = z;
    }

    public static void setLoginSuccessBusiness(String str) {
        setLoginSuccessBusiness(str, (String) null, (Map) null);
    }

    public static void setLoginSuccessBusiness(String str, String str2, String str3) {
        try {
            setLoginSuccessBusiness(str, str2, jsonToMap(new JSONObject(str3)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setLoginSuccessBusiness(String str, String str2, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setLoginSuccessBusiness Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setLoginSuccessBusiness Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setLoginSuccessBusiness Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        com.reyun.tracking.a.a.b(map);
        String strA = com.reyun.tracking.a.a.a(str, "unknown", "setRegisterWithAccountID Warning: param account is NULL");
        com.reyun.tracking.utils.f.b(m_context, XML_LOGIN, KEY_ACCOUNT, strA);
        JSONObject jSONObjectA = null;
        try {
            jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "loggedin", strA, m_channelid, false);
            if (str2 != null) {
                jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY).put("serverid", str2);
            }
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (jSONObjectA != null) {
            sendOrSava("loggedin", HostConstant.login, jSONObjectA, "receive/tkio/loggedin");
        }
    }

    public static void setLoginSuccessBusiness(String str, Map map) {
        setLoginSuccessBusiness(str, (String) null, map);
    }

    public static void setOnDataUploadListener(p pVar) {
        onDataUploadListener = pVar;
    }

    public static void setOnSDKInitCompleteListener(o oVar) {
        onSDKInitCompleteListener = oVar;
    }

    public static void setOrder(String str, String str2, float f) {
        setOrder(str, str2, f, (Map) null);
    }

    public static void setOrder(String str, String str2, float f, String str3) {
        try {
            setOrder(str, str2, f, jsonToMap(new JSONObject(str3)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setOrder(String str, String str2, float f, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setOrder Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if ("unknown".equals(com.reyun.tracking.a.a.a(str, "unknown", "调用 setOrder时 transactionId 为空"))) {
            Log.w(TAG, "setOrder Error: param transactionId cannot be NULL");
            return;
        }
        String strA = com.reyun.tracking.a.a.a(str2, "unknown", "调用 setPayment时 paymentType 为空");
        if ("unknown".equals(strA)) {
            Log.w(TAG, "setOrder Error: param currencyType cannot be NULL");
            return;
        }
        if (f <= 0.0f) {
            Log.w(TAG, "setOrder Error: param currencyAmount cannot <= 0");
            return;
        }
        if (map == null) {
            map = new HashMap();
        }
        map.put("_transactionId", str);
        map.put("_currencytype", strA);
        map.put("_currencyAmount", Float.valueOf(f));
        setEvent("order", map);
    }

    public static void setPageDuration(String str, long j) {
        setPageDuration(str, j, (Map) null);
    }

    public static void setPageDuration(String str, long j, String str2) {
        try {
            setPageDuration(str, j, jsonToMap(new JSONObject(str2)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setPageDuration(String str, long j, Map map) {
        try {
            if (!isPreInit) {
                Log.e(TAG, "setPageDuration Error:preInit init failed! Did you call the method 'preInit'?");
                return;
            }
            if (str.length() > 64) {
                str = str.substring(str.length() - 64);
            }
            com.reyun.tracking.a.a.b(map);
            JSONObject jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "pageduration", com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
            JSONObject jSONObject = jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY);
            jSONObject.put("_sessionid", com.reyun.tracking.a.a.c(jSONObject.optString("_deviceid", "unknown") + jSONObject.optLong("_create_timestamp", System.currentTimeMillis())));
            jSONObject.put("_pageid", str);
            jSONObject.put("_pageduration", j / 1000);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
            sendOrSava("pageduration", "pageduration", jSONObjectA, "receive/tkio/pageduration");
        } catch (Throwable unused) {
        }
    }

    public static void setPayment(String str, String str2, String str3, float f) {
        setPayment(str, str2, str3, f, (Map) null);
    }

    public static void setPayment(String str, String str2, String str3, float f, String str4) {
        try {
            setPayment(str, str2, str3, f, jsonToMap(new JSONObject(str4)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setPayment(String str, String str2, String str3, float f, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setPayment Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setPayment Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setPayment Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        String strA = com.reyun.tracking.a.a.a(str, "unknown", "调用 setPayment时 transactionId 为空");
        if ("unknown".equals(strA)) {
            Log.w(TAG, "setPayment Error: param transactionId cannot be NULL");
            return;
        }
        String strA2 = com.reyun.tracking.a.a.a(str2, "unknown", "调用 setPayment时 paymentType 为空");
        if ("unknown".equals(strA2)) {
            Log.w(TAG, "setPayment Error: param paymentType cannot be NULL");
            return;
        }
        if (str3 != null && str3.length() > 3) {
            Log.w(TAG, "setPayment Error:param  currencyType's length cannot bigger than 3");
            return;
        }
        com.reyun.tracking.a.a.b(map);
        String strA3 = com.reyun.tracking.a.a.a(str3, "unknown", "调用 setPayment时 currencyType 为空");
        if ("unknown".equals(strA3)) {
            Log.w(TAG, "setPayment Error:param  currencyType cannot be NULL");
            return;
        }
        if (f <= 0.0f) {
            Log.w(TAG, "setPayment Error: param currencyAmount cannot <= 0");
            return;
        }
        JSONObject jSONObjectA = null;
        try {
            jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "payment", com.reyun.tracking.utils.f.a(m_context, XML_LOGIN, KEY_ACCOUNT, "unknown"), m_channelid, false);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        try {
            JSONObject jSONObject = jSONObjectA.getJSONObject(TTLiveConstants.CONTEXT_KEY);
            if (jSONObject != null) {
                jSONObject.put("_transactionId", strA);
                jSONObject.put("_paymentType", strA2);
                jSONObject.put("_currencytype", strA3);
                jSONObject.put("_currencyAmount", f + "");
                if (map != null) {
                    com.reyun.tracking.a.a.a(map, jSONObjectA);
                }
            }
        } catch (JSONException unused) {
        }
        if (jSONObjectA != null) {
            sendOrSava("payment", "payment", jSONObjectA, "receive/tkio/payment");
        }
    }

    public static void setPaymentStart(String str, String str2, String str3, float f) {
        setPaymentStart(str, str2, str3, f, (Map) null);
    }

    public static void setPaymentStart(String str, String str2, String str3, float f, String str4) {
        try {
            setPaymentStart(str, str2, str3, f, jsonToMap(new JSONObject(str4)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setPaymentStart(String str, String str2, String str3, float f, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setPaymentStart Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setPaymentStart Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setPaymentStart Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        String strA = com.reyun.tracking.a.a.a(str, "unknown", "调用 setPaymentStart时 transactionId 为空");
        if ("unknown".equals(strA)) {
            Log.w(TAG, "setPaymentStart Error: param transactionId cannot be NULL");
            return;
        }
        String strA2 = com.reyun.tracking.a.a.a(str2, "unknown", "调用 setPaymentStart时 paymentType 为空");
        if ("unknown".equals(strA2)) {
            Log.w(TAG, "setPaymentStart Error: param paymentType cannot be NULL");
            return;
        }
        com.reyun.tracking.a.a.b(map);
        if (str3 != null && str3.length() > 3) {
            Log.w(TAG, "setPayment Error:param  currencyType's length cannot bigger than 3");
            return;
        }
        String strA3 = com.reyun.tracking.a.a.a(str3, "unknown", "调用 setPaymentStart时 currencyType 为空");
        if ("unknown".equals(strA3)) {
            Log.w(TAG, "setPaymentStart Error: param currencyType cannot be NULL");
            return;
        }
        if (f <= 0.0f) {
            Log.w(TAG, "setPaymentStart Error: param currencyamount cannot <= 0");
            return;
        }
        if (map == null) {
            map = new HashMap();
        }
        map.put("_transactionId", strA);
        map.put("_paymentType", strA2);
        map.put("_currencytype", strA3);
        map.put("_currencyAmount", Float.valueOf(f));
        setEvent("paymentStart", map);
    }

    public static void setRegisterWithAccountID(String str) {
        setRegisterWithAccountID(str, (Map) null);
    }

    public static void setRegisterWithAccountID(String str, String str2) {
        try {
            setRegisterWithAccountID(str, jsonToMap(new JSONObject(str2)));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public static void setRegisterWithAccountID(String str, Map map) {
        if (!isPreInit) {
            Log.e(TAG, "setRegisterWithAccountID Error:preInit init failed! Did you call the method 'preInit'?");
            return;
        }
        if (m_context == null) {
            Log.w(TAG, "setRegisterWithAccountID Error: Null context! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        if (!com.reyun.tracking.a.a.a(m_appKey)) {
            Log.w(TAG, "setRegisterWithAccountID Error: Invalid appKey! Did you call the method 'initWithKeyAndChannelId'?");
            return;
        }
        String strA = com.reyun.tracking.a.a.a(str, "unknown", "setRegisterWithAccountID Warning: param account is NULL");
        if ("unknown".equals(strA)) {
            Log.w(TAG, "setRegisterWithAccountID Error: param account cannot be NULL! Upload register data failed");
            return;
        }
        com.reyun.tracking.a.a.b(map);
        com.reyun.tracking.utils.f.b(m_context, XML_LOGIN, KEY_ACCOUNT, strA);
        JSONObject jSONObjectA = null;
        try {
            jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, MiPushClient.COMMAND_REGISTER, strA, m_channelid, false);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (jSONObjectA != null) {
            sendOrSava(MiPushClient.COMMAND_REGISTER, MiPushClient.COMMAND_REGISTER, jSONObjectA, "receive/tkio/register");
        }
    }

    public static void setStartupInternal(Map map) {
        com.reyun.tracking.a.a.d(TAG, "setStartupInternal");
        JSONObject jSONObjectA = null;
        try {
            jSONObjectA = com.reyun.tracking.a.h.a(m_context, m_appKey, "startup", "unknown", m_channelid, false);
            if (map != null) {
                com.reyun.tracking.a.a.a(map, jSONObjectA);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (jSONObjectA != null) {
            sendOrSava("startup", "startup", jSONObjectA, "receive/tkio/startup");
        }
        sendFailedRecord();
    }

    public static void setUploadMac(boolean z) {
        uploadMac = z;
    }

    public static void setUseTcp(boolean z) {
        com.reyun.tracking.a.i.c = z;
    }
}
