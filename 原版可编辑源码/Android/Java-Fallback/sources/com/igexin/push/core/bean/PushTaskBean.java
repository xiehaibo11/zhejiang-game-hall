package com.igexin.push.core.bean;

public class PushTaskBean {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.util.List<com.igexin.push.core.bean.BaseAction> f;
    private byte[] g;
    private java.lang.String h;
    private int i;
    private int j;
    private java.lang.String k;
    private boolean l;
    private java.util.Map<java.lang.String, java.lang.String> m;
    private int n;
    private int o;

    public PushTaskBean() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.l = r0
            return
    }

    public java.lang.String getAction() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.util.List<com.igexin.push.core.bean.BaseAction> getActionChains() {
            r1 = this;
            java.util.List<com.igexin.push.core.bean.BaseAction> r0 = r1.f
            return r0
    }

    public java.lang.String getAppKey() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public java.lang.String getAppid() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public com.igexin.push.core.bean.BaseAction getBaseAction(java.lang.String r4) {
            r3 = this;
            java.util.List r0 = r3.getActionChains()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()
            com.igexin.push.core.bean.BaseAction r1 = (com.igexin.push.core.bean.BaseAction) r1
            java.lang.String r2 = r1.getActionId()
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L8
            return r1
        L1f:
            r4 = 0
            return r4
    }

    public java.util.Map<java.lang.String, java.lang.String> getConditionMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.m
            return r0
    }

    public int getCurrentActionid() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public int getExecuteTimes() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getMessageId() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String getMsgAddress() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public byte[] getMsgExtra() {
            r1 = this;
            byte[] r0 = r1.g
            return r0
    }

    public int getPerActionid() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public int getStatus() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public java.lang.String getTaskId() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public boolean isOfflineMessage() {
            r4 = this;
            java.lang.String r0 = r4.c     // Catch: java.lang.Throwable -> L20
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L20
            if (r0 != 0) goto L20
            java.lang.String r0 = r4.c     // Catch: java.lang.Throwable -> L20
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L20
            java.lang.String r1 = "OMP"
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L20
            int r3 = r0 + (-3)
            java.lang.String r0 = r2.substring(r3, r0)     // Catch: java.lang.Throwable -> L20
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L20
            r0 = 1
            return r0
        L20:
            r0 = 0
            return r0
    }

    public boolean isStop() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    public void parse(org.json.JSONObject r7) {
            r6 = this;
            java.lang.String r0 = "id"
            java.lang.String r0 = r7.getString(r0)
            java.lang.String r1 = "appid"
            java.lang.String r1 = r7.getString(r1)
            java.lang.String r2 = "messageid"
            java.lang.String r2 = r7.getString(r2)
            java.lang.String r3 = "taskid"
            java.lang.String r3 = r7.getString(r3)
            java.lang.String r4 = "appkey"
            boolean r5 = r7.has(r4)
            if (r5 == 0) goto L25
            java.lang.String r7 = r7.getString(r4)
            goto L26
        L25:
            r7 = 0
        L26:
            java.lang.String r4 = com.igexin.push.core.d.a
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L4a
            r6.setAppid(r1)
            r6.setMessageId(r2)
            r6.setTaskId(r3)
            r6.setId(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L41
            goto L43
        L41:
            java.lang.String r7 = com.igexin.push.core.d.b
        L43:
            r6.setAppKey(r7)
            r7 = 1
            r6.setCurrentActionid(r7)
        L4a:
            return
    }

    public void setAction(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setActionChains(java.util.List<com.igexin.push.core.bean.BaseAction> r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setAppKey(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setAppid(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setConditionMap(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setCurrentActionid(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setExecuteTimes(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setId(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setMessageId(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setMsgAddress(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setMsgExtra(byte[] r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setPerActionid(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setStatus(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setStop(boolean r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setTaskId(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }
}
