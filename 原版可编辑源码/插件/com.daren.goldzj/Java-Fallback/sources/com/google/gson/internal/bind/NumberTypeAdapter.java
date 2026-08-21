package com.google.gson.internal.bind;

import com.google.gson.JsonSyntaxException;
import com.google.gson.ToNumberPolicy;
import com.google.gson.ToNumberStrategy;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

public final class NumberTypeAdapter extends TypeAdapter<Number> {
    private static final TypeAdapterFactory LAZILY_PARSED_NUMBER_FACTORY = null;
    private final ToNumberStrategy toNumberStrategy;

    static class 2 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
            $SwitchMap$com$google$gson$stream$JsonToken = new int[JsonToken.values().length];
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NULL.ordinal()] = 1;     // Catch: NoSuchFieldError -> L7
        L10:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NUMBER.ordinal()] = 2;     // Catch: NoSuchFieldError -> L8
        L12:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.STRING.ordinal()] = 3;     // Catch: NoSuchFieldError -> L9
            return;
        }
    }

    @Override
    public Number read(JsonReader r1) throws IOException {
        return read(r1);
    }

    @Override
    public void write(JsonWriter r1, Number r2) throws IOException {
        write(r1, r2);
    }

    static {
        LAZILY_PARSED_NUMBER_FACTORY = newFactory(ToNumberPolicy.LAZILY_PARSED_NUMBER);
    }

    private NumberTypeAdapter(ToNumberStrategy r1) {
        this.toNumberStrategy = r1;
    }

    private static TypeAdapterFactory newFactory(ToNumberStrategy r1) {
        final NumberTypeAdapter r0 = new NumberTypeAdapter(r1);
        return new 1(r0);
    }

    public static TypeAdapterFactory getFactory(ToNumberStrategy r1) {
        if (r1 != ToNumberPolicy.LAZILY_PARSED_NUMBER) goto L7;
        return LAZILY_PARSED_NUMBER_FACTORY;
    L7:
        return newFactory(r1);
    }

    @Override
    public Number read(JsonReader r5) throws IOException {
        JsonToken r0 = r5.peek();
        int r1 = 2.$SwitchMap$com$google$gson$stream$JsonToken[r0.ordinal()];
        if (r1 != 1) goto L5;
        r5.nextNull();
        return null;
    L5:
        if (r1 == 2) goto L12;
        if (r1 == 3) goto L12;
        throw new JsonSyntaxException("Expecting number, got: " + r0 + "; at path " + r5.getPath());
    L12:
        return this.toNumberStrategy.readNumber(r5);
    }

    public void write(JsonWriter r1, Number r2) throws IOException {
        r1.value(r2);
    }
}
