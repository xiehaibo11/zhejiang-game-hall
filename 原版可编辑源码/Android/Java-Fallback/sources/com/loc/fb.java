package com.loc;

public final class fb {
    java.util.ArrayList<com.loc.fa> a;
    android.telephony.TelephonyManager b;
    android.telephony.PhoneStateListener c;
    android.telephony.SignalStrength d;
    boolean e;
    java.lang.StringBuilder f;
    java.lang.String g;
    private android.content.Context h;
    private boolean i;
    private boolean j;
    private java.lang.String k;
    private java.util.ArrayList<com.loc.fa> l;
    private com.loc.ez m;
    private long n;
    private boolean o;
    private java.lang.Object p;
    private android.telephony.TelephonyManager.CellInfoCallback q;
    private boolean r;
    private java.lang.String s;
    private java.lang.String t;
    private com.loc.es u;

    class a extends android.telephony.TelephonyManager.CellInfoCallback {
        final com.loc.fb a;

        a(com.loc.fb r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCellInfo(java.util.List<android.telephony.CellInfo> r6) {
                r5 = this;
                long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb r2 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                long r2 = com.loc.fb.a(r2)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                long r0 = r0 - r2
                r2 = 500(0x1f4, double:2.47E-321)
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 >= 0) goto L12
                return
            L12:
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb.b(r0)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                android.telephony.CellLocation r0 = com.loc.fb.c(r0)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb r1 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb.a(r1, r0)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                r0.a(r6)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb r6 = r5.a     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                com.loc.fb.a(r6, r0)     // Catch: java.lang.Throwable -> L31 java.lang.SecurityException -> L3a
                return
            L31:
                r6 = move-exception
                java.lang.String r0 = "Cgi"
                java.lang.String r1 = "cellInfo"
                com.loc.fr.a(r6, r0, r1)
                return
            L3a:
                r6 = move-exception
                com.loc.fb r0 = r5.a
                java.lang.String r6 = r6.getMessage()
                r0.g = r6
                return
        }
    }

    class b extends android.telephony.PhoneStateListener {
        final com.loc.fb a;

        b(com.loc.fb r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onCellInfoChanged(java.util.List<android.telephony.CellInfo> r6) {
                r5 = this;
                com.loc.ft.b()     // Catch: java.lang.Throwable -> L40
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L40
                com.loc.es r0 = com.loc.fb.e(r0)     // Catch: java.lang.Throwable -> L40
                if (r0 == 0) goto L14
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L40
                com.loc.es r0 = com.loc.fb.e(r0)     // Catch: java.lang.Throwable -> L40
                r0.c()     // Catch: java.lang.Throwable -> L40
            L14:
                long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L40
                com.loc.fb r2 = r5.a     // Catch: java.lang.Throwable -> L40
                long r2 = com.loc.fb.a(r2)     // Catch: java.lang.Throwable -> L40
                long r0 = r0 - r2
                r2 = 500(0x1f4, double:2.47E-321)
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 >= 0) goto L26
                return
            L26:
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L40
                android.telephony.CellLocation r0 = com.loc.fb.c(r0)     // Catch: java.lang.Throwable -> L40
                com.loc.fb r1 = r5.a     // Catch: java.lang.Throwable -> L40
                com.loc.fb.a(r1, r0)     // Catch: java.lang.Throwable -> L40
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L40
                r0.a(r6)     // Catch: java.lang.Throwable -> L40
                com.loc.fb r6 = r5.a     // Catch: java.lang.Throwable -> L40
                long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L40
                com.loc.fb.a(r6, r0)     // Catch: java.lang.Throwable -> L40
                return
            L40:
                r6 = move-exception
                r6.printStackTrace()
                return
        }

        @Override
        public final void onCellLocationChanged(android.telephony.CellLocation r6) {
                r5 = this;
                com.loc.ft.b()
                long r0 = com.loc.fz.b()
                com.loc.fb r2 = r5.a
                long r2 = com.loc.fb.a(r2)
                long r0 = r0 - r2
                r2 = 500(0x1f4, double:2.47E-321)
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 >= 0) goto L15
                return
            L15:
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L2f
                com.loc.fb.a(r0, r6)     // Catch: java.lang.Throwable -> L2f
                com.loc.fb r6 = r5.a     // Catch: java.lang.Throwable -> L2f
                java.util.List r6 = com.loc.fb.d(r6)     // Catch: java.lang.Throwable -> L2f
                com.loc.fb r0 = r5.a     // Catch: java.lang.Throwable -> L2f
                r0.a(r6)     // Catch: java.lang.Throwable -> L2f
                com.loc.fb r6 = r5.a     // Catch: java.lang.Throwable -> L2f
                long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L2f
                com.loc.fb.a(r6, r0)     // Catch: java.lang.Throwable -> L2f
                return
            L2f:
                r6 = move-exception
                r6.printStackTrace()
                return
        }

        @Override
        public final void onDataConnectionStateChanged(int r1) {
                r0 = this;
                super.onDataConnectionStateChanged(r1)
                return
        }

        @Override
        public final void onServiceStateChanged(android.telephony.ServiceState r2) {
                r1 = this;
                int r2 = r2.getState()     // Catch: java.lang.Throwable -> L16
                if (r2 == 0) goto L10
                r0 = 1
                if (r2 == r0) goto La
                goto L16
            La:
                com.loc.fb r2 = r1.a     // Catch: java.lang.Throwable -> L16
                r2.j()     // Catch: java.lang.Throwable -> L16
                return
            L10:
                com.loc.fb r2 = r1.a     // Catch: java.lang.Throwable -> L16
                r0 = 0
                r2.a(r0, r0)     // Catch: java.lang.Throwable -> L16
            L16:
                return
        }

        @Override
        public final void onSignalStrengthChanged(int r1) {
                r0 = this;
                super.onSignalStrengthChanged(r1)
                return
        }

