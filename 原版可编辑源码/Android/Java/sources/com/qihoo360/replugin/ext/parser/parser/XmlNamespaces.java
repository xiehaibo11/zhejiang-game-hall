package com.qihoo360.replugin.ext.parser.parser;

import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag;
import com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class XmlNamespaces {
    private List<XmlNamespace> namespaces = new ArrayList();
    private List<XmlNamespace> newNamespaces = new ArrayList();

    public void addNamespace(XmlNamespaceStartTag xmlNamespaceStartTag) {
        XmlNamespace xmlNamespace = new XmlNamespace(xmlNamespaceStartTag.getPrefix(), xmlNamespaceStartTag.getUri());
        this.namespaces.add(xmlNamespace);
        this.newNamespaces.add(xmlNamespace);
    }

    public void removeNamespace(XmlNamespaceEndTag xmlNamespaceEndTag) {
        XmlNamespace xmlNamespace = new XmlNamespace(xmlNamespaceEndTag.getPrefix(), xmlNamespaceEndTag.getUri());
        this.namespaces.remove(xmlNamespace);
        this.newNamespaces.remove(xmlNamespace);
    }

    public String getPrefixViaUri(String str) {
        if (str == null) {
            return null;
        }
        for (XmlNamespace xmlNamespace : this.namespaces) {
            if (xmlNamespace.uri.equals(str)) {
                return xmlNamespace.prefix;
            }
        }
        return null;
    }

    public List<XmlNamespace> consumeNameSpaces() {
        if (!this.newNamespaces.isEmpty()) {
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(this.newNamespaces);
            this.newNamespaces.clear();
            return arrayList;
        }
        return Collections.emptyList();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class XmlNamespace {
        private String prefix;
        private String uri;

        private XmlNamespace(String str, String str2) {
            this.prefix = str;
            this.uri = str2;
        }

        public String getPrefix() {
            return this.prefix;
        }

        public String getUri() {
            return this.uri;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            XmlNamespace xmlNamespace = (XmlNamespace) obj;
            if (this.prefix == null && xmlNamespace.prefix != null) {
                return false;
            }
            if (this.uri == null && xmlNamespace.uri != null) {
                return false;
            }
            String str = this.prefix;
            if (str != null && !str.equals(xmlNamespace.prefix)) {
                return false;
            }
            String str2 = this.uri;
            return str2 == null || str2.equals(xmlNamespace.uri);
        }

        public int hashCode() {
            return (this.prefix.hashCode() * 31) + this.uri.hashCode();
        }
    }
}
