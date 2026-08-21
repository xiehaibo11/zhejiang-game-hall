package org.bouncycastle.jce.provider;

class ProviderUtil {
    private static java.security.Permission BC_EC_LOCAL_PERMISSION;
    private static java.security.Permission BC_EC_PERMISSION;
    private static final long MAX_MEMORY = 0;
    private static volatile org.bouncycastle.jce.spec.ECParameterSpec ecImplicitCaParams;
    private static java.lang.ThreadLocal threadSpec;

    static {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
            long r0 = r0.maxMemory()
            org.bouncycastle.jce.provider.ProviderUtil.MAX_MEMORY = r0
            org.bouncycastle.jce.ProviderConfigurationPermission r0 = new org.bouncycastle.jce.ProviderConfigurationPermission
            java.lang.String r1 = "BC"
            java.lang.String r2 = "threadLocalEcImplicitlyCa"
            r0.<init>(r1, r2)
            org.bouncycastle.jce.provider.ProviderUtil.BC_EC_LOCAL_PERMISSION = r0
            org.bouncycastle.jce.ProviderConfigurationPermission r0 = new org.bouncycastle.jce.ProviderConfigurationPermission
            java.lang.String r2 = "ecImplicitlyCa"
            r0.<init>(r1, r2)
            org.bouncycastle.jce.provider.ProviderUtil.BC_EC_PERMISSION = r0
            java.lang.ThreadLocal r0 = new java.lang.ThreadLocal
            r0.<init>()
            org.bouncycastle.jce.provider.ProviderUtil.threadSpec = r0
            return
    }

    ProviderUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static org.bouncycastle.jce.spec.ECParameterSpec getEcImplicitlyCa() {
            java.lang.ThreadLocal r0 = org.bouncycastle.jce.provider.ProviderUtil.threadSpec
            java.lang.Object r0 = r0.get()
            org.bouncycastle.jce.spec.ECParameterSpec r0 = (org.bouncycastle.jce.spec.ECParameterSpec) r0
            if (r0 == 0) goto Lb
            return r0
        Lb:
            org.bouncycastle.jce.spec.ECParameterSpec r0 = org.bouncycastle.jce.provider.ProviderUtil.ecImplicitCaParams
            return r0
    }

    static int getReadLimit(java.io.InputStream r4) throws java.io.IOException {
            boolean r0 = r4 instanceof java.io.ByteArrayInputStream
            if (r0 == 0) goto L9
            int r4 = r4.available()
            return r4
        L9:
            long r0 = org.bouncycastle.jce.provider.ProviderUtil.MAX_MEMORY
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L16
            r4 = 2147483647(0x7fffffff, float:NaN)
            return r4
        L16:
            int r4 = (int) r0
            return r4
    }

    static void setParameter(java.lang.String r3, java.lang.Object r4) {
            java.lang.SecurityManager r0 = java.lang.System.getSecurityManager()
            java.lang.String r1 = "threadLocalEcImplicitlyCa"
            boolean r1 = r3.equals(r1)
            r2 = 0
            if (r1 == 0) goto L33
            if (r0 == 0) goto L14
            java.security.Permission r3 = org.bouncycastle.jce.provider.ProviderUtil.BC_EC_LOCAL_PERMISSION
            r0.checkPermission(r3)
        L14:
            boolean r3 = r4 instanceof org.bouncycastle.jce.spec.ECParameterSpec
            if (r3 != 0) goto L22
            if (r4 != 0) goto L1b
            goto L22
        L1b:
            java.security.spec.ECParameterSpec r4 = (java.security.spec.ECParameterSpec) r4
            org.bouncycastle.jce.spec.ECParameterSpec r3 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r4, r2)
            goto L25
        L22:
            r3 = r4
            org.bouncycastle.jce.spec.ECParameterSpec r3 = (org.bouncycastle.jce.spec.ECParameterSpec) r3
        L25:
            if (r3 != 0) goto L2d
            java.lang.ThreadLocal r3 = org.bouncycastle.jce.provider.ProviderUtil.threadSpec
            r3.remove()
            goto L56
        L2d:
            java.lang.ThreadLocal r4 = org.bouncycastle.jce.provider.ProviderUtil.threadSpec
            r4.set(r3)
            goto L56
        L33:
            java.lang.String r1 = "ecImplicitlyCa"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L56
            if (r0 == 0) goto L42
            java.security.Permission r3 = org.bouncycastle.jce.provider.ProviderUtil.BC_EC_PERMISSION
            r0.checkPermission(r3)
        L42:
            boolean r3 = r4 instanceof org.bouncycastle.jce.spec.ECParameterSpec
            if (r3 != 0) goto L52
            if (r4 != 0) goto L49
            goto L52
        L49:
            java.security.spec.ECParameterSpec r4 = (java.security.spec.ECParameterSpec) r4
            org.bouncycastle.jce.spec.ECParameterSpec r3 = org.bouncycastle.jce.provider.EC5Util.convertSpec(r4, r2)
            org.bouncycastle.jce.provider.ProviderUtil.ecImplicitCaParams = r3
            goto L56
        L52:
            org.bouncycastle.jce.spec.ECParameterSpec r4 = (org.bouncycastle.jce.spec.ECParameterSpec) r4
            org.bouncycastle.jce.provider.ProviderUtil.ecImplicitCaParams = r4
        L56:
            return
    }
}
