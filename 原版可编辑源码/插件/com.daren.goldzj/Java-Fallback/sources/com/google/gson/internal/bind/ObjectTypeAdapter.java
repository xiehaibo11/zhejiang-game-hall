package com.google.gson.internal.bind;

import com.google.gson.Gson;
import com.google.gson.ToNumberPolicy;
import com.google.gson.ToNumberStrategy;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.internal.LinkedTreeMap;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public final class ObjectTypeAdapter extends TypeAdapter<Object> {
    private static final TypeAdapterFactory DOUBLE_FACTORY = null;
    private final Gson gson;
    private final ToNumberStrategy toNumberStrategy;

    static class 2 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
            $SwitchMap$com$google$gson$stream$JsonToken = new int[JsonToken.values().length];
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BEGIN_ARRAY.ordinal()] = 1;     // Catch: NoSuchFieldError -> L10
        L16:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BEGIN_OBJECT.ordinal()] = 2;     // Catch: NoSuchFieldError -> L11
        L18:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.STRING.ordinal()] = 3;     // Catch: NoSuchFieldError -> L12
        L24:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NUMBER.ordinal()] = 4;     // Catch: NoSuchFieldError -> L13
        L26:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.BOOLEAN.ordinal()] = 5;     // Catch: NoSuchFieldError -> L14
        L20:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NULL.ordinal()] = 6;     // Catch: NoSuchFieldError -> L15
            return;
        }
    }

    ObjectTypeAdapter(Gson r1, ToNumberStrategy r2, 1 r3) {
        this(r1, r2);
    }

    static {
        DOUBLE_FACTORY = newFactory(ToNumberPolicy.DOUBLE);
    }

    private ObjectTypeAdapter(Gson r1, ToNumberStrategy r2) {
        this.gson = r1;
        this.toNumberStrategy = r2;
    }

    private static TypeAdapterFactory newFactory(final ToNumberStrategy r1) {
        return new 1(r1);
    }

    public static TypeAdapterFactory getFactory(ToNumberStrategy r1) {
        if (r1 != ToNumberPolicy.DOUBLE) goto L7;
        return DOUBLE_FACTORY;
    L7:
        return newFactory(r1);
    }

    private Object tryBeginNesting(JsonReader r2, JsonToken r3) throws IOException {
        int r32 = 2.$SwitchMap$com$google$gson$stream$JsonToken[r3.ordinal()];
        if (r32 != 1) goto L5;
        r2.beginArray();
        return new ArrayList();
    L5:
        if (r32 == 2) goto L8;
        return null;
    L8:
        r2.beginObject();
        return new LinkedTreeMap();
    }

    private Object readTerminal(JsonReader r3, JsonToken r4) throws IOException {
        int r0 = 2.$SwitchMap$com$google$gson$stream$JsonToken[r4.ordinal()];
        if (r0 == 3) goto L19;
        if (r0 == 4) goto L17;
        if (r0 == 5) goto L15;
        if (r0 != 6) goto L13;
        r3.nextNull();
        return null;
    L13:
        throw new IllegalStateException("Unexpected token: " + r4);
    L15:
        return Boolean.valueOf(r3.nextBoolean());
    L17:
        return this.toNumberStrategy.readNumber(r3);
    L19:
        return r3.nextString();
    }

    @Override
    public Object read(JsonReader r7) throws IOException {
        JsonToken r0 = r7.peek();
        Object r1 = tryBeginNesting(r7, r0);
        if (r1 == null) goto L5;
        ArrayDeque r02 = new ArrayDeque();
    L8:
        if (r7.hasNext() == true) goto L9;
        if ((r1 instanceof List) == false) goto L27;
        r7.endArray();
    L29:
        if (r02.isEmpty() == true) goto L30;
        r1 = r02.removeLast();
        goto L8
    L30:
        return r1;
    L27:
        r7.endObject();
        goto L29
    L9:
        String r2 = null;
        if ((r1 instanceof Map) == false) goto L12;
        r2 = r7.nextName();
    L12:
        JsonToken r3 = r7.peek();
        Object r4 = tryBeginNesting(r7, r3);
        if (r4 == null) goto L15;
        boolean r5 = true;
    L16:
        if (r4 != null) goto L19;
        r4 = readTerminal(r7, r3);
    L19:
        if ((r1 instanceof List) == false) goto L21;
        ((List) r1).add(r4);
    L22:
        if (r5 == false) goto L8;
        r02.addLast(r1);
        r1 = r4;
        goto L8
    L21:
        ((Map) r1).put(r2, r4);
        goto L22
    L15:
        r5 = false;
        goto L16
    L5:
        return readTerminal(r7, r0);
    }

    @Override
    public void write(JsonWriter r3, Object r4) throws IOException {
        if (r4 != null) goto L5;
        r3.nullValue();
        return;
    L5:
        TypeAdapter r0 = this.gson.getAdapter(r4.getClass());
        if ((r0 instanceof ObjectTypeAdapter) == false) goto L9;
        r3.beginObject();
        r3.endObject();
        return;
    L9:
        r0.write(r3, r4);
    }
}
