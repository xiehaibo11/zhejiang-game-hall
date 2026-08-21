package com.kwad.sdk.utils;

import android.text.TextUtils;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;
import java.util.zip.ZipOutputStream;

public final class br {

    public static class a extends ZipOutputStream {
        private Map<String, Integer> aKC;

        public a(OutputStream outputStream) {
            super(outputStream);
            this.aKC = new HashMap();
        }

        @Override
        public final void putNextEntry(ZipEntry zipEntry) throws IOException {
            ZipEntry zipEntry2;
            Integer numValueOf;
            String name = zipEntry.getName();
            Integer num = this.aKC.get(name);
            if (num == null || num.intValue() <= 0) {
                zipEntry2 = zipEntry;
                numValueOf = 1;
            } else {
                zipEntry2 = new ZipEntry(zipEntry.getName().replaceFirst("\\.", "(" + num + ")."));
                numValueOf = Integer.valueOf(num.intValue() + 1);
            }
            this.aKC.put(name, numValueOf);
            super.putNextEntry(zipEntry2);
        }
    }

    private static void a(ZipOutputStream zipOutputStream, File file, String str, byte[] bArr) throws IOException {
        BufferedInputStream bufferedInputStream;
        File[] fileArrListFiles;
        if (zipOutputStream == null || file == null) {
            com.kwad.sdk.core.e.c.e("ZipUtils", "", new IOException("(dozip:179) I/O Object got NullPointerException"));
            return;
        }
        if (!file.exists()) {
            com.kwad.sdk.core.e.c.e("ZipUtils", file.toString(), new FileNotFoundException("(doZip:142)Target File is missing"));
            return;
        }
        BufferedInputStream bufferedInputStream2 = null;
        String strFQ = TextUtils.isEmpty(str) ? fQ(file.getName()) : str + File.separator + fQ(file.getName());
        if (!file.isFile()) {
            if (!file.isDirectory() || (fileArrListFiles = file.listFiles()) == null) {
                return;
            }
            for (File file2 : fileArrListFiles) {
                a(zipOutputStream, file2, strFQ, bArr);
            }
            return;
        }
        try {
            bufferedInputStream = new BufferedInputStream(new FileInputStream(file));
        } catch (IOException e) {
            e = e;
        }
        try {
            zipOutputStream.putNextEntry(new ZipEntry(strFQ));
            while (true) {
                int i = bufferedInputStream.read(bArr, 0, bArr.length);
                if (-1 == i) {
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
                    return;
                }
                zipOutputStream.write(bArr, 0, i);
            }
        } catch (IOException e2) {
            e = e2;
            bufferedInputStream2 = bufferedInputStream;
            com.kwad.sdk.core.e.c.e("ZipUtils", "error doZip", e);
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream2);
            throw e;
        }
    }

    private static boolean a(File[] fileArr, File file) {
        if (file == null) {
            return false;
        }
        a aVar = null;
        try {
            byte[] bArr = new byte[4096];
            a aVar2 = new a(new BufferedOutputStream(new FileOutputStream(file, false)));
            for (int i = 0; i <= 0; i++) {
                try {
                    a(aVar2, fileArr[0], null, bArr);
                } catch (Throwable th) {
                    th = th;
                    aVar = aVar2;
                    try {
                        com.kwad.sdk.core.e.c.e("ZipUtils", "error zip", th);
                        return false;
                    } finally {
                        com.kwad.sdk.crash.utils.b.closeQuietly(aVar);
                    }
                }
            }
            aVar2.flush();
            aVar2.closeEntry();
            com.kwad.sdk.crash.utils.b.closeQuietly(aVar2);
            return true;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private static String fQ(String str) {
        return ((!TextUtils.isEmpty(str) || str.length() <= 1) && !TextUtils.isEmpty(str) && str.charAt(0) == '.') ? str.substring(1) : str;
    }

    public static boolean unZip(InputStream inputStream, String str) throws Throwable {
        BufferedInputStream bufferedInputStream;
        ZipInputStream zipInputStream;
        FileOutputStream fileOutputStream;
        File file = new File(str);
        if (!file.exists()) {
            file.mkdirs();
        }
        Closeable closeable = null;
        try {
            try {
                bufferedInputStream = new BufferedInputStream(inputStream);
                try {
                    zipInputStream = new ZipInputStream(bufferedInputStream);
                } catch (IOException e) {
                    e = e;
                }
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e2) {
            e = e2;
            bufferedInputStream = null;
        } catch (Throwable th2) {
            th = th2;
            bufferedInputStream = null;
        }
        try {
            byte[] bArr = new byte[1024];
            while (true) {
                ZipEntry nextEntry = zipInputStream.getNextEntry();
                if (nextEntry == null) {
                    com.kwad.sdk.crash.utils.b.closeQuietly(zipInputStream);
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
                    return true;
                }
                String name = nextEntry.getName();
                if (!name.contains("../")) {
                    if (nextEntry.isDirectory()) {
                        new File(str + "/" + name).mkdirs();
                    } else {
                        File file2 = new File(str + "/" + name);
                        if (!file2.getParentFile().exists()) {
                            file2.getParentFile().mkdirs();
                        }
                        try {
                            fileOutputStream = new FileOutputStream(file2);
                            while (true) {
                                try {
                                    try {
                                        int i = zipInputStream.read(bArr);
                                        if (i == -1) {
                                            break;
                                        }
                                        fileOutputStream.write(bArr, 0, i);
                                    } catch (Throwable th3) {
                                        th = th3;
                                        closeable = fileOutputStream;
                                        com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
                                        throw th;
                                    }
                                } catch (IOException e3) {
                                    e = e3;
                                    com.kwad.sdk.core.e.c.e("ZipUtils", "error unZip when write", e);
                                }
                            }
                            fileOutputStream.flush();
                            fileOutputStream.getFD().sync();
                        } catch (IOException e4) {
                            e = e4;
                            fileOutputStream = null;
                        } catch (Throwable th4) {
                            th = th4;
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileOutputStream);
                        zipInputStream.closeEntry();
                    }
                }
            }
        } catch (IOException e5) {
            e = e5;
            closeable = zipInputStream;
            com.kwad.sdk.core.e.c.e("ZipUtils", "error unZip", e);
            com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
            return false;
        } catch (Throwable th5) {
            th = th5;
            closeable = zipInputStream;
            com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
            throw th;
        }
    }

    public static boolean zip(File file, File file2) {
        return a(new File[]{file}, file2);
    }

    public static void zipFile(File file) {
        if (file == null || !file.exists()) {
            return;
        }
        String absolutePath = file.getAbsolutePath();
        if (absolutePath.endsWith(".zip")) {
            return;
        }
        if (zip(file, new File(absolutePath + ".zip"))) {
            file.delete();
        }
    }
}
