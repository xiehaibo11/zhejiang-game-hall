package com.mbridge.msdk.out;

public class MBNativeAdvancedHandler {
    private com.mbridge.msdk.advanced.c.c nativeAdvancedProvider;

    static class 1 {
        static final int[] $SwitchMap$com$mbridge$msdk$out$MBMultiStateEnum = null;

        static {
                com.mbridge.msdk.out.MBMultiStateEnum[] r0 = com.mbridge.msdk.out.MBMultiStateEnum.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.out.MBNativeAdvancedHandler.1.$SwitchMap$com$mbridge$msdk$out$MBMultiStateEnum = r0
                com.mbridge.msdk.out.MBMultiStateEnum r1 = com.mbridge.msdk.out.MBMultiStateEnum.negative     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.out.MBNativeAdvancedHandler.1.$SwitchMap$com$mbridge$msdk$out$MBMultiStateEnum     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.out.MBMultiStateEnum r1 = com.mbridge.msdk.out.MBMultiStateEnum.positive     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.out.MBNativeAdvancedHandler.1.$SwitchMap$com$mbridge$msdk$out$MBMultiStateEnum     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.out.MBMultiStateEnum r1 = com.mbridge.msdk.out.MBMultiStateEnum.undefined     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public MBNativeAdvancedHandler(android.app.Activity r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.f(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10
            com.mbridge.msdk.foundation.tools.ae.a(r5, r0)
        L10:
            com.mbridge.msdk.advanced.c.c r0 = new com.mbridge.msdk.advanced.c.c
            r0.<init>(r4, r5, r3)
            r2.nativeAdvancedProvider = r0
            return
    }

    public void autoLoopPlay(int r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.c(r2)
        L7:
            return
    }

    public android.view.ViewGroup getAdViewGroup() {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L9
            com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup r0 = r0.b()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.d()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    public boolean isReady() {
            r1 = this;
            java.lang.String r0 = ""
            boolean r0 = r1.isReady(r0)
            return r0
    }

    public boolean isReady(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L9
            boolean r2 = r0.c(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public void load() {
            r2 = this;
            com.mbridge.msdk.advanced.c.c r0 = r2.nativeAdvancedProvider
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            r0.b(r1)
        L9:
            return
    }

    public void loadByToken(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void onPause() {
            r2 = this;
            com.mbridge.msdk.advanced.c.c r0 = r2.nativeAdvancedProvider
            if (r0 == 0) goto L8
            r1 = 3
            r0.e(r1)
        L8:
            return
    }

    public void onResume() {
            r2 = this;
            com.mbridge.msdk.advanced.c.c r0 = r2.nativeAdvancedProvider
            if (r0 == 0) goto L8
            r1 = 3
            r0.d(r1)
        L8:
            return
    }

    public void release() {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.e()
        L7:
            return
    }

    public void setAdListener(com.mbridge.msdk.out.NativeAdvancedAdListener r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void setCloseButtonState(com.mbridge.msdk.out.MBMultiStateEnum r4) {
            r3 = this;
            int[] r0 = com.mbridge.msdk.out.MBNativeAdvancedHandler.1.$SwitchMap$com$mbridge$msdk$out$MBMultiStateEnum
            int r4 = r4.ordinal()
            r4 = r0[r4]
            r0 = 1
            r1 = -1
            if (r4 == r0) goto L12
            r2 = 2
            if (r4 == r2) goto L13
            r0 = 3
            r0 = r1
            goto L13
        L12:
            r0 = 0
        L13:
            com.mbridge.msdk.advanced.c.c r4 = r3.nativeAdvancedProvider
            r4.a(r0)
            return
    }

    public void setNativeViewSize(int r2, int r3) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            r0.a(r3, r2)
            return
    }

    public void setPlayMuteState(int r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    public void setViewElementStyle(org.json.JSONObject r2) {
            r1 = this;
            com.mbridge.msdk.advanced.c.c r0 = r1.nativeAdvancedProvider
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }
}
