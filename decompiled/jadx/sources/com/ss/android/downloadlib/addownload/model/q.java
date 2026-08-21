package com.ss.android.downloadlib.addownload.model;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class q {
    public static int df = 1;
    public static int q = 2;
    public static int rg;
    private int pt = rg;
    private long pp = 0;
    private JSONObject c = null;
    private int fw = 0;
    private String ux = "";
    private String rz = "";

    public boolean rg() {
        return this.pt == df;
    }

    public int df() {
        return this.fw;
    }

    public q rg(int i) {
        this.pt = i;
        return this;
    }

    public q df(int i) {
        this.fw = i;
        return this;
    }
}
