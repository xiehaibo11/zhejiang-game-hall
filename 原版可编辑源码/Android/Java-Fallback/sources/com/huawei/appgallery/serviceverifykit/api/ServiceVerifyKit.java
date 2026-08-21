package com.huawei.appgallery.serviceverifykit.api;

public class ServiceVerifyKit {

    public static class Builder {
        private java.lang.String a;
        private java.lang.String b;
        private java.lang.String c;
        private java.lang.String d;
        private java.lang.String e;
        private java.util.Map<java.lang.String, java.lang.String[]> f;
        private java.util.Map<java.lang.String, java.lang.Integer> g;
        private java.util.List<java.lang.String> h;
        private java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b> i;
        private android.content.Context j;
        private int k;
        private int l;
        private int m;
        private android.content.Intent n;
        private com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType o;
        private java.lang.String p;
        private java.lang.String q;

        public enum ComponentType extends java.lang.Enum<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType> {
            private static final com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType[] $VALUES = null;
            public static final com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType ACTIVITY = null;
            public static final com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType BROADCAST = null;
            public static final com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType SERVICE = null;

            static {
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r0 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType
                    r1 = 0
                    java.lang.String r2 = "ACTIVITY"
                    r0.<init>(r2, r1)
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.ACTIVITY = r0
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r0 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType
                    r2 = 1
                    java.lang.String r3 = "SERVICE"
                    r0.<init>(r3, r2)
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.SERVICE = r0
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r0 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType
                    r3 = 2
                    java.lang.String r4 = "BROADCAST"
                    r0.<init>(r4, r3)
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.BROADCAST = r0
                    r4 = 3
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType[] r4 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType[r4]
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r5 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.ACTIVITY
                    r4[r1] = r5
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.SERVICE
                    r4[r2] = r1
                    r4[r3] = r0
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.$VALUES = r4
                    return
            }

            ComponentType(java.lang.String r1, int r2) {
                    r0 = this;
                    r0.<init>(r1, r2)
                    return
            }

            public static com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType valueOf(java.lang.String r1) {
                    java.lang.Class<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType> r0 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.class
                    java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = (com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType) r1
                    return r1
            }

