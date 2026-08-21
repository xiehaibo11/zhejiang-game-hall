package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlNamespaceStartTag {
    private java.lang.String prefix;
    private java.lang.String uri;

    public XmlNamespaceStartTag() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getPrefix() {
            r1 = this;
            java.lang.String r0 = r1.prefix
            return r0
    }

    public java.lang.String getUri() {
            r1 = this;
            java.lang.String r0 = r1.uri
            return r0
    }

    public void setPrefix(java.lang.String r1) {
            r0 = this;
            r0.prefix = r1
            return
    }

    public void setUri(java.lang.String r1) {
            r0 = this;
            r0.uri = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.prefix
            r0.append(r1)
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.String r1 = r2.uri
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
