package com.tkay.network.mintegral;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.MBridgeSDK;
import com.mbridge.msdk.out.ChannelManager;
import com.mbridge.msdk.out.CustomInfoManager;
import com.mbridge.msdk.out.MBridgeSDKFactory;
import com.mbridge.msdk.system.a;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBidRequestInfo;
import com.tkay.core.api.TYBidRequestInfoListener;
import com.tkay.core.api.TYInitMediation;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public class MintegralTYInitManager extends TYInitMediation {
    public static final String TAG = MintegralTYInitManager.class.getSimpleName();
    private static volatile MintegralTYInitManager g;
    private String b;
    private String c;
    private String d;
    private String e;
    private MintegralTYCustomController i;
    private Map<String, WeakReference> h = new ConcurrentHashMap();
    int a = 0;
    private final Handler f = new Handler(Looper.getMainLooper());

    public interface InitCallback {
        void onError(Throwable th);

        void onSuccess();
    }

    @Override
    public String getNetworkName() {
        return "Mintegral";
    }

    @Override
    public String getNetworkSDKClass() {
        return "com.mbridge.msdk.MBridgeSDK";
    }

    private MintegralTYInitManager() {
    }

    public static MintegralTYInitManager getInstance() {
        if (g == null) {
            synchronized (MintegralTYInitManager.class) {
                if (g == null) {
                    g = new MintegralTYInitManager();
                }
            }
        }
        return g;
    }

    public void setMintegralTYCustomerController(MintegralTYCustomController mintegralTYCustomController) {
        if (mintegralTYCustomController != null) {
            this.i = mintegralTYCustomController;
        }
    }

    public synchronized void initSDK(Context context, Map<String, Object> map) {
        initSDK(context, map, null);
    }

    @Override
    public synchronized void initSDK(Context context, final Map<String, Object> map, final MediationInitCallback mediationInitCallback) {
        final Context applicationContext = context.getApplicationContext();
        try {
            this.a = TYSDK.getPersionalizedAdStatus();
        } catch (Throwable unused) {
        }
        this.f.post(new Runnable() {
            @Override
            public final void run() {
                Map<String, String> mBConfigurationMap;
                String str = (String) map.get("appid");
                String str2 = (String) map.get("appkey");
                Object obj = map.get(TYAdConst.KEY.WECHAT_APPID);
                String string = obj != null ? obj.toString() : "";
                int i = 1;
                if (map.containsKey(TYInitMediation.KEY_LOCAL)) {
                    MintegralTYInitManager.this.d = str;
                    MintegralTYInitManager.this.e = str2;
                } else if (MintegralTYInitManager.this.d != null && MintegralTYInitManager.this.e != null && (!TextUtils.equals(MintegralTYInitManager.this.d, str) || !TextUtils.equals(MintegralTYInitManager.this.e, str2))) {
                    MintegralTYInitManager mintegralTYInitManager = MintegralTYInitManager.this;
                    mintegralTYInitManager.checkToSaveInitData(mintegralTYInitManager.getNetworkName(), map, MintegralTYInitManager.this.d, MintegralTYInitManager.this.e);
                    MintegralTYInitManager.this.d = null;
                    MintegralTYInitManager.this.e = null;
                }
                if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                    return;
                }
                try {
                    a mBridgeSDK = MBridgeSDKFactory.getMBridgeSDK();
                    if (!TextUtils.isEmpty(MintegralTYInitManager.this.b) && !TextUtils.isEmpty(MintegralTYInitManager.this.c) && TextUtils.equals(MintegralTYInitManager.this.b, str) && TextUtils.equals(MintegralTYInitManager.this.c, str2)) {
                        if (MintegralTYInitManager.this.i != null) {
                            mBridgeSDK.setUserPrivateInfoType(applicationContext, MBridgeConstans.AUTHORITY_GENERAL_DATA, MintegralTYInitManager.this.i.getAuthorityGeneralData() ? 1 : 0);
                            mBridgeSDK.setUserPrivateInfoType(applicationContext, MBridgeConstans.AUTHORITY_DEVICE_ID, MintegralTYInitManager.this.i.getAuthorityDeviceID() ? 1 : 0);
                            Context context2 = applicationContext;
                            if (!MintegralTYInitManager.this.i.getAuthoritySerialID()) {
                                i = 0;
                            }
                            mBridgeSDK.setUserPrivateInfoType(context2, MBridgeConstans.AUTHORITY_SERIAL_ID, i);
                        }
                        MintegralTYInitManager.a(MintegralTYInitManager.this, mBridgeSDK);
                        if (mediationInitCallback != null) {
                            mediationInitCallback.onSuccess();
                            return;
                        }
                        return;
                    }
                    ChannelManager.setChannel("Y+H6DFttYrPQYcIeicKwJQKQYrN=");
                    if (!TextUtils.isEmpty(string)) {
                        mBConfigurationMap = mBridgeSDK.getMBConfigurationMap(str, str2, string);
                    } else {
                        mBConfigurationMap = mBridgeSDK.getMBConfigurationMap(str, str2);
                    }
                    if (MintegralTYInitManager.this.i != null) {
                        mBridgeSDK.setUserPrivateInfoType(applicationContext, MBridgeConstans.AUTHORITY_GENERAL_DATA, MintegralTYInitManager.this.i.getAuthorityGeneralData() ? 1 : 0);
                        mBridgeSDK.setUserPrivateInfoType(applicationContext, MBridgeConstans.AUTHORITY_DEVICE_ID, MintegralTYInitManager.this.i.getAuthorityDeviceID() ? 1 : 0);
                        Context context3 = applicationContext;
                        if (!MintegralTYInitManager.this.i.getAuthoritySerialID()) {
                            i = 0;
                        }
                        mBridgeSDK.setUserPrivateInfoType(context3, MBridgeConstans.AUTHORITY_SERIAL_ID, i);
                    }
                    mBridgeSDK.init(mBConfigurationMap, applicationContext);
                    if (map.containsKey(f.k.d)) {
                        mBridgeSDK.setCoppaStatus(applicationContext, TYInitMediation.getBooleanFromMap(map, f.k.d));
                    }
                    MintegralTYInitManager.this.b = str;
                    MintegralTYInitManager.this.c = str2;
                    MintegralTYInitManager.a(MintegralTYInitManager.this, mBridgeSDK);
                    MintegralTYInitManager.a(MintegralTYInitManager.this, applicationContext);
                    if (mediationInitCallback != null) {
                        mediationInitCallback.onSuccess();
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                    MediationInitCallback mediationInitCallback2 = mediationInitCallback;
                    if (mediationInitCallback2 != null) {
                        mediationInitCallback2.onFail(th.getMessage());
                    }
                }
            }
        });
    }

    private void a(MBridgeSDK mBridgeSDK) {
        boolean z = this.a == 2;
        mBridgeSDK.setDoNotTrackStatus(z);
        if (TYSDK.isNetworkLogDebug()) {
            Log.i(TAG, "setDoNotTrackStatus:".concat(String.valueOf(z)));
        }
    }

    final class 2 implements Application.ActivityLifecycleCallbacks {
        @Override
        public final void onActivityCreated(Activity activity, Bundle bundle) {
        }

        @Override
        public final void onActivityDestroyed(Activity activity) {
        }

        @Override
        public final void onActivityPaused(Activity activity) {
        }

        @Override
        public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        }

        @Override
        public final void onActivityStarted(Activity activity) {
        }

        @Override
        public final void onActivityStopped(Activity activity) {
        }

        2() {
        }

        @Override
        public final void onActivityResumed(Activity activity) {
            MBridgeSDKFactory.getMBridgeSDK().updateDialogWeakActivity(new WeakReference<>(activity));
        }
    }

    private void a(Context context) {
        if (context instanceof Application) {
            ((Application) context).registerActivityLifecycleCallbacks(new 2());
        }
    }

    protected final void a(String str, WeakReference weakReference) {
        try {
            this.h.put(str, weakReference);
        } catch (Throwable unused) {
        }
    }

    private void a() {
        try {
            for (Map.Entry<String, WeakReference> entry : this.h.entrySet()) {
                if (entry.getValue().get() == null) {
                    this.h.remove(entry.getKey());
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public String getNetworkVersion() {
        return MintegralTYConst.getNetworkVersion();
    }

    @Override
    public Map<String, Boolean> getPluginClassStatus() {
        HashMap map = new HashMap();
        map.put("mbridge_newinterstitial.aar", Boolean.FALSE);
        map.put("mbridge_mbbanner.aar", Boolean.FALSE);
        map.put("mbridge_mbbid.aar", Boolean.FALSE);
        map.put("mbridge_mbjscommon.aar", Boolean.FALSE);
        map.put("mbridge_mbnative.aar", Boolean.FALSE);
        map.put("mbridge_nativeex.aar", Boolean.FALSE);
        map.put("mbridge_playercommon.aar", Boolean.FALSE);
        map.put("mbridge_reward.aar", Boolean.FALSE);
        map.put("mbridge_videocommon.aar", Boolean.FALSE);
        map.put("mbridge_videojs.aar", Boolean.FALSE);
        map.put("mbridge_mbnativeadvanced.aar", Boolean.FALSE);
        map.put("mbridge_mbsplash.aar", Boolean.FALSE);
        map.put("mbridge_chinasame.aar", Boolean.FALSE);
        map.put("recyclerview-*.aar", Boolean.FALSE);
        try {
            map.put("mbridge_newinterstitial.aar", Boolean.TRUE);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        try {
            map.put("mbridge_mbbanner.aar", Boolean.TRUE);
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
        try {
            map.put("mbridge_mbbid.aar", Boolean.TRUE);
        } catch (Throwable th3) {
            th3.printStackTrace();
        }
        try {
            map.put("mbridge_mbjscommon.aar", Boolean.TRUE);
        } catch (Throwable th4) {
            th4.printStackTrace();
        }
        try {
            map.put("mbridge_mbnative.aar", Boolean.TRUE);
        } catch (Throwable th5) {
            th5.printStackTrace();
        }
        try {
            map.put("mbridge_nativeex.aar", Boolean.TRUE);
        } catch (Throwable th6) {
            th6.printStackTrace();
        }
        try {
            map.put("mbridge_playercommon.aar", Boolean.TRUE);
        } catch (Throwable th7) {
            th7.printStackTrace();
        }
        try {
            map.put("mbridge_reward.aar", Boolean.TRUE);
        } catch (Throwable th8) {
            th8.printStackTrace();
        }
        try {
            map.put("mbridge_videocommon.aar", Boolean.TRUE);
        } catch (Throwable th9) {
            th9.printStackTrace();
        }
        try {
            map.put("mbridge_videojs.aar", Boolean.TRUE);
        } catch (Throwable th10) {
            th10.printStackTrace();
        }
        try {
            map.put("mbridge_mbnativeadvanced.aar", Boolean.TRUE);
        } catch (Throwable th11) {
            th11.printStackTrace();
        }
        try {
            map.put("mbridge_mbsplash.aar", Boolean.TRUE);
        } catch (Throwable th12) {
            th12.printStackTrace();
        }
        try {
            map.put("mbridge_chinasame.aar", Boolean.TRUE);
        } catch (Throwable th13) {
            th13.printStackTrace();
        }
        try {
            map.put("recyclerview-*.aar", Boolean.TRUE);
        } catch (Throwable th14) {
            th14.printStackTrace();
        }
        return map;
    }

    @Override
    public List getResourceStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("mbridge_reward_activity_video_templete");
        return arrayList;
    }

    final void a(final Context context, final Map<String, Object> map, final Map<String, Object> map2, final int i, final TYBidRequestInfoListener tYBidRequestInfoListener) {
        getInstance().initSDK(context, map, new MediationInitCallback() {
            @Override
            public final void onSuccess() {
                MintegralTYInitManager.this.runOnThreadPool(new Runnable() {
                    @Override
                    public final void run() {
                        MintegralBidRequestInfo mintegralBidRequestInfo = new MintegralBidRequestInfo(context, map, MintegralTYInitManager.this.getNetworkVersion());
                        if (i == 2) {
                            mintegralBidRequestInfo.fillBannerData(map);
                        }
                        if (i == 0) {
                            mintegralBidRequestInfo.fillNativeExpressData(map, map2);
                        }
                        if (!mintegralBidRequestInfo.isValid()) {
                            if (tYBidRequestInfoListener != null) {
                                tYBidRequestInfoListener.onFailed(TYBidRequestInfo.BIDTOKEN_EMPTY_ERROR_TYPE);
                            }
                        } else if (tYBidRequestInfoListener != null) {
                            tYBidRequestInfoListener.onSuccess(mintegralBidRequestInfo);
                        }
                    }
                });
            }

            @Override
            public final void onFail(String str) {
                TYBidRequestInfoListener tYBidRequestInfoListener2 = tYBidRequestInfoListener;
                if (tYBidRequestInfoListener2 != null) {
                    tYBidRequestInfoListener2.onFailed(str);
                }
            }
        });
    }

    public void setCustomInfo(int i, Map<String, Object> map) {
        try {
            String stringByMap = getStringByMap(map, "unitid");
            String stringByMap2 = getStringByMap(map, "tp_info");
            printLog("setCustomInfo() >>> customData = " + stringByMap2 + " unitId = " + stringByMap);
            if (TextUtils.isEmpty(stringByMap2)) {
                return;
            }
            CustomInfoManager.getInstance().setCustomInfo(stringByMap, i, stringByMap2);
        } catch (Exception unused) {
        }
    }

    public static String getStringByMap(Map<String, Object> map, String str) {
        if (map != null && !TextUtils.isEmpty(str)) {
            try {
                Object obj = map.get(str);
                if (obj instanceof String) {
                    return (String) obj;
                }
                if (obj != null) {
                    return obj.toString();
                }
            } catch (Exception unused) {
            }
        }
        return "";
    }

    public static void printLog(String str) {
        if (TYSDK.isNetworkLogDebug()) {
            Log.d("MintegralTYInitManager", str);
        }
    }

    static void a(MintegralTYInitManager mintegralTYInitManager, MBridgeSDK mBridgeSDK) {
        boolean z = mintegralTYInitManager.a == 2;
        mBridgeSDK.setDoNotTrackStatus(z);
        if (TYSDK.isNetworkLogDebug()) {
            Log.i(TAG, "setDoNotTrackStatus:".concat(String.valueOf(z)));
        }
    }

    static void a(MintegralTYInitManager mintegralTYInitManager, Context context) {
        if (context instanceof Application) {
            ((Application) context).registerActivityLifecycleCallbacks(mintegralTYInitManager.new 2());
        }
    }
}
