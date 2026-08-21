package com.kwad.sdk.core.network;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.WebSettings;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.y;
import java.net.HttpURLConnection;
import java.net.URLEncoder;

/* JADX INFO: loaded from: classes2.dex */
public final class q {
    private static String apJ = "";
    private static String apK = "";

    public static String Bi() {
        if (!TextUtils.isEmpty(apJ)) {
            return apJ;
        }
        String property = System.getProperty("http.agent");
        apJ = property;
        if (TextUtils.isEmpty(property)) {
            return apJ;
        }
        StringBuffer stringBuffer = new StringBuffer();
        int length = apJ.length();
        for (int i = 0; i < length; i++) {
            char cCharAt = apJ.charAt(i);
            if (cCharAt <= 31 || cCharAt >= 127) {
                stringBuffer.append(String.format("\\u%04x", Integer.valueOf(cCharAt)));
            } else {
                stringBuffer.append(cCharAt);
            }
        }
        String string = stringBuffer.toString();
        apJ = string;
        return string;
    }

    public static String Bj() {
        String strCf;
        if (!TextUtils.isEmpty(apK)) {
            return apK;
        }
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        if (context == null) {
            return "";
        }
        try {
            strCf = y.cf(context);
            apK = strCf;
        } catch (Exception unused) {
        }
        if (!TextUtils.isEmpty(strCf)) {
            return apK;
        }
        apK = Build.VERSION.SDK_INT >= 17 ? WebSettings.getDefaultUserAgent(context) : System.getProperty("http.agent");
        String strEncode = URLEncoder.encode(apK, "UTF-8");
        apK = strEncode;
        y.af(context, strEncode);
        return apK;
    }

    public static void b(HttpURLConnection httpURLConnection) {
        httpURLConnection.setRequestProperty("User-Agent", getUserAgent());
        httpURLConnection.setRequestProperty("BrowserUa", Bj());
        httpURLConnection.setRequestProperty("SystemUa", Bi());
    }

    public static String getDefaultUserAgent() {
        return Bi() + "-ksad-android-3.3.42";
    }

    public static String getUserAgent() {
        return ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).getUserAgent();
    }
}
