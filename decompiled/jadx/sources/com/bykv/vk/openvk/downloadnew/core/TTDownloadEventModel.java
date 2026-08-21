package com.bykv.vk.openvk.downloadnew.core;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class TTDownloadEventModel {
    private String df;
    private JSONObject pt;
    private JSONObject q;
    private String rg;

    public static TTDownloadEventModel builder() {
        return new TTDownloadEventModel();
    }

    public TTDownloadEventModel setMaterialMeta(JSONObject jSONObject) {
        this.pt = jSONObject;
        return this;
    }

    public TTDownloadEventModel setTag(String str) {
        this.rg = str;
        return this;
    }

    public TTDownloadEventModel setLabel(String str) {
        this.df = str;
        return this;
    }

    public TTDownloadEventModel setExtJson(JSONObject jSONObject) {
        this.q = jSONObject;
        return this;
    }

    public String getTag() {
        return this.rg;
    }

    public String getLabel() {
        return this.df;
    }

    public JSONObject getExtJson() {
        return this.q;
    }

    public JSONObject getMaterialMeta() {
        return this.pt;
    }
}
