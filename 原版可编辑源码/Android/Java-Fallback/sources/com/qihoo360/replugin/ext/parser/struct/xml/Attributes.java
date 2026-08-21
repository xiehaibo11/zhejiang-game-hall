package com.qihoo360.replugin.ext.parser.struct.xml;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Attributes {
    private final com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] attributes;

    public Attributes(int r1) {
            r0 = this;
            r0.<init>()
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r1 = new com.qihoo360.replugin.ext.parser.struct.xml.Attribute[r1]
            r0.attributes = r1
            return
    }

    public java.lang.String get(java.lang.String r6) {
            r5 = this;
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r0 = r5.attributes
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L1a
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            boolean r4 = r4.equals(r6)
            if (r4 == 0) goto L17
            java.lang.String r6 = r3.getValue()
            return r6
        L17:
            int r2 = r2 + 1
            goto L4
        L1a:
            r6 = 0
            return r6
    }

    public boolean getBoolean(java.lang.String r1, boolean r2) {
            r0 = this;
            java.lang.String r1 = r0.get(r1)
            if (r1 != 0) goto L7
            goto Lb
        L7:
            boolean r2 = java.lang.Boolean.parseBoolean(r1)
        Lb:
            return r2
    }

    public java.lang.Integer getInt(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.get(r2)
            if (r2 != 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "0x"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L1c
            r0 = 2
            java.lang.String r2 = r2.substring(r0)
            r0 = 16
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2, r0)
            return r2
        L1c:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            return r2
    }

    public java.lang.Long getLong(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r1.get(r2)
            if (r2 != 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = "0x"
            boolean r0 = r2.startsWith(r0)
            if (r0 == 0) goto L1c
            r0 = 2
            java.lang.String r2 = r2.substring(r0)
            r0 = 16
            java.lang.Long r2 = java.lang.Long.valueOf(r2, r0)
            return r2
        L1c:
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            return r2
    }

    public void set(int r2, com.qihoo360.replugin.ext.parser.struct.xml.Attribute r3) {
            r1 = this;
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r0 = r1.attributes
            r0[r2] = r3
            return
    }

    public int size() {
            r1 = this;
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r0 = r1.attributes
            int r0 = r0.length
            return r0
    }

    public com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] value() {
            r1 = this;
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r0 = r1.attributes
            return r0
    }
}
