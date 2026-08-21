package com.bianfeng.privategetui;

public class ResourceHelper {
    public ResourceHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int getId(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            android.content.res.Resources r0 = r1.getResources()     // Catch: java.lang.Exception -> Ld
            java.lang.String r1 = r1.getPackageName()     // Catch: java.lang.Exception -> Ld
            int r1 = r0.getIdentifier(r2, r3, r1)     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
            return r1
    }

    public static void initResourceR(android.content.Context r1) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Class<com.pushsdk.R$string> r0 = com.pushsdk.R.string.class
            setIds(r1, r0)
            return
    }

    protected static void setArrayFields(android.content.Context r10, java.lang.Class<?> r11, java.util.Map<java.lang.Object, java.lang.Integer> r12) {
            java.lang.reflect.Field[] r10 = r11.getDeclaredFields()
            int r11 = r10.length
            r0 = 0
            r1 = r0
        L7:
            if (r1 >= r11) goto L66
            r2 = r10[r1]
            r3 = 1
            r2.setAccessible(r3)
            r4 = 0
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Exception -> L5f
            boolean r4 = r2 instanceof int[]     // Catch: java.lang.Exception -> L5f
            if (r4 == 0) goto L63
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L5f
            int[] r2 = (int[]) r2     // Catch: java.lang.Exception -> L5f
            r4 = r0
        L1d:
            int r5 = r2.length     // Catch: java.lang.Exception -> L5f
            if (r4 >= r5) goto L63
            r5 = r2[r4]     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            boolean r6 = r12.containsKey(r6)     // Catch: java.lang.Exception -> L5f
            if (r6 == 0) goto L5c
            java.lang.Integer r6 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            java.lang.Object r6 = r12.get(r6)     // Catch: java.lang.Exception -> L5f
            java.lang.reflect.Array.set(r2, r4, r6)     // Catch: java.lang.Exception -> L5f
            java.io.PrintStream r6 = java.lang.System.out     // Catch: java.lang.Exception -> L5f
            java.lang.String r7 = "setted attr array index %d: %d -> %d "
            r8 = 3
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L5f
            r8[r0] = r9     // Catch: java.lang.Exception -> L5f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            r8[r3] = r9     // Catch: java.lang.Exception -> L5f
            r9 = 2
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Exception -> L5f
            java.lang.Object r5 = r12.get(r5)     // Catch: java.lang.Exception -> L5f
            r8[r9] = r5     // Catch: java.lang.Exception -> L5f
            java.lang.String r5 = java.lang.String.format(r7, r8)     // Catch: java.lang.Exception -> L5f
            r6.println(r5)     // Catch: java.lang.Exception -> L5f
        L5c:
            int r4 = r4 + 1
            goto L1d
        L5f:
            r2 = move-exception
            r2.printStackTrace()
        L63:
            int r1 = r1 + 1
            goto L7
        L66:
            return
    }

    protected static void setIds(android.content.Context r1, java.lang.Class<?> r2) {
            r0 = 0
            setIds(r1, r2, r0)
            return
    }

    protected static void setIds(android.content.Context r8, java.lang.Class<?> r9, java.util.Map<java.lang.Object, java.lang.Integer> r10) {
            java.lang.reflect.Field[] r0 = r9.getDeclaredFields()
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L37
            r3 = r0[r2]
            r4 = 1
            r3.setAccessible(r4)
            java.lang.String r4 = r3.getName()     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = r9.getSimpleName()     // Catch: java.lang.Exception -> L30
            int r4 = getId(r8, r4, r5)     // Catch: java.lang.Exception -> L30
            r5 = 0
            if (r10 == 0) goto L28
            java.lang.Object r6 = r3.get(r5)     // Catch: java.lang.Exception -> L30
            java.lang.Integer r7 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L30
            r10.put(r6, r7)     // Catch: java.lang.Exception -> L30
        L28:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Exception -> L30
            r3.set(r5, r4)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r3 = move-exception
            r3.printStackTrace()
        L34:
            int r2 = r2 + 1
            goto L6
        L37:
            return
    }
}
