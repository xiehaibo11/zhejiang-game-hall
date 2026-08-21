package com.huawei.hms.push;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import android.webkit.URLUtil;
import com.huawei.hms.common.PackageConstants;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.ResourceLoaderUtil;
import com.huawei.hms.utils.Util;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.ArrayList;

public class j {
    public static final String[] a = {"url", "app", "cosa", "rp"};
    public Context b;
    public k c;

    public j(Context context, k kVar) {
        this.b = context;
        this.c = kVar;
    }

    public static boolean b(String str) {
        for (String str2 : a) {
            if (str2.equals(str)) {
                return true;
            }
        }
        return false;
    }

    public final void a() {
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("enter launchApp, appPackageName =");
            sb.append(this.c.d());
            sb.append(",and msg.intentUri is ");
            sb.append(this.c.n());
            HMSLog.i("PushSelfShowLog", sb.toString());
            if (q.c(this.b, this.c.d())) {
                b();
            } else {
                d();
            }
        } catch (Exception e) {
            HMSLog.e("PushSelfShowLog", "launchApp error:" + e.toString());
        }
    }

    public void c() {
        k kVar;
        HMSLog.d("PushSelfShowLog", "enter launchNotify()");
        if (this.b == null || (kVar = this.c) == null) {
            HMSLog.d("PushSelfShowLog", "launchNotify  context or msg is null");
            return;
        }
        if ("app".equals(kVar.i())) {
            a();
            return;
        }
        if ("cosa".equals(this.c.i())) {
            b();
            return;
        }
        if ("rp".equals(this.c.i())) {
            HMSLog.w("PushSelfShowLog", this.c.i() + " not support rich message.");
            return;
        }
        if ("url".equals(this.c.i())) {
            HMSLog.w("PushSelfShowLog", this.c.i() + " not support URL.");
            return;
        }
        HMSLog.d("PushSelfShowLog", this.c.i() + " is not exist in hShowType");
    }

    public final void d() {
        try {
            StringBuilder sb = new StringBuilder();
            if (!TextUtils.isEmpty(this.c.n())) {
                sb.append("&referrer=");
                sb.append(Uri.encode(a(this.c.n())));
            }
            StringBuilder sb2 = new StringBuilder();
            sb2.append(BaseConstants.MARKET_PREFIX);
            sb2.append(this.c.d());
            sb2.append((Object) sb);
            String string = sb2.toString();
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setData(Uri.parse(string));
            intent.setPackage(PackageConstants.SERVICES_PACKAGE_APPMARKET);
            Intent intent2 = new Intent("android.intent.action.VIEW");
            intent2.setData(Uri.parse(string));
            intent2.setPackage("com.android.vending");
            if (q.a(this.b, "com.android.vending", intent2).booleanValue()) {
                intent2.setFlags(402653184);
                StringBuilder sb3 = new StringBuilder();
                sb3.append("open google play store's app detail, IntentUrl is:");
                sb3.append(intent2.toURI());
                HMSLog.i("PushSelfShowLog", sb3.toString());
                this.b.startActivity(intent2);
                return;
            }
            if (!q.a(this.b, PackageConstants.SERVICES_PACKAGE_APPMARKET, intent).booleanValue()) {
                HMSLog.i("PushSelfShowLog", "open app detail by browser.");
                e();
                return;
            }
            intent.setFlags(402653184);
            StringBuilder sb4 = new StringBuilder();
            sb4.append("open HiApp's app detail, IntentUrl is:");
            sb4.append(intent.toURI());
            HMSLog.i("PushSelfShowLog", sb4.toString());
            this.b.startActivity(intent);
        } catch (Exception e) {
            HMSLog.e("PushSelfShowLog", "open market app detail failed,exception:" + e);
        }
    }

    public final void e() {
        String queryParameter;
        String queryParameter2 = "";
        try {
            Uri uri = Uri.parse(Uri.decode(this.c.n()));
            try {
                queryParameter = uri.getQueryParameter("h_w_hiapp_referrer");
            } catch (Exception unused) {
                HMSLog.i("PushSelfShowLog", "parse h_w_hiapp_referrer failed");
                queryParameter = "";
            }
            try {
                try {
                    queryParameter2 = uri.getQueryParameter("h_w_gp_referrer");
                } catch (Exception e) {
                    e = e;
                    HMSLog.w("PushSelfShowLog", "parse intentUri error." + e.toString());
                }
            } catch (Exception unused2) {
                HMSLog.i("PushSelfShowLog", "parse h_w_hiapp_referrer failed");
            }
        } catch (Exception e2) {
            e = e2;
            queryParameter = "";
        }
        String strDecode = null;
        if (Util.isEMUI() && Util.isChinaROM()) {
            HMSLog.i("PushSelfShowLog", "It is China device, open Huawei market web, referrer: " + queryParameter);
            String strDecode2 = Uri.decode(queryParameter);
            if (URLUtil.isValidUrl(strDecode2)) {
                strDecode = strDecode2;
            } else {
                Context context = this.b;
                if (context != null) {
                    ResourceLoaderUtil.setmContext(context);
                    strDecode = ResourceLoaderUtil.getString("hms_push_vmall");
                }
            }
        } else {
            HMSLog.i("PushSelfShowLog", "not EMUI system or not in China, open google play web, referrer: " + queryParameter2);
            strDecode = Uri.decode(queryParameter2);
            if (!URLUtil.isValidUrl(strDecode)) {
                ResourceLoaderUtil.setmContext(this.b);
                strDecode = ResourceLoaderUtil.getString("hms_push_google") + this.c.d();
            }
        }
        HMSLog.i("PushSelfShowLog", "open the URL by browser: " + strDecode);
        q.e(this.b, strDecode);
    }

    public final void b() {
        HMSLog.i("PushSelfShowLog", "run into launchCosaApp");
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("enter launchExistApp cosa, appPackageName =");
            sb.append(this.c.d());
            sb.append(",and msg.intentUri is ");
            sb.append(this.c.n());
            HMSLog.i("PushSelfShowLog", sb.toString());
            Intent intentB = q.b(this.b, this.c.d());
            boolean zBooleanValue = false;
            if (this.c.n() != null) {
                try {
                    Intent uri = Intent.parseUri(this.c.n(), 0);
                    uri.setSelector(null);
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append("Intent.parseUri(msg.intentUri, 0), action:");
                    sb2.append(uri.getAction());
                    HMSLog.i("PushSelfShowLog", sb2.toString());
                    zBooleanValue = q.a(this.b, this.c.d(), uri).booleanValue();
                    if (zBooleanValue) {
                        intentB = uri;
                    }
                } catch (Exception e) {
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append("intentUri error.");
                    sb3.append(e.toString());
                    HMSLog.w("PushSelfShowLog", sb3.toString());
                }
            } else {
                if (this.c.a() != null) {
                    Intent intent = new Intent(this.c.a());
                    if (q.a(this.b, this.c.d(), intent).booleanValue()) {
                        intentB = intent;
                    }
                }
                intentB.setPackage(this.c.d());
            }
            if (intentB == null) {
                HMSLog.i("PushSelfShowLog", "launchCosaApp,intent == null");
                return;
            }
            if (zBooleanValue) {
                intentB.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            } else {
                intentB.setFlags(805437440);
            }
            StringBuilder sb4 = new StringBuilder();
            sb4.append("start ");
            sb4.append(intentB.toURI());
            HMSLog.i("PushSelfShowLog", sb4.toString());
            this.b.startActivity(intentB);
        } catch (Exception e2) {
            HMSLog.e("PushSelfShowLog", "launch Cosa App exception." + e2.toString());
        }
    }

    public final String a(String str) {
        try {
            int iIndexOf = str.indexOf(63);
            if (iIndexOf == -1) {
                return str;
            }
            int i = iIndexOf + 1;
            String[] strArrSplit = str.substring(i).split("&");
            ArrayList arrayList = new ArrayList();
            for (String str2 : strArrSplit) {
                if (!str2.startsWith("h_w_hiapp_referrer") && !str2.startsWith("h_w_gp_referrer")) {
                    arrayList.add(str2);
                }
            }
            StringBuilder sb = new StringBuilder();
            int size = arrayList.size();
            for (int i2 = 0; i2 < size; i2++) {
                sb.append((String) arrayList.get(i2));
                if (i2 < arrayList.size() - 1) {
                    sb.append("&");
                }
            }
            String strSubstring = arrayList.size() == 0 ? str.substring(0, iIndexOf) : str.substring(0, i) + sb.toString();
            StringBuilder sb2 = new StringBuilder();
            sb2.append("after delete referrer, the new IntentUri is:");
            sb2.append(strSubstring);
            HMSLog.d("PushSelfShowLog", sb2.toString());
            return strSubstring;
        } catch (Exception e) {
            HMSLog.e("PushSelfShowLog", "delete referrer exception." + e.toString());
            return str;
        }
    }
}
