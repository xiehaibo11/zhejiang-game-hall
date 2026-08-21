package com.qihoo360.replugin.ext.parser.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlTranslator implements com.qihoo360.replugin.ext.parser.parser.XmlStreamer {
    private boolean isLastStartTag;
    private com.qihoo360.replugin.ext.parser.parser.XmlNamespaces namespaces;
    private java.lang.StringBuilder sb;
    private int shift;

    public XmlTranslator() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.shift = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r2.sb = r0
            java.lang.String r1 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
            r0.append(r1)
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = new com.qihoo360.replugin.ext.parser.parser.XmlNamespaces
            r0.<init>()
            r2.namespaces = r0
            return
    }

    private void appendShift(int r4) {
            r3 = this;
            r0 = 0
        L1:
            if (r0 >= r4) goto Ld
            java.lang.StringBuilder r1 = r3.sb
            java.lang.String r2 = "\t"
            r1.append(r2)
            int r0 = r0 + 1
            goto L1
        Ld:
            return
    }

    private void onAttribute(com.qihoo360.replugin.ext.parser.struct.xml.Attribute r3) {
            r2 = this;
            java.lang.StringBuilder r0 = r2.sb
            java.lang.String r1 = " "
            r0.append(r1)
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = r2.namespaces
            java.lang.String r1 = r3.getNamespace()
            java.lang.String r0 = r0.getPrefixViaUri(r1)
            if (r0 != 0) goto L17
            java.lang.String r0 = r3.getNamespace()
        L17:
            if (r0 == 0) goto L29
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L29
            java.lang.StringBuilder r1 = r2.sb
            r1.append(r0)
            r0 = 58
            r1.append(r0)
        L29:
            java.lang.String r0 = r3.getValue()
            java.lang.String r0 = com.qihoo360.replugin.ext.parser.utils.xml.XmlEscaper.escapeXml10(r0)
            java.lang.StringBuilder r1 = r2.sb
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            r3 = 61
            r1.append(r3)
            r3 = 34
            r1.append(r3)
            r1.append(r0)
            r1.append(r3)
            return
    }

    public java.lang.String getXml() {
            r1 = this;
            java.lang.StringBuilder r0 = r1.sb
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void onEndTag(com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag r3) {
            r2 = this;
            int r0 = r2.shift
            int r0 = r0 + (-1)
            r2.shift = r0
            boolean r1 = r2.isLastStartTag
            if (r1 == 0) goto L12
            java.lang.StringBuilder r3 = r2.sb
            java.lang.String r0 = " />\n"
            r3.append(r0)
            goto L40
        L12:
            r2.appendShift(r0)
            java.lang.StringBuilder r0 = r2.sb
            java.lang.String r1 = "</"
            r0.append(r1)
            java.lang.String r0 = r3.getNamespace()
            if (r0 == 0) goto L30
            java.lang.StringBuilder r0 = r2.sb
            java.lang.String r1 = r3.getNamespace()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
        L30:
            java.lang.StringBuilder r0 = r2.sb
            java.lang.String r3 = r3.getName()
            r0.append(r3)
            java.lang.StringBuilder r3 = r2.sb
            java.lang.String r0 = ">\n"
            r3.append(r0)
        L40:
            r3 = 0
            r2.isLastStartTag = r3
            return
    }

    @Override
    public void onNamespaceEnd(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag r2) {
            r1 = this;
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = r1.namespaces
            r0.removeNamespace(r2)
            return
    }

    @Override
    public void onNamespaceStart(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag r2) {
            r1 = this;
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = r1.namespaces
            r0.addNamespace(r2)
            return
    }

    @Override
    public void onStartTag(com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag r5) {
            r4 = this;
            boolean r0 = r4.isLastStartTag
            if (r0 == 0) goto Lb
            java.lang.StringBuilder r0 = r4.sb
            java.lang.String r1 = ">\n"
            r0.append(r1)
        Lb:
            int r0 = r4.shift
            int r1 = r0 + 1
            r4.shift = r1
            r4.appendShift(r0)
            java.lang.StringBuilder r0 = r4.sb
            r1 = 60
            r0.append(r1)
            java.lang.String r0 = r5.getNamespace()
            if (r0 == 0) goto L44
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = r4.namespaces
            java.lang.String r1 = r5.getNamespace()
            java.lang.String r0 = r0.getPrefixViaUri(r1)
            java.lang.String r1 = ":"
            if (r0 == 0) goto L38
            java.lang.StringBuilder r2 = r4.sb
            r2.append(r0)
            r2.append(r1)
            goto L44
        L38:
            java.lang.StringBuilder r0 = r4.sb
            java.lang.String r2 = r5.getNamespace()
            r0.append(r2)
            r0.append(r1)
        L44:
            java.lang.StringBuilder r0 = r4.sb
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces r0 = r4.namespaces
            java.util.List r0 = r0.consumeNameSpaces()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L89
            java.util.Iterator r0 = r0.iterator()
        L5d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L89
            java.lang.Object r1 = r0.next()
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace r1 = (com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace) r1
            java.lang.StringBuilder r2 = r4.sb
            java.lang.String r3 = " xmlns:"
            r2.append(r3)
            java.lang.String r3 = r1.getPrefix()
            r2.append(r3)
            java.lang.String r3 = "=\""
            r2.append(r3)
            java.lang.String r1 = r1.getUri()
            r2.append(r1)
            java.lang.String r1 = "\""
            r2.append(r1)
            goto L5d
        L89:
            r0 = 1
            r4.isLastStartTag = r0
            com.qihoo360.replugin.ext.parser.struct.xml.Attributes r5 = r5.getAttributes()
            com.qihoo360.replugin.ext.parser.struct.xml.Attribute[] r5 = r5.value()
            int r0 = r5.length
            r1 = 0
        L96:
            if (r1 >= r0) goto La0
            r2 = r5[r1]
            r4.onAttribute(r2)
            int r1 = r1 + 1
            goto L96
        La0:
            return
    }
}
