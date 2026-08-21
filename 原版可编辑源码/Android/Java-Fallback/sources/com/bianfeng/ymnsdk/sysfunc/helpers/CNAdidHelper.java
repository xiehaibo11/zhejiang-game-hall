package com.bianfeng.ymnsdk.sysfunc.helpers;

public class CNAdidHelper {
    private java.lang.String TAG;
    private java.lang.String mPath;

    static class 1 {
    }

    private static class Inner {
        private static final com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper instance = null;

        static {
                com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper r0 = new com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper
                r1 = 0
                r0.<init>(r1)
                com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper.Inner.instance = r0
                return
        }

        private Inner() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper access$000() {
                com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper r0 = com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper.Inner.instance
                return r0
        }
    }

    private CNAdidHelper() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "CNAdidHelper"
            r1.TAG = r0
            java.lang.String r0 = "/sdcard/Android/ZHVzY2Lk"
            r1.mPath = r0
            return
    }

    CNAdidHelper(com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper getInstance() {
            com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper r0 = com.bianfeng.ymnsdk.sysfunc.helpers.CNAdidHelper.Inner.access$000()
            return r0
    }

    public java.lang.String readCNAdid() {
            r7 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.mPath
            r0.<init>(r1)
            boolean r1 = r0.isDirectory()
            java.lang.String r2 = "The File doesn't not exist."
            java.lang.String r3 = "\n"
            java.lang.String r4 = ""
            if (r1 != 0) goto L57
            boolean r1 = r0.isFile()
            if (r1 != 0) goto L1a
            goto L57
        L1a:
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r1.<init>(r0)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r0.<init>(r1)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            java.io.BufferedReader r5 = new java.io.BufferedReader     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r5.<init>(r0)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
        L29:
            java.lang.String r0 = r5.readLine()     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            if (r0 == 0) goto L42
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r6.<init>()     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r6.append(r4)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r6.append(r0)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            r6.append(r3)     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            java.lang.String r4 = r6.toString()     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            goto L29
        L42:
            r1.close()     // Catch: java.io.IOException -> L46 java.io.FileNotFoundException -> L51
            goto L63
        L46:
            r0 = move-exception
            java.lang.String r1 = r7.TAG
            java.lang.String r0 = r0.getMessage()
            android.util.Log.e(r1, r0)
            goto L63
        L51:
            java.lang.String r0 = r7.TAG
            android.util.Log.e(r0, r2)
            goto L63
        L57:
            java.lang.String r0 = r7.TAG
            android.util.Log.e(r0, r2)
            java.lang.String r0 = "/sdcard/Android/Data/System/local/.ZHVzY2Lk"
            r7.mPath = r0
            r7.readCNAdid()
        L63:
            java.lang.String r0 = r7.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "本地文件读取 公共 mCNADID=="
            r1.append(r2)
            java.lang.String[] r2 = r4.split(r3)
            r5 = 0
            r2 = r2[r5]
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r0, r1)
            java.lang.String[] r0 = r4.split(r3)
            r0 = r0[r5]
            return r0
    }
}
