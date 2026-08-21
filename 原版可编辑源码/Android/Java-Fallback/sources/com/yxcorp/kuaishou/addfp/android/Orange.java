package com.yxcorp.kuaishou.addfp.android;

public class Orange {
    private static final int JNI_CONTROL_COMMAND_DIR_DETECT = 1114128;
    private static final int JNI_CONTROL_COMMAND_GK_DETECT = 1114132;
    private static final int JNI_CONTROL_COMMAND_MANU_DETECT = 1114140;
    private static final int JNI_CONTROL_COMMAND_PROPS_DETECT = 1114131;
    private static final int JNI_CONTROL_COMMAND_SERIAL_DETECT = 1179649;
    private static boolean sLibLoadFail = true;
    private static final java.lang.String sdkVersion = "1.3.6.92.f75f436d";
    private static volatile com.yxcorp.kuaishou.addfp.android.Orange singleton;

    private Orange() {
            r0 = this;
            r0.<init>()
            r0.loadSoLib()
            return
    }

    public static java.lang.String gLs(int r0, java.lang.String r1) {
            java.lang.String r0 = com.yxcorp.kuaishou.addfp.c.a.a.a(r0, r1)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    private static native java.lang.String getClock(android.content.Context r0, byte[] r1, int r2);

    public static com.yxcorp.kuaishou.addfp.android.Orange getInstance() {
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.singleton
            if (r0 != 0) goto L17
            java.lang.Class<com.yxcorp.kuaishou.addfp.android.Orange> r0 = com.yxcorp.kuaishou.addfp.android.Orange.class
            monitor-enter(r0)
            com.yxcorp.kuaishou.addfp.android.Orange r1 = com.yxcorp.kuaishou.addfp.android.Orange.singleton     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.yxcorp.kuaishou.addfp.android.Orange r1 = new com.yxcorp.kuaishou.addfp.android.Orange     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.yxcorp.kuaishou.addfp.android.Orange.singleton = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.yxcorp.kuaishou.addfp.android.Orange r0 = com.yxcorp.kuaishou.addfp.android.Orange.singleton
            return r0
    }

    private static native byte[] getMagic(android.content.Context r0, byte[] r1, int r2);

    public static java.lang.String getVersion() {
            java.lang.String r0 = "1.3.6.92.f75f436d"
            return r0
    }

    private boolean isReject() {
            r1 = this;
            boolean r0 = com.yxcorp.kuaishou.addfp.android.Orange.sLibLoadFail
            return r0
    }

    private static native java.lang.Object jniCommand(int r0, java.lang.Object r1, java.lang.Object r2, java.lang.Object r3);

    private void loadSoLib() {
            r2 = this;
            java.lang.String r0 = "sgcore"
            java.lang.System.loadLibrary(r0)     // Catch: java.lang.Throwable -> L9
            r0 = 0
            com.yxcorp.kuaishou.addfp.android.Orange.sLibLoadFail = r0     // Catch: java.lang.Throwable -> L9
            return
        L9:
            r0 = move-exception
            r1 = 1
            com.yxcorp.kuaishou.addfp.android.Orange.sLibLoadFail = r1
            r0.printStackTrace()
            return
    }

    public byte[] dcc(byte[] r1, byte[] r2) {
            r0 = this;
            r1 = 0
            boolean r2 = r0.isReject()     // Catch: java.lang.Throwable -> L6
            return r1
        L6:
            r2 = move-exception
            r2.printStackTrace()
            return r1
    }

    public java.lang.String gKpsd() {
            r3 = this;
            java.lang.String r0 = ""
            boolean r1 = r3.isReject()     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            return r0
        L9:
            r1 = 1114132(0x110014, float:1.561231E-39)
            r2 = 0
            java.lang.Object r1 = jniCommand(r1, r2, r2, r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public java.lang.String gManu(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = ""
            boolean r1 = r3.isReject()     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L19
            if (r4 == 0) goto L19
            r1 = 1114140(0x11001c, float:1.561243E-39)
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            java.lang.Object r4 = jniCommand(r1, r5, r4, r2)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L1a
            return r4
        L19:
            return r0
        L1a:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public java.lang.String gProps() {
            r3 = this;
            java.lang.String r0 = ""
            boolean r1 = r3.isReject()     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            return r0
        L9:
            r1 = 1114131(0x110013, float:1.56123E-39)
            r2 = 0
            java.lang.Object r1 = jniCommand(r1, r2, r2, r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public java.lang.String gRdi() {
            r3 = this;
            java.lang.String r0 = ""
            boolean r1 = r3.isReject()     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            return r0
        L9:
            r1 = 1114128(0x110010, float:1.561226E-39)
            r2 = 0
            java.lang.Object r1 = jniCommand(r1, r2, r2, r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public java.lang.String gSer() {
            r3 = this;
            java.lang.String r0 = ""
            boolean r1 = r3.isReject()     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            return r0
        L9:
            r1 = 1179649(0x120001, float:1.65304E-39)
            r2 = 0
            java.lang.Object r1 = jniCommand(r1, r2, r2, r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L14
            return r1
        L14:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public synchronized java.lang.String getClockWrapper(android.content.Context r2, byte[] r3, int r4) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isReject()     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto Lb
            java.lang.String r2 = ""
            monitor-exit(r1)
            return r2
        Lb:
            java.lang.String r2 = getClock(r2, r3, r4)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r2
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized byte[] getMagicWrapper(android.content.Context r2, byte[] r3, int r4) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isReject()     // Catch: java.lang.Throwable -> L10
            if (r0 == 0) goto La
            r2 = 0
            monitor-exit(r1)
            return r2
        La:
            byte[] r2 = getMagic(r2, r3, r4)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return r2
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
