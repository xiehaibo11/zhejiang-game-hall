package com.ss.android.downloadlib.addownload.model;

public class pp implements com.ss.android.downloadad.api.rg.rg {
    public com.ss.android.download.api.download.DownloadModel df;
    public com.ss.android.download.api.download.DownloadController pt;
    public com.ss.android.download.api.download.DownloadEventConfig q;
    public long rg;

    public pp() {
            r0 = this;
            r0.<init>()
            return
    }

    public pp(long r1, com.ss.android.download.api.download.DownloadModel r3, com.ss.android.download.api.download.DownloadEventConfig r4, com.ss.android.download.api.download.DownloadController r5) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            r0.df = r3
            r0.q = r4
            r0.pt = r5
            return
    }

    @Override
    public org.json.JSONObject b() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            org.json.JSONObject r0 = r0.getParamsJson()
            return r0
    }

    @Override
    public java.lang.String bm() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            java.lang.String r0 = r0.getClickButtonTag()
            return r0
    }

    @Override
    public java.lang.String c() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            com.ss.android.download.api.model.DeepLink r0 = r0.getDeepLink()
            if (r0 == 0) goto L13
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            com.ss.android.download.api.model.DeepLink r0 = r0.getDeepLink()
            java.lang.String r0 = r0.getOpenUrl()
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public long df() {
            r2 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r2.df
            long r0 = r0.getId()
            return r0
    }

    @Override
    public java.util.List<java.lang.String> f() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            java.util.List r0 = r0.getClickTrackUrl()
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadController fo() {
            r1 = this;
            com.ss.android.download.api.download.DownloadController r0 = r1.pt
            return r0
    }

    @Override
    public org.json.JSONObject fw() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            org.json.JSONObject r0 = r0.getExtra()
            return r0
    }

    @Override
    public long hq() {
            r2 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r2.df
            long r0 = r0.getExtraValue()
            return r0
    }

    public boolean l() {
            r3 = this;
            boolean r0 = r3.re()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.ss.android.download.api.download.DownloadModel r0 = r3.df
            boolean r0 = r0.isAd()
            if (r0 == 0) goto L2e
            com.ss.android.download.api.download.DownloadModel r0 = r3.df
            boolean r2 = r0 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r2 == 0) goto L2d
            java.lang.String r0 = r0.getLogExtra()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2d
            com.ss.android.download.api.download.DownloadEventConfig r0 = r3.q
            boolean r0 = r0 instanceof com.ss.android.downloadad.api.download.AdDownloadEventConfig
            if (r0 == 0) goto L2d
            com.ss.android.download.api.download.DownloadController r0 = r3.pt
            boolean r0 = r0 instanceof com.ss.android.downloadad.api.download.AdDownloadController
            if (r0 == 0) goto L2d
            r1 = 1
        L2d:
            return r1
        L2e:
            com.ss.android.download.api.download.DownloadModel r0 = r3.df
            boolean r0 = r0 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            return r0
    }

    @Override
    public int n() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            int r0 = r0.getDownloadScene()
            return r0
    }

    @Override
    public boolean oh() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            boolean r0 = r0.isEnableV3Event()
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadModel ou() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            return r0
    }

    @Override
    public java.lang.String pp() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            java.lang.String r0 = r0.getPackageName()
            return r0
    }

    @Override
    public java.lang.String pt() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            java.lang.String r0 = r0.getLogExtra()
            return r0
    }

    @Override
    public boolean q() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            boolean r0 = r0.isAd()
            return r0
    }

    @Override
    public int qx() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public org.json.JSONObject r() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            org.json.JSONObject r0 = r0.getDownloadSettings()
            return r0
    }

    public boolean re() {
            r6 = this;
            long r0 = r6.rg
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            if (r0 == 0) goto L25
            com.ss.android.download.api.download.DownloadModel r0 = r6.df
            if (r0 == 0) goto L25
            com.ss.android.download.api.download.DownloadEventConfig r4 = r6.q
            if (r4 == 0) goto L25
            com.ss.android.download.api.download.DownloadController r4 = r6.pt
            if (r4 != 0) goto L16
            goto L25
        L16:
            boolean r0 = r0.isAd()
            if (r0 == 0) goto L23
            long r4 = r6.rg
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r0 > 0) goto L23
            return r1
        L23:
            r0 = 0
            return r0
        L25:
            return r1
    }

    @Override
    public java.lang.String rg() {
            r1 = this;
            com.ss.android.download.api.download.DownloadModel r0 = r1.df
            java.lang.String r0 = r0.getDownloadUrl()
            return r0
    }

    @Override
    public java.lang.String rz() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            java.lang.String r0 = r0.getRefer()
            return r0
    }

    @Override
    public org.json.JSONObject un() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            org.json.JSONObject r0 = r0.getExtraJson()
            return r0
    }

    @Override
    public int ux() {
            r2 = this;
            com.ss.android.download.api.download.DownloadController r0 = r2.pt
            int r0 = r0.getDownloadMode()
            r1 = 2
            if (r0 != r1) goto La
            return r1
        La:
            com.ss.android.download.api.download.DownloadModel r0 = r2.df
            int r0 = r0.getFunnelType()
            return r0
    }

    @Override
    public java.lang.Object v() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            java.lang.Object r0 = r0.getExtraEventObject()
            return r0
    }

    @Override
    public com.ss.android.download.api.download.DownloadEventConfig y() {
            r1 = this;
            com.ss.android.download.api.download.DownloadEventConfig r0 = r1.q
            return r0
    }

    @Override
    public boolean z() {
            r1 = this;
            com.ss.android.download.api.download.DownloadController r0 = r1.pt
            boolean r0 = r0.enableNewActivity()
            return r0
    }
}