        @Override
        public final void onSignalStrengthsChanged(android.telephony.SignalStrength r2) {
                r1 = this;
                if (r2 != 0) goto L3
                return
            L3:
                com.loc.fb r0 = r1.a
                r0.d = r2
                com.loc.fb r2 = r1.a     // Catch: java.lang.Throwable -> L18
                com.loc.es r2 = com.loc.fb.e(r2)     // Catch: java.lang.Throwable -> L18
                if (r2 == 0) goto L18
                com.loc.fb r2 = r1.a     // Catch: java.lang.Throwable -> L18
                com.loc.es r2 = com.loc.fb.e(r2)     // Catch: java.lang.Throwable -> L18
                r2.c()     // Catch: java.lang.Throwable -> L18
            L18:
                return
        }
    }

    public fb(android.content.Context r5, android.os.Handler r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.i = r0
            r4.j = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.a = r1
            r1 = 0
            r4.k = r1
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r4.l = r2
            r4.b = r1
            r4.m = r1
            r2 = 0
            r4.n = r2
            r4.c = r1
            r4.o = r0
            java.lang.Object r2 = new java.lang.Object
            r2.<init>()
            r4.p = r2
            r4.r = r0
            r4.e = r0
            r4.f = r1
            r4.s = r1
            r4.t = r1
            r4.g = r1
            r4.h = r5
            android.telephony.TelephonyManager r0 = r4.b
            if (r0 != 0) goto L48
            java.lang.String r0 = "phone"
            java.lang.Object r0 = com.loc.fz.a(r5, r0)
            android.telephony.TelephonyManager r0 = (android.telephony.TelephonyManager) r0
            r4.b = r0
        L48:
            r4.o()
            com.loc.ez r0 = new com.loc.ez
            java.lang.String r1 = "cellAge"
            r0.<init>(r5, r1, r6)
            r4.m = r0
            r0.a()
            return
    }

    static long a(com.loc.fb r2) {
            long r0 = r2.n
            return r0
    }

    static long a(com.loc.fb r0, long r1) {
            r0.n = r1
            return r1
    }

    private static com.loc.fa a(int r1, boolean r2, int r3, int r4, int r5, int r6, int r7) {
            com.loc.fa r0 = new com.loc.fa
            r0.<init>(r1, r2)
            r0.a = r3
            r0.b = r4
            r0.c = r5
            r0.d = r6
            r0.k = r7
            return r0
    }

    private com.loc.fa a(android.telephony.CellInfoCdma r12, boolean r13) {
            r11 = this;
            r0 = 0
            if (r12 == 0) goto L77
            android.telephony.CellIdentityCdma r1 = r12.getCellIdentity()
            if (r1 != 0) goto La
            goto L77
        La:
            android.telephony.CellIdentityCdma r1 = r12.getCellIdentity()
            int r2 = r1.getSystemId()
            if (r2 <= 0) goto L77
            int r2 = r1.getNetworkId()
            if (r2 < 0) goto L77
            int r1 = r1.getBasestationId()
            if (r1 < 0) goto L77
            android.telephony.CellIdentityCdma r0 = r12.getCellIdentity()
            android.telephony.TelephonyManager r1 = r11.b
            java.lang.String[] r1 = com.loc.fz.a(r1)
            r2 = 0
            r3 = r1[r2]     // Catch: java.lang.Throwable -> L3b
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L3b
            r4 = 1
            r1 = r1[r4]     // Catch: java.lang.Throwable -> L3c
            int r2 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Throwable -> L3c
            r7 = r2
            r6 = r3
            goto L3e
        L3b:
            r3 = 0
        L3c:
            r6 = r3
            r7 = 0
        L3e:
            r4 = 2
            r8 = 0
            r9 = 0
            android.telephony.CellSignalStrengthCdma r1 = r12.getCellSignalStrength()
            int r10 = r1.getCdmaDbm()
            r5 = r13
            com.loc.fa r13 = a(r4, r5, r6, r7, r8, r9, r10)
            int r1 = r0.getSystemId()
            r13.h = r1
            int r1 = r0.getNetworkId()
            r13.i = r1
            int r1 = r0.getBasestationId()
            r13.j = r1
            int r1 = r0.getLatitude()
            r13.f = r1
            int r0 = r0.getLongitude()
            r13.g = r0
            android.telephony.CellSignalStrengthCdma r12 = r12.getCellSignalStrength()
            int r12 = r12.getCdmaDbm()
            r13.s = r12
            return r13
        L77:
            return r0
    }

    private static com.loc.fa a(android.telephony.CellInfoGsm r8, boolean r9) {
            if (r8 == 0) goto L54
            android.telephony.CellIdentityGsm r0 = r8.getCellIdentity()
            if (r0 != 0) goto L9
            goto L54
        L9:
            android.telephony.CellIdentityGsm r0 = r8.getCellIdentity()
            r1 = 1
            int r3 = r0.getMcc()
            int r4 = r0.getMnc()
            int r5 = r0.getLac()
            int r6 = r0.getCid()
            android.telephony.CellSignalStrengthGsm r0 = r8.getCellSignalStrength()
            int r7 = r0.getDbm()
            r2 = r9
            com.loc.fa r9 = a(r1, r2, r3, r4, r5, r6, r7)
            android.telephony.CellIdentityGsm r0 = r8.getCellIdentity()
            int r0 = r0.getBsic()
            r9.o = r0
            android.telephony.CellIdentityGsm r0 = r8.getCellIdentity()
            int r0 = r0.getArfcn()
            r9.p = r0
            android.telephony.CellSignalStrengthGsm r0 = r8.getCellSignalStrength()
            int r0 = r0.getTimingAdvance()
            r9.q = r0
            android.telephony.CellSignalStrengthGsm r8 = r8.getCellSignalStrength()
            int r8 = r8.getDbm()
            r9.s = r8
            return r9
        L54:
            r8 = 0
            return r8
    }

    private static com.loc.fa a(android.telephony.CellInfoLte r8, boolean r9) {
            if (r8 == 0) goto L52
            android.telephony.CellIdentityLte r0 = r8.getCellIdentity()
            if (r0 != 0) goto L9
            goto L52
        L9:
            android.telephony.CellIdentityLte r0 = r8.getCellIdentity()
            r1 = 3
            int r3 = r0.getMcc()
            int r4 = r0.getMnc()
            int r5 = r0.getTac()
            int r6 = r0.getCi()
            android.telephony.CellSignalStrengthLte r2 = r8.getCellSignalStrength()
            int r7 = r2.getDbm()
            r2 = r9
            com.loc.fa r9 = a(r1, r2, r3, r4, r5, r6, r7)
            int r1 = r0.getPci()
            r9.o = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r1 < r2) goto L3d
            int r0 = r0.getEarfcn()
            r9.p = r0
        L3d:
            android.telephony.CellSignalStrengthLte r0 = r8.getCellSignalStrength()
            int r0 = r0.getTimingAdvance()
            r9.q = r0
            android.telephony.CellSignalStrengthLte r8 = r8.getCellSignalStrength()
            int r8 = r8.getDbm()
            r9.s = r8
            return r9
        L52:
            r8 = 0
            return r8
    }

    private static com.loc.fa a(android.telephony.CellInfoNr r14, boolean r15) {
            if (r14 == 0) goto L93
            android.telephony.CellIdentity r0 = r14.getCellIdentity()
            if (r0 != 0) goto La
            goto L93
        La:
            android.telephony.CellIdentity r0 = r14.getCellIdentity()
            android.telephony.CellIdentityNr r0 = (android.telephony.CellIdentityNr) r0
            int r1 = r0.getTac()
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = 0
            if (r1 != r2) goto L31
            java.lang.String r2 = android.os.Build.MANUFACTURER
            java.lang.String r4 = "HUAWEI"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L31
            java.lang.String r2 = "getHwTac"
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L2d
            int r1 = com.loc.fv.b(r0, r2, r4)     // Catch: java.lang.Throwable -> L2d
            goto L31
        L2d:
            r2 = move-exception
            r2.printStackTrace()
        L31:
            long r4 = r0.getNci()
            java.lang.String r2 = r0.getMccString()     // Catch: java.lang.Throwable -> L4a
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r6 = r0.getMncString()     // Catch: java.lang.Throwable -> L48
            int r3 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> L48
            r9 = r2
            r10 = r3
            goto L51
        L48:
            r6 = move-exception
            goto L4c
        L4a:
            r6 = move-exception
            r2 = 0
        L4c:
            r6.printStackTrace()
            r9 = r2
            r10 = 0
        L51:
            android.telephony.CellSignalStrength r2 = r14.getCellSignalStrength()
            android.telephony.CellSignalStrengthNr r2 = (android.telephony.CellSignalStrengthNr) r2
            int r13 = r2.getSsRsrp()
            r7 = 5
            int r11 = r0.getTac()
            r12 = 0
            r8 = r15
            com.loc.fa r15 = a(r7, r8, r9, r10, r11, r12, r13)
            r15.e = r4
            r2 = 16777215(0xffffff, float:2.3509886E-38)
            r3 = 65535(0xffff, float:9.1834E-41)
            if (r1 <= r2) goto L73
            r15.c = r3
            goto L7c
        L73:
            if (r1 <= r3) goto L7a
            r15.c = r3
            r15.q = r1
            goto L7c
        L7a:
            r15.c = r1
        L7c:
            int r1 = r0.getPci()
            r15.o = r1
            int r0 = r0.getNrarfcn()
            r15.p = r0
            android.telephony.CellSignalStrength r14 = r14.getCellSignalStrength()
            int r14 = r14.getDbm()
            r15.s = r14
            return r15
        L93:
            r14 = 0
            return r14
    }

    private static com.loc.fa a(android.telephony.CellInfoWcdma r8, boolean r9) {
            if (r8 == 0) goto L46
            android.telephony.CellIdentityWcdma r0 = r8.getCellIdentity()
            if (r0 != 0) goto L9
            goto L46
        L9:
            android.telephony.CellIdentityWcdma r0 = r8.getCellIdentity()
            r1 = 4
            int r3 = r0.getMcc()
            int r4 = r0.getMnc()
            int r5 = r0.getLac()
            int r6 = r0.getCid()
            android.telephony.CellSignalStrengthWcdma r2 = r8.getCellSignalStrength()
            int r7 = r2.getDbm()
            r2 = r9
            com.loc.fa r9 = a(r1, r2, r3, r4, r5, r6, r7)
            int r0 = r0.getPsc()
            r9.o = r0
            android.telephony.CellIdentityWcdma r0 = r8.getCellIdentity()
            int r0 = r0.getUarfcn()
            r9.p = r0
            android.telephony.CellSignalStrengthWcdma r8 = r8.getCellSignalStrength()
            int r8 = r8.getDbm()
            r9.s = r8
            return r9
        L46:
            r8 = 0
            return r8
    }

    private synchronized void a(android.telephony.CellLocation r6) {
            r5 = this;
            monitor-enter(r5)
            android.telephony.TelephonyManager r0 = r5.b     // Catch: java.lang.Throwable -> Laf
            java.lang.String[] r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Laf
            java.util.ArrayList<com.loc.fa> r1 = r5.a     // Catch: java.lang.Throwable -> Laf
            r1.clear()     // Catch: java.lang.Throwable -> Laf
            boolean r1 = r6 instanceof android.telephony.gsm.GsmCellLocation     // Catch: java.lang.Throwable -> Laf
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L5b
            android.telephony.gsm.GsmCellLocation r6 = (android.telephony.gsm.GsmCellLocation) r6     // Catch: java.lang.Throwable -> Laf
            com.loc.fa r1 = new com.loc.fa     // Catch: java.lang.Throwable -> Laf
            r1.<init>(r3, r3)     // Catch: java.lang.Throwable -> Laf
            r4 = r0[r2]     // Catch: java.lang.Throwable -> Laf
            int r4 = com.loc.fz.e(r4)     // Catch: java.lang.Throwable -> Laf
            r1.a = r4     // Catch: java.lang.Throwable -> Laf
            r0 = r0[r3]     // Catch: java.lang.Throwable -> Laf
            int r0 = com.loc.fz.e(r0)     // Catch: java.lang.Throwable -> Laf
            r1.b = r0     // Catch: java.lang.Throwable -> Laf
            int r0 = r6.getLac()     // Catch: java.lang.Throwable -> Laf
            r1.c = r0     // Catch: java.lang.Throwable -> Laf
            int r6 = r6.getCid()     // Catch: java.lang.Throwable -> Laf
            r1.d = r6     // Catch: java.lang.Throwable -> Laf
            android.telephony.SignalStrength r6 = r5.d     // Catch: java.lang.Throwable -> Laf
            if (r6 == 0) goto L4d
            android.telephony.SignalStrength r6 = r5.d     // Catch: java.lang.Throwable -> Laf
            int r6 = r6.getGsmSignalStrength()     // Catch: java.lang.Throwable -> Laf
            r0 = 99
            if (r6 != r0) goto L47
            r6 = 2147483647(0x7fffffff, float:NaN)
            goto L4b
        L47:
            int r6 = b(r6)     // Catch: java.lang.Throwable -> Laf
        L4b:
            r1.s = r6     // Catch: java.lang.Throwable -> Laf
        L4d:
            r1.r = r2     // Catch: java.lang.Throwable -> Laf
            com.loc.ez r6 = r5.m     // Catch: java.lang.Throwable -> Laf
            r6.a(r1)     // Catch: java.lang.Throwable -> Laf
            java.util.ArrayList<com.loc.fa> r6 = r5.a     // Catch: java.lang.Throwable -> Laf
            r6.add(r1)     // Catch: java.lang.Throwable -> Laf
            monitor-exit(r5)
            return
        L5b:
            boolean r1 = r6 instanceof android.telephony.cdma.CdmaCellLocation     // Catch: java.lang.Throwable -> Laf
            if (r1 == 0) goto Lad
            android.telephony.cdma.CdmaCellLocation r6 = (android.telephony.cdma.CdmaCellLocation) r6     // Catch: java.lang.Throwable -> Laf
            com.loc.fa r1 = new com.loc.fa     // Catch: java.lang.Throwable -> Laf
            r4 = 2
            r1.<init>(r4, r3)     // Catch: java.lang.Throwable -> Laf
            r4 = r0[r2]     // Catch: java.lang.Throwable -> Laf
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> Laf
            r1.a = r4     // Catch: java.lang.Throwable -> Laf
            r0 = r0[r3]     // Catch: java.lang.Throwable -> Laf
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> Laf
            r1.b = r0     // Catch: java.lang.Throwable -> Laf
            int r0 = r6.getBaseStationLatitude()     // Catch: java.lang.Throwable -> Laf
            r1.f = r0     // Catch: java.lang.Throwable -> Laf
            int r0 = r6.getBaseStationLongitude()     // Catch: java.lang.Throwable -> Laf
            r1.g = r0     // Catch: java.lang.Throwable -> Laf
            int r0 = r6.getSystemId()     // Catch: java.lang.Throwable -> Laf
            r1.h = r0     // Catch: java.lang.Throwable -> Laf
            int r0 = r6.getNetworkId()     // Catch: java.lang.Throwable -> Laf
            r1.i = r0     // Catch: java.lang.Throwable -> Laf
            int r6 = r6.getBaseStationId()     // Catch: java.lang.Throwable -> Laf
            r1.j = r6     // Catch: java.lang.Throwable -> Laf
            android.telephony.SignalStrength r6 = r5.d     // Catch: java.lang.Throwable -> Laf
            if (r6 == 0) goto La1
            android.telephony.SignalStrength r6 = r5.d     // Catch: java.lang.Throwable -> Laf
            int r6 = r6.getCdmaDbm()     // Catch: java.lang.Throwable -> Laf
            r1.s = r6     // Catch: java.lang.Throwable -> Laf
        La1:
            r1.r = r2     // Catch: java.lang.Throwable -> Laf
            com.loc.ez r6 = r5.m     // Catch: java.lang.Throwable -> Laf
            r6.a(r1)     // Catch: java.lang.Throwable -> Laf
            java.util.ArrayList<com.loc.fa> r6 = r5.a     // Catch: java.lang.Throwable -> Laf
            r6.add(r1)     // Catch: java.lang.Throwable -> Laf
        Lad:
            monitor-exit(r5)
            return
        Laf:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    static void a(com.loc.fb r0, android.telephony.CellLocation r1) {
            r0.a(r1)
            return
    }

    public static boolean a(int r1) {
            if (r1 <= 0) goto L9
            r0 = 15
            if (r1 <= r0) goto L7
            goto L9
        L7:
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    private static int b(int r0) {
            int r0 = r0 * 2
            int r0 = r0 + (-113)
            return r0
    }

    private void b(boolean r5, boolean r6) {
            r4 = this;
            boolean r0 = r4.e
            r1 = 0
            if (r0 != 0) goto L48
            android.telephony.TelephonyManager r0 = r4.b
            if (r0 == 0) goto L48
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r0 < r2) goto L48
            android.content.Context r0 = r4.h
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            if (r0 < r2) goto L48
            android.telephony.TelephonyManager$CellInfoCallback r0 = r4.q
            if (r0 != 0) goto L24
            com.loc.fb$a r0 = new com.loc.fb$a
            r0.<init>(r4)
            r4.q = r0
        L24:
            android.telephony.TelephonyManager r0 = r4.b
            com.loc.cr r2 = com.loc.cr.a()
            java.util.concurrent.Executor r2 = r2.b()
            android.telephony.TelephonyManager$CellInfoCallback r3 = r4.q
            r0.requestCellInfoUpdate(r2, r3)
            if (r6 != 0) goto L37
            if (r5 == 0) goto L48
        L37:
            r5 = 0
        L38:
            boolean r6 = r4.r
            if (r6 != 0) goto L48
            r6 = 20
            if (r5 >= r6) goto L48
            r2 = 5
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Throwable -> L45
        L45:
            int r5 = r5 + 1
            goto L38
        L48:
            r4.j = r1
            android.telephony.TelephonyManager r5 = r4.b
            if (r5 == 0) goto L5d
            java.lang.String r5 = r5.getNetworkOperator()
            r4.k = r5
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L5d
            r5 = 1
            r4.j = r5
        L5d:
            long r5 = com.loc.fz.b()
            r4.n = r5
            return
    }

    static boolean b(com.loc.fb r1) {
            r0 = 1
            r1.r = r0
            return r0
    }

    static android.telephony.CellLocation c(com.loc.fb r0) {
            android.telephony.CellLocation r0 = r0.t()
            return r0
    }

    static java.util.List d(com.loc.fb r0) {
            java.util.List r0 = r0.u()
            return r0
    }

    static com.loc.es e(com.loc.fb r0) {
            com.loc.es r0 = r0.u
            return r0
    }

    private void o() {
            r1 = this;
            android.telephony.TelephonyManager r0 = r1.b
            if (r0 != 0) goto L5
            return
        L5:
            r1.p()
            return
    }

    private void p() {
            r8 = this;
            android.telephony.PhoneStateListener r0 = r8.c     // Catch: java.lang.Exception -> L97
            if (r0 != 0) goto Lb
            com.loc.fb$b r0 = new com.loc.fb$b     // Catch: java.lang.Exception -> L97
            r0.<init>(r8)     // Catch: java.lang.Exception -> L97
            r8.c = r0     // Catch: java.lang.Exception -> L97
        Lb:
            r0 = 320(0x140, float:4.48E-43)
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L97
            java.lang.String r2 = "hasFineLocPerm"
            java.lang.String r3 = "hasNoFineLocPerm"
            java.lang.String r4 = "android.permission.ACCESS_FINE_LOCATION"
            r5 = 336(0x150, float:4.71E-43)
            r6 = 31
            if (r1 < r6) goto L2c
            android.content.Context r1 = r8.h     // Catch: java.lang.Exception -> L97
            int r1 = r1.checkSelfPermission(r4)     // Catch: java.lang.Exception -> L97
            if (r1 != 0) goto L26
            r8.t = r2     // Catch: java.lang.Exception -> L97
            goto L2c
        L26:
            r8.t = r3     // Catch: java.lang.Exception -> L97
            com.loc.ft.b()     // Catch: java.lang.Exception -> L97
            goto L31
        L2c:
            com.loc.ft.b()     // Catch: java.lang.Exception -> L97
            r0 = 336(0x150, float:4.71E-43)
        L31:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L97
            r5 = 17
            if (r1 < r5) goto L8b
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L97
            if (r1 < r6) goto L86
            android.content.Context r1 = r8.h     // Catch: java.lang.Exception -> L97
            java.lang.String r5 = "android.permission.READ_PHONE_STATE"
            int r1 = r1.checkSelfPermission(r5)     // Catch: java.lang.Exception -> L97
            r5 = 1
            r6 = 0
            if (r1 != 0) goto L49
            r1 = 1
            goto L4a
        L49:
            r1 = 0
        L4a:
            android.content.Context r7 = r8.h     // Catch: java.lang.Exception -> L97
            int r4 = r7.checkSelfPermission(r4)     // Catch: java.lang.Exception -> L97
            if (r4 != 0) goto L53
            goto L54
        L53:
            r5 = 0
        L54:
            if (r1 == 0) goto L5a
            if (r5 == 0) goto L5a
            r0 = r0 | 1024(0x400, float:1.435E-42)
        L5a:
            com.loc.ft.b()     // Catch: java.lang.Exception -> L97
            if (r1 == 0) goto L62
            java.lang.String r1 = "hasReadPhoneStatePerm"
            goto L64
        L62:
            java.lang.String r1 = "hasNoReadPhoneStatePerm"
        L64:
            r8.s = r1     // Catch: java.lang.Exception -> L97
            if (r5 == 0) goto L69
            goto L6a
        L69:
            r2 = r3
        L6a:
            r8.t = r2     // Catch: java.lang.Exception -> L97
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L97
            java.lang.String r2 = "CgiManager | mLFLPerm = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L97
            java.lang.String r2 = r8.t     // Catch: java.lang.Exception -> L97
            r1.append(r2)     // Catch: java.lang.Exception -> L97
            java.lang.String r2 = ";mLRPSPerm = "
            r1.append(r2)     // Catch: java.lang.Exception -> L97
            java.lang.String r2 = r8.s     // Catch: java.lang.Exception -> L97
            r1.append(r2)     // Catch: java.lang.Exception -> L97
            com.loc.ft.b()     // Catch: java.lang.Exception -> L97
            goto L8b
        L86:
            com.loc.ft.b()     // Catch: java.lang.Exception -> L97
            r0 = r0 | 1024(0x400, float:1.435E-42)
        L8b:
            android.telephony.PhoneStateListener r1 = r8.c     // Catch: java.lang.Exception -> L97
            if (r1 == 0) goto L96
            android.telephony.TelephonyManager r1 = r8.b     // Catch: java.lang.Exception -> L97
            android.telephony.PhoneStateListener r2 = r8.c     // Catch: java.lang.Exception -> L97
            r1.listen(r2, r0)     // Catch: java.lang.Exception -> L97
        L96:
            return
        L97:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private int q() {
            r1 = this;
            com.loc.fa r0 = r1.e()
            if (r0 == 0) goto L9
            int r0 = r0.l
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    private android.telephony.CellLocation r() {
            r4 = this;
            android.telephony.TelephonyManager r0 = r4.b
            r1 = 0
            if (r0 == 0) goto L1e
            android.telephony.CellLocation r0 = r0.getCellLocation()     // Catch: java.lang.Throwable -> Lc java.lang.SecurityException -> L17
            r4.g = r1     // Catch: java.lang.Throwable -> Lc java.lang.SecurityException -> L17
            return r0
        Lc:
            r0 = move-exception
            r4.g = r1
            java.lang.String r2 = "CgiManager"
            java.lang.String r3 = "getCellLocation"
            com.loc.fr.a(r0, r2, r3)
            goto L1e
        L17:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            r4.g = r0
        L1e:
            return r1
    }

    private boolean s() {
            r6 = this;
            boolean r0 = r6.e
            r1 = 0
            if (r0 == 0) goto L6
            goto L16
        L6:
            long r2 = com.loc.fz.b()
            long r4 = r6.n
            long r2 = r2 - r4
            r4 = 45000(0xafc8, double:2.2233E-319)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 >= 0) goto L15
            goto L16
        L15:
            r1 = 1
        L16:
            return r1
    }

    private android.telephony.CellLocation t() {
            r1 = this;
            android.telephony.TelephonyManager r0 = r1.b
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.telephony.CellLocation r0 = r1.r()
            return r0
    }

    private java.util.List<android.telephony.CellInfo> u() {
            r4 = this;
            r0 = 0
            int r1 = com.loc.fz.c()     // Catch: java.lang.Throwable -> L23
            r2 = 18
            if (r1 >= r2) goto La
            return r0
        La:
            android.telephony.TelephonyManager r1 = r4.b     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto Lf
            return r0
        Lf:
            android.telephony.TelephonyManager r1 = r4.b     // Catch: java.lang.SecurityException -> L1a java.lang.Throwable -> L23
            java.util.List r1 = r1.getAllCellInfo()     // Catch: java.lang.SecurityException -> L1a java.lang.Throwable -> L23
            r4.g = r0     // Catch: java.lang.SecurityException -> L18 java.lang.Throwable -> L23
            goto L22
        L18:
            r2 = move-exception
            goto L1c
        L1a:
            r2 = move-exception
            r1 = r0
        L1c:
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L23
            r4.g = r2     // Catch: java.lang.Throwable -> L23
        L22:
            return r1
        L23:
            r1 = move-exception
            java.lang.String r2 = "Cgi"
            java.lang.String r3 = "getNewCells"
            com.loc.fr.a(r1, r2, r3)
            return r0
    }

    public final java.util.List<com.loc.dz> a() {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.telephony.TelephonyManager r1 = r8.b
            java.util.List r1 = r1.getAllCellInfo()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 17
            if (r2 < r3) goto L191
            if (r1 == 0) goto L191
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L191
            java.lang.Object r2 = r1.next()
            android.telephony.CellInfo r2 = (android.telephony.CellInfo) r2
            boolean r3 = r2 instanceof android.telephony.CellInfoCdma
            r4 = 1
            if (r3 == 0) goto L6e
            r3 = r2
            android.telephony.CellInfoCdma r3 = (android.telephony.CellInfoCdma) r3
            android.telephony.CellIdentityCdma r5 = r3.getCellIdentity()
            com.loc.ea r6 = new com.loc.ea
            boolean r2 = r2.isRegistered()
            r6.<init>(r2, r4)
            int r2 = r5.getLatitude()
            r6.m = r2
            int r2 = r5.getLongitude()
            r6.n = r2
            int r2 = r5.getSystemId()
            r6.j = r2
            int r2 = r5.getNetworkId()
            r6.k = r2
            int r2 = r5.getBasestationId()
            r6.l = r2
            android.telephony.CellSignalStrengthCdma r2 = r3.getCellSignalStrength()
            int r2 = r2.getAsuLevel()
            r6.d = r2
            android.telephony.CellSignalStrengthCdma r2 = r3.getCellSignalStrength()
            int r2 = r2.getCdmaDbm()
            r6.c = r2
        L6a:
            r0.add(r6)
            goto L17
        L6e:
            boolean r3 = r2 instanceof android.telephony.CellInfoGsm
            r5 = 24
            if (r3 == 0) goto Lcd
            r3 = r2
            android.telephony.CellInfoGsm r3 = (android.telephony.CellInfoGsm) r3
            android.telephony.CellIdentityGsm r6 = r3.getCellIdentity()
            com.loc.eb r7 = new com.loc.eb
            boolean r2 = r2.isRegistered()
            r7.<init>(r2, r4)
            int r2 = r6.getMcc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r7.a = r2
            int r2 = r6.getMnc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r7.b = r2
            int r2 = r6.getLac()
            r7.j = r2
            int r2 = r6.getCid()
            r7.k = r2
            android.telephony.CellSignalStrengthGsm r2 = r3.getCellSignalStrength()
            int r2 = r2.getDbm()
            r7.c = r2
            android.telephony.CellSignalStrengthGsm r2 = r3.getCellSignalStrength()
            int r2 = r2.getAsuLevel()
            r7.d = r2
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r5) goto Lc8
            int r2 = r6.getArfcn()
            r7.m = r2
            int r2 = r6.getBsic()
            r7.n = r2
        Lc8:
            r0.add(r7)
            goto L17
        Lcd:
            boolean r3 = r2 instanceof android.telephony.CellInfoLte
            if (r3 == 0) goto L131
            r3 = r2
            android.telephony.CellInfoLte r3 = (android.telephony.CellInfoLte) r3
            android.telephony.CellIdentityLte r4 = r3.getCellIdentity()
            com.loc.ec r6 = new com.loc.ec
            boolean r2 = r2.isRegistered()
            r6.<init>(r2)
            int r2 = r4.getMcc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r6.a = r2
            int r2 = r4.getMnc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r6.b = r2
            int r2 = r4.getPci()
            r6.l = r2
            android.telephony.CellSignalStrengthLte r2 = r3.getCellSignalStrength()
            int r2 = r2.getAsuLevel()
            r6.d = r2
            int r2 = r4.getCi()
            r6.k = r2
            int r2 = r4.getTac()
            r6.j = r2
            android.telephony.CellSignalStrengthLte r2 = r3.getCellSignalStrength()
            int r2 = r2.getTimingAdvance()
            r6.n = r2
            android.telephony.CellSignalStrengthLte r2 = r3.getCellSignalStrength()
            int r2 = r2.getDbm()
            r6.c = r2
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r5) goto L6a
            int r2 = r4.getEarfcn()
            r6.m = r2
            goto L6a
        L131:
            int r3 = android.os.Build.VERSION.SDK_INT
            r6 = 18
            if (r3 < r6) goto L17
            boolean r3 = r2 instanceof android.telephony.CellInfoWcdma
            if (r3 == 0) goto L17
            r3 = r2
            android.telephony.CellInfoWcdma r3 = (android.telephony.CellInfoWcdma) r3
            android.telephony.CellIdentityWcdma r6 = r3.getCellIdentity()
            com.loc.ed r7 = new com.loc.ed
            boolean r2 = r2.isRegistered()
            r7.<init>(r2, r4)
            int r2 = r6.getMcc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r7.a = r2
            int r2 = r6.getMnc()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r7.b = r2
            int r2 = r6.getLac()
            r7.j = r2
            int r2 = r6.getCid()
            r7.k = r2
            int r2 = r6.getPsc()
            r7.l = r2
            android.telephony.CellSignalStrengthWcdma r2 = r3.getCellSignalStrength()
            int r2 = r2.getAsuLevel()
            r7.d = r2
            android.telephony.CellSignalStrengthWcdma r2 = r3.getCellSignalStrength()
            int r2 = r2.getDbm()
            r7.c = r2
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r5) goto Lc8
            int r2 = r6.getUarfcn()
            r7.m = r2
            goto Lc8
        L191:
            return r0
    }

    public final void a(com.loc.es r1) {
            r0 = this;
            r0.u = r1
            return
    }

    final synchronized void a(java.util.List<android.telephony.CellInfo> r10) {
            r9 = this;
            monitor-enter(r9)
            java.util.ArrayList<com.loc.fa> r0 = r9.l     // Catch: java.lang.Throwable -> L9c
            if (r0 == 0) goto La
            java.util.ArrayList<com.loc.fa> r0 = r9.l     // Catch: java.lang.Throwable -> L9c
            r0.clear()     // Catch: java.lang.Throwable -> L9c
        La:
            if (r10 == 0) goto L9a
            int r0 = r10.size()     // Catch: java.lang.Throwable -> L9c
            if (r0 > 0) goto L14
            goto L9a
        L14:
            r0 = 0
            r1 = 0
        L16:
            int r2 = r10.size()     // Catch: java.lang.Throwable -> L9c
            r3 = 1
            if (r1 >= r2) goto L88
            java.lang.Object r2 = r10.get(r1)     // Catch: java.lang.Throwable -> L9c
            android.telephony.CellInfo r2 = (android.telephony.CellInfo) r2     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L85
            r4 = 0
            boolean r5 = r2.isRegistered()     // Catch: java.lang.Throwable -> L9c
            boolean r6 = r2 instanceof android.telephony.CellInfoCdma     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L35
            android.telephony.CellInfoCdma r2 = (android.telephony.CellInfoCdma) r2     // Catch: java.lang.Throwable -> L9c
            com.loc.fa r4 = r9.a(r2, r5)     // Catch: java.lang.Throwable -> L9c
            goto L66
        L35:
            boolean r6 = r2 instanceof android.telephony.CellInfoGsm     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L40
            android.telephony.CellInfoGsm r2 = (android.telephony.CellInfoGsm) r2     // Catch: java.lang.Throwable -> L9c
            com.loc.fa r4 = a(r2, r5)     // Catch: java.lang.Throwable -> L9c
            goto L66
        L40:
            boolean r6 = r2 instanceof android.telephony.CellInfoWcdma     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L4b
            android.telephony.CellInfoWcdma r2 = (android.telephony.CellInfoWcdma) r2     // Catch: java.lang.Throwable -> L9c
            com.loc.fa r4 = a(r2, r5)     // Catch: java.lang.Throwable -> L9c
            goto L66
        L4b:
            boolean r6 = r2 instanceof android.telephony.CellInfoLte     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L56
            android.telephony.CellInfoLte r2 = (android.telephony.CellInfoLte) r2     // Catch: java.lang.Throwable -> L9c
            com.loc.fa r4 = a(r2, r5)     // Catch: java.lang.Throwable -> L9c
            goto L66
        L56:
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L9c
            r7 = 29
            if (r6 < r7) goto L66
            boolean r6 = r2 instanceof android.telephony.CellInfoNr     // Catch: java.lang.Throwable -> L9c
            if (r6 == 0) goto L66
            android.telephony.CellInfoNr r2 = (android.telephony.CellInfoNr) r2     // Catch: java.lang.Throwable -> L9c
            com.loc.fa r4 = a(r2, r5)     // Catch: java.lang.Throwable -> L9c
        L66:
            if (r4 == 0) goto L85
            com.loc.ez r2 = r9.m     // Catch: java.lang.Throwable -> L9c
            r2.a(r4)     // Catch: java.lang.Throwable -> L9c
            r5 = 65535(0xffff, double:3.23786E-319)
            com.loc.ez r2 = r9.m     // Catch: java.lang.Throwable -> L9c
            long r7 = r2.e(r4)     // Catch: java.lang.Throwable -> L9c
            long r5 = java.lang.Math.min(r5, r7)     // Catch: java.lang.Throwable -> L9c
            int r2 = (int) r5     // Catch: java.lang.Throwable -> L9c
            short r2 = (short) r2     // Catch: java.lang.Throwable -> L9c
            r4.m = r2     // Catch: java.lang.Throwable -> L9c
            r4.r = r3     // Catch: java.lang.Throwable -> L9c
            java.util.ArrayList<com.loc.fa> r2 = r9.l     // Catch: java.lang.Throwable -> L9c
            r2.add(r4)     // Catch: java.lang.Throwable -> L9c
        L85:
            int r1 = r1 + 1
            goto L16
        L88:
            r9.i = r0     // Catch: java.lang.Throwable -> L9c
            java.util.ArrayList<com.loc.fa> r10 = r9.l     // Catch: java.lang.Throwable -> L9c
            if (r10 == 0) goto L98
            java.util.ArrayList<com.loc.fa> r10 = r9.l     // Catch: java.lang.Throwable -> L9c
            int r10 = r10.size()     // Catch: java.lang.Throwable -> L9c
            if (r10 <= 0) goto L98
            r9.i = r3     // Catch: java.lang.Throwable -> L9c
        L98:
            monitor-exit(r9)
            return
        L9a:
            monitor-exit(r9)
            return
        L9c:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final void a(boolean r3) {
            r2 = this;
            com.loc.ez r0 = r2.m
            r0.a(r3)
            r0 = 0
            r2.n = r0
            java.lang.Object r3 = r2.p
            monitor-enter(r3)
            r0 = 1
            r2.o = r0     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2d
            android.telephony.TelephonyManager r3 = r2.b
            if (r3 == 0) goto L25
            android.telephony.PhoneStateListener r0 = r2.c
            if (r0 == 0) goto L25
            r1 = 0
            r3.listen(r0, r1)     // Catch: java.lang.Throwable -> L1d
            goto L25
        L1d:
            r3 = move-exception
            java.lang.String r0 = "CgiManager"
            java.lang.String r1 = "destroy"
            com.loc.fr.a(r3, r0, r1)
        L25:
            r3 = 0
            r2.c = r3
            r2.d = r3
            r2.b = r3
            return
        L2d:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2d
            throw r0
    }

    public final void a(boolean r2, boolean r3) {
            r1 = this;
            android.content.Context r0 = r1.h     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            boolean r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            r1.e = r0     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            boolean r0 = r1.s()     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            if (r0 == 0) goto L1f
            r1.b(r2, r3)     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            android.telephony.CellLocation r2 = r1.t()     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            r1.a(r2)     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            java.util.List r2 = r1.u()     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            r1.a(r2)     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
        L1f:
            boolean r2 = r1.e     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
            if (r2 == 0) goto L26
            r1.j()     // Catch: java.lang.Throwable -> L27 java.lang.SecurityException -> L30
        L26:
            return
        L27:
            r2 = move-exception
            java.lang.String r3 = "CgiManager"
            java.lang.String r0 = "refresh"
            com.loc.fr.a(r2, r3, r0)
            return
        L30:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            r1.g = r2
            return
    }

    public final void b() {
            r5 = this;
            r0 = 0
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L52
            r2 = 31
            if (r1 < r2) goto L51
            android.content.Context r1 = r5.h     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = "android.permission.ACCESS_FINE_LOCATION"
            int r1 = r1.checkSelfPermission(r2)     // Catch: java.lang.Throwable -> L52
            if (r1 != 0) goto L14
            java.lang.String r1 = "hasFineLocPerm"
            goto L16
        L14:
            java.lang.String r1 = "hasNoFineLocPerm"
        L16:
            android.content.Context r2 = r5.h     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = "android.permission.READ_PHONE_STATE"
            int r2 = r2.checkSelfPermission(r3)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L23
            java.lang.String r2 = "hasReadPhoneStatePerm"
            goto L25
        L23:
            java.lang.String r2 = "hasNoReadPhoneStatePerm"
        L25:
            java.lang.String r3 = r5.t     // Catch: java.lang.Throwable -> L52
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L52
            r4 = 1
            if (r3 != 0) goto L37
            java.lang.String r3 = r5.t     // Catch: java.lang.Throwable -> L52
            boolean r1 = r3.equals(r1)     // Catch: java.lang.Throwable -> L52
            if (r1 != 0) goto L37
            r0 = 1
        L37:
            java.lang.String r1 = r5.s     // Catch: java.lang.Throwable -> L52
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L52
            if (r1 != 0) goto L48
            java.lang.String r1 = r5.s     // Catch: java.lang.Throwable -> L52
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L52
            if (r1 != 0) goto L48
            goto L49
        L48:
            r4 = r0
        L49:
            if (r4 == 0) goto L51
            com.loc.ft.b()     // Catch: java.lang.Throwable -> L52
            r5.p()     // Catch: java.lang.Throwable -> L52
        L51:
            return
        L52:
            com.loc.ft.b()
            return
    }

    public final synchronized java.util.ArrayList<com.loc.fa> c() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.util.ArrayList<com.loc.fa> r1 = r3.a     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L24
            java.util.ArrayList<com.loc.fa> r1 = r3.a     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            com.loc.fa r2 = (com.loc.fa) r2     // Catch: java.lang.Throwable -> L26
            com.loc.fa r2 = r2.d()     // Catch: java.lang.Throwable -> L26
            r0.add(r2)     // Catch: java.lang.Throwable -> L26
            goto L10
        L24:
            monitor-exit(r3)
            return r0
        L26:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized java.util.ArrayList<com.loc.fa> d() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.util.ArrayList<com.loc.fa> r1 = r3.l     // Catch: java.lang.Throwable -> L26
            if (r1 == 0) goto L24
            java.util.ArrayList<com.loc.fa> r1 = r3.l     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
        L10:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L24
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            com.loc.fa r2 = (com.loc.fa) r2     // Catch: java.lang.Throwable -> L26
            com.loc.fa r2 = r2.d()     // Catch: java.lang.Throwable -> L26
            r0.add(r2)     // Catch: java.lang.Throwable -> L26
            goto L10
        L24:
            monitor-exit(r3)
            return r0
        L26:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized com.loc.fa e() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.e     // Catch: java.lang.Throwable -> L1f
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r3)
            return r1
        L8:
            java.util.ArrayList<com.loc.fa> r0 = r3.a     // Catch: java.lang.Throwable -> L1f
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L1f
            if (r2 <= 0) goto L1d
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L1f
            com.loc.fa r0 = (com.loc.fa) r0     // Catch: java.lang.Throwable -> L1f
            com.loc.fa r0 = r0.d()     // Catch: java.lang.Throwable -> L1f
            monitor-exit(r3)
            return r0
        L1d:
            monitor-exit(r3)
            return r1
        L1f:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized com.loc.fa f() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.e     // Catch: java.lang.Throwable -> L39
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r4)
            return r1
        L8:
            java.util.ArrayList<com.loc.fa> r0 = r4.l     // Catch: java.lang.Throwable -> L39
            int r2 = r0.size()     // Catch: java.lang.Throwable -> L39
            if (r2 <= 0) goto L37
            java.util.Iterator r1 = r0.iterator()     // Catch: java.lang.Throwable -> L39
        L14:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L39
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L39
            com.loc.fa r2 = (com.loc.fa) r2     // Catch: java.lang.Throwable -> L39
            boolean r3 = r2.n     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L14
            com.loc.fa r0 = r2.d()     // Catch: java.lang.Throwable -> L39
            monitor-exit(r4)
            return r0
        L2a:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L39
            com.loc.fa r0 = (com.loc.fa) r0     // Catch: java.lang.Throwable -> L39
            com.loc.fa r0 = r0.d()     // Catch: java.lang.Throwable -> L39
            monitor-exit(r4)
            return r0
        L37:
            monitor-exit(r4)
            return r1
        L39:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final int g() {
            r3 = this;
            int r0 = r3.q()
            boolean r1 = r3.i
            r2 = 0
            if (r1 == 0) goto Lb
            r1 = 4
            goto Lc
        Lb:
            r1 = 0
        Lc:
            r0 = r0 | r1
            boolean r1 = r3.j
            if (r1 == 0) goto L13
            r2 = 8
        L13:
            r0 = r0 | r2
            return r0
    }

    public final int h() {
            r1 = this;
            int r0 = r1.q()
            r0 = r0 & 3
            return r0
    }

    public final android.telephony.TelephonyManager i() {
            r1 = this;
            android.telephony.TelephonyManager r0 = r1.b
            return r0
    }

    final synchronized void j() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            r1.g = r0     // Catch: java.lang.Throwable -> L15
            java.util.ArrayList<com.loc.fa> r0 = r1.a     // Catch: java.lang.Throwable -> L15
            r0.clear()     // Catch: java.lang.Throwable -> L15
            java.util.ArrayList<com.loc.fa> r0 = r1.l     // Catch: java.lang.Throwable -> L15
            r0.clear()     // Catch: java.lang.Throwable -> L15
            r0 = 0
            r1.i = r0     // Catch: java.lang.Throwable -> L15
            r1.j = r0     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return
        L15:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public final synchronized java.lang.String m() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.e     // Catch: java.lang.Throwable -> L12e
            if (r0 == 0) goto L8
            r7.j()     // Catch: java.lang.Throwable -> L12e
        L8:
            java.lang.StringBuilder r0 = r7.f     // Catch: java.lang.Throwable -> L12e
            r1 = 0
            if (r0 != 0) goto L15
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12e
            r0.<init>()     // Catch: java.lang.Throwable -> L12e
            r7.f = r0     // Catch: java.lang.Throwable -> L12e
            goto L20
        L15:
            java.lang.StringBuilder r0 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r2 = r7.f     // Catch: java.lang.Throwable -> L12e
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L12e
            r0.delete(r1, r2)     // Catch: java.lang.Throwable -> L12e
        L20:
            int r0 = r7.h()     // Catch: java.lang.Throwable -> L12e
            r2 = 1
            if (r0 == r2) goto L28
            goto L70
        L28:
            r0 = 1
        L29:
            java.util.ArrayList<com.loc.fa> r3 = r7.a     // Catch: java.lang.Throwable -> L12e
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L12e
            if (r0 >= r3) goto L70
            java.lang.StringBuilder r3 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "#"
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            java.util.ArrayList<com.loc.fa> r4 = r7.a     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L12e
            com.loc.fa r4 = (com.loc.fa) r4     // Catch: java.lang.Throwable -> L12e
            int r4 = r4.b     // Catch: java.lang.Throwable -> L12e
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r3 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            java.util.ArrayList<com.loc.fa> r4 = r7.a     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L12e
            com.loc.fa r4 = (com.loc.fa) r4     // Catch: java.lang.Throwable -> L12e
            int r4 = r4.c     // Catch: java.lang.Throwable -> L12e
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r3 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            java.util.ArrayList<com.loc.fa> r4 = r7.a     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L12e
            com.loc.fa r4 = (com.loc.fa) r4     // Catch: java.lang.Throwable -> L12e
            int r4 = r4.d     // Catch: java.lang.Throwable -> L12e
            r3.append(r4)     // Catch: java.lang.Throwable -> L12e
            int r0 = r0 + 1
            goto L29
        L70:
            r0 = 1
        L71:
            java.util.ArrayList<com.loc.fa> r3 = r7.l     // Catch: java.lang.Throwable -> L12e
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L12e
            if (r0 >= r3) goto L119
            java.util.ArrayList<com.loc.fa> r3 = r7.l     // Catch: java.lang.Throwable -> L12e
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Throwable -> L12e
            com.loc.fa r3 = (com.loc.fa) r3     // Catch: java.lang.Throwable -> L12e
            int r4 = r3.l     // Catch: java.lang.Throwable -> L12e
            if (r4 == r2) goto Ld7
            int r4 = r3.l     // Catch: java.lang.Throwable -> L12e
            r5 = 3
            if (r4 == r5) goto Ld7
            int r4 = r3.l     // Catch: java.lang.Throwable -> L12e
            r5 = 4
            if (r4 == r5) goto Ld7
            int r4 = r3.l     // Catch: java.lang.Throwable -> L12e
            r5 = 5
            if (r4 != r5) goto L95
            goto Ld7
        L95:
            int r4 = r3.l     // Catch: java.lang.Throwable -> L12e
            r5 = 2
            if (r4 != r5) goto L115
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "#"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.l     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.a     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.h     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.i     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r3 = r3.j     // Catch: java.lang.Throwable -> L12e
            r4.append(r3)     // Catch: java.lang.Throwable -> L12e
            goto L115
        Ld7:
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "#"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.l     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.a     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.b     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            int r5 = r3.c     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            java.lang.StringBuilder r4 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r5 = "|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
            long r5 = r3.a()     // Catch: java.lang.Throwable -> L12e
            r4.append(r5)     // Catch: java.lang.Throwable -> L12e
        L115:
            int r0 = r0 + 1
            goto L71
        L119:
            java.lang.StringBuilder r0 = r7.f     // Catch: java.lang.Throwable -> L12e
            int r0 = r0.length()     // Catch: java.lang.Throwable -> L12e
            if (r0 <= 0) goto L126
            java.lang.StringBuilder r0 = r7.f     // Catch: java.lang.Throwable -> L12e
            r0.deleteCharAt(r1)     // Catch: java.lang.Throwable -> L12e
        L126:
            java.lang.StringBuilder r0 = r7.f     // Catch: java.lang.Throwable -> L12e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L12e
            monitor-exit(r7)
            return r0
        L12e:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final boolean n() {
            r3 = this;
            r0 = 1
            android.telephony.TelephonyManager r1 = r3.b     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1f
            android.telephony.TelephonyManager r1 = r3.b     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = r1.getSimOperator()     // Catch: java.lang.Throwable -> L1f
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L12
            return r0
        L12:
            android.telephony.TelephonyManager r1 = r3.b     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = r1.getSimCountryIso()     // Catch: java.lang.Throwable -> L1f
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L1f
            return r0
        L1f:
            android.content.Context r1 = r3.h     // Catch: java.lang.Throwable -> L38
            android.net.NetworkInfo r1 = com.loc.fz.c(r1)     // Catch: java.lang.Throwable -> L38
            int r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L37
            r2 = 4
            if (r1 == r2) goto L37
            r2 = 2
            if (r1 == r2) goto L37
            r2 = 5
            if (r1 == r2) goto L37
            r2 = 3
            if (r1 != r2) goto L38
        L37:
            return r0
        L38:
            r0 = 0
            return r0
    }
}
