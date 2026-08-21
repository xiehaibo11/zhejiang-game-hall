package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class FileUtils {
    private static final long FILE_COPY_BUFFER_SIZE = 31457280;
    public static final long ONE_KB = 1024;
    public static final long ONE_MB = 1048576;

    public FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void checkFileRequirements(java.io.File r2, java.io.File r3) throws java.io.FileNotFoundException {
            if (r2 == 0) goto L2f
            if (r3 == 0) goto L27
            boolean r3 = r2.exists()
            if (r3 == 0) goto Lb
            return
        Lb:
            java.io.FileNotFoundException r3 = new java.io.FileNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Source '"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "' does not exist"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L27:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Destination must not be null"
            r2.<init>(r3)
            throw r2
        L2f:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "Source must not be null"
            r2.<init>(r3)
            throw r2
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

    public static void copyDir(java.io.File r1, java.io.File r2) throws java.io.IOException {
            r0 = 1
            copyDir(r1, r2, r0)
            return
    }

    public static void copyDir(java.io.File r5, java.io.File r6, boolean r7) throws java.io.IOException {
            checkFileRequirements(r5, r6)
            boolean r0 = r5.isDirectory()
            java.lang.String r1 = "Source '"
            if (r0 == 0) goto L7e
            java.lang.String r0 = r5.getCanonicalPath()
            java.lang.String r2 = r6.getCanonicalPath()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L5c
            boolean r0 = r6.exists()
            if (r0 == 0) goto L42
            boolean r0 = r6.canWrite()
            if (r0 == 0) goto L26
            goto L42
        L26:
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Destination '"
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = "' exists but is read-only"
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r5.<init>(r6)
            throw r5
        L42:
            java.io.File[] r5 = r5.listFiles()
            int r0 = r5.length
            r1 = 0
        L48:
            if (r1 >= r0) goto L5b
            r2 = r5[r1]
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r2.getName()
            r3.<init>(r6, r4)
            copyFile(r2, r3, r7)
            int r1 = r1 + 1
            goto L48
        L5b:
            return
        L5c:
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = "' and destination '"
            r0.append(r5)
            r0.append(r6)
            java.lang.String r5 = "' are the same"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r7.<init>(r5)
            throw r7
        L7e:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            r7.append(r5)
            java.lang.String r5 = "' exists but is not a directory"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
    }

    public static void copyFile(java.io.File r1, java.io.File r2) throws java.io.IOException {
            r0 = 1
            copyFile(r1, r2, r0)
            return
    }

    public static void copyFile(java.io.File r3, java.io.File r4, boolean r5) throws java.io.IOException {
            checkFileRequirements(r3, r4)
            boolean r0 = r3.isDirectory()
            java.lang.String r1 = "Source '"
            if (r0 != 0) goto L95
            java.lang.String r0 = r3.getCanonicalPath()
            java.lang.String r2 = r4.getCanonicalPath()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L73
            java.io.File r0 = r4.getParentFile()
            java.lang.String r1 = "Destination '"
            if (r0 == 0) goto L48
            boolean r2 = r0.mkdirs()
            if (r2 != 0) goto L48
            boolean r2 = r0.isDirectory()
            if (r2 == 0) goto L2e
            goto L48
        L2e:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r0)
            java.lang.String r5 = "' directory cannot be created"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L48:
            boolean r0 = r4.exists()
            if (r0 == 0) goto L6f
            boolean r0 = r4.canWrite()
            if (r0 == 0) goto L55
            goto L6f
        L55:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = "' exists but is read-only"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.<init>(r4)
            throw r3
        L6f:
            doCopyFile(r3, r4, r5)
            return
        L73:
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' and destination '"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = "' are the same"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r5.<init>(r3)
            throw r5
        L95:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
    }

    public static void copyInputStreamToFile(java.io.InputStream r0, java.io.File r1) throws java.io.IOException {
            copyToFile(r0, r1)     // Catch: java.lang.Throwable -> L7
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            return
        L7:
            r1 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r1
    }

    public static void copyToFile(java.io.InputStream r0, java.io.File r1) throws java.io.IOException {
            java.io.FileOutputStream r1 = openOutputStream(r1)
            com.qihoo360.replugin.utils.IOUtils.copy(r0, r1)     // Catch: java.lang.Throwable -> Le
            r1.close()     // Catch: java.lang.Throwable -> Le
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            return
        Le:
            r0 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            throw r0
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

    private static void doCopyFile(java.io.File r23, java.io.File r24, boolean r25) throws java.io.IOException {
            r0 = r23
            r1 = r24
            boolean r2 = r24.exists()
            if (r2 == 0) goto L2d
            boolean r2 = r24.isDirectory()
            if (r2 != 0) goto L11
            goto L2d
        L11:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Destination '"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = "' exists but is a directory"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        L2d:
            r2 = 3
            r3 = 2
            r4 = 1
            r5 = 0
            r6 = 4
            r7 = 0
            java.io.FileInputStream r8 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lc9
            r8.<init>(r0)     // Catch: java.lang.Throwable -> Lc9
            java.io.FileOutputStream r9 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lc6
            r9.<init>(r1)     // Catch: java.lang.Throwable -> Lc6
            java.nio.channels.FileChannel r16 = r8.getChannel()     // Catch: java.lang.Throwable -> Lc2
            java.nio.channels.FileChannel r7 = r9.getChannel()     // Catch: java.lang.Throwable -> Lc0
            long r17 = r16.size()     // Catch: java.lang.Throwable -> Lc0
            r19 = 0
            r21 = r19
        L4d:
            int r10 = (r21 > r17 ? 1 : (r21 == r17 ? 0 : -1))
            if (r10 >= 0) goto L6e
            long r10 = r17 - r21
            r12 = 31457280(0x1e00000, double:1.55419614E-316)
            int r14 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r14 <= 0) goto L5c
            r14 = r12
            goto L5d
        L5c:
            r14 = r10
        L5d:
            r10 = r7
            r11 = r16
            r12 = r21
            long r10 = r10.transferFrom(r11, r12, r14)     // Catch: java.lang.Throwable -> Lc0
            int r12 = (r10 > r19 ? 1 : (r10 == r19 ? 0 : -1))
            if (r12 != 0) goto L6b
            goto L6e
        L6b:
            long r21 = r21 + r10
            goto L4d
        L6e:
            java.io.Closeable[] r6 = new java.io.Closeable[r6]
            r6[r5] = r7
            r6[r4] = r9
            r6[r3] = r16
            r6[r2] = r8
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r6)
            long r2 = r23.length()
            long r4 = r24.length()
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L91
            if (r25 == 0) goto L90
            long r2 = r23.lastModified()
            r1.setLastModified(r2)
        L90:
            return
        L91:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Failed to copy full contents from '"
            r7.append(r8)
            r7.append(r0)
            java.lang.String r0 = "' to '"
            r7.append(r0)
            r7.append(r1)
            java.lang.String r0 = "' Expected length: "
            r7.append(r0)
            r7.append(r2)
            java.lang.String r0 = " Actual: "
            r7.append(r0)
            r7.append(r4)
            java.lang.String r0 = r7.toString()
            r6.<init>(r0)
            throw r6
        Lc0:
            r0 = move-exception
            goto Lce
        Lc2:
            r0 = move-exception
            r16 = r7
            goto Lce
        Lc6:
            r0 = move-exception
            r9 = r7
            goto Lcc
        Lc9:
            r0 = move-exception
            r8 = r7
            r9 = r8
        Lcc:
            r16 = r9
        Lce:
            java.io.Closeable[] r1 = new java.io.Closeable[r6]
            r1[r5] = r7
            r1[r4] = r9
            r1[r3] = r16
            r1[r2] = r8
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            throw r0
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

    public static void forceMkdir(java.io.File r2) throws java.io.IOException {
            boolean r0 = r2.exists()
            if (r0 == 0) goto L29
            boolean r0 = r2.isDirectory()
            if (r0 == 0) goto Ld
            goto L4d
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "File "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = " exists and is not a directory. Unable to create directory."
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
        L29:
            boolean r0 = r2.mkdirs()
            if (r0 != 0) goto L4d
            boolean r0 = r2.isDirectory()
            if (r0 == 0) goto L36
            goto L4d
        L36:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unable to create directory "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.io.IOException r0 = new java.io.IOException
            r0.<init>(r2)
            throw r0
        L4d:
            return
    }

    public static void forceMkdirParent(java.io.File r0) throws java.io.IOException {
            java.io.File r0 = r0.getParentFile()
            if (r0 != 0) goto L7
            return
        L7:
            forceMkdir(r0)
            return
    }

    public static java.lang.String getFileExt(java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return r4
        L7:
            java.lang.String r0 = "."
            int r0 = r4.lastIndexOf(r0)
            java.lang.String r1 = java.io.File.separator
            int r1 = r4.lastIndexOf(r1)
            r2 = -1
            java.lang.String r3 = ""
            if (r0 != r2) goto L19
            return r3
        L19:
            if (r1 < r0) goto L1c
            goto L22
        L1c:
            int r0 = r0 + 1
            java.lang.String r3 = r4.substring(r0)
        L22:
            return r3
    }

    public static java.lang.String getFileNameWithoutExt(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return r3
        L7:
            java.lang.String r0 = "."
            int r0 = r3.lastIndexOf(r0)
            java.lang.String r1 = java.io.File.separator
            int r1 = r3.lastIndexOf(r1)
            r2 = -1
            if (r1 != r2) goto L1f
            if (r0 != r2) goto L19
            goto L1e
        L19:
            r1 = 0
            java.lang.String r3 = r3.substring(r1, r0)
        L1e:
            return r3
        L1f:
            if (r0 != r2) goto L28
            int r1 = r1 + 1
            java.lang.String r3 = r3.substring(r1)
            return r3
        L28:
            if (r1 >= r0) goto L31
            int r1 = r1 + 1
            java.lang.String r3 = r3.substring(r1, r0)
            goto L37
        L31:
            int r1 = r1 + 1
            java.lang.String r3 = r3.substring(r1)
        L37:
            return r3
    }

    public static void moveFile(java.io.File r3, java.io.File r4) throws java.io.IOException {
            if (r3 == 0) goto Lc6
            if (r4 == 0) goto Lbe
            boolean r0 = r3.exists()
            java.lang.String r1 = "Source '"
            if (r0 == 0) goto La4
            boolean r0 = r3.isDirectory()
            java.lang.String r2 = "' is a directory"
            if (r0 != 0) goto L8c
            boolean r0 = r4.exists()
            java.lang.String r1 = "Destination '"
            if (r0 != 0) goto L72
            boolean r0 = r4.isDirectory()
            if (r0 != 0) goto L5a
            boolean r0 = r3.renameTo(r4)
            if (r0 != 0) goto L59
            copyFile(r3, r4)
            boolean r0 = r3.delete()
            if (r0 == 0) goto L32
            goto L59
        L32:
            deleteQuietly(r4)
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to delete original file '"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = "' after copy to '"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = "'"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L59:
            return
        L5a:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            r0.append(r2)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L72:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "' already exists"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L8c:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r3)
            r0.append(r2)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        La4:
            java.io.FileNotFoundException r4 = new java.io.FileNotFoundException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' does not exist"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        Lbe:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "Destination must not be null"
            r3.<init>(r4)
            throw r3
        Lc6:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "Source must not be null"
            r3.<init>(r4)
            throw r3
    }

    public static java.io.FileInputStream openInputStream(java.io.File r3) throws java.io.IOException {
            boolean r0 = r3.exists()
            java.lang.String r1 = "File '"
            if (r0 == 0) goto L4e
            boolean r0 = r3.isDirectory()
            if (r0 != 0) goto L34
            boolean r0 = r3.canRead()
            if (r0 == 0) goto L1a
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r3)
            return r0
        L1a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r3)
            java.lang.String r3 = "' cannot be read"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L34:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r3)
            java.lang.String r3 = "' exists but is a directory"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
        L4e:
            java.io.FileNotFoundException r0 = new java.io.FileNotFoundException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r3)
            java.lang.String r3 = "' does not exist"
            r2.append(r3)
            java.lang.String r3 = r2.toString()
            r0.<init>(r3)
            throw r0
    }

    public static java.io.InputStream openInputStreamFromAssetsQuietly(android.content.Context r1, java.lang.String r2) {
            android.content.res.AssetManager r1 = r1.getAssets()
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            java.io.InputStream r1 = r1.open(r2)     // Catch: java.io.IOException -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static java.io.FileOutputStream openOutputStream(java.io.File r1) throws java.io.IOException {
            r0 = 0
            java.io.FileOutputStream r1 = openOutputStream(r1, r0)
            return r1
    }

    public static java.io.FileOutputStream openOutputStream(java.io.File r2, boolean r3) throws java.io.IOException {
            boolean r0 = r2.exists()
            if (r0 == 0) goto L49
            boolean r0 = r2.isDirectory()
            java.lang.String r1 = "File '"
            if (r0 != 0) goto L2f
            boolean r0 = r2.canWrite()
            if (r0 == 0) goto L15
            goto L78
        L15:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "' cannot be written to"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L2f:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "' exists but is a directory"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L49:
            java.io.File r0 = r2.getParentFile()
            if (r0 == 0) goto L78
            boolean r1 = r0.mkdirs()
            if (r1 != 0) goto L78
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L5c
            goto L78
        L5c:
            java.io.IOException r2 = new java.io.IOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "Directory '"
            r3.append(r1)
            r3.append(r0)
            java.lang.String r0 = "' could not be created"
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L78:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r2, r3)
            return r0
    }

    public static java.lang.String readFileToString(java.io.File r0, java.nio.charset.Charset r1) throws java.io.IOException {
            java.io.FileInputStream r0 = openInputStream(r0)     // Catch: java.lang.Throwable -> L12
            java.nio.charset.Charset r1 = com.qihoo360.replugin.utils.Charsets.toCharset(r1)     // Catch: java.lang.Throwable -> L10
            java.lang.String r1 = com.qihoo360.replugin.utils.IOUtils.toString(r0, r1)     // Catch: java.lang.Throwable -> L10
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            return r1
        L10:
            r1 = move-exception
            goto L14
        L12:
            r1 = move-exception
            r0 = 0
        L14:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r1
    }

    public static long sizeOf(java.io.File r2) {
            boolean r0 = r2.exists()
            if (r0 == 0) goto L16
            boolean r0 = r2.isDirectory()
            if (r0 == 0) goto L11
            long r0 = sizeOfDirectory0(r2)
            return r0
        L11:
            long r0 = r2.length()
            return r0
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " does not exist"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r2)
            throw r0
    }

    private static long sizeOf0(java.io.File r2) {
            boolean r0 = r2.isDirectory()
            if (r0 == 0) goto Lb
            long r0 = sizeOfDirectory0(r2)
            return r0
        Lb:
            long r0 = r2.length()
            return r0
    }

    private static long sizeOfDirectory0(java.io.File r8) {
            java.io.File[] r8 = r8.listFiles()
            r0 = 0
            if (r8 != 0) goto L9
            return r0
        L9:
            int r2 = r8.length
            r3 = 0
            r4 = r0
        Lc:
            if (r3 >= r2) goto L1d
            r6 = r8[r3]
            long r6 = sizeOf0(r6)
            long r4 = r4 + r6
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 >= 0) goto L1a
            goto L1d
        L1a:
            int r3 = r3 + 1
            goto Lc
        L1d:
            return r4
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

    public static void writeStringToFile(java.io.File r1, java.lang.String r2, java.nio.charset.Charset r3) throws java.io.IOException {
            r0 = 0
            writeStringToFile(r1, r2, r3, r0)
            return
    }

    public static void writeStringToFile(java.io.File r0, java.lang.String r1, java.nio.charset.Charset r2, boolean r3) throws java.io.IOException {
            java.io.FileOutputStream r0 = openOutputStream(r0, r3)     // Catch: java.lang.Throwable -> L10
            com.qihoo360.replugin.utils.IOUtils.write(r1, r0, r2)     // Catch: java.lang.Throwable -> Le
            r0.close()     // Catch: java.lang.Throwable -> Le
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            return
        Le:
            r1 = move-exception
            goto L12
        L10:
            r1 = move-exception
            r0 = 0
        L12:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r1
    }
}
