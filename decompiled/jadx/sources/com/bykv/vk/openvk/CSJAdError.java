package com.bykv.vk.openvk;

/* JADX INFO: loaded from: classes.dex */
public class CSJAdError {
    private String df;
    private int rg;

    public CSJAdError(int i, String str) {
        this.rg = i;
        this.df = str;
    }

    public int getCode() {
        return this.rg;
    }

    public String getMsg() {
        return this.df;
    }
}
