package com.kwad.sdk.core.videocache.a;

import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.kwad.sdk.utils.ad;
import com.meizu.cloud.pushsdk.notification.model.AppIconSetting;
import java.util.HashMap;
import java.util.Set;

public final class f implements c {
    private static String dV(String str) {
        Uri uri = Uri.parse(str);
        if (uri.getHost() == null || !uri.getHost().contains("yximgs.com")) {
            return str;
        }
        Uri.Builder builderBuildUpon = uri.buildUpon();
        HashMap map = new HashMap();
        if (uri.isHierarchical()) {
            Set<String> queryParameterNames = uri.getQueryParameterNames();
            for (String str2 : queryParameterNames) {
                map.put(str2, uri.getQueryParameter(str2));
            }
            builderBuildUpon.clearQuery();
            for (String str3 : queryParameterNames) {
                if (!RemoteMessageConst.Notification.TAG.equals(str3) && !AppIconSetting.DEFAULT_LARGE_ICON.equals(str3) && str3 != null) {
                    builderBuildUpon.appendQueryParameter(str3, (String) map.get(str3));
                }
            }
        }
        return builderBuildUpon.toString();
    }

    private static String getExtension(String str) {
        int iLastIndexOf = str.lastIndexOf(46);
        return (iLastIndexOf == -1 || iLastIndexOf <= str.lastIndexOf(47) || (iLastIndexOf + 2) + 4 <= str.length()) ? "" : str.substring(iLastIndexOf + 1, str.length());
    }

    @Override
    public final String generate(String str) {
        String strDV = dV(str);
        String extension = getExtension(strDV);
        String strBp = ad.bp(strDV);
        if (TextUtils.isEmpty(extension)) {
            return strBp;
        }
        return strBp + "." + extension;
    }
}
