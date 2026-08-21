package com.ss.android.downloadlib.addownload.df;

import android.text.TextUtils;
import com.ss.android.downloadlib.addownload.bm;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.io.File;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class pt {
    private static volatile pt rg;
    private long df = 0;
    private ConcurrentHashMap<String, pp> q = new ConcurrentHashMap<>();
    private HashMap<String, Integer> pt = new HashMap<>();
    private List<String> pp = new CopyOnWriteArrayList();

    public static pt rg() {
        if (rg == null) {
            synchronized (pt.class) {
                if (rg == null) {
                    rg = new pt();
                }
            }
        }
        return rg;
    }

    public void rg(String str, pp ppVar) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.q.put(str, ppVar);
    }

    public void rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        this.q.remove(str);
    }

    long df() {
        return this.df;
    }

    void q() {
        this.df = System.currentTimeMillis();
    }

    public int df(String str) {
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        if (this.pt == null) {
            this.pt = new HashMap<>();
        }
        if (this.pt.containsKey(str)) {
            return this.pt.get(str).intValue();
        }
        return 0;
    }

    public static void rg(com.ss.android.downloadad.api.rg.df dfVar) {
        DownloadInfo downloadInfo;
        if (dfVar == null || dfVar.df() <= 0 || (downloadInfo = Downloader.getInstance(bm.getContext()).getDownloadInfo(dfVar.qx())) == null) {
            return;
        }
        rg(downloadInfo);
    }

    public static void rg(DownloadInfo downloadInfo) {
        if (downloadInfo == null || DownloadSetting.obtain(downloadInfo.getId()).optInt("delete_file_after_install", 0) == 0) {
            return;
        }
        try {
            String str = downloadInfo.getSavePath() + File.separator + downloadInfo.getName();
            if (TextUtils.isEmpty(str)) {
                return;
            }
            File file = new File(str);
            if (file.isFile() && file.exists()) {
                file.delete();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
