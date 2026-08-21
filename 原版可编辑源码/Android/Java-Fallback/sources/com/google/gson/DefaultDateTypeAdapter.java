package com.google.gson;

final class DefaultDateTypeAdapter extends com.google.gson.TypeAdapter<java.util.Date> {
    private static final java.lang.String SIMPLE_NAME = "DefaultDateTypeAdapter";
    private final java.util.List<java.text.DateFormat> dateFormats;
    private final java.lang.Class<? extends java.util.Date> dateType;

    public DefaultDateTypeAdapter(int r2, int r3) {
            r1 = this;
            java.lang.Class<java.util.Date> r0 = java.util.Date.class
            r1.<init>(r0, r2, r3)
            return
    }

    DefaultDateTypeAdapter(java.lang.Class<? extends java.util.Date> r4) {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.dateFormats = r0
            java.lang.Class r0 = verifyDateType(r4)
            r3.dateType = r0
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.util.Locale r1 = java.util.Locale.US
            r2 = 2
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r2, r2, r1)
            r0.add(r1)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.util.Locale r1 = java.util.Locale.US
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L31
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r2, r2)
            r0.add(r1)
        L31:
            boolean r0 = com.google.gson.internal.JavaVersion.isJava9OrLater()
            if (r0 == 0) goto L40
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.DateFormat r1 = com.google.gson.internal.PreJava9DateFormatProvider.getUSDateTimeFormat(r2, r2)
            r0.add(r1)
        L40:
            return
    }

    DefaultDateTypeAdapter(java.lang.Class<? extends java.util.Date> r3, int r4) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.dateFormats = r0
            java.lang.Class r0 = verifyDateType(r3)
            r2.dateType = r0
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.util.Locale r1 = java.util.Locale.US
            java.text.DateFormat r1 = java.text.DateFormat.getDateInstance(r4, r1)
            r0.add(r1)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.util.Locale r1 = java.util.Locale.US
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L30
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.text.DateFormat r1 = java.text.DateFormat.getDateInstance(r4)
            r0.add(r1)
        L30:
            boolean r0 = com.google.gson.internal.JavaVersion.isJava9OrLater()
            if (r0 == 0) goto L3f
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.text.DateFormat r1 = com.google.gson.internal.PreJava9DateFormatProvider.getUSDateFormat(r4)
            r0.add(r1)
        L3f:
            return
    }

    public DefaultDateTypeAdapter(java.lang.Class<? extends java.util.Date> r3, int r4, int r5) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.dateFormats = r0
            java.lang.Class r0 = verifyDateType(r3)
            r2.dateType = r0
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.util.Locale r1 = java.util.Locale.US
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r4, r5, r1)
            r0.add(r1)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.util.Locale r1 = java.util.Locale.US
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L30
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.text.DateFormat r1 = java.text.DateFormat.getDateTimeInstance(r4, r5)
            r0.add(r1)
        L30:
            boolean r0 = com.google.gson.internal.JavaVersion.isJava9OrLater()
            if (r0 == 0) goto L3f
            java.util.List<java.text.DateFormat> r0 = r2.dateFormats
            java.text.DateFormat r1 = com.google.gson.internal.PreJava9DateFormatProvider.getUSDateTimeFormat(r4, r5)
            r0.add(r1)
        L3f:
            return
    }

    DefaultDateTypeAdapter(java.lang.Class<? extends java.util.Date> r4, java.lang.String r5) {
            r3 = this;
            r3.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.dateFormats = r0
            java.lang.Class r0 = verifyDateType(r4)
            r3.dateType = r0
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.util.Locale r2 = java.util.Locale.US
            r1.<init>(r5, r2)
            r0.add(r1)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.util.Locale r1 = java.util.Locale.US
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L32
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            r1.<init>(r5)
            r0.add(r1)
        L32:
            return
    }

    private java.util.Date deserializeToDate(java.lang.String r5) {
            r4 = this;
            java.util.List<java.text.DateFormat> r0 = r4.dateFormats
            monitor-enter(r0)
            java.util.List<java.text.DateFormat> r1 = r4.dateFormats     // Catch: java.lang.Throwable -> L30
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L30
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L1d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L30
            java.text.DateFormat r2 = (java.text.DateFormat) r2     // Catch: java.lang.Throwable -> L30
            java.util.Date r1 = r2.parse(r5)     // Catch: java.text.ParseException -> L1b java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r1
        L1b:
            r3 = move-exception
            goto L9
        L1d:
            java.text.ParsePosition r1 = new java.text.ParsePosition     // Catch: java.text.ParseException -> L29 java.lang.Throwable -> L30
            r2 = 0
            r1.<init>(r2)     // Catch: java.text.ParseException -> L29 java.lang.Throwable -> L30
            java.util.Date r1 = com.google.gson.internal.bind.util.ISO8601Utils.parse(r5, r1)     // Catch: java.text.ParseException -> L29 java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r1
        L29:
            r1 = move-exception
            com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.Throwable -> L30
            r2.<init>(r5, r1)     // Catch: java.lang.Throwable -> L30
            throw r2     // Catch: java.lang.Throwable -> L30
        L30:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r1
    }

    private static java.lang.Class<? extends java.util.Date> verifyDateType(java.lang.Class<? extends java.util.Date> r3) {
            java.lang.Class<java.util.Date> r0 = java.util.Date.class
            if (r3 == r0) goto L42
            java.lang.Class<java.sql.Date> r0 = java.sql.Date.class
            if (r3 == r0) goto L42
            java.lang.Class<java.sql.Timestamp> r0 = java.sql.Timestamp.class
            if (r3 != r0) goto Ld
            goto L42
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Date type must be one of "
            r1.append(r2)
            java.lang.Class<java.util.Date> r2 = java.util.Date.class
            r1.append(r2)
            java.lang.String r2 = ", "
            r1.append(r2)
            java.lang.Class<java.sql.Timestamp> r2 = java.sql.Timestamp.class
            r1.append(r2)
            java.lang.String r2 = ", or "
            r1.append(r2)
            java.lang.Class<java.sql.Date> r2 = java.sql.Date.class
            r1.append(r2)
            java.lang.String r2 = " but was "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L42:
            return r3
    }

    @Override
    public java.util.Date read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
            r0 = this;
            java.util.Date r1 = r0.read(r1)
            return r1
    }

    @Override
    public java.util.Date read(com.google.gson.stream.JsonReader r5) throws java.io.IOException {
            r4 = this;
            com.google.gson.stream.JsonToken r0 = r5.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            if (r0 != r1) goto Ld
            r5.nextNull()
            r0 = 0
            return r0
        Ld:
            java.lang.String r0 = r5.nextString()
            java.util.Date r0 = r4.deserializeToDate(r0)
            java.lang.Class<? extends java.util.Date> r1 = r4.dateType
            java.lang.Class<java.util.Date> r2 = java.util.Date.class
            if (r1 != r2) goto L1c
            return r0
        L1c:
            java.lang.Class<java.sql.Timestamp> r2 = java.sql.Timestamp.class
            if (r1 != r2) goto L2a
            java.sql.Timestamp r1 = new java.sql.Timestamp
            long r2 = r0.getTime()
            r1.<init>(r2)
            return r1
        L2a:
            java.lang.Class<java.sql.Date> r2 = java.sql.Date.class
            if (r1 != r2) goto L38
            java.sql.Date r1 = new java.sql.Date
            long r2 = r0.getTime()
            r1.<init>(r2)
            return r1
        L38:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
    }

    public java.lang.String toString() {
            r4 = this;
            java.util.List<java.text.DateFormat> r0 = r4.dateFormats
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            java.text.DateFormat r0 = (java.text.DateFormat) r0
            boolean r1 = r0 instanceof java.text.SimpleDateFormat
            r2 = 41
            java.lang.String r3 = "DefaultDateTypeAdapter("
            if (r1 == 0) goto L2b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r3 = r0
            java.text.SimpleDateFormat r3 = (java.text.SimpleDateFormat) r3
            java.lang.String r3 = r3.toPattern()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
        L2b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.Class r3 = r0.getClass()
            java.lang.String r3 = r3.getSimpleName()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            return r1
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r1, java.util.Date r2) throws java.io.IOException {
            r0 = this;
            java.util.Date r2 = (java.util.Date) r2
            r0.write(r1, r2)
            return
    }

    public void write(com.google.gson.stream.JsonWriter r4, java.util.Date r5) throws java.io.IOException {
            r3 = this;
            if (r5 != 0) goto L6
            r4.nullValue()
            return
        L6:
            java.util.List<java.text.DateFormat> r0 = r3.dateFormats
            monitor-enter(r0)
            java.util.List<java.text.DateFormat> r1 = r3.dateFormats     // Catch: java.lang.Throwable -> L1c
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L1c
            java.text.DateFormat r1 = (java.text.DateFormat) r1     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = r1.format(r5)     // Catch: java.lang.Throwable -> L1c
            r4.value(r1)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            return
        L1c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r1
    }
}