            public static com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType[] values() {
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType[] r0 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.$VALUES
                    java.lang.Object r0 = r0.clone()
                    com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType[] r0 = (com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType[]) r0
                    return r0
            }
        }

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "AppGallery Verification"
                r1.b = r0
                java.lang.String r0 = "Huawei CBG Cloud Security Signer"
                r1.c = r0
                java.lang.String r0 = "com.huawei.appgallery.fingerprint_signature"
                r1.d = r0
                java.lang.String r0 = "com.huawei.appgallery.sign_certchain"
                r1.e = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.f = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.g = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.h = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.i = r0
                r0 = 0
                r1.l = r0
                r1.m = r0
                java.lang.String r0 = "verify_match_property"
                r1.p = r0
                return
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder addLegacyInfo(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.String[]> r0 = r1.f
                java.lang.Object r0 = r0.get(r2)
                java.lang.String[] r0 = (java.lang.String[]) r0
                java.lang.String[] r3 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.a(r0, r3)
                java.util.Map<java.lang.String, java.lang.String[]> r0 = r1.f
                r0.put(r2, r3)
                java.util.Map<java.lang.String, java.lang.Integer> r3 = r1.g
                int r0 = r1.l
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
                r3.put(r2, r0)
                return r1
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder addLegacyInfo(java.lang.String r2, java.lang.String r3, int r4) {
                r1 = this;
                java.util.Map<java.lang.String, java.lang.String[]> r0 = r1.f
                java.lang.Object r0 = r0.get(r2)
                java.lang.String[] r0 = (java.lang.String[]) r0
                java.lang.String[] r3 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.a(r0, r3)
                java.util.Map<java.lang.String, java.lang.String[]> r0 = r1.f
                r0.put(r2, r3)
                java.util.Map<java.lang.String, java.lang.Integer> r3 = r1.g
                java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
                r3.put(r2, r4)
                return r1
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder addMatchProperty(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input propertyName"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.q = r3
            L12:
                return r2
        }

        public java.lang.String genVerifiedPackageName() {
                r20 = this;
                r0 = r20
                com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit r1 = new com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit
                r2 = 0
                r1.<init>(r2)
                com.huawei.appgallery.serviceverifykit.c.a r2 = new com.huawei.appgallery.serviceverifykit.c.a
                android.content.Context r3 = r0.j
                r2.<init>(r3)
                java.lang.String r4 = r0.a
                java.lang.String r5 = r0.b
                java.lang.String r6 = r0.c
                java.lang.String r7 = r0.d
                java.lang.String r8 = r0.e
                java.util.Map<java.lang.String, java.lang.String[]> r9 = r0.f
                java.util.Map<java.lang.String, java.lang.Integer> r10 = r0.g
                int r11 = r0.k
                java.util.List<java.lang.String> r12 = r0.h
                java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$b> r13 = r0.i
                int r14 = r0.m
                java.lang.String r15 = r0.p
                java.lang.String r3 = r0.q
                r19 = r1
                android.content.Intent r1 = r0.n
                r17 = r1
                com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = r0.o
                r16 = r3
                r3 = r2
                r18 = r1
                r3.a(r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
                r1 = r19
                java.lang.String r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.a(r1, r2)
                return r1
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setCN(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input CN"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.b = r3
            L12:
                return r2
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setCertChainKey(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input chain key"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.e = r3
            L12:
                return r2
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setCertSignerKey(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input signer key"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.d = r3
            L12:
                return r2
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setConditions(int r2, com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b... r3) {
                r1 = this;
                int r0 = r3.length
                if (r0 == 0) goto Lb
                r1.m = r2
                java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$b> r2 = r1.i
                java.util.Collections.addAll(r2, r3)
                goto L14
            Lb:
                com.huawei.appgallery.serviceverifykit.d.d.b r2 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r3 = "ServiceVerifyKit"
                java.lang.String r0 = "error input conditions"
                r2.a(r3, r0)
            L14:
                return r1
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setContext(android.content.Context r1) {
                r0 = this;
                android.content.Context r1 = r1.getApplicationContext()
                r0.j = r1
                return r0
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setFlag(int r1) {
                r0 = this;
                r0.k = r1
                return r0
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setMatchMetaDataKey(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input propertyKey"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.p = r3
            L12:
                return r2
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setOU(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input OU"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.c = r3
            L12:
                return r2
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setPreferredPkgs(java.util.List<java.lang.String> r3) {
                r2 = this;
                boolean r0 = r3.isEmpty()
                if (r0 == 0) goto L10
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r0 = "ServiceVerifyKit"
                java.lang.String r1 = "error input preferred package name"
                r3.a(r0, r1)
                goto L12
            L10:
                r2.h = r3
            L12:
                return r2
        }

        @java.lang.Deprecated
        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setServiceName(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder setTargetComponent(android.content.Intent r3, com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType r4) {
                r2 = this;
                java.lang.String r0 = "ServiceVerifyKit"
                if (r3 != 0) goto Lc
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r1 = "error input intent"
                r3.a(r0, r1)
                goto Le
            Lc:
                r2.n = r3
            Le:
                if (r4 != 0) goto L18
                com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
                java.lang.String r4 = "error input type"
                r3.a(r0, r4)
                goto L1a
            L18:
                r2.o = r4
            L1a:
                return r2
        }
    }

    static class a {
    }

    public static class b {
        private java.lang.String a;
        private java.lang.String b;

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        public java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    private ServiceVerifyKit() {
            r0 = this;
            r0.<init>()
            return
    }

    ServiceVerifyKit(com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.a r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a(com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit r0, com.huawei.appgallery.serviceverifykit.c.a r1) {
            java.lang.String r0 = r0.a(r1)
            return r0
    }

    private java.lang.String a(com.huawei.appgallery.serviceverifykit.c.a r2) {
            r1 = this;
            java.util.List r2 = r2.a()
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto Lc
            r2 = 0
            return r2
        Lc:
            com.huawei.appgallery.serviceverifykit.b.a r0 = new com.huawei.appgallery.serviceverifykit.b.a
            r0.<init>()
            java.lang.String r2 = r0.a(r2)
            return r2
    }

    static java.lang.String[] a(java.lang.String[] r0, java.lang.String r1) {
            java.lang.String[] r0 = b(r0, r1)
            return r0
    }

    private static java.lang.String[] b(java.lang.String[] r4, java.lang.String r5) {
            r0 = 0
            if (r4 != 0) goto L9
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]
            r4[r0] = r5
            return r4
        L9:
            int r1 = r4.length
            r2 = r0
        Lb:
            if (r2 >= r1) goto L19
            r3 = r4[r2]
            boolean r3 = android.text.TextUtils.equals(r3, r5)
            if (r3 == 0) goto L16
            return r4
        L16:
            int r2 = r2 + 1
            goto Lb
        L19:
            int r2 = r1 + 1
            java.lang.String[] r2 = new java.lang.String[r2]
            java.lang.System.arraycopy(r4, r0, r2, r0, r1)
            r2[r1] = r5
            return r2
    }
}
