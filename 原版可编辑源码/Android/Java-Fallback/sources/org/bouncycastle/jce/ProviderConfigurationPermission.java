package org.bouncycastle.jce;

public class ProviderConfigurationPermission extends java.security.BasicPermission {
    private static final int ALL = 3;
    private static final java.lang.String ALL_STR = "all";
    private static final int EC_IMPLICITLY_CA = 2;
    private static final java.lang.String EC_IMPLICITLY_CA_STR = "ecimplicitlyca";
    private static final int THREAD_LOCAL_EC_IMPLICITLY_CA = 1;
    private static final java.lang.String THREAD_LOCAL_EC_IMPLICITLY_CA_STR = "threadlocalecimplicitlyca";
    private final java.lang.String actions;
    private final int permissionMask;

    public ProviderConfigurationPermission(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "all"
            r0.actions = r1
            r1 = 3
            r0.permissionMask = r1
            return
    }

    public ProviderConfigurationPermission(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.actions = r2
            int r1 = r0.calculateMask(r2)
            r0.permissionMask = r1
            return
    }

    private int calculateMask(java.lang.String r4) {
            r3 = this;
            java.util.StringTokenizer r0 = new java.util.StringTokenizer
            java.lang.String r4 = org.bouncycastle.util.Strings.toLowerCase(r4)
            java.lang.String r1 = " ,"
            r0.<init>(r4, r1)
            r4 = 0
        Lc:
            boolean r1 = r0.hasMoreTokens()
            if (r1 == 0) goto L37
            java.lang.String r1 = r0.nextToken()
            java.lang.String r2 = "threadlocalecimplicitlyca"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L21
            r4 = r4 | 1
            goto Lc
        L21:
            java.lang.String r2 = "ecimplicitlyca"
            boolean r2 = r1.equals(r2)
            if (r2 == 0) goto L2c
            r4 = r4 | 2
            goto Lc
        L2c:
            java.lang.String r2 = "all"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lc
            r4 = r4 | 3
            goto Lc
        L37:
            if (r4 == 0) goto L3a
            return r4
        L3a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown permissions passed to mask"
            r4.<init>(r0)
            throw r4
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof org.bouncycastle.jce.ProviderConfigurationPermission
            r2 = 0
            if (r1 == 0) goto L22
            org.bouncycastle.jce.ProviderConfigurationPermission r5 = (org.bouncycastle.jce.ProviderConfigurationPermission) r5
            int r1 = r4.permissionMask
            int r3 = r5.permissionMask
            if (r1 != r3) goto L20
            java.lang.String r1 = r4.getName()
            java.lang.String r5 = r5.getName()
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L20
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
        L22:
            return r2
    }

    @Override
    public java.lang.String getActions() {
            r1 = this;
            java.lang.String r0 = r1.actions
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.getName()
            int r0 = r0.hashCode()
            int r1 = r2.permissionMask
            int r0 = r0 + r1
            return r0
    }

    @Override
    public boolean implies(java.security.Permission r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.ProviderConfigurationPermission
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r0 = r3.getName()
            java.lang.String r2 = r4.getName()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L15
            return r1
        L15:
            org.bouncycastle.jce.ProviderConfigurationPermission r4 = (org.bouncycastle.jce.ProviderConfigurationPermission) r4
            int r0 = r3.permissionMask
            int r4 = r4.permissionMask
            r0 = r0 & r4
            if (r0 != r4) goto L1f
            r1 = 1
        L1f:
            return r1
    }
}
