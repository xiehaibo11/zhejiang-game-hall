package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class Attributes {
    private final Attribute[] attributes;

    public Attributes(int i) {
        this.attributes = new Attribute[i];
    }

    public void set(int i, Attribute attribute) {
        this.attributes[i] = attribute;
    }

    public String get(String str) {
        for (Attribute attribute : this.attributes) {
            if (attribute.getName().equals(str)) {
                return attribute.getValue();
            }
        }
        return null;
    }

    public int size() {
        return this.attributes.length;
    }

    public boolean getBoolean(String str, boolean z) {
        String str2 = get(str);
        return str2 == null ? z : Boolean.parseBoolean(str2);
    }

    public Integer getInt(String str) {
        String str2 = get(str);
        if (str2 == null) {
            return null;
        }
        if (str2.startsWith("0x")) {
            return Integer.valueOf(str2.substring(2), 16);
        }
        return Integer.valueOf(str2);
    }

    public Long getLong(String str) {
        String str2 = get(str);
        if (str2 == null) {
            return null;
        }
        if (str2.startsWith("0x")) {
            return Long.valueOf(str2.substring(2), 16);
        }
        return Long.valueOf(str2);
    }

    public Attribute[] value() {
        return this.attributes;
    }
}
