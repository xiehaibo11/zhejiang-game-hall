package com.google.gson.internal.bind;

public final class DateTypeAdapter extends com.google.gson.TypeAdapter<java.util.Date> {
    public static final com.google.gson.TypeAdapterFactory FACTORY = null;
    private final java.util.List<java.text.DateFormat> dateFormats;


    static {
            com.google.gson.internal.bind.DateTypeAdapter$1 r0 = new com.google.gson.internal.bind.DateTypeAdapter$1
            r0.<init>()
            com.google.gson.internal.bind.DateTypeAdapter.FACTORY = r0
            return
    }

    public DateTypeAdapter() {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.dateFormats = r0
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.util.Locale r1 = java.util.Locale.US
            r2 = 2
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r2, r2, r1)
            r0.add(r1)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.util.Locale r1 = java.util.Locale.US
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r2, r2)
            r0.add(r1)
        L2b:
            boolean r0 = com.google.gson.internal.JavaVersion.isJava9OrLater()
            if (r0 == 0) goto L3a
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.DateFormat r1 = com.google.gson.internal.PreJava9DateFormatProvider.getUSDateTimeFormat(r2, r2)
            r0.add(r1)
        L3a:
            return
    }

    private synchronized java.util.Date deserializeToDate(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats     // Catch: java.lang.Throwable -> L2e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2e
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2e
            java.text.DateFormat r1 = (java.text.DateFormat) r1     // Catch: java.lang.Throwable -> L2e
            java.util.Date r0 = r1.parse(r4)     // Catch: java.text.ParseException -> L19 java.lang.Throwable -> L2e
            monitor-exit(r3)
            return r0
        L19:
            r2 = move-exception
            goto L7
        L1b:
            java.text.ParsePosition r0 = new java.text.ParsePosition     // Catch: java.text.ParseException -> L27 java.lang.Throwable -> L2e
            r1 = 0
            r0.<init>(r1)     // Catch: java.text.ParseException -> L27 java.lang.Throwable -> L2e
            java.util.Date r0 = com.google.gson.internal.bind.util.ISO8601Utils.parse(r4, r0)     // Catch: java.text.ParseException -> L27 java.lang.Throwable -> L2e
            monitor-exit(r3)
            return r0
        L27:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L2e
            r1.<init>(r4, r0)     // Catch: java.lang.Throwable -> L2e
            throw r1     // Catch: java.lang.Throwable -> L2e
        L2e:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    @Override
    public java.util.Date read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
            r0 = this;
            java.util.Date r1 = r0.read(r1)
            return r1
    }

    @Override
    public java.util.Date read(com.google.gson.stream.JsonReader r3) throws java.io.IOException {
            r2 = this;
            com.google.gson.stream.JsonToken r0 = r3.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            if (r0 != r1) goto Ld
            r3.nextNull()
            r0 = 0
            return r0
        Ld:
            java.lang.String r0 = r3.nextString()
            java.util.Date r0 = r2.deserializeToDate(r0)
            return r0
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r1, java.util.Date r2) throws java.io.IOException {
            r0 = this;
            java.util.Date r2 = (java.util.Date) r2
            r0.write(r1, r2)
            return
    }

    public synchronized void write(com.google.gson.stream.JsonWriter r3, java.util.Date r4) throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            if (r4 != 0) goto L8
            r3.nullValue()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)
            return
        L8:
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L1a
            java.text.DateFormat r0 = (java.text.DateFormat) r0     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.format(r4)     // Catch: java.lang.Throwable -> L1a
            r3.value(r0)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r2)
            return
        L1a:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
