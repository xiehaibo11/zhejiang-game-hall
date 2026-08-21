package org.cocos2dx.lib;

public class GameControllerUtils {
    public GameControllerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void ensureDirectoryExist(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Le
            r0.mkdirs()
        Le:
            return
    }

    public static java.lang.String readJsonFile(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            r1 = 0
            if (r3 != 0) goto Ld
            return r1
        Ld:
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L26
            r3.<init>(r0)     // Catch: java.lang.Exception -> L26
            int r0 = r3.available()     // Catch: java.lang.Exception -> L26
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L26
            r3.read(r0)     // Catch: java.lang.Exception -> L26
            r3.close()     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "UTF-8"
            r3.<init>(r0, r2)     // Catch: java.lang.Exception -> L26
            return r3
        L26:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }
}
