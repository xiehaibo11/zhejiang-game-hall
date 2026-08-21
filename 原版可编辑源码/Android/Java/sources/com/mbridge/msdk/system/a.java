package com.mbridge.msdk.system;

import android.app.Activity;
import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.database.sqlite.SQLiteDatabase;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.MBridgeSDK;
import com.mbridge.msdk.click.c;
import com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean;
import com.mbridge.msdk.foundation.controller.authoritycontroller.CallBackForDeveloper;
import com.mbridge.msdk.foundation.controller.b;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.download.MBDownloadConfig;
import com.mbridge.msdk.foundation.download.MBDownloadManager;
import com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper;
import com.mbridge.msdk.foundation.download.resource.ResourceConfig;
import com.mbridge.msdk.foundation.download.utils.ILogger;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.o;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.DeveloperTransferIdInfo;
import com.mbridge.msdk.out.SDKInitStatusListener;
import com.mbridge.msdk.widget.custom.CustomViewMessageWrap;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

public final class a implements MBridgeSDK {
    public static Map<String, String> a;
    private volatile Context d;
    private SDKInitStatusListener i;
    private volatile MBridgeSDK.PLUGIN_LOAD_STATUS c = MBridgeSDK.PLUGIN_LOAD_STATUS.INITIAL;
    public boolean b = true;
    private boolean e = false;
    private BroadcastReceiver f = null;
    private boolean g = false;
    private BroadcastReceiver h = null;
    private boolean j = false;
    private boolean k = false;
    private final Application.ActivityLifecycleCallbacks l = new Application.ActivityLifecycleCallbacks() {
        @Override
        public final void onActivityResumed(Activity activity) {
        }

        @Override
        public final void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
        }

        @Override
        public final void onActivityCreated(Activity activity, Bundle bundle) {
            o.a().c();
        }

        @Override
        public final void onActivityStarted(Activity activity) {
            int iB = com.mbridge.msdk.foundation.controller.a.f().b();
            z.d("com.mbridge.msdk", "onActivityStarted currentActivityNum:" + iB);
            z.d("com.mbridge.msdk", "onActivityStarted isCoolStart:" + a.this.b);
            if (!a.this.b && iB == 0) {
                e.a("1");
            }
            c.a(activity, iB, a.this.b, a.this.d);
            a.this.b = false;
            com.mbridge.msdk.foundation.controller.a.f().a(iB + 1);
        }

        @Override
        public final void onActivityPaused(Activity activity) {
            z.d("com.mbridge.msdk", "onActivityPaused currentActivityNum:" + com.mbridge.msdk.foundation.controller.a.f().b());
        }

        @Override
        public final void onActivityStopped(Activity activity) {
            int iB = com.mbridge.msdk.foundation.controller.a.f().b();
            z.d("com.mbridge.msdk", "onActivityStopped currentActivityNum:" + iB);
            if (iB == 1 || iB == 0) {
                e.a("2");
            }
            com.mbridge.msdk.foundation.controller.a.f().a(iB - 1);
        }

