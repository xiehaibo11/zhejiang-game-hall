package com.qihoo360.replugin.ext.parser.parser;

import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public interface XmlStreamer {
    void onEndTag(XmlNodeEndTag xmlNodeEndTag);

    void onNamespaceEnd(XmlNamespaceEndTag xmlNamespaceEndTag);

    void onNamespaceStart(XmlNamespaceStartTag xmlNamespaceStartTag);

    void onStartTag(XmlNodeStartTag xmlNodeStartTag);
}
