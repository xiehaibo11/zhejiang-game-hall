package com.igexin.push.core.bean;

public class BaseAction {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private boolean d;

    public BaseAction() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.d = r0
            return
    }

    public java.lang.String getActionId() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String getDoActionId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getType() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public boolean isSupportExt() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public void setActionId(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setDoActionId(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setSupportExt(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setType(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
