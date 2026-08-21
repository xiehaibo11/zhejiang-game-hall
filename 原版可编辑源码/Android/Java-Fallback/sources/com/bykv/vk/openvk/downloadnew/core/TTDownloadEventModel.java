package com.bykv.vk.openvk.downloadnew.core;

public class TTDownloadEventModel {
    private java.lang.String df;
    private org.json.JSONObject pt;
    private org.json.JSONObject q;
    private java.lang.String rg;

    public TTDownloadEventModel() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel builder() {
            com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel r0 = new com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel
            r0.<init>()
            return r0
    }

    public org.json.JSONObject getExtJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.q
            return r0
    }

    public java.lang.String getLabel() {
            r1 = this;
            java.lang.String r0 = r1.df
            return r0
    }

    public org.json.JSONObject getMaterialMeta() {
            r1 = this;
            org.json.JSONObject r0 = r1.pt
            return r0
    }

    public java.lang.String getTag() {
            r1 = this;
            java.lang.String r0 = r1.rg
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel setExtJson(org.json.JSONObject r1) {
            r0 = this;
            r0.q = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel setLabel(java.lang.String r1) {
            r0 = this;
            r0.df = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel setMaterialMeta(org.json.JSONObject r1) {
            r0 = this;
            r0.pt = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.TTDownloadEventModel setTag(java.lang.String r1) {
            r0 = this;
            r0.rg = r1
            return r0
    }
}
