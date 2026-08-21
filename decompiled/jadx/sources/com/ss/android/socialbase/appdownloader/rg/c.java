package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes3.dex */
public class c extends rg {
    public c(Context context) {
        super(context, null, null);
    }

    @Override // com.ss.android.socialbase.appdownloader.rg.pp
    public Intent df() {
        Intent intent = new Intent("android.settings.SECURITY_SETTINGS");
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.addFlags(1073741824);
        intent.addFlags(8388608);
        return intent;
    }
}
