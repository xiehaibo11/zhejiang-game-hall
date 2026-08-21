package com.qihoo360.replugin.ext.parser;

import com.qihoo360.replugin.ext.parser.exception.ParserException;
import com.qihoo360.replugin.ext.parser.parser.BinaryXmlParser;
import com.qihoo360.replugin.ext.parser.parser.XmlStreamer;
import com.qihoo360.replugin.ext.parser.parser.XmlTranslator;
import java.io.Closeable;
import java.io.IOException;
import java.nio.ByteBuffer;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public abstract class AbstractApkParser implements Closeable {
    private static final String MANIFEST_FILE = "AndroidManifest.xml";
    private String manifestXml;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
    }

    public abstract byte[] getFileData(String str) throws IOException;

    public String getManifestXml() throws IOException {
        if (this.manifestXml == null) {
            parseManifestXml();
        }
        return this.manifestXml;
    }

    private void parseManifestXml() throws IOException {
        XmlTranslator xmlTranslator = new XmlTranslator();
        byte[] fileData = getFileData(MANIFEST_FILE);
        if (fileData == null) {
            throw new ParserException("Manifest file not found");
        }
        transBinaryXml(fileData, xmlTranslator);
        this.manifestXml = xmlTranslator.getXml();
    }

    private void transBinaryXml(byte[] bArr, XmlStreamer xmlStreamer) throws IOException {
        BinaryXmlParser binaryXmlParser = new BinaryXmlParser(ByteBuffer.wrap(bArr));
        binaryXmlParser.setXmlStreamer(xmlStreamer);
        binaryXmlParser.parse();
    }
}
