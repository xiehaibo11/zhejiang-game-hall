package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes3.dex */
public class df extends rg {
    public df(Context context) {
        super(context, null, null);
    }

    @Override // com.ss.android.socialbase.appdownloader.rg.pp
    public Intent df() {
        Intent intent = new Intent("android.settings.MANAGE_UNKNOWN_APP_SOURCES", Uri.parse("package:" + this.rg.getPackageName()));
        intent.addFlags(1073741824);
        intent.addFlags(8388608);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        return intent;
    }
}
