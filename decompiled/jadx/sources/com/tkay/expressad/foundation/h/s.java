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
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class s extends f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static boolean f6956a = false;
    public static char[] b = {'a', 'n', 'd', 'r', 'o', 'i', 'd', 'c', 'o', 'n', 't', 'e', 'n', 't', 'p', 'm', 'g', 'e', 't', 'C', 'o', 'n', 't', 'e', 'x', 't'};
    private static final String c = "SDKUtil";

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final String f6957a = "com.android.vending";
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
        To view partially-correct add '--show-bad-code' argument
    */
    private static void b(android.content.Context r8, java.lang.String r9, com.tkay.expressad.out.j.c r10) {
        /*
            java.lang.String r0 = "com.android.vending"
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L90
            java.lang.String r2 = "android.intent.action.VIEW"
            android.net.Uri r3 = android.net.Uri.parse(r9)     // Catch: java.lang.Exception -> L90
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L90
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Exception -> L90
            android.content.pm.PackageManager r2 = r8.getPackageManager()     // Catch: java.lang.Exception -> L90
            r3 = 0
            java.util.List r2 = r2.queryIntentActivities(r1, r3)     // Catch: java.lang.Exception -> L90
            int r4 = r2.size()     // Catch: java.lang.Exception -> L90
            if (r4 <= 0) goto L22
            r3 = 1
        L22:
            java.lang.String r4 = "market://"
            boolean r4 = r9.startsWith(r4)     // Catch: java.lang.Exception -> L90
            java.lang.String r5 = "https://play.google.com/store/apps/details?id="
            java.lang.String r6 = ""
            java.lang.String r7 = "market://details?id="
            if (r4 == 0) goto L78
            if (r3 != 0) goto L42
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r5.concat(r9)     // Catch: java.lang.Exception -> L90
            a(r8, r9, r10)     // Catch: java.lang.Exception -> L90
            return
        L42:
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L90
        L46:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L90
            if (r3 == 0) goto L61
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L90
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3     // Catch: java.lang.Exception -> L90
            android.content.pm.ActivityInfo r3 = r3.activityInfo     // Catch: java.lang.Exception -> L90
            java.lang.String r3 = r3.packageName     // Catch: java.lang.Exception -> L90
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Exception -> L90
            if (r3 == 0) goto L46
            java.lang.String r2 = "com.android.vending.AssetBrowserActivity"
            r1.setClassName(r0, r2)     // Catch: java.lang.Exception -> L90
        L61:
            r8.startActivity(r1)     // Catch: java.lang.Exception -> L68
            a(r10)     // Catch: java.lang.Exception -> L68
            return
        L68:
            java.lang.String r9 = r9.replace(r7, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r5.concat(r9)     // Catch: java.lang.Exception -> L90
            a(r8, r9, r10)     // Catch: java.lang.Exception -> L90
            return
        L78:
            java.lang.String r0 = "https://play.google.com/"
            boolean r0 = r9.startsWith(r0)     // Catch: java.lang.Exception -> L90
            if (r0 == 0) goto L8f
            java.lang.String r9 = r9.replace(r5, r6)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L90
            java.lang.String r9 = r7.concat(r9)     // Catch: java.lang.Exception -> L90
            b(r8, r9, r10)     // Catch: java.lang.Exception -> L90
        L8f:
            return
        L90:
            r8 = move-exception
            r8.getMessage()
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.h.s.b(android.content.Context, java.lang.String, com.tkay.expressad.out.j$c):void");
    }

    public static void a(Context context, String str, com.tkay.expressad.foundation.d.c cVar, j.c cVar2) {
        if (context == null) {
            return;
        }
        if (f6956a) {
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
        File fileA = com.tkay.expressad.foundation.g.c.f.a(com.tkay.expressad.foundation.g.c.c.ANYTHINK_700_IMG);
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
        return com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.AD_ANYTHINK_700);
    }
}
