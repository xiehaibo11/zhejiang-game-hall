package com.bianfeng.privategetui;

import android.content.Context;
import com.pushsdk.R;
import java.lang.reflect.Array;
import java.lang.reflect.Field;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class ResourceHelper {
    public static void initResourceR(Context context) {
        new HashMap();
        setIds(context, R.string.class);
    }

    protected static void setIds(Context context, Class<?> cls) {
        setIds(context, cls, null);
    }

    protected static void setIds(Context context, Class<?> cls, Map<Object, Integer> map) {
        for (Field field : cls.getDeclaredFields()) {
            field.setAccessible(true);
            try {
                int id = getId(context, field.getName(), cls.getSimpleName());
                if (map != null) {
                    map.put(field.get(null), Integer.valueOf(id));
                }
                field.set(null, Integer.valueOf(id));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static int getId(Context context, String str, String str2) {
        try {
            return context.getResources().getIdentifier(str, str2, context.getPackageName());
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    protected static void setArrayFields(Context context, Class<?> cls, Map<Object, Integer> map) {
        for (Field field : cls.getDeclaredFields()) {
            field.setAccessible(true);
            try {
                Object obj = field.get(null);
                if (obj instanceof int[]) {
                    int[] iArr = (int[]) obj;
                    for (int i = 0; i < iArr.length; i++) {
                        int i2 = iArr[i];
                        if (map.containsKey(Integer.valueOf(i2))) {
                            Array.set(iArr, i, map.get(Integer.valueOf(i2)));
                            System.out.println(String.format("setted attr array index %d: %d -> %d ", Integer.valueOf(i), Integer.valueOf(i2), map.get(Integer.valueOf(i2))));
                        }
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
