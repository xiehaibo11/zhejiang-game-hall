package com.bytedance.pangle.activity;

public class IntentUtils {
    static java.util.HashMap<java.lang.Long, java.lang.ref.WeakReference<android.os.Bundle>> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.activity.IntentUtils.a = r0
            return
    }

    public IntentUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Intent r4) {
            r0 = 0
            java.lang.String r2 = "pangle_use_memory"
            long r2 = r4.getLongExtra(r2, r0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L27
            java.util.HashMap<java.lang.Long, java.lang.ref.WeakReference<android.os.Bundle>> r0 = com.bytedance.pangle.activity.IntentUtils.a
            java.lang.Long r1 = java.lang.Long.valueOf(r2)
            java.lang.Object r0 = r0.remove(r1)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            if (r0 == 0) goto L21
            java.lang.Object r0 = r0.get()
            android.os.Bundle r0 = (android.os.Bundle) r0
            goto L22
        L21:
            r0 = 0
        L22:
            if (r0 == 0) goto L27
            r4.putExtras(r0)
        L27:
            return
    }

    public static void a(android.content.Intent r6, java.lang.String r7) {
            java.lang.String r0 = "pangle_use_memory"
            r1 = 0
            long r3 = r6.getLongExtra(r0, r1)
            com.bytedance.pangle.plugin.Plugin r7 = com.bytedance.pangle.Zeus.getPlugin(r7)
            boolean r7 = r7.mUseMemoryForActivityIntent
            if (r7 == 0) goto L18
            int r7 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r7 != 0) goto L18
            long r3 = java.lang.System.currentTimeMillis()
        L18:
            int r7 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r7 == 0) goto L35
            android.os.Bundle r7 = r6.getExtras()
            r1 = 0
            r6.replaceExtras(r1)
            java.util.HashMap<java.lang.Long, java.lang.ref.WeakReference<android.os.Bundle>> r1 = com.bytedance.pangle.activity.IntentUtils.a
            java.lang.Long r2 = java.lang.Long.valueOf(r3)
            java.lang.ref.WeakReference r5 = new java.lang.ref.WeakReference
            r5.<init>(r7)
            r1.put(r2, r5)
            r6.putExtra(r0, r3)
        L35:
            return
    }

    public static void setUseMemory(android.content.Intent r3) {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = "pangle_use_memory"
            r3.putExtra(r2, r0)
            return
    }
}
