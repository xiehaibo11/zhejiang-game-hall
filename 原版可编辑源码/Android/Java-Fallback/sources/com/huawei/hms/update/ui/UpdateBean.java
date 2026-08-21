package com.huawei.hms.update.ui;

public class UpdateBean implements java.io.Serializable {
    public boolean a;
    public java.lang.String b;
    public int c;
    public java.lang.String d;
    public java.lang.String e;
    public java.util.ArrayList f;
    public boolean g;

    public UpdateBean() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.g = r0
            return
    }

    public static <T> T a(T r0) {
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.d
            java.lang.Object r0 = a(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            java.lang.Object r0 = a(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public int c() {
            r1 = this;
            int r0 = r1.c
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.Object r0 = a(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public boolean d() {
            r1 = this;
            boolean r0 = r1.a
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.Object r0 = a(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    public java.lang.String getClientAppName() {
            r1 = this;
            java.lang.String r0 = r1.e
            java.lang.Object r0 = a(r0)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.util.ArrayList getTypeList() {
            r1 = this;
            java.util.ArrayList r0 = r1.f
            java.lang.Object r0 = a(r0)
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            return r0
    }

    public boolean isNeedConfirm() {
            r1 = this;
            boolean r0 = r1.g
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.Object r0 = a(r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    public void setClientAppId(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setClientAppName(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setClientPackageName(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setClientVersionCode(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setHmsOrApkUpgrade(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setNeedConfirm(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setTypeList(java.util.ArrayList r1) {
            r0 = this;
            r0.f = r1
            return
    }
}
