package com.ymnsdk;

public class RePluginTestSdk {
    public RePluginTestSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void copyAssetsFileToAppFiles(android.app.Activity r4, java.lang.String r5, java.lang.String r6) {
            r0 = 0
            android.content.res.AssetManager r1 = r4.getAssets()     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L34
            java.io.InputStream r5 = r1.open(r5)     // Catch: java.lang.Throwable -> L31 java.lang.Exception -> L34
            r1 = 0
            java.io.FileOutputStream r0 = r4.openFileOutput(r6, r1)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
        L12:
            int r6 = r5.read(r4)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            r2 = -1
            if (r6 == r2) goto L1d
            r0.write(r4, r1, r6)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            goto L12
        L1d:
            r0.flush()     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2c
            r5.close()     // Catch: java.lang.Exception -> L40
            r0.close()     // Catch: java.lang.Exception -> L40
            goto L44
        L27:
            r4 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L46
        L2c:
            r4 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
            goto L36
        L31:
            r4 = move-exception
            r5 = r0
            goto L46
        L34:
            r4 = move-exception
            r5 = r0
        L36:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L45
            r0.close()     // Catch: java.lang.Exception -> L40
            r5.close()     // Catch: java.lang.Exception -> L40
            goto L44
        L40:
            r4 = move-exception
            r4.printStackTrace()
        L44:
            return
        L45:
            r4 = move-exception
        L46:
            r0.close()     // Catch: java.lang.Exception -> L4d
            r5.close()     // Catch: java.lang.Exception -> L4d
            goto L51
        L4d:
            r5 = move-exception
            r5.printStackTrace()
        L51:
            throw r4
    }

    public static void simulateInstallExternalPlugin(android.app.Activity r9) {
            java.lang.String r0 = "com.cocos.game.AppActivity"
            java.lang.String r1 = "hostActivity"
            java.lang.String r2 = "hostPackageName"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.io.File r4 = r9.getFilesDir()
            java.lang.String r4 = r4.getAbsolutePath()
            r3.append(r4)
            java.lang.String r4 = java.io.File.separator
            r3.append(r4)
            java.lang.String r4 = "plugin.apk"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.io.File r5 = new java.io.File
            r5.<init>(r3)
            boolean r6 = r5.exists()
            if (r6 == 0) goto L32
            com.qihoo360.replugin.utils.FileUtils.deleteQuietly(r5)
        L32:
            copyAssetsFileToAppFiles(r9, r4, r4)
            r4 = 0
            boolean r5 = r5.exists()
            if (r5 == 0) goto L41
            r4 = 0
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.replugin.RePlugin.install(r3, r4)
        L41:
            if (r4 == 0) goto Ld0
            com.qihoo360.replugin.RePlugin.preload(r4)
            java.lang.String r3 = "com.yxl.fish"
            java.lang.String r4 = "com.qihoo360.replugin.sample.demo1.MainActivity"
            android.content.Intent r4 = com.qihoo360.replugin.RePlugin.createIntent(r3, r4)
            r5 = 131072(0x20000, float:1.83671E-40)
            r4.addFlags(r5)
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = "uaalType"
            java.lang.String r7 = "shuangkou"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "deviceID"
            java.lang.String r7 = "7736DCD6-2609-45AD-80E0-E56F93F8899B"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "userID"
            java.lang.String r7 = "SAZr714208"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "numID"
            java.lang.String r7 = "112780554"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "areaID"
            r7 = 10
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "sessionID"
            java.lang.String r7 = "{779F8F94-5E54-734F-A1FA-376605CFFFE7}"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "paychannel"
            r7 = 10035(0x2733, float:1.4062E-41)
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "cpsID"
            r7 = 10013(0x271d, float:1.4031E-41)
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "thirdPay"
            java.lang.String r7 = "payForProduct"
            r5.put(r6, r7)     // Catch: java.lang.Exception -> La0
            java.lang.String r6 = "com.bf.TTShuangKou.mi"
            r5.put(r2, r6)     // Catch: java.lang.Exception -> La0
            r5.put(r1, r0)     // Catch: java.lang.Exception -> La0
            goto La4
        La0:
            r6 = move-exception
            r6.printStackTrace()
        La4:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = ""
            r6.append(r7)
            long r7 = java.lang.System.currentTimeMillis()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "data"
            r4.putExtra(r7, r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "unity"
            r4.putExtra(r6, r5)
            r4.putExtra(r2, r3)
            r4.putExtra(r1, r0)
            com.qihoo360.replugin.RePlugin.startActivity(r9, r4)
        Ld0:
            return
    }

    public static void testHostApk(android.app.Activity r0) {
            simulateInstallExternalPlugin(r0)
            return
    }
}
