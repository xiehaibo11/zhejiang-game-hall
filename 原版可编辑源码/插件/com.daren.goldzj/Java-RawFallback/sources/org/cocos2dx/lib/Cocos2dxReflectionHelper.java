package org.cocos2dx.lib;

public class Cocos2dxReflectionHelper {
    public Cocos2dxReflectionHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T getConstantValue(java.lang.Class r4, java.lang.String r5) {
            java.lang.String r0 = "error"
            r1 = 0
            java.lang.reflect.Field r2 = r4.getDeclaredField(r5)     // Catch: java.lang.Exception -> Lc java.lang.IllegalArgumentException -> L21 java.lang.IllegalAccessException -> L36 java.lang.NoSuchFieldException -> L4b
            java.lang.Object r4 = r2.get(r1)     // Catch: java.lang.Exception -> Lc java.lang.IllegalArgumentException -> L21 java.lang.IllegalAccessException -> L36 java.lang.NoSuchFieldException -> L4b
            return r4
        Lc:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "can not get constant"
            r4.append(r2)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r0, r4)
            goto L6b
        L21:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "arguments error when get "
            r4.append(r2)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r0, r4)
            goto L6b
        L36:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            java.lang.String r5 = " is not accessable"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r0, r4)
            goto L6b
        L4b:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "can not find "
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = " in "
            r2.append(r5)
            java.lang.String r4 = r4.getName()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            android.util.Log.e(r0, r4)
        L6b:
            return r1
    }

    public static <T> T invokeInstanceMethod(java.lang.Object r2, java.lang.String r3, java.lang.Class[] r4, java.lang.Object[] r5) {
            java.lang.String r0 = "error"
            java.lang.Class r1 = r2.getClass()
            java.lang.reflect.Method r4 = r1.getMethod(r3, r4)     // Catch: java.lang.reflect.InvocationTargetException -> Lf java.lang.IllegalArgumentException -> L24 java.lang.IllegalAccessException -> L39 java.lang.NoSuchMethodException -> L4e
            java.lang.Object r2 = r4.invoke(r2, r5)     // Catch: java.lang.reflect.InvocationTargetException -> Lf java.lang.IllegalArgumentException -> L24 java.lang.IllegalAccessException -> L39 java.lang.NoSuchMethodException -> L4e
            return r2
        Lf:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "an exception was thrown by the invoked method when invoking "
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2)
            goto L6e
        L24:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "arguments are error when invoking "
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2)
            goto L6e
        L39:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = " is not accessible"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2)
            goto L6e
        L4e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "can not find "
            r2.append(r4)
            r2.append(r3)
            java.lang.String r3 = " in "
            r2.append(r3)
            java.lang.String r3 = r1.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2)
        L6e:
            r2 = 0
            return r2
    }
}
