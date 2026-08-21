package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.content.Intent;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class b extends rg {
    public b(Context context, DownloadSetting downloadSetting, String str) {
        super(context, downloadSetting, str);
    }

    @Override
    public Intent df() {
        Intent intent = new Intent("com.android.filemanager.OPEN_FOLDER");
        intent.putExtra("com.android.filemanager.OPEN_FOLDER", this.q);
        intent.putExtra("com.iqoo.secure", true);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.addFlags(32768);
        intent.addFlags(1073741824);
        return intent;
    }
}
