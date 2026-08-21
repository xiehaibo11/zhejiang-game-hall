package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.content.pm.ServiceInfo;
import android.text.TextUtils;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.xiaomi.clientreport.data.Config;
import com.xiaomi.clientreport.manager.ClientReportClient;
import com.xiaomi.mipush.sdk.MiTinyDataClient;
import com.xiaomi.push.bp;
import com.xiaomi.push.dd;
import com.xiaomi.push.dn;
import com.xiaomi.push.do;
import com.xiaomi.push.el;
import com.xiaomi.push.em;
import com.xiaomi.push.en;
import com.xiaomi.push.ey;
import com.xiaomi.push.hj;
import com.xiaomi.push.hn;
import com.xiaomi.push.ho;
import com.xiaomi.push.ht;
import com.xiaomi.push.hw;
import com.xiaomi.push.hx;
import com.xiaomi.push.id;
import com.xiaomi.push.ii;
import com.xiaomi.push.ij;
import com.xiaomi.push.in;
import com.xiaomi.push.ip;
import com.xiaomi.push.ir;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.service.bd;
import com.xiaomi.push.service.receivers.NetworkStatusReceiver;
import java.lang.Thread;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.TimeZone;

public abstract class MiPushClient {
    public static final String COMMAND_REGISTER = "register";
    public static final String COMMAND_SET_ACCEPT_TIME = "accept-time";
    public static final String COMMAND_SET_ACCOUNT = "set-account";
    public static final String COMMAND_SET_ALIAS = "set-alias";
    public static final String COMMAND_SUBSCRIBE_TOPIC = "subscribe-topic";
    public static final String COMMAND_UNREGISTER = "unregister";
    public static final String COMMAND_UNSET_ACCOUNT = "unset-account";
    public static final String COMMAND_UNSET_ALIAS = "unset-alias";
    public static final String COMMAND_UNSUBSCRIBE_TOPIC = "unsubscibe-topic";
    public static final String PREF_EXTRA = "mipush_extra";
    private static Context sContext;
    private static long sCurMsgId = System.currentTimeMillis();

    public class CodeResult {
        private long resultCode = -1;

        public long getResultCode() {
            return this.resultCode;
        }

        protected void setResultCode(long j) {
            this.resultCode = j;
        }
    }

    public interface ICallbackResult<R> {
        void onResult(R r);
    }

    @Deprecated
    public abstract class MiPushClientCallback {
        private String category;

        protected String getCategory() {
            return this.category;
        }

        public void onCommandResult(String str, long j, String str2, List<String> list) {
        }

        public void onInitializeResult(long j, String str, String str2) {
        }

        public void onReceiveMessage(MiPushMessage miPushMessage) {
        }

        public void onReceiveMessage(String str, String str2, String str3, boolean z) {
        }

        public void onSubscribeResult(long j, String str, String str2) {
        }

        public void onUnsubscribeResult(long j, String str, String str2) {
        }

        protected void setCategory(String str) {
            this.category = str;
        }
    }

    public class TokenResult {
        private String token = null;
        private long resultCode = -1;

        public long getResultCode() {
            return this.resultCode;
        }

        public String getToken() {
            return this.token;
        }

        protected void setResultCode(long j) {
            this.resultCode = j;
        }

        protected void setToken(String str) {
            this.token = str;
        }
    }

    public interface UPSRegisterCallBack extends ICallbackResult<TokenResult> {
    }

    public interface UPSTurnCallBack extends ICallbackResult<CodeResult> {
    }

    public interface UPSUnRegisterCallBack extends ICallbackResult<TokenResult> {
    }

    private static boolean acceptTimeSet(Context context, String str, String str2) {
        return TextUtils.equals(getAcceptTime(context), str + Constants.ACCEPT_TIME_SEPARATOR_SP + str2);
    }

    public static long accountSetTime(Context context, String str) {
        return context.getSharedPreferences("mipush_extra", 0).getLong("account_" + str, -1L);
    }

