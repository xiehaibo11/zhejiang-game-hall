package com.ss.android.downloadlib.rg.rg;

import android.content.Context;
import android.provider.Settings;
import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.downloader.BuildConfig;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    public static String rg(Context context) {
        try {
            return rg(q.rg(rg(), "MD5"));
        } catch (Exception unused) {
            return null;
        }
    }

    public static String rg() {
        return df(bm.getContext());
    }

    public static String df(Context context) {
        String string;
        try {
            string = Settings.Secure.getString(context.getContentResolver(), "android_id");
        } catch (Exception e) {
            e.printStackTrace();
            string = null;
        }
        return TextUtils.isEmpty(string) ? BuildConfig.FLAVOR : string;
    }

    public static String rg(byte[] bArr) {
        return rg.rg(bArr);
    }
}
