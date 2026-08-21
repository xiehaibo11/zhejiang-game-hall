package com.qihoo360.replugin.ext.parser.struct.xml;

import com.xiaomi.mipush.sdk.Constants;
import kotlin.text.Typography;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class XmlNodeStartTag {
    private Attributes attributes;
    private String name;
    private String namespace;

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

    public Attributes getAttributes() {
        return this.attributes;
    }

    public void setAttributes(Attributes attributes) {
        this.attributes = attributes;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(Typography.less);
        String str = this.namespace;
        if (str != null) {
            sb.append(str);
            sb.append(Constants.COLON_SEPARATOR);
        }
        sb.append(this.name);
        sb.append(Typography.greater);
        return sb.toString();
    }
}
