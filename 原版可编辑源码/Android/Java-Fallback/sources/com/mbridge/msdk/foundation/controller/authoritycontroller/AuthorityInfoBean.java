package com.mbridge.msdk.foundation.controller.authoritycontroller;

public class AuthorityInfoBean {
    public AuthorityInfoBean() {
            r0 = this;
            r0.<init>()
            return
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean a(int r4) {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_general_data"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_device_id"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_applist"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_app_download"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_serial_id"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "authority_imsi_id"
            r0.a(r2, r1)
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "authority_oaid_id"
            r0.a(r1, r4)
            return r3
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean b(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_general_data"
            r0.a(r1, r3)
            return r2
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean c(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_device_id"
            r0.a(r1, r3)
            return r2
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean d(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_serial_id"
            r0.a(r1, r3)
            return r2
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean e(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_oaid_id"
            r0.a(r1, r3)
            return r2
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean f(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_applist"
            r0.a(r1, r3)
            return r2
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean g(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_app_download"
            r0.a(r1, r3)
            return r2
    }

    public int getAuthAppDownloadStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_app_download"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthAppListStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_applist"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthDeviceIdStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_device_id"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthGenDataStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_general_data"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthImsiIdStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_imsi_id"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthOaidStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_oaid_id"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    public int getAuthSerialIdStatus() {
            r3 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r1 = "authority_serial_id"
            java.lang.String r0 = r0.b(r1)
            java.lang.String r2 = ""
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r0 = r0.b(r1)
            int r0 = java.lang.Integer.parseInt(r0)
            return r0
        L1f:
            r0 = 1
            return r0
    }

    protected final com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean h(int r3) {
            r2 = this;
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "authority_other"
            r0.a(r1, r3)
            return r2
    }
}
