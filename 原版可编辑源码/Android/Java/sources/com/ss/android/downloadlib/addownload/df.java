package com.ss.android.downloadlib.addownload;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.io.File;

public class df {
    private static volatile df rg;
    private Handler df = null;

    public static df rg() {
        if (rg == null) {
            synchronized (df.class) {
                if (rg == null) {
                    rg = new df();
                }
            }
        }
        return rg;
    }

    public void rg(Context context, DownloadInfo downloadInfo) {
        if (df() && downloadInfo != null) {
            try {
                File file = new File(downloadInfo.getSavePath(), downloadInfo.getName());
                if (file.isFile() && file.exists()) {
                    file.delete();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (this.df == null) {
                this.df = new Handler(Looper.getMainLooper());
            }
            final String url = downloadInfo.getUrl();
            Downloader.getInstance(context).clearDownloadData(downloadInfo.getId());
            this.df.post(new Runnable() {
                @Override
                public void run() {
                    bm.q().rg(3, bm.getContext(), null, "下载失败，请重试！", null, 0);
                    pp ppVarRg = com.ss.android.downloadlib.fw.rg().rg(url);
                    if (ppVarRg != null) {
                        ppVarRg.fw();
                    }
                }
            });
        }
    }

    public boolean df() {
        return bm.rz().optInt("forbid_invalidte_download_file_install", 0) == 1;
    }
}
