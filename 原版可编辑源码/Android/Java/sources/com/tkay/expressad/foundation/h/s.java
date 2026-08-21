package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.out.j;
import java.io.File;
import java.util.Iterator;
import java.util.List;

public final class s extends f {
    public static boolean a = false;
    public static char[] b = {'a', 'n', 'd', 'r', 'o', 'i', 'd', 'c', 'o', 'n', 't', 'e', 'n', 't', 'p', 'm', 'g', 'e', 't', 'C', 'o', 'n', 't', 'e', 'x', 't'};
    private static final String c = "SDKUtil";

    public static class a {
        public static final String a = "com.android.vending";
        public static final String b = "market";
        public static final String c = "play.google.com";
        public static final String d = "market.android.com";
        public static final String e = "google.com";
        public static final String f = "market://";
        public static final String g = "details?id=";
        public static final String h = "market://details?id=com.package.name";

        private static Intent a() {
            return new Intent("android.intent.action.VIEW", Uri.parse(h));
        }

        private static List<ResolveInfo> a(Context context) {
            try {
                return context.getPackageManager().queryIntentActivities(a(), 0);
            } catch (Exception e2) {
                e2.printStackTrace();
                return null;
            }
        }

        private static boolean b(Context context) {
            List<ResolveInfo> listA = a(context);
            return listA != null && listA.size() > 0;
        }

        public static boolean a(String str) {
            return b(str) || c(str);
        }

        public static boolean b(String str) {
            try {
                if (TextUtils.isEmpty(str)) {
                    return false;
                }
                return Uri.parse(str).getScheme().equals("market");
            } catch (Throwable th) {
                Log.getStackTraceString(th);
                return false;
            }
        }

        private static boolean c(String str) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    Uri uri = Uri.parse(str);
                    if (uri.getHost().equals("play.google.com")) {
                        return true;
                    }
                    return uri.getHost().equals("market.android.com");
                }
            } catch (Throwable th) {
                Log.getStackTraceString(th);
            }
            return false;
        }

        private static String d(String str) {
            if (b(str)) {
                return str;
            }
            if (c(str)) {
                return "market://".concat(String.valueOf(str.substring(str.indexOf(g))));
            }
            return null;
        }

        public static boolean a(Context context, String str, j.c cVar) {
            try {
                if (!b(str)) {
                    str = c(str) ? "market://".concat(String.valueOf(str.substring(str.indexOf(g)))) : null;
                }
                if (TextUtils.isEmpty(str)) {
                    return false;
                }
                Intent intentA = a();
                intentA.setData(Uri.parse(str));
                intentA.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                context.startActivity(intentA);
                s.a(cVar);
                return true;
            } catch (Throwable th) {
                Log.getStackTraceString(th);
                return false;
            }
        }
    }

    public static void a(j.c cVar) {
        if (cVar instanceof j.e) {
            ((j.e) cVar).c();
        }
    }

    private static String b(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        if (str.lastIndexOf("/") == -1) {
            StringBuilder sb = new StringBuilder();
            sb.append(str.hashCode());
            return sb.toString();
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str.hashCode() + str.substring(str.lastIndexOf("/") + 1).hashCode());
        return sb2.toString();
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0061, code lost:
    
        r8.startActivity(r1);
        a(r10);
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0067, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0068, code lost:
    
        a(r8, "https://play.google.com/store/apps/details?id=".concat(java.lang.String.valueOf(r9.replace(com.ss.android.download.api.constant.BaseConstants.MARKET_PREFIX, ""))), r10);
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0077, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static void b(Context context, String str, j.c cVar) {
        try {
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            List<ResolveInfo> listQueryIntentActivities = context.getPackageManager().queryIntentActivities(intent, 0);
            boolean z = listQueryIntentActivities.size() > 0;
            if (!str.startsWith("market://")) {
                if (str.startsWith("https://play.google.com/")) {
                    b(context, BaseConstants.MARKET_PREFIX.concat(String.valueOf(str.replace("https://play.google.com/store/apps/details?id=", ""))), cVar);
                }
            } else {
                if (!z) {
                    a(context, "https://play.google.com/store/apps/details?id=".concat(String.valueOf(str.replace(BaseConstants.MARKET_PREFIX, ""))), cVar);
                    return;
                }
                Iterator<ResolveInfo> it = listQueryIntentActivities.iterator();
                while (true) {
                    if (it.hasNext()) {
                        if (it.next().activityInfo.packageName.equals("com.android.vending")) {
                            intent.setClassName("com.android.vending", "com.android.vending.AssetBrowserActivity");
                            break;
                        }
                    }
                }
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public static void a(Context context, String str, com.tkay.expressad.foundation.d.c cVar, j.c cVar2) {
        if (context == null) {
            return;
        }
        if (a) {
            a(context, str, cVar2);
            return;
        }
        try {
            Class.forName("com.tkay.expressad.activity.TYCommonActivity");
            Intent intent = new Intent(context, Class.forName("com.tkay.expressad.activity.TYCommonActivity"));
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (a.b(str)) {
                str = "https://play.google.com/store/apps/details?id=".concat(String.valueOf(str.replace(BaseConstants.MARKET_PREFIX, "")));
            }
            intent.putExtra("url", str);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra("mvcommon", cVar);
            context.startActivity(intent);
        } catch (Exception unused) {
            a(context, str, cVar2);
        }
    }

    public static void a(Context context, String str, j.c cVar) {
        if (str == null || context == null) {
            return;
        }
        try {
            if (a.b(str)) {
                str = "https://play.google.com/store/apps/details?id=".concat(String.valueOf(str.replace(BaseConstants.MARKET_PREFIX, "")));
            }
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 65536);
            if (resolveInfoResolveActivity != null) {
                intent.setClassName(resolveInfoResolveActivity.activityInfo.packageName, resolveInfoResolveActivity.activityInfo.name);
            }
            context.startActivity(intent);
            a(cVar);
        } catch (Exception e) {
            e.printStackTrace();
            try {
                Intent intent2 = new Intent("android.intent.action.VIEW", Uri.parse(str));
                intent2.addFlags(268468224);
                context.startActivity(intent2);
                a(cVar);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    public static String a(String str) {
        String string;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        File fileA = com.tkay.expressad.foundation.g.c.f.a(com.tkay.expressad.foundation.g.c.c.h);
        if (TextUtils.isEmpty(str)) {
            string = "";
        } else if (str.lastIndexOf("/") == -1) {
            StringBuilder sb = new StringBuilder();
            sb.append(str.hashCode());
            string = sb.toString();
        } else {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(str.hashCode() + str.substring(str.lastIndexOf("/") + 1).hashCode());
            string = sb2.toString();
        }
        return new File(fileA, string).getAbsolutePath();
    }

    private static String a() {
        return com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.e);
    }
}
