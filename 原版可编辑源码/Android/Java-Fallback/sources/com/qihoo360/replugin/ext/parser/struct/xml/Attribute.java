package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Attribute {
    private java.lang.String name;
    private java.lang.String namespace;
    private java.lang.String rawValue;
    private java.lang.String value;

    public Attribute() {
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

    public java.lang.String getRawValue() {
            r1 = this;
            java.lang.String r0 = r1.rawValue
            return r0
    }

    public java.lang.String getValue() {
            r1 = this;
            java.lang.String r0 = r1.value
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

    public void setRawValue(java.lang.String r1) {
            r0 = this;
            r0.rawValue = r1
            return
    }

    public void setValue(java.lang.String r1) {
            r0 = this;
            r0.value = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Attribute{name='"
            r0.append(r1)
            java.lang.String r1 = r3.name
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", namespace='"
            r0.append(r2)
            java.lang.String r2 = r3.namespace
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
