package com.bianfeng.addpermission.common;

import com.bianfeng.addpermission.ui.PermissionBean;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class ReadAssetsFileUtils {
    private static volatile ReadAssetsFileUtils fileUtils;
    private String fileName = "ymn_private_data";
    private boolean hasRead = false;
    private StringBuilder sb;

    private ReadAssetsFileUtils() {
    }

    public static ReadAssetsFileUtils getInstance() {
        if (fileUtils == null) {
            synchronized (ReadAssetsFileUtils.class) {
                if (fileUtils == null) {
                    fileUtils = new ReadAssetsFileUtils();
                }
            }
        }
        return fileUtils;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(6:(4:77|13|72|14)|(4:15|(1:17)(1:79)|69|59)|18|60|19|(3:24|69|59)(1:85)) */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x005a, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x005b, code lost:
    
        r0.printStackTrace();
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v0, types: [android.content.Context] */
    /* JADX WARN: Type inference failed for: r6v10, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r6v3 */
    /* JADX WARN: Type inference failed for: r6v5 */
    /* JADX WARN: Type inference failed for: r6v6, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r6v8, types: [java.io.InputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void init(android.content.Context r6) throws java.lang.Throwable {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.addpermission.common.ReadAssetsFileUtils.init(android.content.Context):void");
    }

    public String put(List<PermissionBean> list) {
        if (this.sb != null) {
            try {
                list.addAll((List) new Gson().fromJson(this.sb.toString(), new TypeToken<List<PermissionBean>>() { // from class: com.bianfeng.addpermission.common.ReadAssetsFileUtils.1
                }.getType()));
            } catch (Exception e) {
                Logger.i("测试-----put----" + e.getMessage());
            }
        }
        return YmnGsonUtil.toJson(list);
    }
}
