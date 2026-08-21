package com.ss.android.download.api.download;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
@Deprecated
public class q implements DownloadEventConfig {
    private String b;
    private String bm;
    private String c;
    private boolean df;
    private boolean f;
    private String fw;
    private Object hq;
    private boolean oh;
    private String pp;
    private String pt;
    private String q;
    private String rg;
    private String rz;
    private String un;
    private String ux;
    private boolean v;
    private String z;

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickItemTag() {
        return null;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public int getDownloadScene() {
        return 0;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public JSONObject getExtraJson() {
        return null;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public JSONObject getParamsJson() {
        return null;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public void setDownloadScene(int i) {
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public void setRefer(String str) {
    }

    public q() {
    }

    private q(rg rgVar) {
        this.rg = rgVar.rg;
        this.df = rgVar.df;
        this.q = rgVar.q;
        this.pt = rgVar.pt;
        this.pp = rgVar.pp;
        this.c = rgVar.c;
        this.fw = rgVar.fw;
        this.ux = rgVar.ux;
        this.rz = rgVar.rz;
        this.bm = rgVar.bm;
        this.b = rgVar.b;
        this.hq = rgVar.hq;
        this.oh = rgVar.oh;
        this.f = rgVar.f;
        this.v = rgVar.v;
        this.un = rgVar.un;
        this.z = rgVar.z;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getRefer() {
        return this.z;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickButtonTag() {
        return this.rg;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickLabel() {
        return this.q;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickStartLabel() {
        return this.pt;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickPauseLabel() {
        return this.pp;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickContinueLabel() {
        return this.c;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getClickInstallLabel() {
        return this.fw;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public String getStorageDenyLabel() {
        return this.bm;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public Object getExtraEventObject() {
        return this.hq;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public boolean isEnableClickEvent() {
        return this.df;
    }

    @Override // com.ss.android.download.api.download.DownloadEventConfig
    public boolean isEnableV3Event() {
        return this.oh;
    }

    public static final class rg {
        private String b;
        private String bm;
        private String c;
        private boolean df;
        private boolean f;
        private String fw;
        private Object hq;
        private boolean oh;
        private String pp;
        private String pt;
        private String q;
        private String rg;
        private String rz;
        private String un;
        private String ux;
        private boolean v;
        private String z;

        public q rg() {
            return new q(this);
        }
    }
}
