package com.qihoo360.replugin.ext.parser.struct.xml;

import com.huawei.hms.framework.common.ContainerUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class XmlNamespaceStartTag {
    private String prefix;
    private String uri;

    public String getPrefix() {
        return this.prefix;
    }

    public void setPrefix(String str) {
        this.prefix = str;
    }

    public String getUri() {
        return this.uri;
    }

    public void setUri(String str) {
        this.uri = str;
    }

    public String toString() {
        return this.prefix + ContainerUtils.KEY_VALUE_DELIMITER + this.uri;
    }
}
