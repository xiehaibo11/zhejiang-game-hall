package com.huawei.updatesdk.fileprovider;

class b implements com.huawei.updatesdk.fileprovider.a {
    private final java.lang.String a;
    private final java.util.HashMap<java.lang.String, java.io.File> b;

    protected b(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            r1.a = r2
            return
    }

    @Override
    public android.net.Uri a(java.io.File r6) {
            r5 = this;
            java.lang.String r6 = r6.getCanonicalPath()     // Catch: java.lang.Exception -> La6
            r0 = 0
            java.util.HashMap<java.lang.String, java.io.File> r1 = r5.b
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            java.io.File r3 = (java.io.File) r3
            java.lang.String r3 = r3.getPath()
            boolean r4 = r6.startsWith(r3)
            if (r4 == 0) goto Lf
            if (r0 == 0) goto L41
            int r3 = r3.length()
            java.lang.Object r4 = r0.getValue()
            java.io.File r4 = (java.io.File) r4
            java.lang.String r4 = r4.getPath()
            int r4 = r4.length()
            if (r3 <= r4) goto Lf
        L41:
            r0 = r2
            goto Lf
        L43:
            if (r0 == 0) goto L9e
            java.lang.Object r1 = r0.getValue()
            java.io.File r1 = (java.io.File) r1
            java.lang.String r1 = r1.getPath()
            java.lang.String r2 = "/"
            boolean r3 = r1.endsWith(r2)
            int r1 = r1.length()
            if (r3 == 0) goto L5c
            goto L5e
        L5c:
            int r1 = r1 + 1
        L5e:
            java.lang.String r6 = r6.substring(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = android.net.Uri.encode(r0)
            r1.append(r0)
            r0 = 47
            r1.append(r0)
            java.lang.String r6 = android.net.Uri.encode(r6, r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            android.net.Uri$Builder r0 = new android.net.Uri$Builder
            r0.<init>()
            java.lang.String r1 = "content"
            android.net.Uri$Builder r0 = r0.scheme(r1)
            java.lang.String r1 = r5.a
            android.net.Uri$Builder r0 = r0.authority(r1)
            android.net.Uri$Builder r6 = r0.encodedPath(r6)
            android.net.Uri r6 = r6.build()
            return r6
        L9e:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wisedist: Failed to find configured root that contains"
            r6.<init>(r0)
            throw r6
        La6:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Failed to resolve canonical path for wisedist"
            r6.<init>(r0)
            throw r6
    }

    @Override
    public java.io.File a(android.net.Uri r4) {
            r3 = this;
            java.lang.String r4 = r4.getEncodedPath()     // Catch: java.lang.Exception -> L8c
            r0 = 47
            r1 = 1
            int r0 = r4.indexOf(r0, r1)     // Catch: java.lang.Exception -> L8c
            java.lang.String r2 = r4.substring(r1, r0)     // Catch: java.lang.Exception -> L8c
            java.lang.String r2 = android.net.Uri.decode(r2)     // Catch: java.lang.Exception -> L8c
            int r0 = r0 + r1
            java.lang.String r4 = r4.substring(r0)     // Catch: java.lang.Exception -> L8c
            java.lang.String r4 = android.net.Uri.decode(r4)     // Catch: java.lang.Exception -> L8c
            java.util.HashMap<java.lang.String, java.io.File> r0 = r3.b     // Catch: java.lang.Exception -> L8c
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L8c
            java.io.File r0 = (java.io.File) r0     // Catch: java.lang.Exception -> L8c
            if (r0 == 0) goto L84
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L7c
            java.lang.String r1 = "../"
            boolean r1 = r4.contains(r1)
            if (r1 != 0) goto L7c
            java.lang.String r1 = ".."
            boolean r1 = r4.contains(r1)
            if (r1 != 0) goto L7c
            java.lang.String r1 = "%00"
            boolean r1 = r4.contains(r1)
            if (r1 != 0) goto L7c
            java.lang.String r1 = ".\\.\\"
            boolean r1 = r4.contains(r1)
            if (r1 != 0) goto L7c
            java.lang.String r1 = "./"
            boolean r1 = r4.contains(r1)
            if (r1 != 0) goto L7c
            java.io.File r1 = new java.io.File
            r1.<init>(r0, r4)
            java.io.File r4 = r1.getCanonicalFile()     // Catch: java.io.IOException -> L74
            java.lang.String r1 = r4.getPath()
            java.lang.String r0 = r0.getPath()
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L6c
            return r4
        L6c:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            java.lang.String r0 = "wisedist: Resolved path jumped beyond configured root"
            r4.<init>(r0)
            throw r4
        L74:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wisedist: Failed to resolve canonical path for"
            r4.<init>(r0)
            throw r4
        L7c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wisedist: Not a standard path"
            r4.<init>(r0)
            throw r4
        L84:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wisedist: Unable to find configured root for"
            r4.<init>(r0)
            throw r4
        L8c:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "UpdateSDKFileProvider error: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public void a(java.lang.String r2, java.io.File r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L18
            java.io.File r3 = r3.getCanonicalFile()     // Catch: java.lang.Exception -> L10
            java.util.HashMap<java.lang.String, java.io.File> r0 = r1.b
            r0.put(r2, r3)
            return
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Failed to resolve canonical path for root"
            r2.<init>(r3)
            throw r2
        L18:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "wisedist Name must not be empty"
            r2.<init>(r3)
            throw r2
    }
}
