package com.mbridge.msdk.foundation.download.utils;

public class UnzipUtility {
    private static final int BUFFER_SIZE = 4096;
    private static final java.lang.String TAG = "UnzipUtility";

    public UnzipUtility() {
            r0 = this;
            r0.<init>()
            return
    }

    private void extractFile(java.util.zip.ZipInputStream r4, java.lang.String r5) throws java.io.IOException {
            r3 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            java.io.File r5 = r0.getParentFile()
            boolean r5 = r5.exists()
            if (r5 != 0) goto L16
            java.io.File r5 = r0.getParentFile()
            r5.mkdirs()
        L16:
            r5 = 0
            java.io.BufferedOutputStream r1 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3b java.io.IOException -> L3d
            r5 = 4096(0x1000, float:5.74E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
        L25:
            int r0 = r4.read(r5)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
            r2 = -1
            if (r0 == r2) goto L31
            r2 = 0
            r1.write(r5, r2, r0)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
            goto L25
        L31:
            r1.close()
            return
        L35:
            r4 = move-exception
            r5 = r1
            goto L44
        L38:
            r4 = move-exception
            r5 = r1
            goto L3e
        L3b:
            r4 = move-exception
            goto L44
        L3d:
            r4 = move-exception
        L3e:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L3b
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L3b
            throw r0     // Catch: java.lang.Throwable -> L3b
        L44:
            if (r5 == 0) goto L49
            r5.close()
        L49:
            throw r4
    }

    public int unzip(java.lang.String r14, java.lang.String r15) throws java.io.IOException {
            r13 = this;
            java.lang.String r0 = "../"
            java.lang.String r1 = ".."
            java.lang.String r2 = "UnzipUtility"
            r3 = -1
            if (r14 == 0) goto L199
            if (r15 != 0) goto Ld
            goto L199
        Ld:
            java.lang.String r4 = "/"
            boolean r5 = r15.endsWith(r4)
            if (r5 != 0) goto L24
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r15)
            r5.append(r4)
            java.lang.String r15 = r5.toString()
        L24:
            java.io.File r4 = new java.io.File
            r4.<init>(r14)
            boolean r14 = r4.exists()
            if (r14 != 0) goto L31
            r14 = 1
            return r14
        L31:
            r14 = 0
            java.util.zip.ZipFile r5 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L154
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L154
            java.util.Enumeration r4 = r5.entries()     // Catch: java.lang.Throwable -> L151 java.io.IOException -> L154
            r6 = r14
        L3c:
            boolean r7 = r4.hasMoreElements()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r8 = 0
            if (r7 == 0) goto L12f
            java.lang.Object r7 = r4.nextElement()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            java.util.zip.ZipEntry r7 = (java.util.zip.ZipEntry) r7     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r9 = 2
            if (r7 != 0) goto L69
            if (r14 == 0) goto L5a
            r14.close()     // Catch: java.io.IOException -> L52
            goto L5a
        L52:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L5a:
            if (r6 == 0) goto L68
            r6.close()     // Catch: java.io.IOException -> L60
            goto L68
        L60:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L68:
            return r9
        L69:
            java.lang.String r10 = r7.getName()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            boolean r11 = android.text.TextUtils.isEmpty(r10)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r11 != 0) goto L112
            boolean r11 = r10.startsWith(r1)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r11 != 0) goto L112
            boolean r11 = r10.startsWith(r0)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r11 == 0) goto L81
            goto L112
        L81:
            java.io.File r11 = new java.io.File     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r12.<init>()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r12.append(r15)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r12.append(r10)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            java.lang.String r10 = r12.toString()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r11.<init>(r10)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            java.lang.String r10 = r11.getCanonicalPath()     // Catch: java.io.IOException -> L9a java.lang.Throwable -> L17b
            goto L9c
        L9a:
            java.lang.String r10 = ""
        L9c:
            boolean r12 = android.text.TextUtils.isEmpty(r10)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r12 != 0) goto Lf5
            boolean r12 = r10.startsWith(r15)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r12 == 0) goto Lf5
            boolean r12 = r10.startsWith(r1)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r12 != 0) goto Lf5
            boolean r10 = r10.startsWith(r0)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r10 == 0) goto Lb5
            goto Lf5
        Lb5:
            boolean r9 = r7.isDirectory()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r9 == 0) goto Lc0
            r11.mkdirs()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            goto L3c
        Lc0:
            java.io.File r9 = r11.getParentFile()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            boolean r9 = r9.exists()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r9 != 0) goto Ld1
            java.io.File r9 = r11.getParentFile()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r9.mkdirs()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
        Ld1:
            java.io.FileOutputStream r9 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            r9.<init>(r11)     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            java.io.InputStream r14 = r5.getInputStream(r7)     // Catch: java.lang.Throwable -> Lee java.io.IOException -> Lf2
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r7 = new byte[r6]     // Catch: java.lang.Throwable -> Lee java.io.IOException -> Lf2
        Lde:
            int r10 = r14.read(r7, r8, r6)     // Catch: java.lang.Throwable -> Lee java.io.IOException -> Lf2
            if (r10 == r3) goto Leb
            r9.write(r7, r8, r10)     // Catch: java.lang.Throwable -> Lee java.io.IOException -> Lf2
            r9.flush()     // Catch: java.lang.Throwable -> Lee java.io.IOException -> Lf2
            goto Lde
        Leb:
            r6 = r9
            goto L3c
        Lee:
            r15 = move-exception
            r6 = r9
            goto L17c
        Lf2:
            r15 = move-exception
            r6 = r9
            goto L156
        Lf5:
            if (r14 == 0) goto L103
            r14.close()     // Catch: java.io.IOException -> Lfb
            goto L103
        Lfb:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L103:
            if (r6 == 0) goto L111
            r6.close()     // Catch: java.io.IOException -> L109
            goto L111
        L109:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L111:
            return r9
        L112:
            if (r14 == 0) goto L120
            r14.close()     // Catch: java.io.IOException -> L118
            goto L120
        L118:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L120:
            if (r6 == 0) goto L12e
            r6.close()     // Catch: java.io.IOException -> L126
            goto L12e
        L126:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L12e:
            return r9
        L12f:
            r5.close()     // Catch: java.io.IOException -> L14f java.lang.Throwable -> L17b
            if (r14 == 0) goto L140
            r14.close()     // Catch: java.io.IOException -> L138
            goto L140
        L138:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L140:
            if (r6 == 0) goto L14e
            r6.close()     // Catch: java.io.IOException -> L146
            goto L14e
        L146:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L14e:
            return r8
        L14f:
            r15 = move-exception
            goto L156
        L151:
            r15 = move-exception
            r6 = r14
            goto L17c
        L154:
            r15 = move-exception
            r6 = r14
        L156:
            java.lang.String r15 = r15.getMessage()     // Catch: java.lang.Throwable -> L17b
            com.mbridge.msdk.foundation.tools.z.d(r2, r15)     // Catch: java.lang.Throwable -> L17b
            r15 = 3
            if (r14 == 0) goto L16c
            r14.close()     // Catch: java.io.IOException -> L164
            goto L16c
        L164:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L16c:
            if (r6 == 0) goto L17a
            r6.close()     // Catch: java.io.IOException -> L172
            goto L17a
        L172:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L17a:
            return r15
        L17b:
            r15 = move-exception
        L17c:
            if (r14 == 0) goto L18a
            r14.close()     // Catch: java.io.IOException -> L182
            goto L18a
        L182:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L18a:
            if (r6 == 0) goto L198
            r6.close()     // Catch: java.io.IOException -> L190
            goto L198
        L190:
            r14 = move-exception
            java.lang.String r14 = r14.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r14)
        L198:
            throw r15
        L199:
            return r3
    }
}
