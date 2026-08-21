package com.tkay.core.basead.a;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.widget.Toast;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.c.b;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.an;
import com.tkay.core.common.l.l;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5980a = "play.google.com";
    public static final String b = "market.android.com";
    public static final String c = "details?";
    public static final String d = "market";
    public static final String e = "market://";

    public static an a(String str) {
        an anVar = new an();
        anVar.l = 8;
        anVar.n = false;
        anVar.m = true;
        anVar.o = str;
        try {
            if (Uri.parse(str).getScheme().equals("intent")) {
                Intent uri = Intent.parseUri(str, 1);
                uri.addCategory("android.intent.category.BROWSABLE");
                uri.setComponent(null);
                if (Build.VERSION.SDK_INT >= 15) {
                    uri.setSelector(null);
                }
                String stringExtra = uri.getStringExtra("browser_fallback_url");
                if (!TextUtils.isEmpty(stringExtra) && stringExtra.startsWith("http")) {
                    anVar.l = 10;
                    anVar.o = stringExtra;
                    return anVar;
                }
            }
        } catch (Throwable unused) {
        }
        if (d(str)) {
            String strE = e(str);
            anVar.l = 9;
            anVar.o = strE;
        }
        return anVar;
    }

    public static an a(Context context, String str) {
        an anVar = new an();
        anVar.n = !str.startsWith("http");
        anVar.o = str;
        if (d(str)) {
            anVar.o = str;
            boolean zEquals = TextUtils.equals(b.a(context).b(m.a().o()).l(), "1");
            if (a(context, str, false, zEquals)) {
                anVar.m = true;
                if (zEquals) {
                    anVar.l = 3;
                } else {
                    anVar.l = 4;
                }
            } else if (a(context, str, false, false)) {
                anVar.m = true;
                anVar.l = 4;
            }
            return anVar;
        }
        if (!str.startsWith("http")) {
            anVar.o = str;
            if (a(context, str, false, false)) {
                anVar.m = true;
                anVar.l = 5;
            }
            return anVar;
        }
        if (b(str)) {
            String strF = f(str);
            anVar.n = true;
            anVar.o = strF;
            if (a(context, strF, false, true)) {
                anVar.m = true;
                anVar.l = 1;
            } else if (a(context, strF, false, false)) {
                anVar.m = true;
                anVar.l = 2;
            }
        }
        return anVar;
    }

    public static boolean a(Context context, String str, boolean z) {
        if (b(str)) {
            return a(context, f(str), z, true);
        }
        String scheme = Uri.parse(str).getScheme();
        if (scheme == null || scheme.startsWith("http")) {
            return false;
        }
        return a(context, str, z, scheme.startsWith("market") && TextUtils.equals(b.a(context).b(m.a().o()).l(), "1"));
    }

    private static void c(String str) {
        l.a(str);
    }

    public static boolean b(String str) {
        Uri uri;
        try {
            if (!TextUtils.isEmpty(str) && (uri = Uri.parse(str)) != null && uri.getHost() != null) {
                if (uri.getHost().equals("play.google.com")) {
                    return true;
                }
                return uri.getHost().equals("market.android.com");
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    private static boolean d(String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return false;
            }
            return Uri.parse(str).getScheme().equals("market");
        } catch (Throwable unused) {
            return false;
        }
    }

    private static String e(String str) {
        try {
            return "https://play.google.com/store/apps/details?id=".concat(String.valueOf(str.replace(BaseConstants.MARKET_PREFIX, "")));
        } catch (Throwable unused) {
            return str;
        }
    }

    private static String f(String str) {
        try {
            return "market://".concat(String.valueOf(str.substring(str.indexOf(c))));
        } catch (Throwable unused) {
            return null;
        }
    }

    private static boolean a(final Context context, String str, boolean z, boolean z2) {
        Intent intent;
        try {
            Uri uri = Uri.parse(str);
            if (uri.getScheme().equals("intent")) {
                intent = Intent.parseUri(str, 1);
                intent.addCategory("android.intent.category.BROWSABLE");
                intent.setComponent(null);
                if (Build.VERSION.SDK_INT >= 15) {
                    intent.setSelector(null);
                }
            } else {
                intent = new Intent("android.intent.action.VIEW", uri);
                intent.setData(uri);
            }
            if (z2 && TextUtils.isEmpty(intent.getPackage())) {
                intent.setPackage("com.android.vending");
            }
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            context.startActivity(intent);
            return true;
        } catch (Throwable unused) {
            if (!z) {
                return false;
            }
            m.a().a(new Runnable() { // from class: com.tkay.core.basead.a.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    Toast.makeText(context, "Detect that the App Market is not installed and cannot be opened through the App Market.", 1).show();
                }
            });
            return false;
        }
    }
}
