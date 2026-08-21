package com.huawei.secure.android.common.xml;

public class XmlPullParserFactorySecurity {
    public XmlPullParserFactorySecurity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.xmlpull.v1.XmlPullParserFactory getInstance() throws org.xmlpull.v1.XmlPullParserException {
            org.xmlpull.v1.XmlPullParserFactory r0 = org.xmlpull.v1.XmlPullParserFactory.newInstance()
            r1 = 1
            java.lang.String r2 = "http://xmlpull.org/v1/doc/features.html#process-namespaces"
            r0.setFeature(r2, r1)
            r2 = 0
            java.lang.String r3 = "http://xmlpull.org/v1/doc/features.html#report-namespace-prefixes"
            r0.setFeature(r3, r2)
            java.lang.String r3 = "http://xmlpull.org/v1/doc/features.html#process-docdecl"
            r0.setFeature(r3, r1)
            java.lang.String r1 = "http://xmlpull.org/v1/doc/features.html#validation"
            r0.setFeature(r1, r2)
            return r0
    }
}
