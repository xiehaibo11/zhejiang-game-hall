package com.qihoo360.replugin.ext.parser.parser;

import com.alipay.sdk.m.n.a;
import com.qihoo360.replugin.ext.parser.parser.XmlNamespaces;
import com.qihoo360.replugin.ext.parser.struct.xml.Attribute;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNodeStartTag;
import com.qihoo360.replugin.ext.parser.utils.xml.XmlEscaper;
import com.xiaomi.mipush.sdk.Constants;
import java.util.List;
import kotlin.text.Typography;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class XmlTranslator implements XmlStreamer {
    private boolean isLastStartTag;
    private XmlNamespaces namespaces;
    private StringBuilder sb;
    private int shift = 0;

    public XmlTranslator() {
        StringBuilder sb = new StringBuilder();
        this.sb = sb;
        sb.append("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n");
        this.namespaces = new XmlNamespaces();
    }

    @Override // com.qihoo360.replugin.ext.parser.parser.XmlStreamer
    public void onStartTag(XmlNodeStartTag xmlNodeStartTag) {
        if (this.isLastStartTag) {
            this.sb.append(">\n");
        }
        int i = this.shift;
        this.shift = i + 1;
        appendShift(i);
        this.sb.append(Typography.less);
        if (xmlNodeStartTag.getNamespace() != null) {
            String prefixViaUri = this.namespaces.getPrefixViaUri(xmlNodeStartTag.getNamespace());
            if (prefixViaUri != null) {
                StringBuilder sb = this.sb;
                sb.append(prefixViaUri);
                sb.append(Constants.COLON_SEPARATOR);
            } else {
                StringBuilder sb2 = this.sb;
                sb2.append(xmlNodeStartTag.getNamespace());
                sb2.append(Constants.COLON_SEPARATOR);
            }
        }
        this.sb.append(xmlNodeStartTag.getName());
        List<XmlNamespaces.XmlNamespace> listConsumeNameSpaces = this.namespaces.consumeNameSpaces();
        if (!listConsumeNameSpaces.isEmpty()) {
            for (XmlNamespaces.XmlNamespace xmlNamespace : listConsumeNameSpaces) {
                StringBuilder sb3 = this.sb;
                sb3.append(" xmlns:");
                sb3.append(xmlNamespace.getPrefix());
                sb3.append("=\"");
                sb3.append(xmlNamespace.getUri());
                sb3.append("\"");
            }
        }
        this.isLastStartTag = true;
        for (Attribute attribute : xmlNodeStartTag.getAttributes().value()) {
            onAttribute(attribute);
        }
    }

    private void onAttribute(Attribute attribute) {
        this.sb.append(" ");
        String prefixViaUri = this.namespaces.getPrefixViaUri(attribute.getNamespace());
        if (prefixViaUri == null) {
            prefixViaUri = attribute.getNamespace();
        }
        if (prefixViaUri != null && !prefixViaUri.isEmpty()) {
            StringBuilder sb = this.sb;
            sb.append(prefixViaUri);
            sb.append(':');
        }
        String strEscapeXml10 = XmlEscaper.escapeXml10(attribute.getValue());
        StringBuilder sb2 = this.sb;
        sb2.append(attribute.getName());
        sb2.append(a.h);
        sb2.append('\"');
        sb2.append(strEscapeXml10);
        sb2.append('\"');
    }

    @Override // com.qihoo360.replugin.ext.parser.parser.XmlStreamer
    public void onEndTag(XmlNodeEndTag xmlNodeEndTag) {
        int i = this.shift - 1;
        this.shift = i;
        if (this.isLastStartTag) {
            this.sb.append(" />\n");
        } else {
            appendShift(i);
            this.sb.append("</");
            if (xmlNodeEndTag.getNamespace() != null) {
                StringBuilder sb = this.sb;
                sb.append(xmlNodeEndTag.getNamespace());
                sb.append(Constants.COLON_SEPARATOR);
            }
            this.sb.append(xmlNodeEndTag.getName());
            this.sb.append(">\n");
        }
        this.isLastStartTag = false;
    }

    @Override // com.qihoo360.replugin.ext.parser.parser.XmlStreamer
    public void onNamespaceStart(XmlNamespaceStartTag xmlNamespaceStartTag) {
        this.namespaces.addNamespace(xmlNamespaceStartTag);
    }

    @Override // com.qihoo360.replugin.ext.parser.parser.XmlStreamer
    public void onNamespaceEnd(XmlNamespaceEndTag xmlNamespaceEndTag) {
        this.namespaces.removeNamespace(xmlNamespaceEndTag);
    }

    private void appendShift(int i) {
        for (int i2 = 0; i2 < i; i2++) {
            this.sb.append("\t");
        }
    }

    public String getXml() {
        return this.sb.toString();
    }
}
