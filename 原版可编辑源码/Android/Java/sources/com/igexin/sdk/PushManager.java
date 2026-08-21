package com.igexin.sdk;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.Application;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.Process;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import com.bykv.vk.openvk.live.TTLiveConstants;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.g;
import com.igexin.push.core.x;
import com.igexin.sdk.message.BindAliasCmdMessage;
import com.igexin.sdk.message.GTCmdMessage;
import com.igexin.sdk.message.SetTagCmdMessage;
import com.igexin.sdk.message.UnBindAliasCmdMessage;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import com.tkay.expressad.foundation.d.r;
import com.xiaomi.mipush.sdk.Constants;
import java.security.MessageDigest;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class PushManager {
    private static final ExecutorService a = Executors.newSingleThreadExecutor();
    private long b;
    private long c;
    private long d;
    private byte[] e;
    private Class f;
    private String g;
    private String h;
    private g i;
    private Boolean j;
    private final String k;

    private PushManager() {
        this.k = "[PushManager]";
    }

    PushManager(d dVar) {
        this();
    }

    private int a(int i, String str) {
        return (TextUtils.isEmpty(str) || !str.contains("_")) ? i : (i == 60001 || i == 60002) ? str.startsWith(AssistPushConsts.HW_PREFIX) ? i + 18 : str.startsWith(AssistPushConsts.XM_PREFIX) ? i + 48 : str.startsWith(AssistPushConsts.OPPO_PREFIX) ? i + 28 : str.startsWith(AssistPushConsts.VIVO_PREFIX) ? i + 38 : str.startsWith(AssistPushConsts.MZ_PREFIX) ? i + 58 : i : i;
    }

    private Class a(Context context) {
        Class cls = this.f;
        return cls != null ? cls : x.a().c(context);
    }

    private String a(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            StringBuilder sb = new StringBuilder("");
            int length = bArrDigest.length;
            for (int i = 0; i < length; i++) {
                int i2 = bArrDigest[i];
                if (i2 < 0) {
                    i2 += 256;
                }
                if (i2 < 16) {
                    sb.append("0");
                }
                sb.append(Integer.toHexString(i2));
            }
            return sb.toString();
        } catch (Exception unused) {
            return null;
        }
    }

    private void a(Context context, GTCmdMessage gTCmdMessage) {
        try {
            Class clsD = x.a().d(context);
            if (clsD == null || context == null) {
                return;
            }
            Intent intent = new Intent(context, (Class<?>) clsD);
            Bundle bundle = new Bundle();
            bundle.putInt("action", 10010);
            bundle.putSerializable(PushConsts.KEY_CMD_MSG, gTCmdMessage);
            intent.putExtras(bundle);
            context.startService(intent);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushManager|" + th.toString(), new Object[0]);
        }
    }

    private void a(Context context, String str, String str2) {
        a(context, new BindAliasCmdMessage(str, str2, 10010));
    }

    private boolean a(Context context, Intent intent) {
        return x.a().a(context, intent);
    }

    private void b(Context context) {
        if (this.i != null || Build.VERSION.SDK_INT < 14) {
            return;
        }
        a.execute(new d(this, context));
    }

    private void b(Context context, String str, String str2) {
        a(context, new UnBindAliasCmdMessage(str, str2, 10011));
    }

    private void c(Context context) {
        if (this.i == null || Build.VERSION.SDK_INT < 14) {
            return;
        }
        a.execute(new e(this, context));
    }

    private void c(Context context, String str, String str2) {
        a(context, new SetTagCmdMessage(str, str2, PushConsts.SET_TAG_RESULT));
    }

    private Application d(Context context) {
        if (context == null || !e(context)) {
            return null;
        }
        return context instanceof Application ? (Application) context : (Application) context.getApplicationContext();
    }

    private boolean e(Context context) {
        int iMyPid;
        String str;
        ActivityManager activityManager;
        List list;
        Boolean bool = this.j;
        if (bool != null) {
            return bool.booleanValue();
        }
        try {
            iMyPid = Process.myPid();
            str = "";
            activityManager = (ActivityManager) context.getApplicationContext().getSystemService("activity");
        } catch (Throwable unused) {
            this.j = false;
        }
        if (activityManager != null && (list = (List) ActivityManager.class.getDeclaredMethod(new String(Base64.decode("Z2V0UnVubmluZ0FwcFByb2Nlc3Nlcw==", 0)), new Class[0]).invoke(activityManager, new Object[0])) != null && !list.isEmpty()) {
            Iterator it = list.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                ActivityManager.RunningAppProcessInfo runningAppProcessInfo = (ActivityManager.RunningAppProcessInfo) it.next();
                if (runningAppProcessInfo != null && runningAppProcessInfo.pid == iMyPid) {
                    str = runningAppProcessInfo.processName;
                    break;
                }
            }
            this.j = Boolean.valueOf(str.equals(context.getPackageName()));
            return this.j.booleanValue();
        }
        return false;
    }

    private static void f(Context context) {
        if (context == null) {
            throw new IllegalArgumentException("NULL context");
        }
    }

    public static PushManager getInstance() {
        return f.a;
    }

    private <T extends Activity> void registerPushActivity(Context context, Class<T> cls) {
        String name;
        try {
            if (cls != null) {
                try {
                    Class.forName(cls.getName());
                    if (!com.igexin.push.util.a.a(context, cls)) {
                        return;
                    } else {
                        name = cls.getName();
                    }
                } catch (Exception e) {
                    com.igexin.b.a.c.a.c.a().a("[PushManager]can't load activity = " + e.toString());
                    com.igexin.b.a.c.b.a("PushManager|registerPushActiviy|" + e.toString(), new Object[0]);
                    return;
                }
            } else {
                Log.d("PushManager", "call -> registerPushActiviy, parameter [activity] is null");
                name = "";
            }
            this.h = name;
            if (this.f != null) {
                Intent intent = new Intent(context.getApplicationContext(), (Class<?>) this.f);
                intent.putExtra("ua", this.h);
                a(context, intent);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushManager|registerPushActiviy|" + th.toString(), new Object[0]);
        }
    }

    public boolean bindAlias(Context context, String str) {
        return bindAlias(context, str, "bindAlias_" + System.currentTimeMillis());
    }

    public boolean bindAlias(Context context, String str, String str2) {
        com.igexin.b.a.c.a.c.a().a("[PushManager]call bindAlias");
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.d < 1000) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > bindAlias failed, it be called too frequently");
            a(context, str2, com.tkay.basead.c.f.i);
            return false;
        }
        this.d = jCurrentTimeMillis;
        Bundle bundle = new Bundle();
        bundle.putString("action", "bindAlias");
        bundle.putString(PushConstants.SUB_ALIAS_STATUS_NAME, str);
        bundle.putString("sn", str2);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public void checkManifest(Context context) {
        com.igexin.push.util.a.c(context);
    }

    public String getClientid(Context context) {
        String strB;
        String strC;
        if (this.e == null) {
            try {
                ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
                String strA = "";
                if (applicationInfo == null || applicationInfo.metaData == null) {
                    strB = "";
                    strC = strB;
                } else {
                    strA = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPID);
                    strC = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPSECRET);
                    strB = applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPKEY);
                }
                if (TextUtils.isEmpty(strA)) {
                    strA = com.igexin.push.core.b.a.a(context);
                }
                if (TextUtils.isEmpty(strB)) {
                    strB = com.igexin.push.core.b.a.b(context);
                }
                if (TextUtils.isEmpty(strC)) {
                    strC = com.igexin.push.core.b.a.c(context);
                }
                String strTrim = strA.trim();
                String strTrim2 = strC.trim();
                String strTrim3 = strB.trim();
                if (!TextUtils.isEmpty(strTrim) && !TextUtils.isEmpty(strTrim2) && !TextUtils.isEmpty(strTrim3)) {
                    String strA2 = a(strTrim + strTrim2 + strTrim3 + context.getPackageName());
                    if (strA2 != null) {
                        this.e = strA2.getBytes();
                    }
                }
            } catch (Exception e) {
                com.igexin.b.a.c.b.a("PushManager|" + e.toString(), new Object[0]);
            }
        }
        if (this.e == null) {
            return null;
        }
        byte[] bArrA = com.igexin.push.util.c.a(context.getFilesDir().getPath() + "/init.pid");
        if (bArrA == null || this.e.length != bArrA.length) {
            return null;
        }
        int length = bArrA.length;
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            bArr[i] = (byte) (this.e[i] ^ bArrA[i]);
        }
        return new String(bArr);
    }

    public String getVersion(Context context) {
        return PushBuildConfig.sdk_conf_version;
    }

    public void initialize(Context context) {
        com.igexin.b.a.c.a.c cVarA;
        String str;
        com.igexin.b.a.c.a.c cVarA2;
        String str2;
        try {
            f(context);
            if (TextUtils.isEmpty(this.g)) {
                Class cls = (Class) com.igexin.push.util.b.a(context, GTIntentService.class).second;
                if (cls != null) {
                    this.g = cls.getName();
                    cVarA2 = com.igexin.b.a.c.a.c.a();
                    str2 = "[PushManager] initialize intentService = " + this.g;
                } else {
                    cVarA2 = com.igexin.b.a.c.a.c.a();
                    str2 = "[PushManager] initialize intentService = NULL!";
                }
                cVarA2.a(str2);
            }
            if (this.f == null) {
                Class cls2 = (Class) com.igexin.push.util.b.a(context, PushService.class).second;
                this.f = cls2;
                if (cls2 == null) {
                    cVarA = com.igexin.b.a.c.a.c.a();
                    str = "[PushManager] initialize uService = NULL!";
                } else {
                    cVarA = com.igexin.b.a.c.a.c.a();
                    str = "[PushManager] initialize uService = " + this.f.getName();
                }
                cVarA.a(str);
            }
            initialize(context, this.f);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("PushManager|initialize|" + e.toString(), new Object[0]);
            com.igexin.b.a.c.a.c.a().a("[PushManager] initialize sdk error = " + e.toString());
        }
    }

    @Deprecated
    public <T extends Service> void initialize(Context context, Class<T> cls) {
        try {
            com.igexin.b.a.c.a.c.a().a("[PushManager]Start initializing sdk");
            String packageName = context.getApplicationContext().getPackageName();
            if (!com.igexin.push.util.a.a("PushManager", context, cls)) {
                com.igexin.b.a.c.b.a("PushManager|init checkServiceSetCorrectly false", new Object[0]);
                com.igexin.b.a.c.a.c.a().a("[PushManager]initialize failed,please check your push service!!");
                return;
            }
            com.igexin.push.util.a.a(context.getApplicationContext());
            if (cls == null || CoreConsts.n.equals(cls.getName())) {
                cls = PushService.class;
            }
            Intent intent = new Intent(context.getApplicationContext(), (Class<?>) cls);
            intent.putExtra("action", PushConsts.ACTION_SERVICE_INITIALIZE);
            intent.putExtra("op_app", packageName);
            intent.putExtra("us", cls.getName());
            if (this.g != null) {
                intent.putExtra("uis", this.g);
            }
            if (this.h != null) {
                intent.putExtra("ua", this.h);
            }
            if (a(context, intent)) {
                this.f = cls;
                com.igexin.b.a.c.a.c.a().a("[PushManager]start pushService = " + cls.getName());
            }
            b(context);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushManager|initialize|" + th.toString(), new Object[0]);
            com.igexin.b.a.c.a.c.a().a("[PushManager]initialize sdk error = " + th.toString());
        }
    }

    public boolean isPushTurnedOn(Context context) {
        return new com.igexin.sdk.a.d(context).c();
    }

    @Deprecated
    public <T extends GTIntentService> void registerPushIntentService(Context context, Class<T> cls) {
        String name;
        com.igexin.b.a.c.a.c.a().a("[PushManager]call registerPushIntentService");
        try {
            if (cls != null) {
                try {
                    Class.forName(cls.getName());
                    if (!com.igexin.push.util.a.a(new Intent(context, (Class<?>) cls), context)) {
                        com.igexin.b.a.c.a.c.a().a("[PushManager]call - > registerPushIntentService, parameter [userIntentService] is set, but didn't find class \"" + cls.getName() + "\", please check your AndroidManifest");
                        return;
                    }
                    name = cls.getName();
                } catch (Exception e) {
                    com.igexin.b.a.c.a.c.a().a("[PushManager]error, can't load IntentService = " + e.toString());
                    com.igexin.b.a.c.b.a("PushManager|registerPushIntentService|" + e.toString(), new Object[0]);
                    return;
                }
            } else {
                Log.d("PushManager", "call -> registerPushIntentService, parameter [userIntentService] is null, use default Receiver");
                name = "";
            }
            this.g = name;
            if (this.f != null) {
                Intent intent = new Intent(context.getApplicationContext(), (Class<?>) this.f);
                intent.putExtra("uis", this.g);
                a(context, intent);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushManager|registerPushIntentService|" + th.toString(), new Object[0]);
            com.igexin.b.a.c.a.c.a().a("[PushManager]registerPushIntentService failed = " + th.toString());
        }
    }

    public boolean sendApplinkFeedback(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > sendApplinkFeedback failed, parameter is illegal");
            return false;
        }
        Bundle bundle = new Bundle();
        bundle.putString("action", "sendApplinkFeedback");
        bundle.putString("url", str);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public boolean sendFeedbackMessage(Context context, String str, String str2, int i) {
        boolean z = (i >= 60001 && i <= 60999) || (i >= 90001 && i <= 90999);
        if (str == null || str2 == null || !z) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > sendFeedbackMessage failed, parameter is illegal");
            return false;
        }
        int iA = a(i, str2);
        Bundle bundle = new Bundle();
        bundle.putString("action", "sendFeedbackMessage");
        bundle.putString("taskid", str);
        bundle.putString("messageid", str2);
        bundle.putString("actionid", String.valueOf(iA));
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public boolean sendMessage(Context context, String str, byte[] bArr) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (str == null || bArr == null || bArr.length > ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_PDF || jCurrentTimeMillis - this.c < 1000) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > sendMessage failed, parameter is illegal or it be called too frequently");
            return false;
        }
        this.c = jCurrentTimeMillis;
        Bundle bundle = new Bundle();
        bundle.putString("action", "sendMessage");
        bundle.putString("taskid", str);
        bundle.putByteArray("extraData", bArr);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public void setDebugLogger(Context context, IUserLoggerInterface iUserLoggerInterface) {
        if (context == null || iUserLoggerInterface == null) {
            throw new IllegalArgumentException("context or loggerInterface can not be null");
        }
        try {
            if (e(context)) {
                com.igexin.b.a.c.a.c.a().a(context, iUserLoggerInterface);
            }
        } catch (Throwable unused) {
        }
    }

    public boolean setHeartbeatInterval(Context context, int i) {
        if (i < 0) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call -> setHeartbeatInterval failed, parameter [interval] < 0, illegal");
            return false;
        }
        Bundle bundle = new Bundle();
        bundle.putString("action", "setHeartbeatInterval");
        bundle.putInt("interval", i);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public boolean setHwBadgeNum(Context context, int i) {
        com.igexin.b.a.c.a.c.a().a("[PushManager]call - > setHwBadgeNum");
        try {
            Bundle bundle = new Bundle();
            bundle.putString("action", "setHwBadgeNum");
            bundle.putInt("badgeNum", i);
            Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
            intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
            intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
            return a(context, intent);
        } catch (Throwable unused) {
            return false;
        }
    }

    public boolean setSilentTime(Context context, int i, int i2) {
        if (i < 0 || i >= 24 || i2 < 0 || i2 > 23) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > setSilentTime failed, parameter [beginHour] or [duration] value exceeding");
            return false;
        }
        Bundle bundle = new Bundle();
        bundle.putString("action", "setSilentTime");
        bundle.putInt("beginHour", i);
        bundle.putInt(r.ag, i2);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public boolean setSocketTimeout(Context context, int i) {
        if (i < 0) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > setSocketTimeout failed, parameter [timeout] < 0, illegal");
            return false;
        }
        Bundle bundle = new Bundle();
        bundle.putString("action", "setSocketTimeout");
        bundle.putInt("timeout", i);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }

    public int setTag(Context context, Tag[] tagArr, String str) {
        if (tagArr == null) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call -> setTag failed, parameter [tags] is null");
            com.igexin.b.a.c.b.a("PushManager|tags is null", new Object[0]);
            c(context, str, com.tkay.basead.c.f.h);
            return PushConsts.SETTAG_ERROR_NULL;
        }
        if (str == null) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call -> setTag failed, parameter [sn] is null");
            com.igexin.b.a.c.b.a("PushManager|sn is null", new Object[0]);
            c(context, str, "20007");
            return PushConsts.SETTAG_SN_NULL;
        }
        if (tagArr.length > 200) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call -> setTag failed, parameter [tags] len > 200 is exceeds");
            com.igexin.b.a.c.b.a("PushManager|tags len > 200 is exceeds", new Object[0]);
            c(context, str, "20001");
            return PushConsts.SETTAG_ERROR_COUNT;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.b < 1000) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > setTag failed, it be called too frequently");
            c(context, str, PushConsts.SEND_MESSAGE_ERROR_TIME_OUT);
            return PushConsts.SETTAG_ERROR_FREQUENCY;
        }
        StringBuilder sb = new StringBuilder();
        for (Tag tag : tagArr) {
            if (tag != null && tag.getName() != null) {
                if (tag.getName().contains(" ") || tag.getName().contains(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                    com.igexin.b.a.c.a.c.a().a("[PushManager]call -> setTag failed, the tag [" + tag.getName() + "] is not illegal");
                    c(context, str, "20011");
                    return PushConsts.SETTAG_TAG_ILLEGAL;
                }
                sb.append(tag.getName());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
        }
        if (sb.length() <= 0) {
            c(context, str, com.tkay.basead.c.f.h);
            return PushConsts.SETTAG_ERROR_NULL;
        }
        sb.deleteCharAt(sb.length() - 1);
        com.igexin.b.a.c.a.c.a().a("[PushManager]call setTag");
        Bundle bundle = new Bundle();
        bundle.putString("action", "setTag");
        bundle.putString("tags", sb.toString());
        bundle.putString("sn", str);
        this.b = jCurrentTimeMillis;
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        a(context, intent);
        return 0;
    }

    public void turnOffPush(Context context) {
        com.igexin.b.a.c.a.c.a().a("[PushManager]call turnOffPush");
        Bundle bundle = new Bundle();
        bundle.putString("action", "turnOffPush");
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        a(context, intent);
        c(context);
    }

    public void turnOnPush(Context context) {
        com.igexin.b.a.c.a.c.a().a("[PushManager]call turnOnPush");
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_SERVICE_INITIALIZE_SLAVE);
        intent.putExtra("op_app", context.getApplicationContext().getPackageName());
        intent.putExtra("isSlave", true);
        a(context, intent);
        b(context);
    }

    public boolean unBindAlias(Context context, String str, boolean z) {
        return unBindAlias(context, str, z, "unBindAlias_" + System.currentTimeMillis());
    }

    public boolean unBindAlias(Context context, String str, boolean z, String str2) {
        com.igexin.b.a.c.a.c.a().a("[PushManager]call unBindAlias");
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.d < 1000) {
            com.igexin.b.a.c.a.c.a().a("[PushManager]call - > unBindAlias failed, it be called too frequently");
            b(context, str2, com.tkay.basead.c.f.i);
            return false;
        }
        this.d = jCurrentTimeMillis;
        Bundle bundle = new Bundle();
        bundle.putString("action", "unbindAlias");
        bundle.putString(PushConstants.SUB_ALIAS_STATUS_NAME, str);
        bundle.putBoolean("isSeft", z);
        bundle.putString("sn", str2);
        Intent intent = new Intent(context.getApplicationContext(), (Class<?>) a(context));
        intent.putExtra("action", PushConsts.ACTION_BROADCAST_PUSHMANAGER);
        intent.putExtra(TTLiveConstants.BUNDLE_KEY, bundle);
        return a(context, intent);
    }
}
