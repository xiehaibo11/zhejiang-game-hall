package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlNodeEndTag {
    private java.lang.String name;
    private java.lang.String namespace;

    public XmlNodeEndTag() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String getNamespace() {
            r1 = this;
            java.lang.String r0 = r1.namespace
            return r0
    }

    public void setName(java.lang.String r1) {
            r0 = this;
            r0.name = r1
            return
    }

    public void setNamespace(java.lang.String r1) {
            r0 = this;
            r0.namespace = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "</"
            r0.append(r1)
            java.lang.String r1 = r2.namespace
            if (r1 == 0) goto L16
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
        L16:
            java.lang.String r1 = r2.name
            r0.append(r1)
            r1 = 62
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
