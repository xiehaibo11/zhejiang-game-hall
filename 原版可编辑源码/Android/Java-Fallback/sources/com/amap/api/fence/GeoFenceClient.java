package com.amap.api.fence;

public class GeoFenceClient {
    public static final int GEOFENCE_IN = 1;
    public static final int GEOFENCE_OUT = 2;
    public static final int GEOFENCE_STAYED = 4;
    android.content.Context a;
    com.loc.a b;

    public GeoFenceClient(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            if (r3 == 0) goto L19
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L17
            r2.a = r3     // Catch: java.lang.Throwable -> L17
            com.loc.a r3 = a(r3)     // Catch: java.lang.Throwable -> L17
            r2.b = r3     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r3 = move-exception
            goto L21
        L19:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L17
            java.lang.String r0 = "Context参数不能为null"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L17
            throw r3     // Catch: java.lang.Throwable -> L17
        L21:
            java.lang.String r0 = "GeoFenceClient"
            java.lang.String r1 = "<init>"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    private static com.loc.a a(android.content.Context r1) {
            com.loc.a r0 = new com.loc.a
            r0.<init>(r1)
            return r0
    }

    public void addGeoFence(com.amap.api.location.DPoint r2, float r3, java.lang.String r4) {
            r1 = this;
            com.loc.a r0 = r1.b     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            java.lang.String r3 = "GeoFenceClient"
            java.lang.String r4 = "addGeoFence round"
            com.loc.fr.a(r2, r3, r4)
            return
    }

    public void addGeoFence(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.loc.a r0 = r1.b     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            java.lang.String r3 = "GeoFenceClient"
            java.lang.String r0 = "addGeoFence district"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    public void addGeoFence(java.lang.String r8, java.lang.String r9, com.amap.api.location.DPoint r10, float r11, int r12, java.lang.String r13) {
            r7 = this;
            com.loc.a r0 = r7.b     // Catch: java.lang.Throwable -> Lc
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r8 = move-exception
            java.lang.String r9 = "GeoFenceClient"
            java.lang.String r10 = "addGeoFence searche"
            com.loc.fr.a(r8, r9, r10)
            return
    }

    public void addGeoFence(java.lang.String r7, java.lang.String r8, java.lang.String r9, int r10, java.lang.String r11) {
            r6 = this;
            com.loc.a r0 = r6.b     // Catch: java.lang.Throwable -> Lb
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r7 = move-exception
            java.lang.String r8 = "GeoFenceClient"
            java.lang.String r9 = "addGeoFence searche"
            com.loc.fr.a(r7, r8, r9)
            return
    }

    public void addGeoFence(java.util.List<com.amap.api.location.DPoint> r2, java.lang.String r3) {
            r1 = this;
            com.loc.a r0 = r1.b     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            java.lang.String r3 = "GeoFenceClient"
            java.lang.String r0 = "addGeoFence polygon"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    public android.app.PendingIntent createPendingIntent(java.lang.String r3) {
            r2 = this;
            com.loc.a r0 = r2.b     // Catch: java.lang.Throwable -> L7
            android.app.PendingIntent r3 = r0.a(r3)     // Catch: java.lang.Throwable -> L7
            goto L10
        L7:
            r3 = move-exception
            java.lang.String r0 = "GeoFenceClient"
            java.lang.String r1 = "creatPendingIntent"
            com.loc.fr.a(r3, r0, r1)
            r3 = 0
        L10:
            return r3
    }

    public java.util.List<com.amap.api.fence.GeoFence> getAllGeoFence() {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.loc.a r1 = r4.b     // Catch: java.lang.Throwable -> Lc
            java.util.List r0 = r1.b()     // Catch: java.lang.Throwable -> Lc
            goto L14
        Lc:
            r1 = move-exception
            java.lang.String r2 = "GeoFenceClient"
            java.lang.String r3 = "getGeoFenceList"
            com.loc.fr.a(r1, r2, r3)
        L14:
            return r0
    }

    public boolean isPause() {
            r3 = this;
            com.loc.a r0 = r3.b     // Catch: java.lang.Throwable -> L7
            boolean r0 = r0.i()     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceClient"
            java.lang.String r2 = "isPause"
            com.loc.fr.a(r0, r1, r2)
            r0 = 1
            return r0
    }

    public void pauseGeoFence() {
            r3 = this;
            com.loc.a r0 = r3.b     // Catch: java.lang.Throwable -> L6
            r0.f()     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceClient"
            java.lang.String r2 = "pauseGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void removeGeoFence() {
            r3 = this;
            com.loc.a r0 = r3.b     // Catch: java.lang.Throwable -> L6
            r0.a()     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceClient"
            java.lang.String r2 = "removeGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public boolean removeGeoFence(com.amap.api.fence.GeoFence r3) {
            r2 = this;
            com.loc.a r0 = r2.b     // Catch: java.lang.Throwable -> L7
            boolean r3 = r0.a(r3)     // Catch: java.lang.Throwable -> L7
            return r3
        L7:
            r3 = move-exception
            java.lang.String r0 = "GeoFenceClient"
            java.lang.String r1 = "removeGeoFence1"
            com.loc.fr.a(r3, r0, r1)
            r3 = 0
            return r3
    }

    public void resumeGeoFence() {
            r3 = this;
            com.loc.a r0 = r3.b     // Catch: java.lang.Throwable -> L6
            r0.h()     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            java.lang.String r1 = "GeoFenceClient"
            java.lang.String r2 = "resumeGeoFence"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void setActivateAction(int r3) {
            r2 = this;
            com.loc.a r0 = r2.b     // Catch: java.lang.Throwable -> L6
            r0.a(r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            java.lang.String r0 = "GeoFenceClient"
            java.lang.String r1 = "setActivatesAction"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public void setGeoFenceAble(java.lang.String r2, boolean r3) {
            r1 = this;
            com.loc.a r0 = r1.b     // Catch: java.lang.Throwable -> L6
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            java.lang.String r3 = "GeoFenceClient"
            java.lang.String r0 = "setGeoFenceAble"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    public void setGeoFenceListener(com.amap.api.fence.GeoFenceListener r3) {
            r2 = this;
            com.loc.a r0 = r2.b     // Catch: java.lang.Throwable -> L6
            r0.a(r3)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r3 = move-exception
            java.lang.String r0 = "GeoFenceClient"
            java.lang.String r1 = "setGeoFenceListener"
            com.loc.fr.a(r3, r0, r1)
            return
    }
}
