package com.google.gson.internal.bind;

public final class SqlDateTypeAdapter extends com.google.gson.TypeAdapter<java.sql.Date> {
    public static final com.google.gson.TypeAdapterFactory FACTORY = null;
    private final java.text.DateFormat format;


    static {
            com.google.gson.internal.bind.SqlDateTypeAdapter$1 r0 = new com.google.gson.internal.bind.SqlDateTypeAdapter$1
            r0.<init>()
            com.google.gson.internal.bind.SqlDateTypeAdapter.FACTORY = r0
            return
    }

    public SqlDateTypeAdapter() {
            r2 = this;
            r2.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "MMM d, yyyy"
            r0.<init>(r1)
            r2.format = r0
            return
    }

    @Override
    public java.sql.Date read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
            r0 = this;
            java.sql.Date r1 = r0.read(r1)
            return r1
    }

    @Override
    public synchronized java.sql.Date read(com.google.gson.stream.JsonReader r4) throws java.io.IOException {
            r3 = this;
            monitor-enter(r3)
            com.google.gson.stream.JsonToken r0 = r4.peek()     // Catch: java.lang.Throwable -> L2b
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL     // Catch: java.lang.Throwable -> L2b
            if (r0 != r1) goto Lf
            r4.nextNull()     // Catch: java.lang.Throwable -> L2b
            r0 = 0
            monitor-exit(r3)
            return r0
        Lf:
            java.text.DateFormat r0 = r3.format     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.lang.String r1 = r4.nextString()     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.util.Date r0 = r0.parse(r1)     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            long r0 = r0.getTime()     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.sql.Date r2 = new java.sql.Date     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            r2.<init>(r0)     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            monitor-exit(r3)
            return r2
        L24:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1     // Catch: java.lang.Throwable -> L2b
        L2b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r1, java.sql.Date r2) throws java.io.IOException {
            r0 = this;
            java.sql.Date r2 = (java.sql.Date) r2
            r0.write(r1, r2)
            return
    }

    public synchronized void write(com.google.gson.stream.JsonWriter r2, java.sql.Date r3) throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            if (r3 != 0) goto L5
            r0 = 0
            goto Lb
        L5:
            java.text.DateFormat r0 = r1.format     // Catch: java.lang.Throwable -> L10
            java.lang.String r0 = r0.format(r3)     // Catch: java.lang.Throwable -> L10
        Lb:
            r2.value(r0)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
