package org.cocos2dx.lib;

import android.content.Context;
import android.graphics.Typeface;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public class Cocos2dxTypefaces {
    private static final HashMap<String, Typeface> sTypefaceCache = new HashMap<>();

    public static synchronized Typeface get(Context context, String str) {
        Typeface typefaceCreateFromAsset;
        if (!sTypefaceCache.containsKey(str)) {
            if (str.startsWith("/")) {
                typefaceCreateFromAsset = Typeface.createFromFile(str);
            } else {
                typefaceCreateFromAsset = Typeface.createFromAsset(context.getAssets(), str);
            }
            sTypefaceCache.put(str, typefaceCreateFromAsset);
        }
        return sTypefaceCache.get(str);
    }
}
