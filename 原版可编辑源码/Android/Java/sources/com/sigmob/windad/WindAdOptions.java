package com.sigmob.windad;

import java.util.HashMap;

public class WindAdOptions {
    private String a;
    private String b;
    private HashMap<String, String> c;
    private WindCustomController d;

    public WindAdOptions(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    public String getAppId() {
        return this.a;
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
