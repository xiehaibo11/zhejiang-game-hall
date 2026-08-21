package com.mbridge.msdk.mbjscommon.mraid;

import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.mbjscommon.mraid.a;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: MraidUriUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ConcurrentHashMap<String, String> f3723a = new ConcurrentHashMap<>();
    private static ArrayList<String> b = new ArrayList<>();

    public static com.mbridge.msdk.mbjscommon.windvane.a a(WindVaneWebView windVaneWebView, String str) {
        Set<String> setUnmodifiableSet;
        Uri uri = Uri.parse(str);
        String scheme = uri.getScheme();
        if (TextUtils.isEmpty(scheme) || !scheme.contains("mraid")) {
            return null;
        }
        com.mbridge.msdk.mbjscommon.windvane.a aVar = new com.mbridge.msdk.mbjscommon.windvane.a();
        aVar.d = "MraidJSBridge";
        aVar.e = uri.getHost();
        int i = 0;
        if (b.size() == 0) {
            for (Method method : b.class.getDeclaredMethods()) {
                b.add(method.getName());
            }
        }
        if (!b.contains(aVar.e) && windVaneWebView != null) {
            String campaignId = windVaneWebView.getCampaignId();
            String str2 = aVar.e;
            if (!TextUtils.isEmpty(campaignId)) {
                if (f3723a.containsKey(campaignId)) {
                    String strConcat = f3723a.get(campaignId);
                    if (!TextUtils.isEmpty(str2) && !strConcat.contains(str2)) {
                        if (strConcat.length() > 0) {
                            strConcat = strConcat.concat(Constants.ACCEPT_TIME_SEPARATOR_SP);
                        }
                        f3723a.put(campaignId, strConcat.concat(str2));
                    }
                } else {
                    f3723a.put(campaignId, str2);
                }
            }
            a.C0272a.f3722a.a(windVaneWebView, aVar.e);
            a.C0272a.f3722a.a(windVaneWebView, aVar.e, "Specified command is not implemented");
            return null;
        }
        String encodedQuery = uri.getEncodedQuery();
        if (encodedQuery == null) {
            setUnmodifiableSet = Collections.emptySet();
        } else {
            LinkedHashSet linkedHashSet = new LinkedHashSet();
            do {
                int iIndexOf = encodedQuery.indexOf(38, i);
                if (iIndexOf == -1) {
                    iIndexOf = encodedQuery.length();
                }
                int iIndexOf2 = encodedQuery.indexOf(61, i);
                if (iIndexOf2 > iIndexOf || iIndexOf2 == -1) {
                    iIndexOf2 = iIndexOf;
                }
                linkedHashSet.add(Uri.decode(encodedQuery.substring(i, iIndexOf2)));
                i = iIndexOf + 1;
            } while (i < encodedQuery.length());
            setUnmodifiableSet = Collections.unmodifiableSet(linkedHashSet);
        }
        try {
            JSONObject jSONObject = new JSONObject();
            for (String str3 : setUnmodifiableSet) {
                jSONObject.put(str3, uri.getQueryParameter(str3));
            }
            aVar.f = jSONObject.toString();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return aVar;
    }

    public static String a(String str) {
        if (f3723a.containsKey(str)) {
            return f3723a.get(str);
        }
        return null;
    }

    public static void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        f3723a.remove(str);
    }
}
