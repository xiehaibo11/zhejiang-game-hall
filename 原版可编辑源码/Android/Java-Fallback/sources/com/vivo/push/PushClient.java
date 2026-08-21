package com.vivo.push;

public class PushClient {
    public static final java.lang.String DEFAULT_REQUEST_ID = "1";
    private static volatile com.vivo.push.PushClient sPushClient;

    private PushClient(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r2)
            return
    }

    private void checkParam(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "PushManager String param should not be "
            java.lang.String r3 = r1.concat(r3)
            r0.<init>(r3)
            throw r0
    }

    public static synchronized com.vivo.push.PushClient getInstance(android.content.Context r2) {
            java.lang.Class<com.vivo.push.PushClient> r0 = com.vivo.push.PushClient.class
            monitor-enter(r0)
            com.vivo.push.PushClient r1 = com.vivo.push.PushClient.sPushClient     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.vivo.push.PushClient r1 = new com.vivo.push.PushClient     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L16
            com.vivo.push.PushClient.sPushClient = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.sPushClient     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public void bindAlias(java.lang.String r2, com.vivo.push.IPushActionListener r3) {
            r1 = this;
            r1.checkParam(r2)
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r2, r3)
            return
    }

    public void checkManifest() {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.b()
            return
    }

    public void delTopic(java.lang.String r3, com.vivo.push.IPushActionListener r4) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r0.add(r3)
            com.vivo.push.e r3 = com.vivo.push.e.a()
            r3.b(r0, r4)
            return
    }

    public java.lang.String getAlias() {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            java.lang.String r0 = r0.j()
            return r0
    }

    public java.lang.String getRegId() {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            java.lang.String r0 = r0.f()
            return r0
    }

    public java.util.List<java.lang.String> getTopics() {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            java.util.List r0 = r0.c()
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "3.4.0.0"
            return r0
    }

    public void initialize() {
            r2 = this;
            r2.checkManifest()
            com.vivo.push.e r0 = com.vivo.push.e.a()
            com.vivo.push.b.f r1 = new com.vivo.push.b.f
            r1.<init>()
            r0.a(r1)
            return
    }

    public boolean isSupport() {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            boolean r0 = r0.d()
            return r0
    }

    public void setSystemModel(boolean r2) {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r2)
            return
    }

    public void setTopic(java.lang.String r3, com.vivo.push.IPushActionListener r4) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r0.add(r3)
            com.vivo.push.e r3 = com.vivo.push.e.a()
            r3.a(r0, r4)
            return
    }

    public void turnOffPush(com.vivo.push.IPushActionListener r2) {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.b(r2)
            return
    }

    public void turnOnPush(com.vivo.push.IPushActionListener r2) {
            r1 = this;
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.a(r2)
            return
    }

    public void unBindAlias(java.lang.String r2, com.vivo.push.IPushActionListener r3) {
            r1 = this;
            r1.checkParam(r2)
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.b(r2, r3)
            return
    }
}
