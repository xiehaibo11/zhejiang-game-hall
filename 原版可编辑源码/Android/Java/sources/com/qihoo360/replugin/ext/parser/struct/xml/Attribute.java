package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Attribute {
    private String name;
    private String namespace;
    private String rawValue;
    private String value;

    public String getNamespace() {
        return this.namespace;
    }

    public void setNamespace(String str) {
        this.namespace = str;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String str) {
        this.name = str;
    }

    public String getRawValue() {
        return this.rawValue;
    }

    public void setRawValue(String str) {
        this.rawValue = str;
    }

    public String getValue() {
        return this.value;
    }

    public void setValue(String str) {
        this.value = str;
    }

    public String toString() {
        return "Attribute{name='" + this.name + "', namespace='" + this.namespace + "'}";
    }
}
