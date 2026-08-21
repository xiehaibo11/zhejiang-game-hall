package com.bianfeng.ymnsdk.sysfunc.utils;

public class FileUtils {
    public FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void cleanDirectory(java.io.File r4) throws java.io.IOException {
            java.io.File[] r4 = verifiedListFiles(r4)
            int r0 = r4.length
            r1 = 0
            r2 = 0
        L7:
            if (r2 >= r0) goto L13
            r3 = r4[r2]
            forceDelete(r3)     // Catch: java.io.IOException -> Lf
            goto L10
        Lf:
            r1 = move-exception
        L10:
            int r2 = r2 + 1
            goto L7
        L13:
            if (r1 != 0) goto L16
            return
        L16:
            throw r1
    }

    public static void deleteDirectory(java.io.File r2) throws java.io.IOException {
            boolean r0 = r2.exists()
            if (r0 != 0) goto L7
            return
        L7:
            cleanDirectory(r2)
            boolean r0 = r2.delete()
            if (r0 == 0) goto L11
            return
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to delete directory "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "."
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
    }

    public static boolean deleteQuietly(java.io.File r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.isDirectory()     // Catch: java.lang.Exception -> Ld
            if (r1 == 0) goto Ld
            cleanDirectory(r2)     // Catch: java.lang.Exception -> Ld
        Ld:
            boolean r2 = r2.delete()     // Catch: java.lang.Exception -> L12
            return r2
        L12:
            return r0
    }

    public static void forceDelete(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L11
            deleteDirectory(r3)
            goto L4b
        L11:
            boolean r0 = r3.exists()
            boolean r1 = r3.delete()
            if (r1 != 0) goto L4b
            if (r0 != 0) goto L34
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "File does not exist: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L34:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to delete file: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r3)
            throw r0
        L4b:
            return
    }

    private static java.io.File[] verifiedListFiles(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            if (r0 == 0) goto L41
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L2a
            java.io.File[] r0 = r3.listFiles()
            if (r0 == 0) goto L13
            return r0
        L13:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to list contents of "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L2a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " is not a directory"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r3)
            throw r0
        L41:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " does not exist"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r3)
            throw r0
    }
}
