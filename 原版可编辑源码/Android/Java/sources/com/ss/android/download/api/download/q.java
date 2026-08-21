package com.ss.android.download.api.download;

import org.json.JSONObject;

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

    @Override
    public String getClickItemTag() {
        return null;
    }

    @Override
    public int getDownloadScene() {
        return 0;
    }

    @Override
    public JSONObject getExtraJson() {
        return null;
    }

    @Override
    public JSONObject getParamsJson() {
        return null;
    }

    @Override
    public void setDownloadScene(int i) {
    }

    @Override
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

    @Override
    public String getRefer() {
        return this.z;
    }

    @Override
    public String getClickButtonTag() {
        return this.rg;
    }

    @Override
    public String getClickLabel() {
        return this.q;
    }

    @Override
    public String getClickStartLabel() {
        return this.pt;
    }

    @Override
    public String getClickPauseLabel() {
        return this.pp;
    }

    @Override
    public String getClickContinueLabel() {
        return this.c;
    }

    @Override
    public String getClickInstallLabel() {
        return this.fw;
    }

    @Override
    public String getStorageDenyLabel() {
        return this.bm;
    }

    @Override
    public Object getExtraEventObject() {
        return this.hq;
    }

    @Override
    public boolean isEnableClickEvent() {
        return this.df;
    }

    @Override
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
