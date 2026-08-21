package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.xiaomi.mipush.sdk.Constants;
import org.json.JSONObject;

public class rz extends rg {
    private String pp;
    private String pt;

    public rz(Context context, DownloadSetting downloadSetting, String str, String str2, String str3) {
        super(context, downloadSetting, str);
        this.pt = str2;
        this.pp = str3;
    }

    @Override
    public Intent df() {
        String str;
        String strOptString = this.df.optString("s");
        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("ak"), strOptString);
        String strRg2 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("am"), strOptString);
        String strRg3 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("an"), strOptString);
        String strSubstring = null;
        if (!TextUtils.isEmpty(strRg3) && strRg3.split(Constants.ACCEPT_TIME_SEPARATOR_SP).length == 2) {
            String[] strArrSplit = strRg3.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
            String strRg4 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("al"), strOptString);
            String strRg5 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("ao"), strOptString);
            if (!TextUtils.isEmpty(strRg5) && strRg5.split(Constants.ACCEPT_TIME_SEPARATOR_SP).length == 2) {
                String[] strArrSplit2 = strRg5.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                JSONObject jSONObjectOptJSONObject = this.df.optJSONObject(DownloadSettingKeys.KEY_ANTI_HIJACK_DIR);
                if (jSONObjectOptJSONObject != null) {
                    String strOptString2 = jSONObjectOptJSONObject.optString(DownloadSettingKeys.AntiHijackDir.KEY_ANTI_HIJACK_DIR_NAME);
                    if (!TextUtils.isEmpty(strOptString2) && strOptString2.contains("%s")) {
                        try {
                            str = String.format(strOptString2, this.pp);
                        } catch (Throwable unused) {
                            str = this.pp;
                        }
                    } else {
                        str = this.pp;
                    }
                    strSubstring = str;
                    if (strSubstring.length() > 255) {
                        strSubstring = strRg4.substring(strSubstring.length() - 255);
                    }
                }
                Intent intent = new Intent(strRg);
                intent.putExtra(strArrSplit2[0], strArrSplit2[1]);
                intent.putExtra(strRg2, this.pt);
                intent.putExtra(strRg4, strSubstring);
                intent.putExtra(strArrSplit[0], Integer.parseInt(strArrSplit[1]));
                intent.addFlags(268468224);
                return intent;
            }
        }
        return null;
    }
}
