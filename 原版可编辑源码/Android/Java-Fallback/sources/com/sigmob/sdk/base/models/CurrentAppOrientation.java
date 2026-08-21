package com.sigmob.sdk.base.models;

public class CurrentAppOrientation {
    private final boolean locked;
    private final java.lang.String orientation;

    public CurrentAppOrientation(java.lang.String r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.orientation = r1
            r0.locked = r2
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\"appOrientation\"={\"orientation\"=\""
            r0.append(r1)
            java.lang.String r1 = r2.orientation
            r0.append(r1)
            r1 = 34
            r0.append(r1)
            java.lang.String r1 = ", \"locked\"="
            r0.append(r1)
            boolean r1 = r2.locked
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
