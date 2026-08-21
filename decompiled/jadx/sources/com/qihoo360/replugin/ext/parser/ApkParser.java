package com.qihoo360.replugin.ext.parser;

import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ApkParser extends AbstractApkParser implements Closeable {
    private final ZipFile zf;

    public ApkParser(File file) throws IOException {
        this.zf = new ZipFile(file);
    }

    public ApkParser(String str) throws IOException {
        this(new File(str));
    }

    @Override // com.qihoo360.replugin.ext.parser.AbstractApkParser
    public byte[] getFileData(String str) throws IOException {
        ZipEntry entry = this.zf.getEntry(str);
        if (entry == null) {
            return null;
        }
        return toByteArray(this.zf.getInputStream(entry));
    }

    @Override // com.qihoo360.replugin.ext.parser.AbstractApkParser, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        super.close();
        this.zf.close();
    }

    private static byte[] toByteArray(InputStream inputStream) throws IOException {
        try {
            byte[] bArr = new byte[8192];
            ByteArrayOutputStream byteArrayOutputStream = null;
            try {
                ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                while (true) {
                    try {
                        int i = inputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream2.write(bArr, 0, i);
                    } catch (Throwable th) {
                        th = th;
                        byteArrayOutputStream = byteArrayOutputStream2;
                        if (byteArrayOutputStream != null) {
                            byteArrayOutputStream.close();
                        }
                        throw th;
                    }
                }
                byte[] byteArray = byteArrayOutputStream2.toByteArray();
                byteArrayOutputStream2.close();
                return byteArray;
            } catch (Throwable th2) {
                th = th2;
            }
        } finally {
            if (inputStream != null) {
                inputStream.close();
            }
        }
    }
}
