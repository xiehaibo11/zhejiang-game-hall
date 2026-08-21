package com.sigmob.sdk.base.utils;

import android.os.AsyncTask;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.archives.d;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;

public final class a {

    private static class a extends AsyncTask<String, Void, Boolean> {
        private final File a;
        private final File b;
        private final b c;

        a(File file, File file2, b bVar) {
            this.a = file2;
            this.b = file;
            this.c = bVar;
        }

        @Override
        protected Boolean doInBackground(String[] strArr) {
            try {
                a.a(this.a, this.b);
                return true;
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
                return false;
            }
        }

        @Override
        protected void onPostExecute(Boolean bool) {
            b bVar = this.c;
            if (bVar != null) {
                bVar.a(bool.booleanValue());
            }
        }
    }

    interface b {
        void a(boolean z);
    }

    public static List<File> a(File file, File file2) throws com.sigmob.sdk.archives.b, IOException {
        GZIPInputStream gZIPInputStream;
        d dVar;
        com.sigmob.sdk.archives.c cVarA;
        SigmobLog.i(String.format("Untaring %s to dir %s.", file.getAbsolutePath(), file2.getAbsolutePath()));
        LinkedList linkedList = new LinkedList();
        FileInputStream fileInputStream = new FileInputStream(file);
        try {
            gZIPInputStream = new GZIPInputStream(fileInputStream);
        } catch (Throwable th) {
            fileInputStream.close();
            fileInputStream = new FileInputStream(file);
            SigmobLog.e(th.getMessage());
            gZIPInputStream = null;
        }
        if (gZIPInputStream != null) {
            dVar = new d();
            cVarA = dVar.a("tar", gZIPInputStream);
        } else {
            dVar = new d();
            cVarA = dVar.a("tar", fileInputStream);
        }
        com.sigmob.sdk.archives.tar.b bVar = (com.sigmob.sdk.archives.tar.b) cVarA;
        if (!file2.exists()) {
            file2.mkdirs();
        }
        while (true) {
            com.sigmob.sdk.archives.tar.a aVar = (com.sigmob.sdk.archives.tar.a) bVar.a();
            if (aVar == null) {
                bVar.close();
                if (gZIPInputStream != null) {
                    gZIPInputStream.close();
                }
                fileInputStream.close();
                return linkedList;
            }
            File file3 = new File(file2, aVar.a());
            if (aVar.c()) {
                SigmobLog.i(String.format("Attempting to write output directory %s.", file3.getAbsolutePath()));
                if (file3.exists()) {
                    continue;
                } else {
                    SigmobLog.i(String.format("Attempting to create output directory %s.", file3.getAbsolutePath()));
                    if (!file3.mkdirs()) {
                        throw new IllegalStateException(String.format("Couldn't create directory %s.", file3.getAbsolutePath()));
                    }
                }
            } else {
                SigmobLog.i(String.format("Creating output file %s.", file3.getAbsolutePath()));
                if (!file3.getParentFile().exists()) {
                    file3.getParentFile().mkdirs();
                }
                FileOutputStream fileOutputStream = new FileOutputStream(file3);
                com.sigmob.sdk.archives.utils.c.a(bVar, fileOutputStream);
                fileOutputStream.close();
            }
            linkedList.add(file3);
        }
    }

    public static void a(File file, File file2, b bVar) {
        new a(file, file2, bVar);
        SigmobLog.d("uncompressTarGzipAsync()  inputFile = [" + file + "], outputDir = [" + file2 + "], unCompressAsyncTaskListener = [" + bVar + "]");
    }

    public static byte[] a(String str) throws IOException {
        if (str == null || str.length() == 0) {
            return null;
        }
        return a(str.getBytes("utf-8"));
    }

    private static byte[] a(byte[] bArr) throws IOException {
        if (bArr == null || bArr.length == 0) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
        gZIPOutputStream.write(bArr);
        gZIPOutputStream.close();
        return byteArrayOutputStream.toByteArray();
    }

    public static String b(String str) throws IOException {
        return (str == null || str.length() == 0) ? str : new String(b(str.getBytes("utf-8")));
    }

    private static byte[] b(byte[] bArr) throws IOException {
        if (bArr == null || bArr.length == 0) {
            return bArr;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr);
        GZIPInputStream gZIPInputStream = new GZIPInputStream(byteArrayInputStream);
        byte[] bArr2 = new byte[256];
        while (true) {
            int i = gZIPInputStream.read(bArr2);
            if (i < 0) {
                gZIPInputStream.close();
                byteArrayInputStream.close();
                return byteArrayOutputStream.toByteArray();
            }
            byteArrayOutputStream.write(bArr2, 0, i);
        }
    }
}
