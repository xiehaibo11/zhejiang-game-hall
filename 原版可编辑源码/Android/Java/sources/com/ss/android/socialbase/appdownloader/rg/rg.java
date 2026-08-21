package com.ss.android.socialbase.appdownloader.rg;

import android.content.Context;
import android.util.Log;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;

public abstract class rg implements pp {
    protected final DownloadSetting df;
    protected final String q;
    protected final Context rg;

    public rg(Context context, DownloadSetting downloadSetting, String str) {
        this.rg = context;
        this.df = downloadSetting;
        this.q = str;
    }

    public boolean rg() {
        if (this.rg == null) {
            return false;
        }
        try {
        } catch (Throwable th) {
            if (Logger.debug()) {
                Log.e("AbsDevicePlan", "check is valid failed!", th);
            }
        }
        return df().resolveActivity(this.rg.getPackageManager()) != null;
    }
}