    static synchronized void addAcceptTime(Context context, String str, String str2) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.putString(Constants.EXTRA_KEY_ACCEPT_TIME, str + Constants.ACCEPT_TIME_SEPARATOR_SP + str2);
        com.xiaomi.push.t.a(editorEdit);
    }

    static synchronized void addAccount(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("account_" + str, System.currentTimeMillis()).commit();
    }

    static synchronized void addAlias(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("alias_" + str, System.currentTimeMillis()).commit();
    }

    private static void addPullNotificationTime(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.putLong("last_pull_notification", System.currentTimeMillis());
        com.xiaomi.push.t.a(editorEdit);
    }

    private static void addRegRequestTime(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.putLong("last_reg_request", System.currentTimeMillis());
        com.xiaomi.push.t.a(editorEdit);
    }

    static synchronized void addTopic(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("topic_" + str, System.currentTimeMillis()).commit();
    }

    public static long aliasSetTime(Context context, String str) {
        return context.getSharedPreferences("mipush_extra", 0).getLong("alias_" + str, -1L);
    }

    public static void awakeApps(final Context context, final String[] strArr) {
        com.xiaomi.push.al.a(context).a(new Runnable() {
            @Override
            public void run() {
                PackageInfo packageInfo;
                try {
                    for (String str : strArr) {
                        if (!TextUtils.isEmpty(str) && (packageInfo = context.getPackageManager().getPackageInfo(str, 4)) != null) {
                            MiPushClient.awakePushServiceByPackageInfo(context, packageInfo);
                        }
                    }
                } catch (Throwable th) {
                    com.xiaomi.channel.commonutils.logger.b.a(th);
                }
            }
        });
    }

    private static void awakePushServiceByPackageInfo(Context context, PackageInfo packageInfo) {
        ServiceInfo[] serviceInfoArr = packageInfo.services;
        if (serviceInfoArr != null) {
            for (ServiceInfo serviceInfo : serviceInfoArr) {
                if (serviceInfo.exported && serviceInfo.enabled && "com.xiaomi.mipush.sdk.PushMessageHandler".equals(serviceInfo.name) && !context.getPackageName().equals(serviceInfo.packageName)) {
                    try {
                        Thread.sleep(((long) ((Math.random() * 2.0d) + 1.0d)) * 1000);
                        Intent intent = new Intent();
                        intent.setClassName(serviceInfo.packageName, serviceInfo.name);
                        intent.setAction("com.xiaomi.mipush.sdk.WAKEUP");
                        intent.putExtra("waker_pkgname", context.getPackageName());
                        PushMessageHandler.a(context, intent);
                        return;
                    } catch (Throwable unused) {
                        return;
                    }
                }
            }
        }
    }

    private static void checkNotNull(Object obj, String str) {
        if (obj != null) {
            return;
        }
        throw new IllegalArgumentException("param " + str + " is not nullable");
    }

    protected static void clearExtras(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.clear();
        editorEdit.commit();
    }

    private static void clearExtrasForInitialize(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        Iterator<String> it = getAllAlias(context).iterator();
        while (it.hasNext()) {
            editorEdit.remove("alias_" + it.next());
        }
        Iterator<String> it2 = getAllUserAccount(context).iterator();
        while (it2.hasNext()) {
            editorEdit.remove("account_" + it2.next());
        }
        Iterator<String> it3 = getAllTopic(context).iterator();
        while (it3.hasNext()) {
            editorEdit.remove("topic_" + it3.next());
        }
        editorEdit.remove(Constants.EXTRA_KEY_ACCEPT_TIME);
        editorEdit.commit();
    }

    public static void clearLocalNotificationType(Context context) {
        ao.a(context).f();
    }

    public static void clearNotification(Context context) {
        ao.a(context).a(-1);
    }

    public static void clearNotification(Context context, int i) {
        ao.a(context).a(i);
    }

    public static void clearNotification(Context context, String str, String str2) {
        ao.a(context).a(str, str2);
    }

    public static void disablePush(Context context) {
        ao.a(context).a(true);
    }

    public static void enablePush(Context context) {
        ao.a(context).a(false);
    }

    protected static String getAcceptTime(Context context) {
        return context.getSharedPreferences("mipush_extra", 0).getString(Constants.EXTRA_KEY_ACCEPT_TIME, "00:00-23:59");
    }

    public static List<String> getAllAlias(Context context) {
        ArrayList arrayList = new ArrayList();
        for (String str : context.getSharedPreferences("mipush_extra", 0).getAll().keySet()) {
            if (str.startsWith("alias_")) {
                arrayList.add(str.substring(6));
            }
        }
        return arrayList;
    }

    public static List<String> getAllTopic(Context context) {
        ArrayList arrayList = new ArrayList();
        for (String str : context.getSharedPreferences("mipush_extra", 0).getAll().keySet()) {
            if (str.startsWith("topic_") && !str.contains("**ALL**")) {
                arrayList.add(str.substring(6));
            }
        }
        return arrayList;
    }

    public static List<String> getAllUserAccount(Context context) {
        ArrayList arrayList = new ArrayList();
        for (String str : context.getSharedPreferences("mipush_extra", 0).getAll().keySet()) {
            if (str.startsWith("account_")) {
                arrayList.add(str.substring(8));
            }
        }
        return arrayList;
    }

    public static String getAppRegion(Context context) {
        if (b.a(context).c()) {
            return b.a(context).f();
        }
        return null;
    }

    private static boolean getDefaultSwitch() {
        return com.xiaomi.push.m.b();
    }

    protected static boolean getOpenFCMPush(Context context) {
        checkNotNull(context, TTLiveConstants.CONTEXT_KEY);
        return f.a(context).b(e.b);
    }

    protected static boolean getOpenHmsPush(Context context) {
        checkNotNull(context, TTLiveConstants.CONTEXT_KEY);
        return f.a(context).b(e.a);
    }

    protected static boolean getOpenOPPOPush(Context context) {
        checkNotNull(context, TTLiveConstants.CONTEXT_KEY);
        return f.a(context).b(e.c);
    }

    protected static boolean getOpenVIVOPush(Context context) {
        return f.a(context).b(e.d);
    }

    public static String getRegId(Context context) {
        if (b.a(context).c()) {
            return b.a(context).c();
        }
        return null;
    }

    private static void initEventPerfLogic(final Context context) {
        en.a(new en.a() {
            @Override
            public void uploader(Context context2, hn hnVar) {
                MiTinyDataClient.upload(context2, hnVar);
            }
        });
        Config configA = en.a(context);
        com.xiaomi.clientreport.manager.a.a(context).a("4_9_0");
        ClientReportClient.init(context, configA, new el(context), new em(context));
        a.a(context);
        t.a(context, configA);
        ba.a(context).a(new ba.a(100, "perf event job update") {
            @Override
            protected void onCallback() {
                en.a(context);
            }
        });
    }

    @Deprecated
    public static void initialize(Context context, String str, String str2, MiPushClientCallback miPushClientCallback) {
        initialize(context, str, str2, miPushClientCallback, null, null);
    }

    private static void initialize(Context context, String str, String str2, MiPushClientCallback miPushClientCallback, String str3, ICallbackResult iCallbackResult) {
        try {
            com.xiaomi.channel.commonutils.logger.b.a(context.getApplicationContext());
            com.xiaomi.channel.commonutils.logger.b.e("sdk_version = 4_9_0");
            com.xiaomi.push.ba.a(context).a();
            dd.a(context);
            if (miPushClientCallback != null) {
                PushMessageHandler.a(miPushClientCallback);
            }
            if (iCallbackResult != null) {
                PushMessageHandler.a(iCallbackResult);
            }
            if (com.xiaomi.push.v.a(sContext)) {
                v.a(sContext);
            }
            boolean z = b.a(sContext).a() != Constants.a();
            if (!z && !shouldSendRegRequest(sContext)) {
                ao.a(sContext).a();
                com.xiaomi.channel.commonutils.logger.b.a("Could not send  register message within 5s repeatly .");
                return;
            }
            if (z || !b.a(sContext).a(str, str2) || b.a(sContext).f()) {
                String strA = bp.a(6);
                b.a(sContext).a();
                b.a(sContext).a(Constants.a());
                b.a(sContext).a(str, str2, strA);
                MiTinyDataClient.a.a().b(MiTinyDataClient.PENDING_REASON_APPID);
                clearExtras(sContext);
                clearNotification(context);
                ij ijVar = new ij();
                ijVar.a(bd.a());
                ijVar.b(str);
                ijVar.e(str2);
                ijVar.d(sContext.getPackageName());
                ijVar.f(strA);
                ijVar.c(com.xiaomi.push.h.a(sContext, sContext.getPackageName()));
                ijVar.b(com.xiaomi.push.h.a(sContext, sContext.getPackageName()));
                ijVar.h("4_9_0");
                ijVar.a(40090);
                ijVar.a(hx.c);
                if (!TextUtils.isEmpty(str3)) {
                    ijVar.g(str3);
                }
                if (!com.xiaomi.push.m.d()) {
                    String strE = com.xiaomi.push.j.e(sContext);
                    if (!TextUtils.isEmpty(strE)) {
                        ijVar.i(bp.a(strE) + Constants.ACCEPT_TIME_SEPARATOR_SP + com.xiaomi.push.j.h(sContext));
                    }
                }
                int iA = com.xiaomi.push.j.a();
                if (iA >= 0) {
                    ijVar.c(iA);
                }
                ao.a(sContext).a(ijVar, z);
                sContext.getSharedPreferences("mipush_extra", 4).getBoolean("mipush_registed", true);
            } else {
                if (1 == PushMessageHelper.getPushMode(sContext)) {
                    checkNotNull(miPushClientCallback, com.alipay.sdk.authjs.a.b);
                    miPushClientCallback.onInitializeResult(0L, null, b.a(sContext).c());
                } else {
                    ArrayList arrayList = new ArrayList();
                    arrayList.add(b.a(sContext).c());
                    PushMessageHelper.sendCommandMessageBroadcast(sContext, PushMessageHelper.generateCommandMessage(ey.a.a, arrayList, 0L, null, null, null));
                }
                ao.a(sContext).a();
                if (b.a(sContext).a()) {
                    ii iiVar = new ii();
                    iiVar.b(b.a(sContext).a());
                    iiVar.c(ht.g.a);
                    iiVar.a(bd.a());
                    iiVar.a = new HashMap();
                    iiVar.a.put("app_version", com.xiaomi.push.h.a(sContext, sContext.getPackageName()));
                    iiVar.a.put(Constants.EXTRA_KEY_APP_VERSION_CODE, Integer.toString(com.xiaomi.push.h.a(sContext, sContext.getPackageName())));
                    iiVar.a.put("push_sdk_vn", "4_9_0");
                    iiVar.a.put("push_sdk_vc", Integer.toString(40090));
                    String strE2 = b.a(sContext).e();
                    if (!TextUtils.isEmpty(strE2)) {
                        iiVar.a.put("deviceid", strE2);
                    }
                    ao.a(sContext).a(iiVar, hj.i, false, (hw) null);
                }
                if (!com.xiaomi.push.n.a(sContext, "update_devId", false)) {
                    updateImeiOrOaid();
                    com.xiaomi.push.n.a(sContext, "update_devId", true);
                }
                if (shouldUseMIUIPush(sContext) && shouldPullNotification(sContext)) {
                    ii iiVar2 = new ii();
                    iiVar2.b(b.a(sContext).a());
                    iiVar2.c(ht.j.a);
                    iiVar2.a(bd.a());
                    iiVar2.a(false);
                    ao.a(sContext).a(iiVar2, hj.i, false, (hw) null, false);
                    addPullNotificationTime(sContext);
                }
            }
            addRegRequestTime(sContext);
            scheduleOcVersionCheckJob();
            scheduleDataCollectionJobs(sContext);
            initEventPerfLogic(sContext);
            av.a(sContext);
            if (!sContext.getPackageName().equals("com.xiaomi.xmsf")) {
                if (Logger.getUserLogger() != null) {
                    Logger.setLogger(sContext, Logger.getUserLogger());
                }
                com.xiaomi.channel.commonutils.logger.b.a(2);
            }
            operateSyncAction(context);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a(th);
        }
    }

    private static void operateSyncAction(Context context) {
        if ("syncing".equals(af.a(sContext).a(au.a))) {
            disablePush(sContext);
        }
        if ("syncing".equals(af.a(sContext).a(au.b))) {
            enablePush(sContext);
        }
        if ("syncing".equals(af.a(sContext).a(au.c))) {
            syncAssemblePushToken(sContext);
        }
        if ("syncing".equals(af.a(sContext).a(au.d))) {
            syncAssembleFCMPushToken(sContext);
        }
        if ("syncing".equals(af.a(sContext).a(au.e))) {
            syncAssembleCOSPushToken(context);
        }
        if ("syncing".equals(af.a(sContext).a(au.f))) {
            syncAssembleFTOSPushToken(context);
        }
    }

    public static void pausePush(Context context, String str) {
        setAcceptTime(context, 0, 0, 0, 0, str);
    }

    static void reInitialize(Context context, hx hxVar) {
        com.xiaomi.channel.commonutils.logger.b.e("re-register reason: " + hxVar);
        String strA = bp.a(6);
        String strA2 = b.a(context).a();
        String strB = b.a(context).b();
        b.a(context).a();
        clearExtrasForInitialize(context);
        clearNotification(context);
        b.a(context).a(Constants.a());
        b.a(context).a(strA2, strB, strA);
        ij ijVar = new ij();
        ijVar.a(bd.a());
        ijVar.b(strA2);
        ijVar.e(strB);
        ijVar.f(strA);
        ijVar.d(context.getPackageName());
        ijVar.c(com.xiaomi.push.h.a(context, context.getPackageName()));
        ijVar.b(com.xiaomi.push.h.a(context, context.getPackageName()));
        ijVar.h("4_9_0");
        ijVar.a(40090);
        ijVar.a(hxVar);
        int iA = com.xiaomi.push.j.a();
        if (iA >= 0) {
            ijVar.c(iA);
        }
        ao.a(context).a(ijVar, false);
    }

    @Deprecated
    public static void registerCrashHandler(Thread.UncaughtExceptionHandler uncaughtExceptionHandler) {
        Thread.setDefaultUncaughtExceptionHandler(uncaughtExceptionHandler);
    }

    private static void registerNetworkReceiver(Context context) {
        try {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            intentFilter.addCategory("android.intent.category.DEFAULT");
            com.xiaomi.push.o.a(context.getApplicationContext(), new NetworkStatusReceiver(null), intentFilter);
            com.xiaomi.push.o.a(context, (Class<?>) NetworkStatusReceiver.class);
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a("dynamic register network status receiver failed:" + th);
        }
    }

    public static void registerPush(Context context, String str, String str2) {
        registerPush(context, str, str2, new PushConfiguration());
    }

    public static void registerPush(Context context, String str, String str2, PushConfiguration pushConfiguration) {
        registerPush(context, str, str2, pushConfiguration, null, null);
    }

    private static void registerPush(Context context, final String str, final String str2, PushConfiguration pushConfiguration, final String str3, final ICallbackResult iCallbackResult) {
        checkNotNull(context, TTLiveConstants.CONTEXT_KEY);
        checkNotNull(str, com.heytap.mcssdk.constant.b.u);
        checkNotNull(str2, "appToken");
        Context applicationContext = context.getApplicationContext();
        sContext = applicationContext;
        if (applicationContext == null) {
            sContext = context;
        }
        Context context2 = sContext;
        com.xiaomi.push.v.a(context2);
        if (!NetworkStatusReceiver.a()) {
            registerNetworkReceiver(sContext);
        }
        f.a(sContext).a(pushConfiguration);
        com.xiaomi.push.al.a(context2).a(new Runnable() {
            @Override
            public void run() {
                MiPushClient.initialize(MiPushClient.sContext, str, str2, null, str3, iCallbackResult);
            }
        });
    }

    public static void registerPush(Context context, String str, String str2, String str3) {
        registerPush(context, str, str2, new PushConfiguration(), str3, null);
    }

    public static void registerToken(Context context, String str, String str2, String str3, UPSRegisterCallBack uPSRegisterCallBack) {
        registerPush(context, str, str2, new PushConfiguration(), null, uPSRegisterCallBack);
    }

    static synchronized void removeAcceptTime(Context context) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.remove(Constants.EXTRA_KEY_ACCEPT_TIME);
        com.xiaomi.push.t.a(editorEdit);
    }

    static synchronized void removeAccount(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().remove("account_" + str).commit();
    }

    static synchronized void removeAlias(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().remove("alias_" + str).commit();
    }

    static synchronized void removeAllAccounts(Context context) {
        Iterator<String> it = getAllUserAccount(context).iterator();
        while (it.hasNext()) {
            removeAccount(context, it.next());
        }
    }

    static synchronized void removeAllAliases(Context context) {
        Iterator<String> it = getAllAlias(context).iterator();
        while (it.hasNext()) {
            removeAlias(context, it.next());
        }
    }

    static synchronized void removeAllTopics(Context context) {
        Iterator<String> it = getAllTopic(context).iterator();
        while (it.hasNext()) {
            removeTopic(context, it.next());
        }
    }

    static synchronized void removeTopic(Context context, String str) {
        context.getSharedPreferences("mipush_extra", 0).edit().remove("topic_" + str).commit();
    }

    public static void removeWindow(Context context) {
        ao.a(context).e();
    }

    public static void reportAppRunInBackground(Context context, boolean z) {
        if (b.a(context).b()) {
            ht htVar = z ? ht.R : ht.Q;
            ii iiVar = new ii();
            iiVar.b(b.a(context).a());
            iiVar.c(htVar.a);
            iiVar.d(context.getPackageName());
            iiVar.a(bd.a());
            iiVar.a(false);
            ao.a(context).a(iiVar, hj.i, false, (hw) null, false);
        }
    }

    static void reportIgnoreRegMessageClicked(Context context, String str, hw hwVar, String str2, String str3) {
        ii iiVar = new ii();
        if (TextUtils.isEmpty(str3)) {
            com.xiaomi.channel.commonutils.logger.b.d("do not report clicked message");
            return;
        }
        iiVar.b(str3);
        iiVar.c("bar:click");
        iiVar.a(str);
        iiVar.a(false);
        ao.a(context).a(iiVar, hj.i, false, true, hwVar, true, str2, str3);
    }

    public static void reportMessageClicked(Context context, MiPushMessage miPushMessage) {
        hw hwVar = new hw();
        hwVar.a(miPushMessage.getMessageId());
        hwVar.b(miPushMessage.getTopic());
        hwVar.d(miPushMessage.getDescription());
        hwVar.c(miPushMessage.getTitle());
        hwVar.c(miPushMessage.getNotifyId());
        hwVar.a(miPushMessage.getNotifyType());
        hwVar.b(miPushMessage.getPassThrough());
        hwVar.a(miPushMessage.getExtra());
        reportMessageClicked(context, miPushMessage.getMessageId(), hwVar, null);
    }

    @Deprecated
    public static void reportMessageClicked(Context context, String str) {
        reportMessageClicked(context, str, null, null);
    }

    static void reportMessageClicked(Context context, String str, hw hwVar, String str2) {
        ii iiVar = new ii();
        if (TextUtils.isEmpty(str2)) {
            if (!b.a(context).b()) {
                com.xiaomi.channel.commonutils.logger.b.d("do not report clicked message");
                return;
            }
            str2 = b.a(context).a();
        }
        iiVar.b(str2);
        iiVar.c("bar:click");
        iiVar.a(str);
        iiVar.a(false);
        ao.a(context).a(iiVar, hj.i, false, hwVar);
    }

    public static void resumePush(Context context, String str) {
        setAcceptTime(context, 0, 0, 23, 59, str);
    }

    private static void scheduleDataCollectionJobs(Context context) {
        if (ba.a(sContext).a(ho.z.a(), getDefaultSwitch())) {
            dn.a().a(new r(context));
            com.xiaomi.push.al.a(sContext).a(new Runnable() {
                @Override
                public void run() {
                    do.a(MiPushClient.sContext);
                }
            }, 10);
        }
    }

    private static void scheduleOcVersionCheckJob() {
        com.xiaomi.push.al.a(sContext).a(new ae(sContext), ba.a(sContext).a(ho.A.a(), 86400), 5);
    }

    public static void setAcceptTime(Context context, int i, int i2, int i3, int i4, String str) {
        if (i < 0 || i >= 24 || i3 < 0 || i3 >= 24 || i2 < 0 || i2 >= 60 || i4 < 0 || i4 >= 60) {
            throw new IllegalArgumentException("the input parameter is not valid.");
        }
        long rawOffset = ((TimeZone.getTimeZone("GMT+08").getRawOffset() - TimeZone.getDefault().getRawOffset()) / 1000) / 60;
        long j = ((((long) ((i * 60) + i2)) + rawOffset) + 1440) % 1440;
        long j2 = ((((long) ((i3 * 60) + i4)) + rawOffset) + 1440) % 1440;
        ArrayList arrayList = new ArrayList();
        arrayList.add(String.format("%1$02d:%2$02d", Long.valueOf(j / 60), Long.valueOf(j % 60)));
        arrayList.add(String.format("%1$02d:%2$02d", Long.valueOf(j2 / 60), Long.valueOf(j2 % 60)));
        ArrayList arrayList2 = new ArrayList();
        arrayList2.add(String.format("%1$02d:%2$02d", Integer.valueOf(i), Integer.valueOf(i2)));
        arrayList2.add(String.format("%1$02d:%2$02d", Integer.valueOf(i3), Integer.valueOf(i4)));
        if (!acceptTimeSet(context, (String) arrayList.get(0), (String) arrayList.get(1))) {
            setCommand(context, ey.i.a, (ArrayList<String>) arrayList, str);
        } else if (1 == PushMessageHelper.getPushMode(context)) {
            PushMessageHandler.a(context, str, ey.i.a, 0L, null, arrayList2);
        } else {
            PushMessageHelper.sendCommandMessageBroadcast(context, PushMessageHelper.generateCommandMessage(ey.i.a, arrayList2, 0L, null, null, null));
        }
    }

    public static void setAlias(Context context, String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        setCommand(context, ey.c.a, str, str2);
    }

    protected static void setCommand(Context context, String str, String str2, String str3) {
        StringBuilder sb;
        String str4;
        ey eyVar;
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str2)) {
            arrayList.add(str2);
        }
        if (ey.c.a.equalsIgnoreCase(str) && Math.abs(System.currentTimeMillis() - aliasSetTime(context, str2)) < 86400000) {
            if (1 != PushMessageHelper.getPushMode(context)) {
                eyVar = ey.c;
                PushMessageHelper.sendCommandMessageBroadcast(context, PushMessageHelper.generateCommandMessage(eyVar.a, arrayList, 0L, null, str3, null));
                return;
            }
            PushMessageHandler.a(context, str3, str, 0L, null, arrayList);
            return;
        }
        if (ey.d.a.equalsIgnoreCase(str) && aliasSetTime(context, str2) < 0) {
            sb = new StringBuilder();
            str4 = "Don't cancel alias for ";
        } else {
            if (ey.e.a.equalsIgnoreCase(str) && Math.abs(System.currentTimeMillis() - accountSetTime(context, str2)) < 3600000) {
                if (1 != PushMessageHelper.getPushMode(context)) {
                    eyVar = ey.e;
                    PushMessageHelper.sendCommandMessageBroadcast(context, PushMessageHelper.generateCommandMessage(eyVar.a, arrayList, 0L, null, str3, null));
                    return;
                }
                PushMessageHandler.a(context, str3, str, 0L, null, arrayList);
                return;
            }
            if (!ey.f.a.equalsIgnoreCase(str) || accountSetTime(context, str2) >= 0) {
                setCommand(context, str, (ArrayList<String>) arrayList, str3);
                return;
            } else {
                sb = new StringBuilder();
                str4 = "Don't cancel account for ";
            }
        }
        sb.append(str4);
        sb.append(bp.a(arrayList.toString(), 3));
        sb.append(" is unseted");
        com.xiaomi.channel.commonutils.logger.b.a(sb.toString());
    }

    protected static void setCommand(Context context, String str, ArrayList<String> arrayList, String str2) {
        if (TextUtils.isEmpty(b.a(context).a())) {
            return;
        }
        id idVar = new id();
        String strA = bd.a();
        idVar.a(strA);
        idVar.b(b.a(context).a());
        idVar.c(str);
        Iterator<String> it = arrayList.iterator();
        while (it.hasNext()) {
            idVar.a(it.next());
        }
        idVar.e(str2);
        idVar.d(context.getPackageName());
        com.xiaomi.channel.commonutils.logger.b.e("cmd:" + str + ", " + strA);
        ao.a(context).a(idVar, hj.j, (hw) null);
    }

    public static void setLocalNotificationType(Context context, int i) {
        ao.a(context).b(i & (-1));
    }

    public static void setUserAccount(Context context, String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        setCommand(context, ey.e.a, str, str2);
    }

    private static boolean shouldPullNotification(Context context) {
        return Math.abs(System.currentTimeMillis() - context.getSharedPreferences("mipush_extra", 0).getLong("last_pull_notification", -1L)) > 300000;
    }

    private static boolean shouldSendRegRequest(Context context) {
        return Math.abs(System.currentTimeMillis() - context.getSharedPreferences("mipush_extra", 0).getLong("last_reg_request", -1L)) > 5000;
    }

    public static boolean shouldUseMIUIPush(Context context) {
        return ao.a(context).a();
    }

    public static void subscribe(Context context, String str, String str2) {
        if (TextUtils.isEmpty(b.a(context).a()) || TextUtils.isEmpty(str)) {
            return;
        }
        if (Math.abs(System.currentTimeMillis() - topicSubscribedTime(context, str)) <= 86400000) {
            if (1 == PushMessageHelper.getPushMode(context)) {
                PushMessageHandler.a(context, str2, 0L, null, str);
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(str);
            PushMessageHelper.sendCommandMessageBroadcast(context, PushMessageHelper.generateCommandMessage(ey.g.a, arrayList, 0L, null, null, null));
            return;
        }
        in inVar = new in();
        String strA = bd.a();
        inVar.a(strA);
        inVar.b(b.a(context).a());
        inVar.c(str);
        inVar.d(context.getPackageName());
        inVar.e(str2);
        com.xiaomi.channel.commonutils.logger.b.e("cmd:" + ey.g + ", " + strA);
        ao.a(context).a(inVar, hj.c, (hw) null);
    }

    public static void syncAssembleCOSPushToken(Context context) {
        ao.a(context).a((String) null, au.e, e.c);
    }

    public static void syncAssembleFCMPushToken(Context context) {
        ao.a(context).a((String) null, au.d, e.b);
    }

    public static void syncAssembleFTOSPushToken(Context context) {
        ao.a(context).a((String) null, au.f, e.d);
    }

    public static void syncAssemblePushToken(Context context) {
        ao.a(context).a((String) null, au.c, e.a);
    }

    public static long topicSubscribedTime(Context context, String str) {
        return context.getSharedPreferences("mipush_extra", 0).getLong("topic_" + str, -1L);
    }

    public static void turnOffPush(Context context, UPSTurnCallBack uPSTurnCallBack) {
        disablePush(context);
        if (uPSTurnCallBack != null) {
            CodeResult codeResult = new CodeResult();
            codeResult.setResultCode(0L);
            codeResult.getResultCode();
            uPSTurnCallBack.onResult(codeResult);
        }
    }

    public static void turnOnPush(Context context, UPSTurnCallBack uPSTurnCallBack) {
        enablePush(context);
        if (uPSTurnCallBack != null) {
            CodeResult codeResult = new CodeResult();
            codeResult.setResultCode(0L);
            codeResult.getResultCode();
            uPSTurnCallBack.onResult(codeResult);
        }
    }

    public static void unRegisterToken(Context context, UPSUnRegisterCallBack uPSUnRegisterCallBack) {
        unregisterPush(context);
        if (uPSUnRegisterCallBack != null) {
            TokenResult tokenResult = new TokenResult();
            tokenResult.setToken(null);
            tokenResult.getToken();
            tokenResult.setResultCode(0L);
            tokenResult.getResultCode();
            uPSUnRegisterCallBack.onResult(tokenResult);
        }
    }

    public static void unregisterPush(Context context) {
        i.c(context);
        ba.a(context).a();
        if (b.a(context).b()) {
            ip ipVar = new ip();
            ipVar.a(bd.a());
            ipVar.b(b.a(context).a());
            ipVar.c(b.a(context).c());
            ipVar.e(b.a(context).b());
            ipVar.d(context.getPackageName());
            ao.a(context).a(ipVar);
            PushMessageHandler.a();
            PushMessageHandler.b();
            b.a(context).b();
            clearLocalNotificationType(context);
            clearNotification(context);
            clearExtras(context);
        }
    }

    public static void unsetAlias(Context context, String str, String str2) {
        setCommand(context, ey.d.a, str, str2);
    }

    public static void unsetUserAccount(Context context, String str, String str2) {
        setCommand(context, ey.f.a, str, str2);
    }

    public static void unsubscribe(Context context, String str, String str2) {
        if (b.a(context).b()) {
            if (topicSubscribedTime(context, str) < 0) {
                com.xiaomi.channel.commonutils.logger.b.a("Don't cancel subscribe for " + str + " is unsubscribed");
                return;
            }
            ir irVar = new ir();
            String strA = bd.a();
            irVar.a(strA);
            irVar.b(b.a(context).a());
            irVar.c(str);
            irVar.d(context.getPackageName());
            irVar.e(str2);
            com.xiaomi.channel.commonutils.logger.b.e("cmd:" + ey.h + ", " + strA);
            ao.a(context).a(irVar, hj.d, (hw) null);
        }
    }

    private static void updateImeiOrOaid() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                if (com.xiaomi.push.m.d()) {
                    return;
                }
                if (com.xiaomi.push.j.d(MiPushClient.sContext) != null || com.xiaomi.push.ba.a(MiPushClient.sContext).a()) {
                    ii iiVar = new ii();
                    iiVar.b(b.a(MiPushClient.sContext).a());
                    iiVar.c(ht.g.a);
                    iiVar.a(bd.a());
                    iiVar.a(new HashMap());
                    String str = "";
                    String strD = com.xiaomi.push.j.d(MiPushClient.sContext);
                    if (!TextUtils.isEmpty(strD)) {
                        str = "" + bp.a(strD);
                    }
                    String strF = com.xiaomi.push.j.f(MiPushClient.sContext);
                    if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(strF)) {
                        str = str + Constants.ACCEPT_TIME_SEPARATOR_SP + strF;
                    }
                    if (!TextUtils.isEmpty(str)) {
                        iiVar.a().put(Constants.EXTRA_KEY_IMEI_MD5, str);
                    }
                    com.xiaomi.push.ba.a(MiPushClient.sContext).a(iiVar.a());
                    int iA = com.xiaomi.push.j.a();
                    if (iA >= 0) {
                        iiVar.a().put("space_id", Integer.toString(iA));
                    }
                    ao.a(MiPushClient.sContext).a(iiVar, hj.i, false, (hw) null);
                }
            }
        }).start();
    }
}
