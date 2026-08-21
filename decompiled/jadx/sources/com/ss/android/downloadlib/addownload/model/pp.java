package com.ss.android.downloadlib.addownload.model;

import android.text.TextUtils;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.downloadad.api.download.AdDownloadController;
import com.ss.android.downloadad.api.download.AdDownloadEventConfig;
import com.ss.android.downloadad.api.download.AdDownloadModel;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class pp implements com.ss.android.downloadad.api.rg.rg {
    public DownloadModel df;
    public DownloadController pt;
    public DownloadEventConfig q;
    public long rg;

    @Override // com.ss.android.downloadad.api.rg.rg
    public int qx() {
        return 0;
    }

    public pp() {
    }

    public pp(long j, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController) {
        this.rg = j;
        this.df = downloadModel;
        this.q = downloadEventConfig;
        this.pt = downloadController;
    }

    public boolean re() {
        DownloadModel downloadModel;
        if (this.rg == 0 || (downloadModel = this.df) == null || this.q == null || this.pt == null) {
            return true;
        }
        return downloadModel.isAd() && this.rg <= 0;
    }

    public boolean l() {
        if (re()) {
            return false;
        }
        if (this.df.isAd()) {
            DownloadModel downloadModel = this.df;
            return (downloadModel instanceof AdDownloadModel) && !TextUtils.isEmpty(downloadModel.getLogExtra()) && (this.q instanceof AdDownloadEventConfig) && (this.pt instanceof AdDownloadController);
        }
        return this.df instanceof AdDownloadModel;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String rg() {
        return this.df.getDownloadUrl();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public long df() {
        return this.df.getId();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean q() {
        return this.df.isAd();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String pt() {
        return this.df.getLogExtra();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String pp() {
        return this.df.getPackageName();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String c() {
        if (this.df.getDeepLink() != null) {
            return this.df.getDeepLink().getOpenUrl();
        }
        return null;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject fw() {
        return this.df.getExtra();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public int ux() {
        if (this.pt.getDownloadMode() == 2) {
            return 2;
        }
        return this.df.getFunnelType();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public long hq() {
        return this.df.getExtraValue();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public List<String> f() {
        return this.df.getClickTrackUrl();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String rz() {
        return this.q.getRefer();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public String bm() {
        return this.q.getClickButtonTag();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject b() {
        return this.q.getParamsJson();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean oh() {
        return this.q.isEnableV3Event();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public Object v() {
        return this.q.getExtraEventObject();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject un() {
        return this.q.getExtraJson();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public boolean z() {
        return this.pt.enableNewActivity();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public JSONObject r() {
        return this.df.getDownloadSettings();
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadModel ou() {
        return this.df;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadEventConfig y() {
        return this.q;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public DownloadController fo() {
        return this.pt;
    }

    @Override // com.ss.android.downloadad.api.rg.rg
    public int n() {
        return this.q.getDownloadScene();
    }
}
