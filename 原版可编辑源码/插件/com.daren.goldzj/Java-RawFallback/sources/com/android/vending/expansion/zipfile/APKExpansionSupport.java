package com.android.vending.expansion.zipfile;

public class APKExpansionSupport {
    private static final java.lang.String EXP_PATH = "/Android/obb/";

    public APKExpansionSupport() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String[] getAPKExpansionFiles(android.content.Context r6, int r7, int r8) {
            java.lang.String r6 = r6.getPackageName()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.lang.String r1 = android.os.Environment.getExternalStorageState()
            java.lang.String r2 = "mounted"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto La4
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = r1.toString()
            r3.append(r1)
            java.lang.String r1 = "/Android/obb/"
            r3.append(r1)
            r3.append(r6)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            boolean r1 = r2.exists()
            if (r1 == 0) goto La4
            java.lang.String r1 = ".obb"
            java.lang.String r3 = "."
            if (r7 <= 0) goto L72
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r5 = java.io.File.separator
            r4.append(r5)
            java.lang.String r5 = "main."
            r4.append(r5)
            r4.append(r7)
            r4.append(r3)
            r4.append(r6)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            java.io.File r5 = new java.io.File
            r5.<init>(r4)
            boolean r5 = r5.isFile()
            if (r5 == 0) goto L72
            r0.add(r4)
        L72:
            if (r8 <= 0) goto La4
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r2)
            java.lang.String r2 = java.io.File.separator
            r8.append(r2)
            java.lang.String r2 = "patch."
            r8.append(r2)
            r8.append(r7)
            r8.append(r3)
            r8.append(r6)
            r8.append(r1)
            java.lang.String r6 = r8.toString()
            java.io.File r7 = new java.io.File
            r7.<init>(r6)
            boolean r7 = r7.isFile()
            if (r7 == 0) goto La4
            r0.add(r6)
        La4:
            int r6 = r0.size()
            java.lang.String[] r6 = new java.lang.String[r6]
            r0.toArray(r6)
            return r6
    }

    public static com.android.vending.expansion.zipfile.ZipResourceFile getAPKExpansionZipFile(android.content.Context r0, int r1, int r2) throws java.io.IOException {
            java.lang.String[] r0 = getAPKExpansionFiles(r0, r1, r2)
            com.android.vending.expansion.zipfile.ZipResourceFile r0 = getResourceZipFile(r0)
            return r0
    }

    public static com.android.vending.expansion.zipfile.ZipResourceFile getResourceZipFile(java.lang.String[] r4) throws java.io.IOException {
            int r0 = r4.length
            r1 = 0
            r2 = 0
        L3:
            if (r2 >= r0) goto L15
            r3 = r4[r2]
            if (r1 != 0) goto Lf
            com.android.vending.expansion.zipfile.ZipResourceFile r1 = new com.android.vending.expansion.zipfile.ZipResourceFile
            r1.<init>(r3)
            goto L12
        Lf:
            r1.addPatchFile(r3)
        L12:
            int r2 = r2 + 1
            goto L3
        L15:
            return r1
    }
}
