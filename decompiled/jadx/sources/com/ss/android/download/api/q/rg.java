package com.ss.android.download.api.q;

import android.net.Uri;
import android.text.TextUtils;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.appdownloader.c.pt;
import com.tkay.basead.b.a;
import com.tkay.expressad.videocommon.e.b;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class rg {
    public static boolean rg(Uri uri) {
        if (uri == null) {
            return false;
        }
        String scheme = uri.getScheme();
        if (TextUtils.isEmpty(scheme)) {
            return false;
        }
        if (bm.rz().optInt("market_url_opt", 1) == 0) {
            return "market".equals(scheme);
        }
        return "market".equals(scheme) || "appmarket".equals(scheme) || "oaps".equals(scheme) || "oppomarket".equals(scheme) || "mimarket".equals(scheme) || "vivomarket".equals(scheme) || "vivoMarket".equals(scheme) || "gomarket".equals(scheme) || "goMarket".equals(scheme) || "mstore".equals(scheme) || BaseConstants.MARKET_SCHEME_SAMSUNG.equals(scheme);
    }

    public static String df(Uri uri) {
        String scheme = uri.getScheme();
        List<String> pathSegments = uri.getPathSegments();
        if (bm.rz().optInt("market_scheme_opt") == 1 && pt.c() && BaseConstants.MARKET_SCHEME_SAMSUNG.equals(scheme) && pathSegments != null && pathSegments.size() == 1) {
            return pathSegments.get(0);
        }
        return df.rg(uri.getQueryParameter("id"), uri.getQueryParameter("packagename"), uri.getQueryParameter(a.C0386a.A), uri.getQueryParameter("package_name"), uri.getQueryParameter(b.u));
    }
}
