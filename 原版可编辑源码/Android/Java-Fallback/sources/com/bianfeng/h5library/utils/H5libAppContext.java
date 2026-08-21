package com.bianfeng.h5library.utils;

public class H5libAppContext {
    public H5libAppContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getPkgName() {
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getPkgName()
            return r0
    }

    public static java.lang.String getSdkVersion() {
            java.lang.String r0 = "com.bianfeng.splitscreenlib.utils.YmnH5Version"
            java.lang.Class r1 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L26
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L26
            java.lang.reflect.Constructor r3 = r1.getConstructor(r3)     // Catch: java.lang.Exception -> L26
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L26
            java.lang.Object r2 = r3.newInstance(r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = "version"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r3)     // Catch: java.lang.Exception -> L26
            r3 = 1
            r1.setAccessible(r3)     // Catch: java.lang.Exception -> L26
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L26
            return r0
        L26:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "not find class="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ",Field= version"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    public static java.lang.String getVerName() {
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r0 = com.bianfeng.ymnsdk.utilslib.appinfo.AppContext.getInstance()
            java.lang.String r0 = r0.getVerName()
            return r0
    }
}
