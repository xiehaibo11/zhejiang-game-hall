package com.google.gson.internal.bind;

import com.google.gson.JsonSyntaxException;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.internal.JavaVersion;
import com.google.gson.internal.PreJava9DateFormatProvider;
import com.google.gson.internal.bind.util.ISO8601Utils;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.ParsePosition;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;

public final class DateTypeAdapter extends TypeAdapter<Date> {
    public static final TypeAdapterFactory FACTORY = null;
    private final List<DateFormat> dateFormats;

    @Override
    public Date read(JsonReader r1) throws IOException {
        return read(r1);
    }

    @Override
    public void write(JsonWriter r1, Date r2) throws IOException {
        write(r1, r2);
    }

    static {
        FACTORY = new 1();
    }

    public DateTypeAdapter() {
        this.dateFormats = new ArrayList();
        this.dateFormats.add(DateFormat.getDateTimeInstance(2, 2, Locale.US));
        if (Locale.getDefault().equals(Locale.US) == true) goto L6;
        this.dateFormats.add(DateFormat.getDateTimeInstance(2, 2));
    L6:
        if (JavaVersion.isJava9OrLater() == false) goto L9;
        this.dateFormats.add(PreJava9DateFormatProvider.getUSDateTimeFormat(2, 2));
        return;
    }

    @Override
    public Date read(JsonReader r3) throws IOException {
        if (r3.peek() != JsonToken.NULL) goto L7;
        r3.nextNull();
        return null;
    L7:
        return deserializeToDate(r3);
    }

    private Date deserializeToDate(JsonReader r6) throws IOException {
        String r0 = r6.nextString();
        List<DateFormat> r1 = this.dateFormats;
        monitor-enter(r1);
        Iterator<DateFormat> r2 = this.dateFormats.iterator();     // Catch: Throwable -> L17
    L6:
        if (r2.hasNext() == false) goto L11;
        Date r62 = r2.next().parse(r0);     // Catch: ParseException -> L20 Throwable -> L17
        monitor-exit(r1);     // Catch: Throwable -> L17
        return r62;
    L11:
        monitor-exit(r1);     // Catch: Throwable -> L17
        return ISO8601Utils.parse(r0, new ParsePosition(0));
    L14:
        e = move-exception;
        throw new JsonSyntaxException("Failed parsing '" + r0 + "' as Date; at path " + r6.getPreviousPath(), e);
    L17:
        th = move-exception;
        throw th;
    }

    public void write(JsonWriter r3, Date r4) throws IOException {
        if (r4 != null) goto L5;
        r3.nullValue();
        return;
    L5:
        DateFormat r0 = this.dateFormats.get(0);
        List<DateFormat> r1 = this.dateFormats;
        monitor-enter(r1);
        String r42 = r0.format(r4);     // Catch: Throwable -> L11
        monitor-exit(r1);     // Catch: Throwable -> L11
        r3.value(r42);
        return;
    L11:
        th = move-exception;
        throw th;
    }
}
