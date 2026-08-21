package com.google.gson.internal.bind;

public final class TimeTypeAdapter extends com.google.gson.TypeAdapter<java.sql.Time> {
    public static final com.google.gson.TypeAdapterFactory FACTORY = null;
    private final java.text.DateFormat format;


    static {
            com.google.gson.internal.bind.TimeTypeAdapter$1 r0 = new com.google.gson.internal.bind.TimeTypeAdapter$1
            r0.<init>()
            com.google.gson.internal.bind.TimeTypeAdapter.FACTORY = r0
            return
    }

    public TimeTypeAdapter() {
            r2 = this;
            r2.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "hh:mm:ss a"
            r0.<init>(r1)
            r2.format = r0
            return
    }

    @Override
    public java.sql.Time read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
            r0 = this;
            java.sql.Time r1 = r0.read(r1)
            return r1
    }

    @Override
    public synchronized java.sql.Time read(com.google.gson.stream.JsonReader r5) throws java.io.IOException {
            r4 = this;
            monitor-enter(r4)
            com.google.gson.stream.JsonToken r0 = r5.peek()     // Catch: java.lang.Throwable -> L2b
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL     // Catch: java.lang.Throwable -> L2b
            if (r0 != r1) goto Lf
            r5.nextNull()     // Catch: java.lang.Throwable -> L2b
            r0 = 0
            monitor-exit(r4)
            return r0
        Lf:
            java.text.DateFormat r0 = r4.format     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.lang.String r1 = r5.nextString()     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.util.Date r0 = r0.parse(r1)     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            java.sql.Time r1 = new java.sql.Time     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            long r2 = r0.getTime()     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            r1.<init>(r2)     // Catch: java.text.ParseException -> L24 java.lang.Throwable -> L2b
            monitor-exit(r4)
            return r1
        L24:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1     // Catch: java.lang.Throwable -> L2b
        L2b:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r1, java.sql.Time r2) throws java.io.IOException {
            r0 = this;
            java.sql.Time r2 = (java.sql.Time) r2
            r0.write(r1, r2)
            return
    }

    public synchronized void write(com.google.gson.stream.JsonWriter r2, java.sql.Time r3) throws java.io.IOException {
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
