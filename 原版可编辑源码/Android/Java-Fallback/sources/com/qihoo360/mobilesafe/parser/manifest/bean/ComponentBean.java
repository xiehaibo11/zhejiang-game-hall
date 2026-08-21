package com.qihoo360.mobilesafe.parser.manifest.bean;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ComponentBean {
    public java.util.List<android.content.IntentFilter> intentFilters;
    public java.lang.String name;

    public ComponentBean() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.name
            r2 = 0
            r0[r2] = r1
            java.util.List<android.content.IntentFilter> r1 = r3.intentFilters
            int r1 = r1.size()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "{name:%s, intent-filter.size():%s}"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
