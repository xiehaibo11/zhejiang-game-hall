package com.mbridge.msdk.click;

import android.app.Activity;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.Process;
import android.text.TextUtils;
import android.view.ContextThemeWrapper;
import android.webkit.MimeTypeMap;
import android.widget.Toast;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.c.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.aj;
import com.mbridge.msdk.foundation.tools.o;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.qihoo360.i.IPluginManager;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.File;
import java.lang.reflect.InvocationTargetException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: CommonClickUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static Handler f3153a = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.click.c.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            String str;
            String str2;
            String string;
            super.handleMessage(message);
            try {
                if (message.what != 1000) {
                    return;
                }
                int i = message.arg1;
                int i2 = message.arg2;
                Bundle data = message.getData();
                if (data != null) {
                    String string2 = data.getString("rid");
                    String string3 = data.getString("rid_n");
                    string = data.getString("cid");
                    str = string2;
                    str2 = string3;
                } else {
                    str = "";
                    str2 = str;
                    string = str2;
                }
                new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a(i, i2, str, str2, string);
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    th.printStackTrace();
                }
            }
        }
    };
    private static volatile boolean b;

    public static String a(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        if (str.lastIndexOf("/") == -1) {
            return str.hashCode() + "";
        }
        return (str.hashCode() + str.substring(str.lastIndexOf("/") + 1).hashCode()) + "";
    }

    public static void a(Context context, String str) {
        if (str == null || context == null) {
            return;
        }
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 65536);
            if (resolveInfoResolveActivity != null) {
                intent.setClassName(resolveInfoResolveActivity.activityInfo.packageName, resolveInfoResolveActivity.activityInfo.name);
            }
            context.startActivity(intent);
        } catch (Exception e) {
            e.printStackTrace();
            try {
                Intent intent2 = new Intent("android.intent.action.VIEW", Uri.parse(str));
                intent2.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                context.startActivity(intent2);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    public static void b(Context context, String str) {
        if (context == null || str == null) {
            return;
        }
        try {
            Class.forName("com.mbridge.msdk.activity.MBCommonActivity");
            Intent intent = new Intent(context, Class.forName("com.mbridge.msdk.activity.MBCommonActivity"));
            intent.putExtra("url", str);
            if (!(context instanceof ContextThemeWrapper)) {
                intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            }
            context.startActivity(intent);
        } catch (ClassNotFoundException e) {
            z.d("CommonClickUtil", e.getMessage());
        } catch (Throwable th) {
            z.d("CommonClickUtil", th.getMessage());
        }
    }

    public static void a(Activity activity, int i, boolean z, Context context) {
        z.a("======", "======onActivityStarted:" + i + "---" + z);
        if (Build.VERSION.SDK_INT < 29 || z || i != 0) {
            return;
        }
        z.a("======", "======onActivityStarted:inner");
        com.mbridge.msdk.foundation.entity.f fVarA = com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(context)).a();
        if (fVarA != null) {
            z.a("======", "======dlinfo:" + fVarA.toString());
            String strA = fVarA.a();
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            File file = new File(strA);
            if (file.exists()) {
                String strC = fVarA.c();
                a(context, Uri.fromFile(file), fVarA.b(), fVarA.c());
                com.mbridge.msdk.foundation.same.report.e.a(context, strC, fVarA.d(), fVarA.e(), fVarA.f(), fVarA.h(), fVarA.g());
            }
        }
    }

    public static void c(Context context, String str) {
        com.mbridge.msdk.foundation.db.e eVarA = com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(context));
        int iC = eVarA.c(str);
        if ((Build.VERSION.SDK_INT >= 29 && com.mbridge.msdk.foundation.controller.a.f().b() == 0) && iC == 1) {
            eVarA.a(str);
        }
        if (iC == 10) {
            eVarA.a(str, 11);
        }
    }

    public static boolean a(CampaignEx campaignEx) {
        if (campaignEx != null) {
            String akdlui = campaignEx.getAkdlui();
            if (TextUtils.isEmpty(akdlui)) {
                akdlui = SameMD5.getMD5(campaignEx.getClickURL());
            }
            if (!TextUtils.isEmpty(ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui, "").toString())) {
                return !new File(r7).exists();
            }
            int iIntValue = ((Integer) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + IPluginManager.KEY_PROCESS, 0)).intValue();
            int iMyPid = Process.myPid();
            if (iIntValue != 0 && iIntValue == iMyPid) {
                if (((Long) ag.b(com.mbridge.msdk.foundation.controller.a.f().j(), akdlui + "isDowning", 0L)).longValue() != 0) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void a(Context context, Uri uri, String str, String str2) {
        File file;
        int iIntValue;
        int iIntValue2;
        String str3;
        String str4;
        StringBuilder sb;
        if (b) {
            synchronized (c.class) {
                if (b) {
                    return;
                }
            }
        }
        b = true;
        Uri uri2 = null;
        try {
            file = new File(new URI(uri.toString()));
        } catch (URISyntaxException e) {
            e.printStackTrace();
            file = null;
        }
        Intent intent = new Intent();
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.setAction("android.intent.action.VIEW");
        try {
            try {
                if (!aj.b(context)) {
                    b(context, str, str2);
                } else if (aj.d(context)) {
                    if (Build.VERSION.SDK_INT >= 24) {
                        try {
                            try {
                                uri2 = (Uri) (!TextUtils.isEmpty(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH) ? Class.forName(MBridgeConstans.FILE_PROVIDE_CUSTOM_PATH) : Class.forName("com.mbridge.msdk.foundation.tools.MBFileProvider")).getMethod("getUriForFile", Context.class, String.class, File.class).invoke(null, context, context.getApplicationContext().getPackageName() + ".mbFileProvider", file);
                            } catch (IllegalArgumentException e2) {
                                e2.printStackTrace();
                            } catch (NoSuchMethodException e3) {
                                e3.printStackTrace();
                            }
                        } catch (ClassNotFoundException e4) {
                            e4.printStackTrace();
                        } catch (IllegalAccessException e5) {
                            e5.printStackTrace();
                        } catch (SecurityException e6) {
                            e6.printStackTrace();
                        } catch (InvocationTargetException e7) {
                            e7.printStackTrace();
                        }
                        if (uri2 != null) {
                            intent.addFlags(1);
                            intent.setDataAndType(uri2, context.getContentResolver().getType(uri2));
                            c(context, str2);
                            context.startActivity(intent);
                        } else {
                            b(context, str, str2);
                        }
                    } else {
                        intent.setDataAndType(Uri.fromFile(file), a(file));
                        c(context, str2);
                        context.startActivity(intent);
                    }
                } else if (aj.e(context)) {
                    b(context, str, str2);
                } else {
                    intent.setDataAndType(Uri.fromFile(file), a(file));
                    c(context, str2);
                    context.startActivity(intent);
                }
                b = false;
                iIntValue = ((Integer) ag.b(context, str2 + "downloadType", -1)).intValue();
                iIntValue2 = ((Integer) ag.b(context, str2 + "linkType", -1)).intValue();
                str3 = (String) ag.b(context, str2 + "rid", "");
                str4 = (String) ag.b(context, str2 + "rid_n", "");
                sb = new StringBuilder();
            } catch (Throwable th) {
                b = false;
                a(((Integer) ag.b(context, str2 + "downloadType", -1)).intValue(), ((Integer) ag.b(context, str2 + "linkType", -1)).intValue(), (String) ag.b(context, str2 + "rid", ""), (String) ag.b(context, str2 + "rid_n", ""), (String) ag.b(context, str2 + "cid", ""));
                throw th;
            }
        } catch (Exception e8) {
            e8.printStackTrace();
            b(context, str, str2);
            b = false;
            iIntValue = ((Integer) ag.b(context, str2 + "downloadType", -1)).intValue();
            iIntValue2 = ((Integer) ag.b(context, str2 + "linkType", -1)).intValue();
            str3 = (String) ag.b(context, str2 + "rid", "");
            str4 = (String) ag.b(context, str2 + "rid_n", "");
            sb = new StringBuilder();
        } catch (Throwable unused) {
            b(context, str, str2);
            b = false;
            iIntValue = ((Integer) ag.b(context, str2 + "downloadType", -1)).intValue();
            iIntValue2 = ((Integer) ag.b(context, str2 + "linkType", -1)).intValue();
            str3 = (String) ag.b(context, str2 + "rid", "");
            str4 = (String) ag.b(context, str2 + "rid_n", "");
            sb = new StringBuilder();
        }
        sb.append(str2);
        sb.append("cid");
        a(iIntValue, iIntValue2, str3, str4, (String) ag.b(context, sb.toString(), ""));
    }

    private static void a(int i, int i2, String str, String str2, String str3) {
        try {
            if (Looper.myLooper() == Looper.getMainLooper()) {
                new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a(i, i2, str, str2, str3);
            } else {
                Message messageObtain = Message.obtain();
                messageObtain.what = 1000;
                messageObtain.arg1 = i;
                messageObtain.arg2 = i2;
                Bundle bundle = new Bundle();
                bundle.putString("rid", str);
                bundle.putString("rid_n", str2);
                bundle.putString("cid", str3);
                messageObtain.setData(bundle);
                f3153a.sendMessage(messageObtain);
            }
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    public static void a(Context context, String str, String str2) {
        try {
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "downloadType", 3);
            a(context, str);
            a(((Integer) ag.b(context, str2 + "downloadType", -1)).intValue(), ((Integer) ag.b(context, str2 + "linkType", -1)).intValue(), (String) ag.b(context, str2 + "rid", ""), (String) ag.b(context, str2 + "rid_n", ""), (String) ag.b(context, str2 + "cid", ""));
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    private static void b(Context context, String str, String str2) {
        try {
            ag.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2 + "downloadType", 3);
            a(context, str);
        } catch (Throwable th) {
            if (MBridgeConstans.DEBUG) {
                th.printStackTrace();
            }
        }
    }

    private static String a(File file) {
        String name = file.getName();
        return MimeTypeMap.getSingleton().getMimeTypeFromExtension(name.substring(name.lastIndexOf(".") + 1, name.length()).toLowerCase());
    }

    public static boolean d(Context context, String str) {
        if (str != null && !"".equals(str)) {
            try {
                PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 8192);
                if (packageInfo != null) {
                    return str.equals(packageInfo.packageName);
                }
            } catch (Exception unused) {
            }
        }
        return false;
    }

    public static boolean e(Context context, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            Uri uri = Uri.parse(str);
            Intent intent = new Intent("android.intent.action.VIEW", uri);
            intent.setData(uri);
            if ((uri.getScheme().startsWith(t.b("L7QthdSsLkP8")) || o.a().a(str)) && a(context, intent)) {
                return true;
            }
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
            return true;
        } catch (Throwable th) {
            z.c("SDKCLICK", th.getMessage(), th);
            return false;
        }
    }

    private static boolean a(Context context, Intent intent) {
        try {
        } catch (Throwable th) {
            z.c("SDKCLICK", th.getMessage(), th);
        }
        if (context instanceof Activity) {
            context.startActivity(intent);
            return true;
        }
        if (com.mbridge.msdk.foundation.controller.a.f().c() != null) {
            Context contextC = com.mbridge.msdk.foundation.controller.a.f().c();
            if (!(contextC instanceof Activity)) {
                return false;
            }
            contextC.startActivity(intent);
            return true;
        }
        return false;
    }

    public static void b(final CampaignEx campaignEx) {
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.click.c.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    if (campaignEx == null || TextUtils.isEmpty(campaignEx.getDeepLinkURL())) {
                        return;
                    }
                    String deepLinkURL = campaignEx.getDeepLinkURL();
                    if (Uri.parse(deepLinkURL).getScheme().startsWith(t.b("L7QthdSsLkP8")) || o.a().a(deepLinkURL)) {
                        com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a(campaignEx);
                    }
                } catch (Throwable th) {
                    z.d("SDKCLICK", th.getMessage());
                }
            }
        });
    }

    public static void f(Context context, String str) {
        Intent launchIntentForPackage;
        List<ResolveInfo> listQueryIntentActivities;
        ResolveInfo next;
        try {
            if (TextUtils.isEmpty(str) || !d(context, str) || (launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(str)) == null || (listQueryIntentActivities = context.getPackageManager().queryIntentActivities(launchIntentForPackage, 0)) == null || listQueryIntentActivities.size() <= 0 || (next = listQueryIntentActivities.iterator().next()) == null) {
                return;
            }
            ComponentName componentName = new ComponentName(next.activityInfo.packageName, next.activityInfo.name);
            Intent intent = new Intent();
            intent.setComponent(componentName);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
        } catch (Exception e) {
            Toast.makeText(context, "The app connot start up", 0).show();
            e.printStackTrace();
        }
    }

    private static String a(String str, List<String> list, String str2) {
        if (list != null) {
            for (String str3 : list) {
                if (!TextUtils.isEmpty(str3)) {
                    str = str.replaceAll(str3, str2);
                }
            }
        }
        return str;
    }

    public static String a(String str, String str2, String str3) {
        Map<String, a.C0242a> mapAA;
        try {
            if (TextUtils.isEmpty(str)) {
                return str;
            }
            String host = Uri.parse(str).getHost();
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null || (mapAA = aVarB.aA()) == null || TextUtils.isEmpty(host)) {
                return str;
            }
            Iterator<Map.Entry<String, a.C0242a>> it = mapAA.entrySet().iterator();
            while (it.hasNext()) {
                String key = it.next().getKey();
                if (!TextUtils.isEmpty(key) && host.contains(key)) {
                    a.C0242a c0242a = mapAA.get(key);
                    return a(a(a(a(str, c0242a.d(), String.valueOf(v.y(com.mbridge.msdk.foundation.controller.a.f().j()))), c0242a.c(), String.valueOf(v.x(com.mbridge.msdk.foundation.controller.a.f().j()))), c0242a.a(), str2), c0242a.b(), str3);
                }
            }
            return str;
        } catch (Exception e) {
            e.printStackTrace();
            return str;
        }
    }
}
