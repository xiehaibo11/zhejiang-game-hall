package com.meizu.cloud.pushsdk.handler.a.b;

import android.os.Environment;
import com.meizu.cloud.pushinternal.DebugLogger;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.zip.ZipEntry;
import java.util.zip.ZipOutputStream;

public class b {
    private final File a;

    public b(String str) {
        this.a = new File(str);
    }

    private void a(File file, ZipOutputStream zipOutputStream, String str) throws IOException {
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        sb.append(str.trim().length() == 0 ? "" : File.separator);
        sb.append(file.getName());
        String string = sb.toString();
        if (file.isDirectory()) {
            File[] fileArrListFiles = file.listFiles();
            int length = fileArrListFiles.length;
            for (File file2 : fileArrListFiles) {
                a(file2, zipOutputStream, string);
            }
            return;
        }
        DebugLogger.i("ZipTask", "current file " + string + "/" + file.getName() + " size is " + (file.length() / 1024) + "KB");
        if (file.length() >= 10485760) {
            return;
        }
        byte[] bArr = new byte[1048576];
        BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file), 1048576);
        zipOutputStream.putNextEntry(new ZipEntry(string));
        while (true) {
            int i = bufferedInputStream.read(bArr);
            if (i == -1) {
                bufferedInputStream.close();
                zipOutputStream.flush();
                zipOutputStream.closeEntry();
                return;
            }
            zipOutputStream.write(bArr, 0, i);
        }
    }

    private void a(Collection<File> collection, File file) throws IOException {
        ZipOutputStream zipOutputStream = new ZipOutputStream(new BufferedOutputStream(new FileOutputStream(file), 1048576));
        Iterator<File> it = collection.iterator();
        while (it.hasNext()) {
            a(it.next(), zipOutputStream, "");
        }
        zipOutputStream.close();
    }

    public void a(List<String> list) throws IOException {
        if (!this.a.exists()) {
            this.a.getParentFile().mkdirs();
        }
        ArrayList arrayList = new ArrayList();
        String absolutePath = Environment.getExternalStorageDirectory().getAbsolutePath();
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            File file = new File(absolutePath + it.next());
            if (file.exists()) {
                arrayList.add(file);
            }
        }
        a(arrayList, this.a);
    }
}
