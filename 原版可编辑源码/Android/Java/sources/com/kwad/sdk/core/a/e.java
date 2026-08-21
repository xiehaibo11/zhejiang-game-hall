package com.kwad.sdk.core.a;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.kwad.sdk.service.ServiceProvider;
import com.yxcorp.kuaishou.addfp.KWEGIDDFP;
import java.util.Arrays;
import java.util.Map;

public final class e {
    private static String H(String str, String str2) {
        Uri uri = Uri.parse(str);
        return uri.getPath() + "&" + cU(uri.getQuery()) + "&" + str2;
    }

    public static void a(String str, Map<String, String> map, String str2) {
        map.put("Ks-Sig1", cV(H(str, str2)));
    }

    private static String cU(String str) {
        if (TextUtils.isEmpty(str)) {
            return emptyIfNull(str);
        }
        String[] strArrSplit = str.split("&");
        Arrays.sort(strArrSplit);
        return TextUtils.join("&", strArrSplit);
    }

    private static String cV(String str) {
        String strDoSign;
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        return (context == null || (strDoSign = KWEGIDDFP.doSign(context, str)) == null) ? "" : strDoSign;
    }

    private static String emptyIfNull(String str) {
        return str == null ? "" : str;
    }
}
