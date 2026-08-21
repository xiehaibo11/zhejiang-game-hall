package com.sigmob.windad;

import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class WindAdOptions {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f5279a;
    private String b;
    private HashMap<String, String> c;
    private WindCustomController d;

    public WindAdOptions(String str, String str2) {
        this.f5279a = str;
        this.b = str2;
    }

    public String getAppId() {
        return this.f5279a;
    }

    public String getAppKey() {
        return this.b;
    }

    public WindCustomController getCustomController() {
        return this.d;
    }

    public HashMap<String, String> getExtData() {
        return this.c;
    }

    public WindAdOptions setCustomController(WindCustomController windCustomController) {
        this.d = windCustomController;
        return this;
    }

    public WindAdOptions setExtData(HashMap<String, String> map) {
        this.c = map;
        return this;
    }
}
