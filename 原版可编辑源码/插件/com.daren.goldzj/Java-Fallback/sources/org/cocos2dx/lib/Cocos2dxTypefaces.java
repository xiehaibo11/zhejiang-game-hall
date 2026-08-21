package org.cocos2dx.lib;

import android.content.Context;
import android.graphics.Typeface;
import java.util.HashMap;

public class Cocos2dxTypefaces {
    private static final HashMap<String, Typeface> sTypefaceCache = null;

    public Cocos2dxTypefaces() {
    }

    static {
        sTypefaceCache = new HashMap();
    }

    public static synchronized Typeface get(Context r2, String r3) {
        monitor-enter(Cocos2dxTypefaces.class);
    L14:
        th = move-exception;
        throw th;
    L5:
        if (sTypefaceCache.containsKey(r3) == false) goto L7;
    L11:
        Typeface r22 = sTypefaceCache.get(r3);     // Catch: Throwable -> L14
        monitor-exit(Cocos2dxTypefaces.class);
        return r22;
    L7:
        if (r3.startsWith("/") == false) goto L9;
        Typeface r23 = Typeface.createFromFile(r3);     // Catch: Throwable -> L14
    L10:
        sTypefaceCache.put(r3, r23);     // Catch: Throwable -> L14
        goto L11
    L9:
        r23 = Typeface.createFromAsset(r2.getAssets(), r3);     // Catch: Throwable -> L14
        goto L10
    }
}
