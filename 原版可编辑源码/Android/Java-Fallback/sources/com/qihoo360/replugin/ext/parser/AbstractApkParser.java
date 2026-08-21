package com.qihoo360.replugin.ext.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public abstract class AbstractApkParser implements java.io.Closeable {
    private static final java.lang.String MANIFEST_FILE = "AndroidManifest.xml";
    private java.lang.String manifestXml;

    public AbstractApkParser() {
            r0 = this;
            r0.<init>()
            return
    }

    private void parseManifestXml() throws java.io.IOException {
            r2 = this;
            com.qihoo360.replugin.ext.parser.parser.XmlTranslator r0 = new com.qihoo360.replugin.ext.parser.parser.XmlTranslator
            r0.<init>()
            java.lang.String r1 = "AndroidManifest.xml"
            byte[] r1 = r2.getFileData(r1)
            if (r1 == 0) goto L17
            r2.transBinaryXml(r1, r0)
            java.lang.String r0 = r0.getXml()
            r2.manifestXml = r0
            return
        L17:
            com.qihoo360.replugin.ext.parser.exception.ParserException r0 = new com.qihoo360.replugin.ext.parser.exception.ParserException
            java.lang.String r1 = "Manifest file not found"
            r0.<init>(r1)
            throw r0
    }

    private void transBinaryXml(byte[] r2, com.qihoo360.replugin.ext.parser.parser.XmlStreamer r3) throws java.io.IOException {
            r1 = this;
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            com.qihoo360.replugin.ext.parser.parser.BinaryXmlParser r0 = new com.qihoo360.replugin.ext.parser.parser.BinaryXmlParser
            r0.<init>(r2)
            r0.setXmlStreamer(r3)
            r0.parse()
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r0 = this;
            return
    }

    public abstract byte[] getFileData(java.lang.String r1) throws java.io.IOException;

    public java.lang.String getManifestXml() throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = r1.manifestXml
            if (r0 != 0) goto L7
            r1.parseManifestXml()
        L7:
            java.lang.String r0 = r1.manifestXml
            return r0
    }
}
