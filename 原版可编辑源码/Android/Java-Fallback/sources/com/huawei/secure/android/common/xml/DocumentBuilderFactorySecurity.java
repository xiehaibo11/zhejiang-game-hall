package com.huawei.secure.android.common.xml;

public class DocumentBuilderFactorySecurity {
    public DocumentBuilderFactorySecurity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static javax.xml.parsers.DocumentBuilderFactory getInstance() throws javax.xml.parsers.ParserConfigurationException, java.lang.NullPointerException {
            javax.xml.parsers.DocumentBuilderFactory r0 = javax.xml.parsers.DocumentBuilderFactory.newInstance()
            java.lang.String r1 = "http://xml.org/sax/features/namespaces"
            r2 = 1
            r0.setFeature(r1, r2)
            r1 = 0
            java.lang.String r2 = "http://xml.org/sax/features/validation"
            r0.setFeature(r2, r1)
            r0.setExpandEntityReferences(r1)
            return r0
    }
}
