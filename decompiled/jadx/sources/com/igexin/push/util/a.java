package com.igexin.push.util;

import android.app.AppOpsManager;
import android.app.NotificationManager;
import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.os.PowerManager;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.libuniverse.Device;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.push.core.CoreConsts;
import com.igexin.sdk.GTIntentService;
import com.igexin.sdk.GetuiPushException;
import com.igexin.sdk.PushReceiver;
import com.igexin.sdk.PushService;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2652a = a.class.getName();
    private static Integer b = null;

    public static void a(Context context) {
        if ((context.getApplicationInfo().flags & 2) == 0) {
            return;
        }
        e(context);
    }

    private static void a(Map<String, com.igexin.push.core.bean.c> map, String str) {
        com.igexin.push.core.bean.c cVar = map.get(str);
        map.remove(str);
        for (String str2 : cVar.b()) {
            com.igexin.push.core.bean.c cVar2 = map.get(str2);
            if (cVar2 != null) {
                cVar2.e();
                if (cVar2.c() == 0) {
                    a(map, str2);
                }
            }
        }
    }

    public static boolean a() {
        return System.currentTimeMillis() > com.igexin.push.config.j.c;
    }

    public static boolean a(long j) {
        if (com.igexin.push.config.j.b == 0) {
            return false;
        }
        Date date = new Date(j);
        Calendar calendar = Calendar.getInstance();
        calendar.setTime(date);
        int i = calendar.get(11);
        int i2 = com.igexin.push.config.j.f2494a + com.igexin.push.config.j.b;
        if (i2 >= 24) {
            i2 -= 24;
        }
        if (com.igexin.push.config.j.f2494a < i2) {
            if (i >= com.igexin.push.config.j.f2494a && i < i2) {
                return true;
            }
        } else if (com.igexin.push.config.j.f2494a > i2) {
            if (i >= 0 && i < i2) {
                return true;
            }
            if (i >= com.igexin.push.config.j.f2494a && i < 24) {
                return true;
            }
        }
        return false;
    }

    public static boolean a(Context context, Class cls) {
        try {
            if (context == null) {
                Log.e(f2652a, "context can not set null ");
                return false;
            }
            PackageManager packageManager = context.getPackageManager();
            if (packageManager.queryIntentActivities(new Intent(context, (Class<?>) cls), 0).size() <= 0) {
                Log.e(f2652a, "not regist " + cls.getName() + "in manifest");
                return false;
            }
            if (packageManager.getActivityInfo(new ComponentName(context.getPackageName(), cls.getName()), 128).theme == 16973840) {
                return true;
            }
            Log.e(f2652a, cls.getName() + " need set theme Theme.Translucent.NoTitleBar");
            return false;
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2652a + "|" + th.toString(), new Object[0]);
            return false;
        }
    }

    public static boolean a(Intent intent, Context context) {
        if (intent != null && context != null) {
            try {
                return context.getPackageManager().queryIntentServices(intent, 0).size() > 0;
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2652a + "|" + th.toString(), new Object[0]);
            }
        }
        return false;
    }

    public static boolean a(String str) {
        try {
            return com.igexin.push.core.d.g.getPackageManager().getLaunchIntentForPackage(str) != null;
        } catch (Exception unused) {
            return false;
        }
    }

    public static <T extends Service> boolean a(String str, Context context, Class<T> cls) {
        if (cls == null) {
            try {
                if (!a(new Intent(context, Class.forName(CoreConsts.n)), context)) {
                    com.igexin.b.a.c.a.c.a().a("call - > initialize, parameter [userServiceName] is null use default PushService, but didn't find class \"com.igexin.sdk.PushService\", please check your AndroidManifest");
                    return false;
                }
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2652a + "|" + th.toString(), new Object[0]);
                return false;
            }
        }
        if (cls != null && CoreConsts.n.equals(cls.getName()) && !a(new Intent(context, (Class<?>) cls), context)) {
            com.igexin.b.a.c.a.c.a().a("call - > initialize, parameter [userServiceName] is default PushService, but didn't find class \"com.igexin.sdk.PushService\", please check your AndroidManifest");
            return false;
        }
        if (cls == null || a(new Intent(context, (Class<?>) cls), context)) {
            if (cls == null) {
                return true;
            }
            Class.forName(cls.getName());
            return true;
        }
        com.igexin.b.a.c.a.c.a().a("call - > initialize, parameter [userServiceName] is set, but didn't find class \"" + cls.getName() + "\", please check your AndroidManifest");
        return false;
    }

    public static boolean a(JSONObject jSONObject) {
        String str;
        String str2;
        String str3;
        String string;
        String str4 = "buttons";
        String str5 = "type";
        String str6 = "actionid";
        try {
            HashMap map = new HashMap();
            JSONArray jSONArray = jSONObject.getJSONArray("action_chains");
            int i = 0;
            while (i < jSONArray.length()) {
                JSONObject jSONObject2 = (JSONObject) jSONArray.get(i);
                com.igexin.push.core.bean.c cVar = new com.igexin.push.core.bean.c();
                if (jSONObject2.has(str6)) {
                    cVar.a(jSONObject2.getString(str6));
                    if (map.containsKey(cVar.a())) {
                        return true;
                    }
                    ArrayList arrayList = new ArrayList();
                    if (jSONObject2.has(str5)) {
                        String string2 = jSONObject2.getString(str5);
                        str = str5;
                        str2 = str6;
                        if ("popup".equals(string2)) {
                            if (jSONObject2.has(str4)) {
                                JSONArray jSONArray2 = jSONObject2.getJSONArray(str4);
                                str3 = str4;
                                for (int i2 = 0; i2 < jSONArray2.length(); i2++) {
                                    if (((JSONObject) jSONArray2.get(i2)).has("do")) {
                                        arrayList.add(((JSONObject) jSONArray2.get(i2)).getString("do"));
                                    }
                                }
                            } else {
                                str3 = str4;
                            }
                            if (jSONObject2.has("do")) {
                                string = jSONObject2.getString("do");
                                arrayList.add(string);
                            }
                            cVar.a(arrayList);
                            map.put(cVar.a(), cVar);
                        } else {
                            str3 = str4;
                            if ("startapp".equals(string2)) {
                                if (jSONObject2.has("noinstall_action")) {
                                    arrayList.add(jSONObject2.getString("noinstall_action"));
                                }
                                if (jSONObject2.has("do")) {
                                    string = jSONObject2.getString("do");
                                    arrayList.add(string);
                                }
                                cVar.a(arrayList);
                                map.put(cVar.a(), cVar);
                            } else if ("checkapp".equals(string2)) {
                                if (jSONObject2.has("do_installed")) {
                                    arrayList.add(jSONObject2.getString("do_installed"));
                                }
                                if (jSONObject2.has("do_uninstalled")) {
                                    string = jSONObject2.getString("do_uninstalled");
                                    arrayList.add(string);
                                }
                                cVar.a(arrayList);
                                map.put(cVar.a(), cVar);
                            } else if ("checkversions".equals(string2)) {
                                if (jSONObject2.has("do_match")) {
                                    arrayList.add(jSONObject2.getString("do_match"));
                                }
                                if (jSONObject2.has("do_dismatch")) {
                                    arrayList.add(jSONObject2.getString("do_dismatch"));
                                }
                                if (jSONObject2.has("do")) {
                                    string = jSONObject2.getString("do");
                                    arrayList.add(string);
                                }
                                cVar.a(arrayList);
                                map.put(cVar.a(), cVar);
                            } else if ("startintent".equals(string2)) {
                                if (jSONObject2.has("do_failed")) {
                                    arrayList.add(jSONObject2.getString("do_failed"));
                                }
                                if (jSONObject2.has("do")) {
                                    string = jSONObject2.getString("do");
                                    arrayList.add(string);
                                }
                                cVar.a(arrayList);
                                map.put(cVar.a(), cVar);
                            } else {
                                if (!"null".equals(string2) && jSONObject2.has("do")) {
                                    string = jSONObject2.getString("do");
                                    arrayList.add(string);
                                }
                                cVar.a(arrayList);
                                map.put(cVar.a(), cVar);
                            }
                        }
                    } else {
                        str3 = str4;
                        str = str5;
                        str2 = str6;
                    }
                } else {
                    str3 = str4;
                    str = str5;
                    str2 = str6;
                }
                i++;
                str5 = str;
                str6 = str2;
                str4 = str3;
            }
            ArrayList arrayList2 = new ArrayList(map.values());
            Iterator it = map.entrySet().iterator();
            while (it.hasNext()) {
                List<String> listB = ((com.igexin.push.core.bean.c) ((Map.Entry) it.next()).getValue()).b();
                if (listB != null) {
                    Iterator<String> it2 = listB.iterator();
                    while (it2.hasNext()) {
                        com.igexin.push.core.bean.c cVar2 = (com.igexin.push.core.bean.c) map.get(it2.next());
                        if (cVar2 != null) {
                            cVar2.d();
                            if (arrayList2.contains(cVar2)) {
                                arrayList2.remove(cVar2);
                            }
                        }
                    }
                }
            }
            Iterator it3 = arrayList2.iterator();
            while (it3.hasNext()) {
                a(map, ((com.igexin.push.core.bean.c) it3.next()).a());
            }
            if (map.size() <= 0) {
                return false;
            }
            com.igexin.b.a.c.b.a(f2652a + "|action_chains have loop nodeMap not empty", new Object[0]);
            return true;
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2652a + "|isHaveLoop exception :" + th.toString(), new Object[0]);
            return false;
        }
    }

    public static boolean b() {
        NetworkInfo activeNetworkInfo = ((ConnectivityManager) com.igexin.push.core.d.g.getSystemService("connectivity")).getActiveNetworkInfo();
        return activeNetworkInfo != null && activeNetworkInfo.getType() == 1;
    }

    public static boolean b(Context context) {
        try {
            if (Build.VERSION.SDK_INT >= 24) {
                return ((Boolean) NotificationManager.class.getDeclaredMethod("areNotificationsEnabled", new Class[0]).invoke((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION), new Object[0])).booleanValue();
            }
            if (Build.VERSION.SDK_INT < 19) {
                return true;
            }
            AppOpsManager appOpsManager = (AppOpsManager) context.getSystemService("appops");
            ApplicationInfo applicationInfo = context.getApplicationInfo();
            String packageName = context.getApplicationContext().getPackageName();
            int i = applicationInfo.uid;
            Class<?> cls = Class.forName(AppOpsManager.class.getName());
            return ((Integer) cls.getMethod("checkOpNoThrow", Integer.TYPE, Integer.TYPE, String.class).invoke(appOpsManager, Integer.valueOf(((Integer) cls.getDeclaredField("OP_POST_NOTIFICATION").get(Integer.class)).intValue()), Integer.valueOf(i), packageName)).intValue() == 0;
        } catch (Throwable unused) {
            return true;
        }
    }

    public static boolean b(Intent intent, Context context) {
        if (intent == null || context == null) {
            return false;
        }
        try {
            return context.getPackageManager().queryIntentActivities(intent, 0).size() > 0;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static boolean b(String str) {
        try {
            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(com.igexin.push.config.j.q) && !Device.NETWORN_NONE.equals(com.igexin.push.config.j.q)) {
                ArrayList arrayList = new ArrayList();
                arrayList.addAll(Arrays.asList(com.igexin.push.config.j.q.split(Constants.ACCEPT_TIME_SEPARATOR_SP)));
                if (arrayList.isEmpty()) {
                    return false;
                }
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    if (str.contains((String) it.next())) {
                        return true;
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static void c() {
        NetworkInfo.State state = ((ConnectivityManager) com.igexin.push.core.d.g.getSystemService("connectivity")).getNetworkInfo(1).getState();
        if (state == NetworkInfo.State.CONNECTED || state == NetworkInfo.State.CONNECTING) {
            com.igexin.push.core.d.r = 1;
        } else {
            com.igexin.push.core.d.r = 0;
        }
    }

    public static void c(Context context) {
        ApplicationInfo applicationInfo;
        if (context == null) {
            throw new GetuiPushException("传入的context为空");
        }
        Context applicationContext = context.getApplicationContext();
        if ((applicationContext.getApplicationInfo().flags & 2) == 0) {
            return;
        }
        if (!e(applicationContext)) {
            throw new GetuiPushException("libgetuiext3.so不存在");
        }
        try {
            applicationInfo = applicationContext.getPackageManager().getApplicationInfo(applicationContext.getPackageName(), 128);
        } catch (PackageManager.NameNotFoundException e) {
            e.printStackTrace();
        }
        if (applicationInfo.metaData == null) {
            throw new GetuiPushException("未配置META-DATA");
        }
        if (TextUtils.isEmpty(applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPID))) {
            throw new GetuiPushException("未配置个推APPID");
        }
        if (TextUtils.isEmpty(applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPSECRET))) {
            throw new GetuiPushException("未配置个推APPSECRET");
        }
        if (TextUtils.isEmpty(applicationInfo.metaData.getString(AssistPushConsts.GETUI_APPKEY))) {
            throw new GetuiPushException("未配置个推APPKEY");
        }
        List<ResolveInfo> listQueryIntentServices = applicationContext.getPackageManager().queryIntentServices(new Intent(applicationContext, (Class<?>) PushService.class), 0);
        if (listQueryIntentServices.size() == 0) {
            throw new GetuiPushException("未集成com.igexin.sdk.PushService");
        }
        ServiceInfo serviceInfo = listQueryIntentServices.get(0).serviceInfo;
        if (serviceInfo != null && !serviceInfo.processName.endsWith(":pushservice")) {
            throw new GetuiPushException("PushService需配置在pushservice进程");
        }
        if (applicationContext.getPackageManager().queryBroadcastReceivers(new Intent(applicationContext, (Class<?>) PushReceiver.class), 0).size() == 0) {
            throw new GetuiPushException("未集成com.igexin.sdk.PushReceiver");
        }
        try {
            PackageInfo packageInfo = applicationContext.getPackageManager().getPackageInfo(applicationContext.getPackageName(), 4096);
            if (packageInfo != null) {
                String[] strArr = packageInfo.requestedPermissions;
                if (strArr == null || strArr.length == 0) {
                    throw new GetuiPushException("Manifest中无权限配置");
                }
                List listAsList = Arrays.asList(strArr);
                if (!listAsList.contains(com.kuaishou.weapon.p0.g.f2775a)) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.INTERNET");
                }
                if (!listAsList.contains("android.permission.READ_PHONE_STATE")) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.READ_PHONE_STATE");
                }
                if (!listAsList.contains(com.kuaishou.weapon.p0.g.b)) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.ACCESS_NETWORK_STATE");
                }
                if (!listAsList.contains(com.kuaishou.weapon.p0.g.d)) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.ACCESS_WIFI_STATE");
                }
                if (!listAsList.contains("android.permission.WRITE_EXTERNAL_STORAGE")) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.WRITE_EXTERNAL_STORAGE");
                }
                if (!listAsList.contains("android.permission.VIBRATE")) {
                    throw new GetuiPushException("未在Manifest中配置所需权限：android.permission.VIBRATE");
                }
            }
        } catch (PackageManager.NameNotFoundException e2) {
            e2.printStackTrace();
        }
        ServiceInfo serviceInfo2 = (ServiceInfo) b.a(applicationContext, PushService.class).first;
        if (serviceInfo2 == null) {
            throw new GetuiPushException("未找到继承 com.igexin.sdk.PushService 的子类");
        }
        if (!serviceInfo2.processName.endsWith(":pushservice")) {
            throw new GetuiPushException("自定义推送服务(Service)需配置在pushservice进程");
        }
        if (!serviceInfo2.exported) {
            throw new GetuiPushException("自定义推送服务(Service).exported需配置为true");
        }
        if (!TextUtils.isEmpty(serviceInfo2.permission)) {
            throw new GetuiPushException("自定义推送服务(Service)不能配置android:permission");
        }
        if (((ServiceInfo) b.a(applicationContext, GTIntentService.class).first) == null) {
            throw new GetuiPushException("未找到继承 com.igexin.sdk.GTIntentService 的子类");
        }
    }

    public static void d() {
        com.igexin.push.core.d.s = ((PowerManager) com.igexin.push.core.d.g.getSystemService("power")).isScreenOn() ? 1 : 0;
    }

    public static boolean d(Context context) {
        if (b == null) {
            b = (context.getApplicationInfo().flags & 2) == 0 ? -1 : 1;
        }
        return b.intValue() > 0;
    }

    public static boolean e() {
        try {
            for (String str : com.igexin.push.config.j.p.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                if (Build.MODEL.toLowerCase().contains(str.toLowerCase())) {
                    return false;
                }
            }
            return true;
        } catch (Throwable unused) {
            return true;
        }
    }

    private static boolean e(Context context) {
        File file = new File(context.getApplicationInfo().nativeLibraryDir, "libgetuiext3.so");
        if (file.exists()) {
            return true;
        }
        String str = "libgetuiext3.so not found in path: " + file.getAbsolutePath() + " please check!";
        com.igexin.b.a.c.a.c.a().a("[" + f2652a + "] " + str);
        return false;
    }

    public static boolean f() {
        ConnectivityManager connectivityManager;
        try {
            connectivityManager = (ConnectivityManager) com.igexin.push.core.d.g.getSystemService("connectivity");
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2652a + "|network available ex =" + th.toString(), new Object[0]);
        }
        if (connectivityManager == null) {
            com.igexin.b.a.c.b.a(f2652a + "|ConnectivityManager is null", new Object[0]);
            return false;
        }
        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        com.igexin.b.a.c.b.a(f2652a + "|activeNetworkInfo = " + activeNetworkInfo, new Object[0]);
        if (activeNetworkInfo == null || activeNetworkInfo.getState() != NetworkInfo.State.CONNECTED) {
            com.igexin.b.a.c.b.a(f2652a + "|network available = false", new Object[0]);
            return false;
        }
        com.igexin.b.a.c.b.a(f2652a + (activeNetworkInfo.getType() == 0 ? Device.NETWORN_MOBILE : activeNetworkInfo.getType() == 1 ? Device.NETWORN_WIFI : Device.NETWORN_NONE) + "|connected", new Object[0]);
        return true;
    }

    public static boolean g() {
        return System.currentTimeMillis() >= 1182566108138L;
    }

    public static boolean h() {
        String str = com.igexin.push.config.j.s;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            for (String str2 : str.split(Constants.ACCEPT_TIME_SEPARATOR_SP)) {
                if (str2.contains("|") && str2.contains(Constants.WAVE_SEPARATOR)) {
                    String strSubstring = str2.substring(0, str2.indexOf("|"));
                    String[] strArrSplit = str2.substring(str2.indexOf("|") + 1).split(Constants.WAVE_SEPARATOR);
                    if (strArrSplit.length == 2) {
                        int i = Integer.parseInt(strArrSplit[0]);
                        int i2 = Integer.parseInt(strArrSplit[1]);
                        if (j.a().equalsIgnoreCase(strSubstring) && Build.VERSION.SDK_INT >= i && Build.VERSION.SDK_INT <= i2) {
                            return true;
                        }
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }
}
