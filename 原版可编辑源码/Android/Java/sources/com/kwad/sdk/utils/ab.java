package com.kwad.sdk.utils;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.utils.ac;
import com.xiaomi.mipush.sdk.Constants;

public final class ab {
    public static String a(Context context, String str, ac.a aVar, boolean z) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        String strAj = ac.aj(context, ac.a(str, aVar));
        String strCw = au.cw(context);
        if (!TextUtils.isEmpty(strCw)) {
            strAj = strAj.replace("__MAC__", strCw).replace("__MAC2__", ad.bp(strCw)).replace("__MAC3__", ad.bp(strCw.replace(Constants.COLON_SEPARATOR, "")));
        }
        String strCu = au.cu(context);
        if (!TextUtils.isEmpty(strCu)) {
            strAj = strAj.replace("__IMEI__", strCu).replace("__IMEI2__", ad.bp(strCu)).replace("__IMEI3__", ad.fx(strCu));
        }
        String oaid = au.getOaid();
        if (!TextUtils.isEmpty(oaid)) {
            strAj = strAj.replace("__OAID__", oaid).replace("__OAID2__", ad.bp(oaid));
        }
        String strCv = au.cv(context);
        if (!TextUtils.isEmpty(strCv)) {
            strAj = strAj.replace("__ANDROIDID2__", ad.bp(strCv)).replace("__ANDROIDID3__", ad.fx(strCv)).replace("__ANDROIDID__", strCv);
        }
        return ac.c(context, strAj, z);
    }
}
