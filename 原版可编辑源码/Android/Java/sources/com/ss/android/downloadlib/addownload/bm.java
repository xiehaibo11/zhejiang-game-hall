package com.ss.android.downloadlib.addownload;

import android.content.Context;
import android.os.Build;
import android.os.Environment;
import com.ss.android.download.api.config.f;
import com.ss.android.download.api.config.oh;
import com.ss.android.download.api.config.ou;
import com.ss.android.download.api.config.qx;
import com.ss.android.download.api.config.un;
import com.ss.android.download.api.config.v;
import com.ss.android.download.api.config.z;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.io.File;
import org.json.JSONObject;

public class bm {
    private static com.ss.android.socialbase.appdownloader.q.ux b;
    private static com.ss.android.download.api.config.df bm;
    private static com.ss.android.download.api.config.ux c;
    private static Context df;
    private static v f;
    private static com.ss.android.download.api.config.rz fw;
    private static com.ss.android.download.api.config.pt hq;
    private static com.ss.android.download.api.df.rg n;
    private static com.ss.android.download.api.config.pp oh;
    private static z ou;
    private static com.ss.android.download.api.config.hq pp;
    private static com.ss.android.download.api.config.q pt;
    private static com.ss.android.download.api.config.fw q;
    private static un qx;
    private static oh r;
    public static final JSONObject rg = new JSONObject();
    private static com.ss.android.download.api.model.rg rz;
    private static ou un;
    private static com.ss.android.download.api.config.bm ux;
    private static com.ss.android.download.api.config.b v;
    private static qx y;
    private static f z;

    public static String oh() {
        return "1.7.0";
    }

    public static void rg(Context context) {
        if (context == null || context.getApplicationContext() == null) {
            throw new IllegalArgumentException("Context is null");
        }
        df = context.getApplicationContext();
    }

    public static void df(Context context) {
        if (df != null || context == null || context.getApplicationContext() == null) {
            return;
        }
        df = context.getApplicationContext();
    }

    public static Context getContext() {
        Context context = df;
        if (context != null) {
            return context;
        }
        throw new IllegalArgumentException("Context is null");
    }

    public static void rg(com.ss.android.download.api.config.fw fwVar) {
        q = fwVar;
    }

    public static void rg(com.ss.android.download.api.config.hq hqVar) {
        pp = hqVar;
    }

    public static void rg(com.ss.android.download.api.config.ux uxVar) {
        c = uxVar;
    }

    public static void rg(com.ss.android.download.api.config.rz rzVar) {
        fw = rzVar;
    }

    public static void rg(com.ss.android.download.api.config.bm bmVar) {
        ux = bmVar;
    }

    public static void rg(com.ss.android.download.api.model.rg rgVar) {
        rz = rgVar;
    }

    public static void rg(com.ss.android.download.api.config.df dfVar) {
        bm = dfVar;
    }

    public static com.ss.android.download.api.config.fw rg() {
        return q;
    }

    public static com.ss.android.download.api.config.q df() {
        if (pt == null) {
            pt = new com.ss.android.download.api.config.q() {
                @Override
                public void rg(Context context, DownloadModel downloadModel, DownloadController downloadController, DownloadEventConfig downloadEventConfig) {
                }

                @Override
                public void rg(Context context, DownloadModel downloadModel, DownloadController downloadController, DownloadEventConfig downloadEventConfig, String str, String str2) {
                }
            };
        }
        return pt;
    }

    public static com.ss.android.download.api.config.hq q() {
        if (pp == null) {
            pp = new com.ss.android.download.api.rg.rg();
        }
        return pp;
    }

    public static com.ss.android.download.api.config.ux pt() {
        return c;
    }

    public static com.ss.android.download.api.config.rz pp() {
        if (fw == null) {
            fw = new com.ss.android.download.api.rg.df();
        }
        return fw;
    }

    public static com.ss.android.socialbase.appdownloader.q.ux c() {
        if (b == null) {
            b = new com.ss.android.socialbase.appdownloader.q.ux() {
                @Override
                public void rg(DownloadInfo downloadInfo, BaseException baseException, int i) {
                }
            };
        }
        return b;
    }

    public static v fw() {
        return f;
    }

    public static un ux() {
        if (qx == null) {
            qx = new un() {
                @Override
                public void rg(String str, int i, JSONObject jSONObject) {
                }
            };
        }
        return qx;
    }

    public static JSONObject rz() {
        com.ss.android.download.api.config.bm bmVar = ux;
        if (bmVar == null || bmVar.rg() == null) {
            return rg;
        }
        return ux.rg();
    }

    public static oh bm() {
        return r;
    }

    public static com.ss.android.download.api.config.df b() {
        return bm;
    }

    public static f hq() {
        return z;
    }

    public static void rg(String str) {
        com.ss.android.socialbase.appdownloader.pt.bm().rg(str);
    }

    public static com.ss.android.download.api.config.pt f() {
        return hq;
    }

    public static com.ss.android.download.api.config.pp v() {
        return oh;
    }

    public static com.ss.android.download.api.config.b un() {
        return v;
    }

    public static void rg(z zVar) {
        ou = zVar;
    }

    public static z z() {
        return ou;
    }

    public static ou r() {
        return un;
    }

    public static void rg(com.ss.android.download.api.df.rg rgVar) {
        n = rgVar;
    }

    public static com.ss.android.download.api.df.rg qx() {
        if (n == null) {
            n = new com.ss.android.download.api.df.rg() {
                @Override
                public void rg(Throwable th, String str) {
                }
            };
        }
        return n;
    }

    public static qx n() {
        if (y == null) {
            y = new qx() {
                @Override
                public void rg(Context context, DownloadModel downloadModel, DownloadController downloadController, DownloadEventConfig downloadEventConfig, String str, int i) {
                }
            };
        }
        return y;
    }

    public static String ou() {
        try {
            int i = getContext().getApplicationInfo().targetSdkVersion;
            if (Build.VERSION.SDK_INT >= 29 && ((i == 29 && !Environment.isExternalStorageLegacy()) || i > 29)) {
                return getContext().getExternalFilesDir(Environment.DIRECTORY_DOWNLOADS).getAbsolutePath();
            }
            return Environment.getExternalStorageDirectory().getPath() + File.separator + rz().optString("default_save_dir_name", BaseConstants.DOWNLOAD_DIR);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static boolean y() {
        return (q == null || c == null || ux == null || bm == null || ou == null) ? false : true;
    }
}
