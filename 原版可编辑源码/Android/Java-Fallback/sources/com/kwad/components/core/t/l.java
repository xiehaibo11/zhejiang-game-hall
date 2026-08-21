package com.kwad.components.core.t;

public class l {
    private static volatile com.kwad.components.core.t.l Rt;
    private android.hardware.SensorManager Ru;
    private final java.util.Map<java.lang.String, com.kwad.components.core.t.l.a> Rv;
    private final java.util.Map<java.lang.String, java.util.Set<android.hardware.SensorEventListener>> Rw;

    public static class a implements android.hardware.SensorEventListener {
        private final java.lang.ref.WeakReference<com.kwad.components.core.t.l> Rx;
        private final java.lang.String key;

        public a(java.lang.String r1, com.kwad.components.core.t.l r2) {
                r0 = this;
                r0.<init>()
                r0.key = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.Rx = r1
                return
        }

        @Override
        public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSensorChanged(android.hardware.SensorEvent r3) {
                r2 = this;
                java.lang.ref.WeakReference<com.kwad.components.core.t.l> r0 = r2.Rx
                java.lang.Object r0 = r0.get()
                com.kwad.components.core.t.l r0 = (com.kwad.components.core.t.l) r0
                if (r0 == 0) goto Lf
                java.lang.String r1 = r2.key
                com.kwad.components.core.t.l.a(r0, r1, r3)
            Lf:
                return
        }
    }

    public interface b {
        void onFailed();
    }

    private l() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.Rv = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.Rw = r0
            return
    }

    static void a(com.kwad.components.core.t.l r0, java.lang.String r1, android.hardware.SensorEvent r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r2, int r3, android.hardware.Sensor r4) {
            r1 = this;
            com.kwad.components.core.t.l$a r2 = r1.aB(r2)
            int r3 = aJ(r3)
            android.hardware.SensorManager r0 = r1.getSensorManager()
            r0.registerListener(r2, r4, r3)
            return
    }

    private void a(java.lang.String r2, android.hardware.SensorEvent r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Set<android.hardware.SensorEventListener>> r0 = r1.Rw
            java.lang.Object r2 = r0.get(r2)
            java.util.Set r2 = (java.util.Set) r2
            if (r2 == 0) goto L1e
            java.util.Iterator r2 = r2.iterator()
        Le:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r2.next()
            android.hardware.SensorEventListener r0 = (android.hardware.SensorEventListener) r0
            r0.onSensorChanged(r3)
            goto Le
        L1e:
            return
    }

    private void aA(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.kwad.components.core.t.l$a> r0 = r2.Rv
            java.lang.Object r0 = r0.get(r3)
            com.kwad.components.core.t.l$a r0 = (com.kwad.components.core.t.l.a) r0
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, com.kwad.components.core.t.l$a> r1 = r2.Rv
            r1.remove(r3)
            android.hardware.SensorManager r3 = r2.getSensorManager()
            r3.unregisterListener(r0)
        L16:
            return
    }

    private com.kwad.components.core.t.l.a aB(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.kwad.components.core.t.l$a> r0 = r2.Rv
            java.lang.Object r0 = r0.get(r3)
            com.kwad.components.core.t.l$a r0 = (com.kwad.components.core.t.l.a) r0
            if (r0 != 0) goto L14
            com.kwad.components.core.t.l$a r0 = new com.kwad.components.core.t.l$a
            r0.<init>(r3, r2)
            java.util.Map<java.lang.String, com.kwad.components.core.t.l$a> r1 = r2.Rv
            r1.put(r3, r0)
        L14:
            return r0
    }

    private android.hardware.Sensor aI(int r3) {
            r2 = this;
            android.hardware.SensorManager r0 = r2.getSensorManager()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 1
            if (r3 == r0) goto L19
            r0 = 2
            if (r3 == r0) goto Lf
            return r1
        Lf:
            android.hardware.SensorManager r3 = r2.getSensorManager()
            r0 = 4
        L14:
            android.hardware.Sensor r3 = r3.getDefaultSensor(r0)
            return r3
        L19:
            android.hardware.SensorManager r3 = r2.getSensorManager()
            r0 = 10
            goto L14
    }

    private static int aJ(int r1) {
            r0 = -3
            if (r1 == r0) goto Lf
            r0 = -2
            if (r1 == r0) goto Ld
            r0 = -1
            if (r1 == r0) goto Lb
            r1 = 3
            return r1
        Lb:
            r1 = 0
            return r1
        Ld:
            r1 = 1
            return r1
        Lf:
            r1 = 2
            return r1
    }

    private android.hardware.SensorManager getSensorManager() {
            r2 = this;
            android.hardware.SensorManager r0 = r2.Ru
            if (r0 != 0) goto L12
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.lang.String r1 = "sensor"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.hardware.SensorManager r0 = (android.hardware.SensorManager) r0
            r2.Ru = r0
        L12:
            android.hardware.SensorManager r0 = r2.Ru
            return r0
    }

    private static java.lang.String l(int r1, int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static com.kwad.components.core.t.l qr() {
            com.kwad.components.core.t.l r0 = com.kwad.components.core.t.l.Rt
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.t.l> r0 = com.kwad.components.core.t.l.class
            monitor-enter(r0)
            com.kwad.components.core.t.l r1 = com.kwad.components.core.t.l.Rt     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.t.l r1 = new com.kwad.components.core.t.l     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.t.l.Rt = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.t.l r0 = com.kwad.components.core.t.l.Rt
            return r0
    }

    public final void a(int r2, int r3, android.hardware.SensorEventListener r4, com.kwad.components.core.t.l.b r5) {
            r1 = this;
            android.hardware.Sensor r0 = r1.aI(r2)
            if (r0 != 0) goto La
            r5.onFailed()
            return
        La:
            java.lang.String r2 = l(r2, r3)
            java.util.Map<java.lang.String, java.util.Set<android.hardware.SensorEventListener>> r5 = r1.Rw
            java.lang.Object r5 = r5.get(r2)
            java.util.Set r5 = (java.util.Set) r5
            if (r5 == 0) goto L1c
            r5.add(r4)
            return
        L1c:
            java.util.HashSet r5 = new java.util.HashSet
            r5.<init>()
            r5.add(r4)
            java.util.Map<java.lang.String, java.util.Set<android.hardware.SensorEventListener>> r4 = r1.Rw
            r4.put(r2, r5)
            r1.a(r2, r3, r0)
            return
    }

    public final void a(android.hardware.SensorEventListener r5) {
            r4 = this;
            java.util.Map<java.lang.String, java.util.Set<android.hardware.SensorEventListener>> r0 = r4.Rw
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.util.Set r2 = (java.util.Set) r2
            java.util.Iterator r2 = r2.iterator()
        L20:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L35
            java.lang.Object r3 = r2.next()
            android.hardware.SensorEventListener r3 = (android.hardware.SensorEventListener) r3
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L20
            r2.remove()
        L35:
            java.lang.Object r2 = r1.getValue()
            java.util.Set r2 = (java.util.Set) r2
            int r2 = r2.size()
            if (r2 != 0) goto La
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r4.aA(r1)
            goto La
        L4b:
            return
    }
}
