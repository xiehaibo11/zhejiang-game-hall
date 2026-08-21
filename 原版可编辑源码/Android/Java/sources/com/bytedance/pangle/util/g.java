package com.bytedance.pangle.util;

import android.content.Context;
import android.os.Build;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.zip.ZipFile;

public final class g {
    public static String a;
    static String b;

    public static void a(String str) {
        a(new File(str));
    }

    public static void a(File file) {
        File[] fileArrListFiles;
        if (file == null || !file.exists()) {
            return;
        }
        if (Build.VERSION.SDK_INT < 26) {
            if (file.isDirectory() && (fileArrListFiles = file.listFiles()) != null) {
                for (File file2 : fileArrListFiles) {
                    a(file2);
                }
            }
            file.delete();
            return;
        }
        try {
            Files.walkFileTree(Paths.get(file.getAbsolutePath(), new String[0]), new SimpleFileVisitor<Path>() {
                1() {
                }

                @Override
                public final FileVisitResult postVisitDirectory(Object obj, IOException iOException) {
                    return b((Path) obj);
                }

                @Override
                public final FileVisitResult visitFile(Object obj, BasicFileAttributes basicFileAttributes) {
                    return a((Path) obj);
                }

                private static FileVisitResult a(Path path) {
                    if (path != null) {
                        try {
                            Files.deleteIfExists(path);
                        } catch (IOException unused) {
                        }
                    }
                    return FileVisitResult.CONTINUE;
                }

                private static FileVisitResult b(Path path) {
                    if (path != null) {
                        try {
                            Files.deleteIfExists(path);
                        } catch (IOException unused) {
                        }
                    }
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public final FileVisitResult visitFileFailed(Object obj, IOException iOException) {
                    return FileVisitResult.CONTINUE;
                }

                @Override
                public final FileVisitResult preVisitDirectory(Object obj, BasicFileAttributes basicFileAttributes) {
                    return FileVisitResult.CONTINUE;
                }
            });
        } catch (IOException unused) {
        }
    }

    public static void a(InputStream inputStream, OutputStream outputStream) throws IOException {
        b(inputStream, outputStream);
    }

    private static void b(InputStream inputStream, OutputStream outputStream) throws IOException {
        if (inputStream == null || outputStream == null) {
            return;
        }
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream);
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(outputStream);
        try {
            byte[] bArr = new byte[1048576];
            while (true) {
                int i = bufferedInputStream.read(bArr);
                if (i != -1) {
                    bufferedOutputStream.write(bArr, 0, i);
                } else {
                    bufferedOutputStream.flush();
                    return;
                }
            }
        } finally {
            bufferedInputStream.close();
            bufferedOutputStream.close();
        }
    }

    public static void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    public static void a(ZipFile zipFile) {
        if (zipFile != null) {
            try {
                zipFile.close();
            } catch (IOException unused) {
            }
        }
    }

    public static String a(Context context) {
        File parentFile;
        if (b == null && (parentFile = context.getCacheDir().getParentFile()) != null) {
            try {
                b = parentFile.getCanonicalPath();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return b;
    }

    public static void a(String str, String str2) throws Exception {
        File file = new File(str);
        File file2 = new File(str2);
        if (!file.exists()) {
            throw new Exception("文件夹不存在");
        }
        if (!file.isDirectory()) {
            throw new Exception("源文件夹不是目录");
        }
        if (!file2.exists()) {
            file2.mkdirs();
        }
        if (!file2.isDirectory()) {
            throw new Exception("目标文件夹不是目录");
        }
        File[] fileArrListFiles = file.listFiles();
        if (fileArrListFiles == null || fileArrListFiles.length == 0) {
            return;
        }
        for (File file3 : fileArrListFiles) {
            String str3 = file2 + File.separator + file3.getName();
            if (file3.isDirectory()) {
                a(file3.getAbsolutePath(), str3);
            } else if (!new File(str3).exists()) {
                BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(file3));
                BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(str3));
                byte[] bArr = new byte[8192];
                while (true) {
                    int i = bufferedInputStream.read(bArr);
                    if (i == -1) {
                        break;
                    } else {
                        bufferedOutputStream.write(bArr, 0, i);
                    }
                }
                bufferedOutputStream.close();
                bufferedInputStream.close();
            }
        }
    }
}
