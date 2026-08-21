package com.bianfeng.afext.write;

public final class ChannelWriter {
    private ChannelWriter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void put(java.io.File r1, java.lang.String r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            put(r1, r2, r0)
            return
    }

    public static void put(java.io.File r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            put(r1, r2, r3, r0)
            return
    }

    public static void put(java.io.File r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4, boolean r5) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r1 = com.bianfeng.afext.read.ChannelReader.getMap(r2)
            if (r1 == 0) goto Le
            r0.putAll(r1)
        Le:
            java.lang.String r1 = "ymn_channel"
            if (r4 == 0) goto L18
            r4.remove(r1)
            r0.putAll(r4)
        L18:
            if (r3 == 0) goto L23
            int r4 = r3.length()
            if (r4 <= 0) goto L23
            r0.put(r1, r3)
        L23:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.util.Set r4 = r0.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L30:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            r3.put(r1, r0)
            goto L30
        L4a:
            java.lang.String r3 = r3.toString()
            putRaw(r2, r3, r5)
            return
    }

    public static void put(java.io.File r1, java.lang.String r2, boolean r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            put(r1, r2, r0, r3)
            return
    }

    public static void putRaw(java.io.File r1, java.lang.String r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            putRaw(r1, r2, r0)
            return
    }

    public static void putRaw(java.io.File r1, java.lang.String r2, boolean r3) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 1903654775(0x71777777, float:1.22539554E30)
            com.bianfeng.afext.write.PayloadWriter.put(r1, r0, r2, r3)
            return
    }

    public static void remove(java.io.File r1) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 0
            remove(r1, r0)
            return
    }

    public static void remove(java.io.File r1, boolean r2) throws java.io.IOException, com.bianfeng.afext.read.SignatureNotFoundException {
            r0 = 1903654775(0x71777777, float:1.22539554E30)
            com.bianfeng.afext.write.PayloadWriter.remove(r1, r0, r2)
            return
    }
}