        @Override
        public final void onActivityDestroyed(Activity activity) {
            o.a().d();
        }
    };

    @Override
    public final void setThirdPartyFeatures(Map<String, Object> map) {
    }

    @Override
    public final void showUserPrivateInfoTips(Context context, CallBackForDeveloper callBackForDeveloper) {
    }

    private boolean a(Context context, String str) {
        if (context != null) {
            try {
                PackageInfo packageInfo = context.getPackageManager().getPackageInfo(context.getPackageName(), 2);
                if (packageInfo != null && packageInfo.receivers != null) {
                    for (ActivityInfo activityInfo : packageInfo.receivers) {
                        if (activityInfo != null && str.equals(activityInfo.name)) {
                            return true;
                        }
                    }
                }
            } catch (PackageManager.NameNotFoundException e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }
        return false;
    }

    private void a() {
        this.j = false;
        try {
            b.a().a(a, this.d);
            this.c = MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED;
            new Thread(new Runnable() {
                @Override
                public final void run() throws Throwable {
                    if (a.this.d != null) {
                        try {
                            CustomViewMessageWrap.copyViewFile(a.this.d, "mbridge_download_dialog_view.xml");
                        } catch (Exception unused) {
                        }
                        a aVar = a.this;
                        if (a.a(aVar, aVar.d)) {
                            try {
                                a.b(a.this, a.this.d);
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                            a aVar2 = a.this;
                            if (aVar2.a(aVar2.d, "com.alphab.receiver.AlphabReceiver")) {
                                a aVar3 = a.this;
                                a.c(aVar3, aVar3.d);
                            }
                        }
                    }
                }
            }).start();
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    Looper.prepare();
                    com.mbridge.msdk.c.b.a.a().e();
                    Looper.loop();
                }
            }).start();
            d.a().c();
            HandlerThread handlerThread = new HandlerThread("mb_db_thread");
            handlerThread.start();
            Handler handler = new Handler(handlerThread.getLooper());
            MBDownloadConfig.Builder builder = new MBDownloadConfig.Builder();
            builder.setDatabaseHandler(handler);
            builder.setDatabaseOpenHelper(new IDatabaseOpenHelper() {
                @Override
                public final SQLiteDatabase getReadableDatabase() {
                    return i.a(com.mbridge.msdk.foundation.controller.a.f().j()).a();
                }

                @Override
                public final SQLiteDatabase getWritableDatabase() {
                    return i.a(com.mbridge.msdk.foundation.controller.a.f().j()).b();
                }
            });
            builder.setLogger(new ILogger() {
                @Override
                public final void log(String str, String str2) {
                    z.a(str, str2);
                }

                @Override
                public final void log(String str, Exception exc) {
                    z.a(str, exc.getMessage());
                }
            });
            MBDownloadManager.getInstance().initialize(com.mbridge.msdk.foundation.controller.a.f().j(), builder.build(), new ResourceConfig.Builder().setMaxStorageSpace(100L).setMaxStorageTime(259200000L).build());
            com.mbridge.msdk.foundation.same.report.b.a().b();
            if (this.i != null && !this.j) {
                this.j = true;
                this.i.onInitSuccess();
            }
            try {
                o.a().a(this.d.getApplicationContext());
            } catch (Exception e) {
                z.c("com.mbridge.msdk", "INIT", e);
            }
            try {
                com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                    @Override
                    public final void run() {
                        int iT = 24;
                        int i = 1;
                        try {
                            com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
                            if (aVarG != null) {
                                int iU = aVarG.u();
                                iT = aVarG.t();
                                i = iU;
                            }
                        } catch (Exception unused) {
                        }
                        if (i != 0 || iT <= 0) {
                            return;
                        }
                        long jLongValue = 0;
                        try {
                            jLongValue = ((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), "is_transmission_time", 0L)).longValue();
                        } catch (Exception unused2) {
                        }
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        if (jCurrentTimeMillis <= jLongValue + ((long) (iT * 60 * 60 * 1000))) {
                            return;
                        }
                        ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), "is_transmission_time", Long.valueOf(jCurrentTimeMillis));
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            try {
                                com.mbridge.msdk.foundation.controller.a.f().j().registerReceiver(new ExChangePMBroadcast(), new IntentFilter("mbridge_action_exchange_pm"));
                                com.mbridge.msdk.foundation.controller.a.f().j().registerReceiver(new ExChangeVideoBroadcast(), new IntentFilter("mbridge_action_exchange_pm_receiver"));
                            } catch (Exception unused3) {
                            }
                        }
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            Intent intent = new Intent();
                            Bundle bundle = new Bundle();
                            bundle.putString("pm-sender", com.mbridge.msdk.foundation.controller.a.f().j().getPackageName());
                            intent.putExtras(bundle);
                            intent.setAction("mbridge_action_exchange_pm");
                            com.mbridge.msdk.foundation.controller.a.f().j().sendOrderedBroadcast(intent, null);
                        }
                    }
                });
            } catch (Exception unused) {
            }
            if (this.d instanceof Application) {
                Application application = (Application) this.d;
                try {
                } catch (Exception e2) {
                    z.d("com.mbridge.msdk", e2.getMessage());
                }
                boolean z = ab.a().a("c_r_a_l_c", 0) == 0;
                if (application == null || !z) {
                    return;
                }
                z.d("com.mbridge.msdk", "registerActivityLifecycleListener:" + application.getPackageName());
                application.registerActivityLifecycleCallbacks(this.l);
                this.k = true;
            }
        } catch (Exception e3) {
            if (MBridgeConstans.DEBUG) {
                z.c("com.mbridge.msdk", "无法初始化MMSDK", e3);
                e3.printStackTrace();
            }
            SDKInitStatusListener sDKInitStatusListener = this.i;
            if (sDKInitStatusListener == null || this.j) {
                return;
            }
            this.j = true;
            sDKInitStatusListener.onInitFail(e3.getMessage());
        }
    }

    @Override
    public final MBridgeSDK.PLUGIN_LOAD_STATUS getStatus() {
        return this.c;
    }

    @Override
    public final void preload(Map<String, Object> map) {
        if (this.c == MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED) {
            b.a().a(map, 0);
        }
    }

    @Override
    public final void setUserPrivateInfoType(Context context, String str, int i) {
        a(context);
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(str, i);
    }

    @Override
    public final void setDoNotTrackStatus(boolean z) {
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().b(z ? 1 : 0);
    }

    @Override
    public final void setCoppaStatus(Context context, boolean z) {
        a(context);
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a();
        com.mbridge.msdk.foundation.a.a.a.a().a(MBridgeConstans.AUTHORITY_COPPA, z ? 1 : 2);
    }

    @Override
    public final void setDoNotTrackStatus(Context context, boolean z) {
        a(context);
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().b(z ? 1 : 0);
    }

    @Override
    public final AuthorityInfoBean userPrivateInfo(Context context) {
        a(context);
        return com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().b();
    }

    @Override
    public final void setConsentStatus(Context context, int i) {
        a(context);
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(i);
    }

    @Override
    public final boolean getConsentStatus(Context context) {
        a(context);
        return com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().e();
    }

    @Override
    public final void preloadFrame(Map<String, Object> map) {
        b.a().a(map, 1);
    }

    @Override
    public final Map<String, String> getMBConfigurationMap(String str, String str2) {
        return getMBConfigurationMap(str, str2, "");
    }

    @Override
    public final Map<String, String> getMBConfigurationMap(String str, String str2, String str3) {
        HashMap map = new HashMap();
        map.put(MBridgeConstans.ID_MBRIDGE_APPID, str);
        map.put(MBridgeConstans.ID_MBRIDGE_APPKEY, str2);
        map.put(MBridgeConstans.ID_MBRIDGE_WX_APPID, str3);
        map.put(MBridgeConstans.ID_MBRIDGE_STARTUPCRASH, String.valueOf(1));
        return map;
    }

    @Override
    public final void release() {
        BroadcastReceiver broadcastReceiver;
        BroadcastReceiver broadcastReceiver2;
        if (this.c == MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED) {
            b.a().b();
        }
        Context context = this.d;
        if (context != null && (broadcastReceiver2 = this.f) != null && this.e) {
            this.e = false;
            context.unregisterReceiver(broadcastReceiver2);
        }
        Context context2 = this.d;
        if (context2 != null && (broadcastReceiver = this.h) != null && this.g) {
            this.g = false;
            context2.unregisterReceiver(broadcastReceiver);
        }
        if (this.d instanceof Application) {
            Application application = (Application) this.d;
            z.d("com.mbridge.msdk", "unregisterActivityLifecycleListener:" + application.getPackageName());
            if (this.k) {
                application.unregisterActivityLifecycleCallbacks(this.l);
            }
        }
        com.mbridge.msdk.c.b.a.a().b();
    }

    @Override
    public final void init(Map<String, String> map, Application application) {
        this.d = application.getApplicationContext();
        a = map;
        a();
    }

    @Override
    public final void initAsync(Map<String, String> map, Application application) {
        this.d = application.getApplicationContext();
        a = map;
        a();
    }

    @Override
    public final void init(Map<String, String> map, Context context) {
        this.d = context.getApplicationContext();
        a = map;
        a();
    }

    @Override
    public final void initAsync(Map<String, String> map, Context context) {
        this.d = context.getApplicationContext();
        a = map;
        a();
    }

    @Override
    public final void init(Map<String, String> map, Application application, SDKInitStatusListener sDKInitStatusListener) {
        this.d = application;
        this.i = sDKInitStatusListener;
        a = map;
        a();
    }

    @Override
    public final void initAsync(Map<String, String> map, Application application, SDKInitStatusListener sDKInitStatusListener) {
        this.d = application;
        this.i = sDKInitStatusListener;
        a = map;
        a();
    }

    @Override
    public final void init(Map<String, String> map, Context context, SDKInitStatusListener sDKInitStatusListener) {
        this.d = context.getApplicationContext();
        this.i = sDKInitStatusListener;
        a = map;
        a();
    }

    @Override
    public final void initAsync(Map<String, String> map, Context context, SDKInitStatusListener sDKInitStatusListener) {
        this.d = context.getApplicationContext();
        this.i = sDKInitStatusListener;
        a = map;
        a();
    }

    private void a(Context context) {
        if (com.mbridge.msdk.foundation.controller.a.f().j() != null || context == null) {
            return;
        }
        com.mbridge.msdk.foundation.controller.a.f().b(context);
    }

    @Override
    public final void updateDialogWeakActivity(WeakReference<Activity> weakReference) {
        com.mbridge.msdk.foundation.controller.a.f().a(weakReference);
    }

    @Override
    public final void setAllowAcquireIds(boolean z) {
        com.mbridge.msdk.foundation.controller.authoritycontroller.a.a(z);
    }

    @Override
    public final void setDeveloperIds(DeveloperTransferIdInfo developerTransferIdInfo) {
        if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.h() || developerTransferIdInfo == null) {
            return;
        }
        if (!TextUtils.isEmpty(developerTransferIdInfo.getImei())) {
            v.a(developerTransferIdInfo.getImei());
        }
        if (!TextUtils.isEmpty(developerTransferIdInfo.getImsi())) {
            v.b(developerTransferIdInfo.getImsi());
        }
        if (!TextUtils.isEmpty(developerTransferIdInfo.getGaid())) {
            v.h(developerTransferIdInfo.getGaid());
        }
        if (!TextUtils.isEmpty(developerTransferIdInfo.getOaid())) {
            v.d(developerTransferIdInfo.getOaid());
        }
        if (!TextUtils.isEmpty(developerTransferIdInfo.getAndroidId())) {
            v.e(developerTransferIdInfo.getAndroidId());
        }
        if (TextUtils.isEmpty(developerTransferIdInfo.getMac())) {
            return;
        }
        v.c(developerTransferIdInfo.getMac());
    }

    static boolean a(a aVar, Context context) {
        return (context != null ? v.w(context) : 0) >= 26 && Build.VERSION.SDK_INT >= 26;
    }

    static void b(a aVar, Context context) {
        if (context == null || aVar.e) {
            return;
        }
        aVar.e = true;
        try {
            aVar.f = (BroadcastReceiver) Class.forName("com.mbridge.msdk.click.AppReceiver").newInstance();
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
            intentFilter.addDataScheme("package");
            context.registerReceiver(aVar.f, intentFilter);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
        } catch (InstantiationException e3) {
            e3.printStackTrace();
        }
    }

    static void c(a aVar, Context context) {
        Class<?> cls;
        if (context != null) {
            try {
                if (aVar.g || (cls = Class.forName("com.alphab.receiver.AlphabReceiver")) == null || !(cls.newInstance() instanceof BroadcastReceiver)) {
                    return;
                }
                aVar.g = true;
                aVar.h = (BroadcastReceiver) cls.newInstance();
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("android.intent.action.PACKAGE_ADDED");
                intentFilter.addDataScheme("package");
                context.registerReceiver(aVar.h, intentFilter);
            } catch (ClassNotFoundException e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }
    }
}
