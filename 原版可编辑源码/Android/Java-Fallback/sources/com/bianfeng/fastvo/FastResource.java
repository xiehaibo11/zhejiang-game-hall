package com.bianfeng.fastvo;

public class FastResource {
    private static android.content.Context context;

    private FastResource() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean createNewFile(java.lang.String r1) {
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> La
            r0.<init>(r1)     // Catch: java.io.IOException -> La
            boolean r1 = r0.createNewFile()     // Catch: java.io.IOException -> La
            return r1
        La:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static java.lang.String defaultDataDir(android.content.Context r1) {
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.FileUtils.getSDCardPrivateCacheDir()
            r1.append(r0)
            java.lang.String r0 = "/bftj/data/"
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            return r1
    }

    public static android.content.Context getApplication() {
            android.content.Context r0 = com.bianfeng.fastvo.FastResource.context
            return r0
    }

    public static java.lang.String mkDataFile(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = com.bianfeng.fastvo.FastResource.context
            java.lang.String r1 = defaultDataDir(r1)
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void regist(android.content.Context r0) {
            com.bianfeng.fastvo.FastResource.context = r0
            java.lang.String r0 = defaultDataDir(r0)
            com.bianfeng.fastvo.util.FileUtil.mkFileDirs(r0)
            return
    }
}
