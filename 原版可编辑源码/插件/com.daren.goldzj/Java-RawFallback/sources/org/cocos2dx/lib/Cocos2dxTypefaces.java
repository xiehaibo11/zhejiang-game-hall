package org.cocos2dx.lib;

public class Cocos2dxTypefaces {
    private static final java.util.HashMap<java.lang.String, android.graphics.Typeface> sTypefaceCache = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.cocos2dx.lib.Cocos2dxTypefaces.sTypefaceCache = r0
            return
    }

    public Cocos2dxTypefaces() {
            r0 = this;
            r0.<init>()
            return
    }

    public static synchronized android.graphics.Typeface get(android.content.Context r2, java.lang.String r3) {
            java.lang.Class<org.cocos2dx.lib.Cocos2dxTypefaces> r0 = org.cocos2dx.lib.Cocos2dxTypefaces.class
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r1 = org.cocos2dx.lib.Cocos2dxTypefaces.sTypefaceCache     // Catch: java.lang.Throwable -> L2f
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L2f
            if (r1 != 0) goto L25
            java.lang.String r1 = "/"
            boolean r1 = r3.startsWith(r1)     // Catch: java.lang.Throwable -> L2f
            if (r1 == 0) goto L18
            android.graphics.Typeface r2 = android.graphics.Typeface.createFromFile(r3)     // Catch: java.lang.Throwable -> L2f
            goto L20
        L18:
            android.content.res.AssetManager r2 = r2.getAssets()     // Catch: java.lang.Throwable -> L2f
            android.graphics.Typeface r2 = android.graphics.Typeface.createFromAsset(r2, r3)     // Catch: java.lang.Throwable -> L2f
        L20:
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r1 = org.cocos2dx.lib.Cocos2dxTypefaces.sTypefaceCache     // Catch: java.lang.Throwable -> L2f
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L2f
        L25:
            java.util.HashMap<java.lang.String, android.graphics.Typeface> r2 = org.cocos2dx.lib.Cocos2dxTypefaces.sTypefaceCache     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L2f
            android.graphics.Typeface r2 = (android.graphics.Typeface) r2     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r0)
            return r2
        L2f:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }
}
