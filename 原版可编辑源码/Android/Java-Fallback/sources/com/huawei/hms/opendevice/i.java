package com.huawei.hms.opendevice;

public class i extends com.huawei.hms.aaid.utils.PushPreferences {
    public static final java.lang.String TAG = "i";
    public android.content.Context b;

    public i(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "push_client_self_info"
            r1.<init>(r2, r0)
            r1.b = r2
            return
    }

    public static com.huawei.hms.opendevice.i a(android.content.Context r1) {
            com.huawei.hms.opendevice.i r0 = new com.huawei.hms.opendevice.i
            r0.<init>(r1)
            return r0
    }

    public java.lang.String a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            android.content.Context r0 = r4.b     // Catch: java.lang.Exception -> L14
            java.lang.String r5 = r4.getString(r5)     // Catch: java.lang.Exception -> L14
            java.lang.String r5 = com.huawei.hms.aaid.encrypt.PushEncrypter.decrypter(r0, r5)     // Catch: java.lang.Exception -> L14
            return r5
        L14:
            r5 = move-exception
            java.lang.String r0 = com.huawei.hms.opendevice.i.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getSecureData"
            r2.append(r3)
            java.lang.String r5 = r5.getMessage()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r5)
            return r1
    }

    public void a() {
            r3 = this;
            java.util.Map r0 = r3.getAll()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L3f
            java.util.Set r1 = r0.keySet()
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L15
            goto L3f
        L15:
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "push_kit_auto_init_enabled"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L32
            goto L1d
        L32:
            java.lang.String r2 = "_proxy_init"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L3b
            goto L1d
        L3b:
            r3.removeKey(r1)
            goto L1d
        L3f:
            return
    }

    public boolean a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.content.Context r0 = r3.b     // Catch: java.lang.Exception -> L13
            java.lang.String r5 = com.huawei.hms.aaid.encrypt.PushEncrypter.encrypter(r0, r5)     // Catch: java.lang.Exception -> L13
            boolean r4 = r3.saveString(r4, r5)     // Catch: java.lang.Exception -> L13
            return r4
        L13:
            r4 = move-exception
            java.lang.String r5 = com.huawei.hms.opendevice.i.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "saveSecureData"
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r5, r4)
            return r1
    }

    public java.lang.String b(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto Ld
            java.lang.String r4 = "token_info_v2"
            java.lang.String r4 = r3.a(r4)     // Catch: java.lang.Exception -> L12
            return r4
        Ld:
            java.lang.String r4 = r3.a(r4)     // Catch: java.lang.Exception -> L12
            return r4
        L12:
            r4 = move-exception
            java.lang.String r0 = com.huawei.hms.opendevice.i.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getSecureData"
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            java.lang.String r4 = ""
            return r4
    }

    public boolean b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto Ld
            java.lang.String r3 = "token_info_v2"
            boolean r3 = r2.a(r3, r4)     // Catch: java.lang.Exception -> L12
            return r3
        Ld:
            boolean r3 = r2.a(r3, r4)     // Catch: java.lang.Exception -> L12
            return r3
        L12:
            r3 = move-exception
            java.lang.String r4 = com.huawei.hms.opendevice.i.TAG
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "saveSecureData"
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.huawei.hms.support.log.HMSLog.e(r4, r3)
            r3 = 0
            return r3
    }

    public boolean c(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto Ld
            java.lang.String r4 = "token_info_v2"
            boolean r4 = r3.removeKey(r4)     // Catch: java.lang.Exception -> L12
            return r4
        Ld:
            boolean r4 = r3.removeKey(r4)     // Catch: java.lang.Exception -> L12
            return r4
        L12:
            r4 = move-exception
            java.lang.String r0 = com.huawei.hms.opendevice.i.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "removeToken"
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            r4 = 0
            return r4
    }
}
