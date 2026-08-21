package com.vivo.push.util;

public class ContextDelegate {
    private static final java.lang.String TAG = "ContextDelegate";
    private static android.content.Context mContext;
    private static java.lang.reflect.Method mCreateCredentialProtectedStorageContext;
    private static java.lang.reflect.Method mCreateDeviceProtectedStorageContext;
    private static boolean mDelegateEnable;
    private static java.lang.Boolean mIsFbeProject;

    final class a {
        private static com.vivo.push.util.ContextDelegate a;

        static {
                com.vivo.push.util.ContextDelegate r0 = new com.vivo.push.util.ContextDelegate
                r0.<init>()
                com.vivo.push.util.ContextDelegate.a.a = r0
                return
        }

        static com.vivo.push.util.ContextDelegate a() {
                com.vivo.push.util.ContextDelegate r0 = com.vivo.push.util.ContextDelegate.a.a
                return r0
        }
    }

    static {
            return
    }

    public ContextDelegate() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.content.Context createCredentialProtectedStorageContext(android.content.Context r4) {
            java.lang.reflect.Method r0 = com.vivo.push.util.ContextDelegate.mCreateCredentialProtectedStorageContext     // Catch: java.lang.Exception -> L1c
            r1 = 0
            if (r0 != 0) goto L11
            java.lang.Class<android.content.Context> r0 = android.content.Context.class
            java.lang.String r2 = "createCredentialProtectedStorageContext"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1c
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L1c
            com.vivo.push.util.ContextDelegate.mCreateCredentialProtectedStorageContext = r0     // Catch: java.lang.Exception -> L1c
        L11:
            java.lang.reflect.Method r0 = com.vivo.push.util.ContextDelegate.mCreateCredentialProtectedStorageContext     // Catch: java.lang.Exception -> L1c
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c
            java.lang.Object r0 = r0.invoke(r4, r1)     // Catch: java.lang.Exception -> L1c
            android.content.Context r0 = (android.content.Context) r0     // Catch: java.lang.Exception -> L1c
            return r0
        L1c:
            r0 = move-exception
            r0.printStackTrace()
            return r4
    }

    private static android.content.Context createDeviceProtectedStorageContext(android.content.Context r4) {
            java.lang.reflect.Method r0 = com.vivo.push.util.ContextDelegate.mCreateDeviceProtectedStorageContext     // Catch: java.lang.Exception -> L1c
            r1 = 0
            if (r0 != 0) goto L11
            java.lang.Class<android.content.Context> r0 = android.content.Context.class
            java.lang.String r2 = "createDeviceProtectedStorageContext"
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1c
            java.lang.reflect.Method r0 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L1c
            com.vivo.push.util.ContextDelegate.mCreateDeviceProtectedStorageContext = r0     // Catch: java.lang.Exception -> L1c
        L11:
            java.lang.reflect.Method r0 = com.vivo.push.util.ContextDelegate.mCreateDeviceProtectedStorageContext     // Catch: java.lang.Exception -> L1c
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c
            java.lang.Object r0 = r0.invoke(r4, r1)     // Catch: java.lang.Exception -> L1c
            android.content.Context r0 = (android.content.Context) r0     // Catch: java.lang.Exception -> L1c
            return r0
        L1c:
            r0 = move-exception
            r0.printStackTrace()
            return r4
    }

    public static android.content.Context getContext(android.content.Context r1) {
            boolean r0 = isFBEProject()
            if (r0 == 0) goto L13
            if (r1 != 0) goto L9
            goto L13
        L9:
            android.content.Context r0 = com.vivo.push.util.ContextDelegate.mContext
            if (r0 == 0) goto Le
            return r0
        Le:
            setContext(r1)
            android.content.Context r1 = com.vivo.push.util.ContextDelegate.mContext
        L13:
            return r1
    }

    public static com.vivo.push.util.ContextDelegate getInstance() {
            com.vivo.push.util.ContextDelegate r0 = com.vivo.push.util.ContextDelegate.a.a()
            return r0
    }

    public static boolean isFBEProject() {
            java.lang.String r0 = "mIsFbeProject = "
            java.lang.String r1 = "ContextDelegate"
            java.lang.Boolean r2 = com.vivo.push.util.ContextDelegate.mIsFbeProject
            r3 = 0
            if (r2 != 0) goto L4c
            java.lang.String r2 = "ro.crypto.type"
            java.lang.String r4 = "unknow"
            java.lang.String r2 = com.vivo.push.util.j.a(r2, r4)     // Catch: java.lang.Exception -> L38
            java.lang.String r4 = "file"
            boolean r2 = r4.equals(r2)     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L1b
            r2 = 1
            goto L1c
        L1b:
            r2 = r3
        L1c:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Exception -> L38
            com.vivo.push.util.ContextDelegate.mIsFbeProject = r2     // Catch: java.lang.Exception -> L38
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L38
            r2.<init>(r0)     // Catch: java.lang.Exception -> L38
            java.lang.Boolean r4 = com.vivo.push.util.ContextDelegate.mIsFbeProject     // Catch: java.lang.Exception -> L38
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L38
            r2.append(r4)     // Catch: java.lang.Exception -> L38
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L38
            com.vivo.push.util.p.b(r1, r2)     // Catch: java.lang.Exception -> L38
            goto L4c
        L38:
            r2 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>(r0)
            java.lang.String r0 = r2.getMessage()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            com.vivo.push.util.p.a(r1, r0)
        L4c:
            java.lang.Boolean r0 = com.vivo.push.util.ContextDelegate.mIsFbeProject
            if (r0 != 0) goto L51
            return r3
        L51:
            boolean r0 = r0.booleanValue()
            return r0
    }

    private static void setAppContext() {
            android.content.Context r0 = com.vivo.push.util.ContextDelegate.mContext
            if (r0 != 0) goto L5
            return
        L5:
            setContext(r0)
            return
    }

    private static void setContext(android.content.Context r1) {
            boolean r0 = com.vivo.push.util.ContextDelegate.mDelegateEnable
            if (r0 != 0) goto Lb
            android.content.Context r1 = createCredentialProtectedStorageContext(r1)
        L8:
            com.vivo.push.util.ContextDelegate.mContext = r1
            return
        Lb:
            android.content.Context r1 = createDeviceProtectedStorageContext(r1)
            goto L8
    }

    public static void setEnable(boolean r0) {
            com.vivo.push.util.ContextDelegate.mDelegateEnable = r0
            setAppContext()
            return
    }
}
