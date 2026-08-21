package com.google.gson.internal.bind;

import com.google.gson.Gson;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.JsonSerializationContext;
import com.google.gson.JsonSerializer;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.internal.$Gson$Preconditions;
import com.google.gson.internal.Streams;
import com.google.gson.reflect.TypeToken;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.lang.reflect.Type;

public final class TreeTypeAdapter<T> extends SerializationDelegatingTypeAdapter<T> {
    private final TreeTypeAdapter<T>.GsonContextImpl context;
    private volatile TypeAdapter<T> delegate;
    private final JsonDeserializer<T> deserializer;
    final Gson gson;
    private final boolean nullSafe;
    private final JsonSerializer<T> serializer;
    private final TypeAdapterFactory skipPast;
    private final TypeToken<T> typeToken;

    static class 1 {
    }

    private final class GsonContextImpl implements JsonSerializationContext, JsonDeserializationContext {
        final TreeTypeAdapter this$0;

        private GsonContextImpl(TreeTypeAdapter r1) {
            this.this$0 = r1;
        }

        GsonContextImpl(TreeTypeAdapter r1, 1 r2) {
            this(r1);
        }

        @Override
        public JsonElement serialize(Object r2) {
            return this.this$0.gson.toJsonTree(r2);
        }

        @Override
        public JsonElement serialize(Object r2, Type r3) {
            return this.this$0.gson.toJsonTree(r2, r3);
        }

        @Override
        public <R> R deserialize(JsonElement r2, Type r3) throws JsonParseException {
            return (R) this.this$0.gson.fromJson(r2, r3);
        }
    }

    private static final class SingleTypeFactory implements TypeAdapterFactory {
        private final JsonDeserializer<?> deserializer;
        private final TypeToken<?> exactType;
        private final Class<?> hierarchyType;
        private final boolean matchRawType;
        private final JsonSerializer<?> serializer;

        SingleTypeFactory(Object r3, TypeToken<?> r4, boolean r5, Class<?> r6) {
            JsonDeserializer<?> r1 = null;
            if ((r3 instanceof JsonSerializer) == false) goto L5;
            JsonSerializer<?> r0 = (JsonSerializer) r3;
        L6:
            this.serializer = r0;
            if ((r3 instanceof JsonDeserializer) == false) goto L9;
            r1 = (JsonDeserializer) r3;
        L9:
            this.deserializer = r1;
            if (this.serializer == null) goto L12;
        L15:
            boolean r32 = true;
        L16:
            $Gson$Preconditions.checkArgument(r32);
            this.exactType = r4;
            this.matchRawType = r5;
            this.hierarchyType = r6;
            return;
        L12:
            if (this.deserializer != null) goto L15;
            r32 = false;
            goto L16
        L5:
            r0 = null;
            goto L6
        }

        @Override
        public <T> TypeAdapter<T> create(Gson r8, TypeToken<T> r9) {
            TypeToken<?> r0 = this.exactType;
            if (r0 != null) goto L5;
            boolean r02 = this.hierarchyType.isAssignableFrom(r9.getRawType());
        L14:
            if (r02 == true) goto L18;
            return null;
        L18:
            return new TreeTypeAdapter(this.serializer, this.deserializer, r8, r9, this);
        L5:
            if (r0.equals(r9) == false) goto L7;
        L12:
            r02 = true;
            goto L14
        L7:
            if (this.matchRawType == true) goto L9;
        L11:
            r02 = false;
            goto L14
        L9:
            if (this.exactType.getType() != r9.getRawType()) goto L11;
            goto L11
        }
    }

    public TreeTypeAdapter(JsonSerializer<T> r3, JsonDeserializer<T> r4, Gson r5, TypeToken<T> r6, TypeAdapterFactory r7, boolean r8) {
        this.context = new GsonContextImpl(this, null);
        this.serializer = r3;
        this.deserializer = r4;
        this.gson = r5;
        this.typeToken = r6;
        this.skipPast = r7;
        this.nullSafe = r8;
    }

    public TreeTypeAdapter(JsonSerializer<T> r8, JsonDeserializer<T> r9, Gson r10, TypeToken<T> r11, TypeAdapterFactory r12) {
        this(r8, r9, r10, r11, r12, true);
    }

    @Override
    public T read(JsonReader r4) throws IOException {
        if (this.deserializer == null) goto L5;
        JsonElement r42 = Streams.parse(r4);
        if (this.nullSafe == false) goto L13;
        if (r42.isJsonNull() == false) goto L13;
        return null;
    L13:
        return this.deserializer.deserialize(r42, this.typeToken.getType(), this.context);
    L5:
        return delegate().read(r4);
    }

    @Override
    public void write(JsonWriter r4, T r5) throws IOException {
        if (this.serializer != null) goto L7;
        delegate().write(r4, r5);
        return;
    L7:
        if (this.nullSafe == false) goto L11;
        if (r5 != null) goto L11;
        r4.nullValue();
        return;
    L11:
        Streams.write(this.serializer.serialize(r5, this.typeToken.getType(), this.context), r4);
    }

    private TypeAdapter<T> delegate() {
        TypeAdapter<T> r0 = this.delegate;
        if (r0 != null) goto L7;
        TypeAdapter<T> r02 = this.gson.getDelegateAdapter(this.skipPast, this.typeToken);
        this.delegate = r02;
        return r02;
    L7:
        return r0;
    }

    @Override
    public TypeAdapter<T> getSerializationDelegate() {
        if (this.serializer == null) goto L6;
        return this;
    L6:
        return delegate();
    }

    public static TypeAdapterFactory newFactory(TypeToken<?> r3, Object r4) {
        return new SingleTypeFactory(r4, r3, false, null);
    }

    public static TypeAdapterFactory newFactoryWithMatchRawType(TypeToken<?> r3, Object r4) {
        if (r3.getType() != r3.getRawType()) goto L5;
        boolean r0 = true;
    L7:
        return new SingleTypeFactory(r4, r3, r0, null);
    L5:
        r0 = false;
        goto L7
    }

    public static TypeAdapterFactory newTypeHierarchyFactory(Class<?> r3, Object r4) {
        return new SingleTypeFactory(r4, null, false, r3);
    }
}
