package com.tkay.expressad.atsignalcommon.mraid;

import android.net.Uri;
import android.text.TextUtils;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import com.tkay.expressad.foundation.h.j;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MraidUriUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ConcurrentHashMap<String, String> f6431a = new ConcurrentHashMap<>();
    private static ArrayList<String> b = new ArrayList<>();

    public static a getMraidMethodContext(WindVaneWebView windVaneWebView, String str) {
        Set<String> setUnmodifiableSet;
        Uri uri = Uri.parse(str);
        String scheme = uri.getScheme();
        if (TextUtils.isEmpty(scheme) || !scheme.contains("mraid")) {
            return null;
        }
        a aVar = new a();
        aVar.d = j.b("n+ztLkxpVTzBLkxgHN==");
        aVar.e = uri.getHost();
        int i = 0;
        if (b.size() == 0) {
            for (Method method : IMraidSignalCommunication.class.getDeclaredMethods()) {
                b.add(method.getName());
            }
        }
        if (!b.contains(aVar.e) && windVaneWebView != null) {
            String campaignId = windVaneWebView.getCampaignId();
            String str2 = aVar.e;
            if (!TextUtils.isEmpty(campaignId)) {
                if (f6431a.containsKey(campaignId)) {
                    String strConcat = f6431a.get(campaignId);
                    if (!TextUtils.isEmpty(str2) && !strConcat.contains(str2)) {
                        if (strConcat.length() > 0) {
                            strConcat = strConcat.concat(Constants.ACCEPT_TIME_SEPARATOR_SP);
                        }
                        f6431a.put(campaignId, strConcat.concat(str2));
                    }
                } else {
                    f6431a.put(campaignId, str2);
                }
            }
            CallMraidJS.getInstance().fireNativeMethodCompleteEvent(windVaneWebView, aVar.e);
            CallMraidJS.getInstance().fireErrorEvent(windVaneWebView, aVar.e, "Specified command is not implemented");
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

    private static Set<String> a(Uri uri) {
        String encodedQuery = uri.getEncodedQuery();
        if (encodedQuery == null) {
            return Collections.emptySet();
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        int i = 0;
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
        return Collections.unmodifiableSet(linkedHashSet);
    }

    private static void a() {
        for (Method method : IMraidSignalCommunication.class.getDeclaredMethods()) {
            b.add(method.getName());
        }
    }

    public static String getUnSupportMraidMethodString(String str) {
        if (f6431a.containsKey(str)) {
            return f6431a.get(str);
        }
        return null;
    }

    private static void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (f6431a.containsKey(str)) {
            String strConcat = f6431a.get(str);
            if (TextUtils.isEmpty(str2) || strConcat.contains(str2)) {
                return;
            }
            if (strConcat.length() > 0) {
                strConcat = strConcat.concat(Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
            f6431a.put(str, strConcat.concat(str2));
            return;
        }
        f6431a.put(str, str2);
    }

    public static void clearUnSupportMraidMethodMap() {
        if (f6431a.size() > 0) {
            f6431a.clear();
        }
    }

    public static void clearUnSupportMraidMethodMap(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        f6431a.remove(str);
    }
}
