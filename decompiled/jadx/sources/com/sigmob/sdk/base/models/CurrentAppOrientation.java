package com.sigmob.sdk.base.models;

/* JADX INFO: loaded from: classes3.dex */
public class CurrentAppOrientation {
    private final boolean locked;
    private final String orientation;

    public CurrentAppOrientation(String str, boolean z) {
        this.orientation = str;
        this.locked = z;
    }

    public String toString() {
        return "\"appOrientation\"={\"orientation\"=\"" + this.orientation + "\", \"locked\"=" + this.locked + '}';
    }
}
