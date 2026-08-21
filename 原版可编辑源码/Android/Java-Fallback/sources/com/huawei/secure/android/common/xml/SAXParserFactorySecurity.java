package com.huawei.secure.android.common.xml;

public class SAXParserFactorySecurity {
    public SAXParserFactorySecurity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static javax.xml.parsers.SAXParserFactory getInstance() throws javax.xml.parsers.ParserConfigurationException, org.xml.sax.SAXNotRecognizedException, org.xml.sax.SAXNotSupportedException, java.lang.NullPointerException {
            javax.xml.parsers.SAXParserFactory r0 = javax.xml.parsers.SAXParserFactory.newInstance()
            r1 = 1
            java.lang.String r2 = "http://xml.org/sax/features/namespaces"
            r0.setFeature(r2, r1)
            r2 = 0
            java.lang.String r3 = "http://xml.org/sax/features/namespace-prefixes"
            r0.setFeature(r3, r2)
            java.lang.String r3 = "http://xml.org/sax/features/validation"
            r0.setFeature(r3, r2)
            java.lang.String r3 = "http://xml.org/sax/features/external-general-entities"
            r0.setFeature(r3, r2)
            java.lang.String r3 = "http://xml.org/sax/features/external-parameter-entities"
            r0.setFeature(r3, r2)
            java.lang.String r2 = "http://xml.org/sax/features/string-interning"
            r0.setFeature(r2, r1)
            return r0
    }
}
