package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.tkay.expressad.foundation.g.a;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class oh extends rg {
    public oh(Context context, DownloadSetting downloadSetting, String str) {
        super(context, downloadSetting, str);
    }

    @Override // com.ss.android.socialbase.appdownloader.rg.pp
    public Intent df() {
        String strOptString = this.df.optString("s");
        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("bb"), strOptString);
        if (!TextUtils.isEmpty(strRg) && strRg.split(Constants.ACCEPT_TIME_SEPARATOR_SP).length == 2) {
            String strRg2 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("bc"), strOptString);
            if (!TextUtils.isEmpty(strRg2) && strRg2.split(Constants.ACCEPT_TIME_SEPARATOR_SP).length == 2) {
                String[] strArrSplit = strRg.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                String[] strArrSplit2 = strRg2.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                String strRg3 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString(a.L), strOptString);
                String strRg4 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("be"), strOptString);
                String strRg5 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("bf"), strOptString);
                HashMap map = new HashMap();
                map.put(strArrSplit[0], strArrSplit[1]);
                map.put(strArrSplit2[0], strArrSplit2[1]);
                map.put(strRg3, this.q);
                Intent intent = new Intent();
                intent.setAction(strRg5);
                intent.setData(Uri.parse(strRg4 + rg(map)));
                intent.addFlags(268468224);
                return intent;
            }
        }
        return null;
    }

    public static String rg(Map<String, String> map) {
        if (map == null) {
            return "";
        }
        StringBuffer stringBuffer = new StringBuffer();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            stringBuffer.append(entry.getKey());
            stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
            stringBuffer.append(URLEncoder.encode(entry.getValue()));
            stringBuffer.append("&");
        }
        String string = stringBuffer.toString();
        return string.endsWith("&") ? string.substring(0, string.length() - 1) : string;
    }
}
