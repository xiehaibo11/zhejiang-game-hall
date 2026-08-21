package com.google.gson.internal.sql;

import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.sql.Timestamp;
import java.util.Date;

class SqlTimestampTypeAdapter extends TypeAdapter<Timestamp> {
    static final TypeAdapterFactory FACTORY = null;
    private final TypeAdapter<Date> dateTypeAdapter;

    SqlTimestampTypeAdapter(TypeAdapter r1, 1 r2) {
        this(r1);
    }

    @Override
    public Timestamp read(JsonReader r1) throws IOException {
        return read(r1);
    }

    @Override
    public void write(JsonWriter r1, Timestamp r2) throws IOException {
        write(r1, r2);
    }

    static {
        FACTORY = new 1();
    }

    private SqlTimestampTypeAdapter(TypeAdapter<Date> r1) {
        this.dateTypeAdapter = r1;
    }

    @Override
    public Timestamp read(JsonReader r4) throws IOException {
        Date r42 = this.dateTypeAdapter.read(r4);
        if (r42 != null) goto L7;
        return null;
    L7:
        return new Timestamp(r42.getTime());
    }

    public void write(JsonWriter r2, Timestamp r3) throws IOException {
        this.dateTypeAdapter.write(r2, r3);
    }
}
