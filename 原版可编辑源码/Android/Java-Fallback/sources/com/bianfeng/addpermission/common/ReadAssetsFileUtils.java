package com.bianfeng.addpermission.common;

public class ReadAssetsFileUtils {
    private static volatile com.bianfeng.addpermission.common.ReadAssetsFileUtils fileUtils;
    private java.lang.String fileName;
    private boolean hasRead;
    private java.lang.StringBuilder sb;


    private ReadAssetsFileUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ymn_private_data"
            r1.fileName = r0
            r0 = 0
            r1.hasRead = r0
            return
    }

    public static com.bianfeng.addpermission.common.ReadAssetsFileUtils getInstance() {
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.fileUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.addpermission.common.ReadAssetsFileUtils> r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.class
            monitor-enter(r0)
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r1 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.fileUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r1 = new com.bianfeng.addpermission.common.ReadAssetsFileUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.addpermission.common.ReadAssetsFileUtils.fileUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.addpermission.common.ReadAssetsFileUtils r0 = com.bianfeng.addpermission.common.ReadAssetsFileUtils.fileUtils
            return r0
    }

    public void init(android.content.Context r6) {
            r5 = this;
            boolean r0 = r5.hasRead
            if (r0 != 0) goto Lbd
            r0 = 0
            android.content.res.AssetManager r6 = r6.getAssets()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L76
            java.lang.String r1 = r5.fileName     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L76
            java.io.InputStream r6 = r6.open(r1)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L76
            if (r6 != 0) goto L1c
            if (r6 == 0) goto L1b
            r6.close()     // Catch: java.io.IOException -> L17
            goto L1b
        L17:
            r6 = move-exception
            r6.printStackTrace()
        L1b:
            return
        L1c:
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6c
            java.io.InputStreamReader r2 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6c
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L67 java.lang.Exception -> L6c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r5.sb = r0     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
        L2d:
            java.lang.String r0 = r1.readLine()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            if (r0 == 0) goto L39
            java.lang.StringBuilder r2 = r5.sb     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r2.append(r0)     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            goto L2d
        L39:
            r0 = 1
            r5.hasRead = r0     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            java.lang.String r2 = "测试---------"
            r0.append(r2)     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            java.lang.StringBuilder r2 = r5.sb     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r0.append(r2)     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Exception -> L65 java.lang.Throwable -> La7
            r1.close()     // Catch: java.io.IOException -> L5a
            goto L5e
        L5a:
            r0 = move-exception
            r0.printStackTrace()
        L5e:
            if (r6 == 0) goto Lbd
            r6.close()     // Catch: java.io.IOException -> La2
            goto Lbd
        L65:
            r0 = move-exception
            goto L7a
        L67:
            r1 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
            goto La8
        L6c:
            r1 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
            goto L7a
        L71:
            r6 = move-exception
            r1 = r0
            r0 = r6
            r6 = r1
            goto La8
        L76:
            r6 = move-exception
            r1 = r0
            r0 = r6
            r6 = r1
        L7a:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La7
            r2.<init>()     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = "测试："
            r2.append(r3)     // Catch: java.lang.Throwable -> La7
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> La7
            r2.append(r0)     // Catch: java.lang.Throwable -> La7
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> La7
            com.bianfeng.ymnsdk.util.Logger.i(r0)     // Catch: java.lang.Throwable -> La7
            if (r1 == 0) goto L9c
            r1.close()     // Catch: java.io.IOException -> L98
            goto L9c
        L98:
            r0 = move-exception
            r0.printStackTrace()
        L9c:
            if (r6 == 0) goto Lbd
            r6.close()     // Catch: java.io.IOException -> La2
            goto Lbd
        La2:
            r6 = move-exception
            r6.printStackTrace()
            goto Lbd
        La7:
            r0 = move-exception
        La8:
            if (r1 == 0) goto Lb2
            r1.close()     // Catch: java.io.IOException -> Lae
            goto Lb2
        Lae:
            r1 = move-exception
            r1.printStackTrace()
        Lb2:
            if (r6 == 0) goto Lbc
            r6.close()     // Catch: java.io.IOException -> Lb8
            goto Lbc
        Lb8:
            r6 = move-exception
            r6.printStackTrace()
        Lbc:
            throw r0
        Lbd:
            return
    }

    public java.lang.String put(java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r4) {
            r3 = this;
            java.lang.StringBuilder r0 = r3.sb
            if (r0 == 0) goto L3b
            com.google.gson.Gson r0 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L22
            r0.<init>()     // Catch: java.lang.Exception -> L22
            java.lang.StringBuilder r1 = r3.sb     // Catch: java.lang.Exception -> L22
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L22
            com.bianfeng.addpermission.common.ReadAssetsFileUtils$1 r2 = new com.bianfeng.addpermission.common.ReadAssetsFileUtils$1     // Catch: java.lang.Exception -> L22
            r2.<init>(r3)     // Catch: java.lang.Exception -> L22
            java.lang.reflect.Type r2 = r2.getType()     // Catch: java.lang.Exception -> L22
            java.lang.Object r0 = r0.fromJson(r1, r2)     // Catch: java.lang.Exception -> L22
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Exception -> L22
            r4.addAll(r0)     // Catch: java.lang.Exception -> L22
            goto L3b
        L22:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "测试-----put----"
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
        L3b:
            java.lang.String r4 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r4)
            return r4
    }
}
