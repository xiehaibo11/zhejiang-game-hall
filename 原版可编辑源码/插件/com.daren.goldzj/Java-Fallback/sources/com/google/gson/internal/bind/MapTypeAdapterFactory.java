package com.google.gson.internal.bind;

import com.google.gson.Gson;
import com.google.gson.JsonElement;
import com.google.gson.JsonPrimitive;
import com.google.gson.JsonSyntaxException;
import com.google.gson.TypeAdapter;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.internal.$Gson$Types;
import com.google.gson.internal.ConstructorConstructor;
import com.google.gson.internal.JsonReaderInternalAccess;
import com.google.gson.internal.ObjectConstructor;
import com.google.gson.internal.Streams;
import com.google.gson.reflect.TypeToken;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;

public final class MapTypeAdapterFactory implements TypeAdapterFactory {
    final boolean complexMapKeySerialization;
    private final ConstructorConstructor constructorConstructor;

    private final class Adapter<K, V> extends TypeAdapter<Map<K, V>> {
        private final ObjectConstructor<? extends Map<K, V>> constructor;
        private final TypeAdapter<K> keyTypeAdapter;
        final MapTypeAdapterFactory this$0;
        private final TypeAdapter<V> valueTypeAdapter;

        @Override
        public Object read(JsonReader r1) throws IOException {
            return read(r1);
        }

        @Override
        public void write(JsonWriter r1, Object r2) throws IOException {
            write(r1, (Map) r2);
        }

        public Adapter(MapTypeAdapterFactory r1, Gson r2, Type r3, TypeAdapter<K> r4, Type r5, TypeAdapter<V> r6, ObjectConstructor<? extends Map<K, V>> r7) {
            this.this$0 = r1;
            this.keyTypeAdapter = new TypeAdapterRuntimeTypeWrapper(r2, r4, r3);
            this.valueTypeAdapter = new TypeAdapterRuntimeTypeWrapper(r2, r6, r5);
            this.constructor = r7;
        }

        @Override
        public Map<K, V> read(JsonReader r5) throws IOException {
            JsonToken r0 = r5.peek();
            if (r0 != JsonToken.NULL) goto L6;
            r5.nextNull();
            return null;
        L6:
            Map<K, V> r1 = this.constructor.construct();
            if (r0 != JsonToken.BEGIN_ARRAY) goto L17;
            r5.beginArray();
        L10:
            if (r5.hasNext() == false) goto L16;
            r5.beginArray();
            K r02 = this.keyTypeAdapter.read(r5);
            if (r1.put(r02, this.valueTypeAdapter.read(r5)) != null) goto L15;
            r5.endArray();
            goto L10
        L15:
            throw new JsonSyntaxException("duplicate key: " + r02);
        L16:
            r5.endArray();
        L26:
            return r1;
        L17:
            r5.beginObject();
        L19:
            if (r5.hasNext() == false) goto L25;
            JsonReaderInternalAccess.INSTANCE.promoteNameToValue(r5);
            K r03 = this.keyTypeAdapter.read(r5);
            if (r1.put(r03, this.valueTypeAdapter.read(r5)) == null) goto L19;
            throw new JsonSyntaxException("duplicate key: " + r03);
        L25:
            r5.endObject();
            goto L26
        }

        public void write(JsonWriter r8, Map<K, V> r9) throws IOException {
            if (r9 != null) goto L6;
            r8.nullValue();
            return;
        L6:
            if (this.this$0.complexMapKeySerialization == true) goto L13;
            r8.beginObject();
            Iterator<Map.Entry<K, V>> r92 = r9.entrySet().iterator();
        L9:
            if (r92.hasNext() == false) goto L11;
            Map.Entry<K, V> r0 = r92.next();
            r8.name(String.valueOf(r0.getKey()));
            this.valueTypeAdapter.write(r8, r0.getValue());
            goto L9
        L11:
            r8.endObject();
            return;
        L13:
            ArrayList r02 = new ArrayList(r9.size());
            ArrayList r1 = new ArrayList(r9.size());
            Iterator<Map.Entry<K, V>> r93 = r9.entrySet().iterator();
            int r2 = 0;
            boolean r3 = false;
        L15:
            if (r93.hasNext() == false) goto L24;
            Map.Entry<K, V> r4 = r93.next();
            JsonElement r5 = this.keyTypeAdapter.toJsonTree(r4.getKey());
            r02.add(r5);
            r1.add(r4.getValue());
            if (r5.isJsonArray() == false) goto L19;
        L22:
            boolean r42 = true;
        L23:
            r3 = r3 | r42;
            goto L15
        L19:
            if (r5.isJsonObject() == true) goto L22;
            r42 = false;
            goto L23
        L24:
            if (r3 == false) goto L29;
            r8.beginArray();
            int r94 = r02.size();
        L26:
            if (r2 >= r94) goto L28;
            r8.beginArray();
            Streams.write((JsonElement) r02.get(r2), r8);
            this.valueTypeAdapter.write(r8, (V) r1.get(r2));
            r8.endArray();
            r2 = r2 + 1;
            goto L26
        L28:
            r8.endArray();
            return;
        L29:
            r8.beginObject();
            int r95 = r02.size();
        L30:
            if (r2 >= r95) goto L32;
            r8.name(keyToString((JsonElement) r02.get(r2)));
            this.valueTypeAdapter.write(r8, (V) r1.get(r2));
            r2 = r2 + 1;
            goto L30
        L32:
            r8.endObject();
        }

        private String keyToString(JsonElement r2) {
            if (r2.isJsonPrimitive() == false) goto L19;
            JsonPrimitive r22 = r2.getAsJsonPrimitive();
            if (r22.isNumber() == false) goto L9;
            return String.valueOf(r22.getAsNumber());
        L9:
            if (r22.isBoolean() == false) goto L13;
            return Boolean.toString(r22.getAsBoolean());
        L13:
            if (r22.isString() == false) goto L17;
            return r22.getAsString();
        L17:
            throw new AssertionError();
        L19:
            if (r2.isJsonNull() == false) goto L23;
            return "null";
        L23:
            throw new AssertionError();
        }
    }

    public MapTypeAdapterFactory(ConstructorConstructor r1, boolean r2) {
        this.constructorConstructor = r1;
        this.complexMapKeySerialization = r2;
    }

    @Override
    public <T> TypeAdapter<T> create(Gson r12, TypeToken<T> r13) {
        Type r0 = r13.getType();
        Class<? super T> r1 = r13.getRawType();
        if (Map.class.isAssignableFrom(r1) == true) goto L6;
        return null;
    L6:
        Type[] r02 = $Gson$Types.getMapKeyAndValueTypes(r0, r1);
        TypeAdapter<?> r7 = getKeyAdapter(r12, r02[0]);
        TypeAdapter<T> r9 = r12.getAdapter(TypeToken.get(r02[1]));
        ObjectConstructor<T> r10 = this.constructorConstructor.get(r13);
        return new Adapter(this, r12, r02[0], r7, r02[1], r9, r10);
    }

    private TypeAdapter<?> getKeyAdapter(Gson r2, Type r3) {
        if (r3 == Boolean.TYPE) goto L9;
        if (r3 == Boolean.class) goto L9;
        return r2.getAdapter(TypeToken.get(r3));
    L9:
        return TypeAdapters.BOOLEAN_AS_STRING;
    }
}
