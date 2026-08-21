package com.ss.android.downloadlib.addownload;

import android.os.Handler;
import com.ss.android.downloadlib.addownload.pp;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.network.IFetchHttpHeadInfoListener;
import com.ss.android.socialbase.downloader.network.connectionpool.DownloadPreconnecter;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pt {
    private com.ss.android.downloadlib.addownload.model.pp df;
    private Handler rg;
    private AtomicBoolean q = new AtomicBoolean(false);
    private AtomicBoolean pt = new AtomicBoolean(false);

    pt(Handler handler) {
        this.rg = handler;
    }

    public void rg(com.ss.android.downloadlib.addownload.model.pp ppVar) {
        this.df = ppVar;
    }

    public boolean rg() {
        return this.pt.get();
    }

    public void rg(boolean z) {
        this.pt.set(z);
    }

    void rg(final int i, final long j, long j2, final pp.rg rgVar) {
        this.pt.set(false);
        if (rgVar == null) {
            return;
        }
        if (!com.ss.android.downloadlib.utils.pt.c(i) || !com.ss.android.downloadlib.utils.pt.pp(i)) {
            rgVar.rg();
            return;
        }
        long jQ = com.ss.android.downloadlib.utils.pt.q(i);
        this.q.set(false);
        final String downloadUrl = this.df.df.getDownloadUrl();
        com.ss.android.downloadad.api.rg.df dfVarDf = com.ss.android.downloadlib.addownload.model.c.rg().df(downloadUrl);
        if (dfVarDf == null) {
            dfVarDf = new com.ss.android.downloadad.api.rg.df(this.df.df, this.df.q, this.df.pt, 0);
            com.ss.android.downloadlib.addownload.model.c.rg().rg(dfVarDf);
        }
        final com.ss.android.downloadad.api.rg.df dfVar = dfVarDf;
        dfVar.pp(false);
        if (bm.hq() != null) {
            bm.hq().rg(dfVar.df());
        }
        com.ss.android.downloadlib.addownload.df.pt.rg().rg(dfVar.rg());
        boolean zPt = com.ss.android.downloadlib.utils.pt.pt(i);
        if (j2 > 0) {
            rg(i, downloadUrl, j2, dfVar, j, rgVar);
        } else if (zPt) {
            rg(downloadUrl, dfVar, new pp.df() { // from class: com.ss.android.downloadlib.addownload.pt.1
                @Override // com.ss.android.downloadlib.addownload.pp.df
                public void rg(long j3) throws Throwable {
                    pt.this.rg(i, downloadUrl, j3, dfVar, j, rgVar);
                }
            });
        } else {
            jQ = 0;
        }
        this.rg.postDelayed(new Runnable() { // from class: com.ss.android.downloadlib.addownload.pt.2
            @Override // java.lang.Runnable
            public void run() {
                if (pt.this.q.get()) {
                    return;
                }
                pt.this.q.set(true);
                rgVar.rg();
            }
        }, jQ);
    }

    private void rg(String str, com.ss.android.downloadad.api.rg.df dfVar, final pp.df dfVar2) {
        if (dfVar2 == null) {
            return;
        }
        DownloadPreconnecter.asyncFetchHttpHeadInfo(str, new IFetchHttpHeadInfoListener() { // from class: com.ss.android.downloadlib.addownload.pt.3
            @Override // com.ss.android.socialbase.downloader.network.IFetchHttpHeadInfoListener
            public void onFetchFinished(Map<String, String> map) {
                if (pt.this.q.get()) {
                    return;
                }
                pt.this.q.set(true);
                long jRg = pt.this.rg(map);
                if (jRg > 0) {
                    JSONObject jSONObject = new JSONObject();
                    try {
                        jSONObject.putOpt(EventConstants.ExtraJson.APK_SIZE, Long.valueOf(jRg));
                        jSONObject.putOpt("available_space", Long.valueOf(pt.pt()));
                    } catch (JSONException e) {
                        e.printStackTrace();
                    }
                }
                dfVar2.rg(jRg);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long rg(Map<String, String> map) {
        if (map != null && map.size() != 0) {
            try {
                for (Map.Entry<String, String> entry : map.entrySet()) {
                    String key = entry.getKey();
                    String value = entry.getValue();
                    if ("content-length".equalsIgnoreCase(key)) {
                        return Long.parseLong(value);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return 0L;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rg(int i, String str, long j, final com.ss.android.downloadad.api.rg.df dfVar, long j2, final pp.rg rgVar) throws Throwable {
        this.q.set(true);
        boolean zRg = false;
        if (j > 0) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.putOpt(EventConstants.ExtraJson.APK_SIZE, Long.valueOf(j));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            long jLongValue = (Double.valueOf((com.ss.android.downloadlib.utils.pt.rg(i) + 1.0d) * j).longValue() + com.ss.android.downloadlib.utils.pt.df(i)) - j2;
            long jPt = pt();
            if (jPt < jLongValue) {
                rg(dfVar, jSONObject, jLongValue, jPt);
                rg(dfVar);
                long jPt2 = pt();
                if (jPt2 < jLongValue) {
                    dfVar.pt(true);
                    final String strRg = dfVar.rg();
                    com.ss.android.downloadlib.addownload.df.pt.rg().rg(strRg, new com.ss.android.downloadlib.addownload.df.pp() { // from class: com.ss.android.downloadlib.addownload.pt.4
                    });
                    zRg = rg(i, dfVar, str, jLongValue);
                    if (zRg) {
                        dfVar.pp(true);
                    }
                } else {
                    df(dfVar, jSONObject, jPt, jPt2);
                }
            }
        }
        if (zRg) {
            return;
        }
        this.rg.post(new Runnable() { // from class: com.ss.android.downloadlib.addownload.pt.5
            @Override // java.lang.Runnable
            public void run() {
                rgVar.rg();
            }
        });
    }

    private boolean rg(int i, com.ss.android.downloadad.api.rg.df dfVar, String str, long j) {
        if (!com.ss.android.downloadlib.utils.pt.c(i)) {
            return false;
        }
        if (bm.hq() != null) {
            return bm.hq().rg(i, str, true, j);
        }
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.CLEAN_SHOW_DIALOG_RESULT, 3);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_SHOW_DIALOG, jSONObject, dfVar);
        return false;
    }

    public static boolean rg(final DownloadInfo downloadInfo, long j) {
        int id = downloadInfo.getId();
        boolean zRg = false;
        if (!com.ss.android.downloadlib.utils.pt.c(id)) {
            return false;
        }
        if (bm.hq() != null && (zRg = bm.hq().rg(id, downloadInfo.getUrl(), false, j))) {
            com.ss.android.downloadlib.addownload.df.pt.rg().rg(downloadInfo.getUrl(), new com.ss.android.downloadlib.addownload.df.pp() { // from class: com.ss.android.downloadlib.addownload.pt.6
            });
        }
        return zRg;
    }

    public static JSONObject rg(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.CLEAN_SPACE_INSTALL_PARAMS, str);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public static void rg(int i) {
        if (com.ss.android.downloadlib.utils.pt.c(i) && bm.hq() != null && bm.hq().df()) {
            bm.hq().q();
        }
    }

    public static long df() {
        if (bm.hq() != null) {
            return bm.hq().rg();
        }
        return 0L;
    }

    private static void rg(com.ss.android.downloadad.api.rg.df dfVar) throws Throwable {
        long jPt = pt();
        if (bm.hq() != null) {
            bm.hq().pp();
        }
        com.ss.android.downloadlib.addownload.df.q.rg();
        com.ss.android.downloadlib.addownload.df.q.df();
        if (com.ss.android.downloadlib.utils.pt.fw(dfVar.qx())) {
            com.ss.android.downloadlib.addownload.df.q.rg(bm.getContext());
        }
        long jPt2 = pt();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.QUITE_CLEAN_SIZE, Long.valueOf(jPt2 - jPt));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_QUITE_FINISH, jSONObject, dfVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static long pt() {
        return com.ss.android.downloadlib.utils.b.rg(0L);
    }

    private void rg(com.ss.android.downloadad.api.rg.df dfVar, JSONObject jSONObject, long j, long j2) {
        try {
            jSONObject.putOpt("available_space", Long.valueOf(j2));
            jSONObject.putOpt(EventConstants.ExtraJson.APK_DOWNLOAD_NEED_SIZE, Long.valueOf(j));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.CLEAN_SPACE_NO_ENOUGH, jSONObject, dfVar);
    }

    private void df(com.ss.android.downloadad.api.rg.df dfVar, JSONObject jSONObject, long j, long j2) {
        dfVar.hq("1");
        com.ss.android.downloadlib.addownload.model.ux.rg().rg(dfVar);
        try {
            jSONObject.putOpt(EventConstants.ExtraJson.QUITE_CLEAN_SIZE, Long.valueOf(j2 - j));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        AdEventHandler.rg().rg(EventConstants.UnityLabel.DOWNLOAD_AFTER_QUITE_CLEAN, jSONObject, dfVar);
    }
}
