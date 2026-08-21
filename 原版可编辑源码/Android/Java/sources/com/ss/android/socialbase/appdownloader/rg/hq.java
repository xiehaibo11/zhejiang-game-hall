package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class hq extends rg {
    public hq(Context context, DownloadSetting downloadSetting, String str) {
        super(context, downloadSetting, str);
    }

    @Override
    public Intent df() {
        String strOptString = this.df.optString("s");
        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("ag"), strOptString);
        String strRg2 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("ah"), strOptString);
        String strRg3 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString(com.tkay.expressad.d.a.b.cZ), strOptString);
        String strRg4 = com.ss.android.socialbase.appdownloader.c.q.rg(this.df.optString("aj"), strOptString);
        Intent intent = new Intent();
        intent.putExtra(strRg, this.q);
        intent.putExtra(strRg2, "*/*");
        intent.putExtra(strRg3, true);
        intent.setAction(strRg4);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.addFlags(32768);
        return intent;
    }
}
