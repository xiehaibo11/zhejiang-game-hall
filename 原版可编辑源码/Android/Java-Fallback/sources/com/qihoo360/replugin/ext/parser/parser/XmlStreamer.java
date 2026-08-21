package com.qihoo360.replugin.ext.parser.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface XmlStreamer {
    void onEndTag(com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag r1);

    void onNamespaceEnd(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag r1);

    void onNamespaceStart(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag r1);

    void onStartTag(com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag r1);
}
