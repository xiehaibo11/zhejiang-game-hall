package com.mbridge.msdk.dycreator.b;

public enum b {
    a(-101, "ViewOption is null"),
    b(-102, com.tkay.expressad.foundation.g.b.b.a),
    c(-103, "file create view is null"),
    d(-104, "Campaign size only one"),
    e(-105, "campaign is null"),
    f(-106, "dynamic file is not exits"),
    g(-107, "data file or file dir is not exits "),
    h(-108, "dynamic_option is not exits");

    private int i;
    private String j;

    b(int i, String str) {
        this.i = i;
        this.j = str;
    }

    public final int a() {
        return this.i;
    }

    public final String b() {
        return this.j;
    }
}
