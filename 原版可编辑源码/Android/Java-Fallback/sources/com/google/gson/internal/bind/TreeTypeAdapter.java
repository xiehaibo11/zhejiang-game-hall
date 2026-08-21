package com.google.gson.internal.bind;

public final class TreeTypeAdapter<T> extends com.google.gson.TypeAdapter<T> {
    private final com.google.gson.internal.bind.TreeTypeAdapter<T>.GsonContextImpl context;
    private com.google.gson.TypeAdapter<T> delegate;
    private final com.google.gson.JsonDeserializer<T> deserializer;
    final com.google.gson.Gson gson;
    private final com.google.gson.JsonSerializer<T> serializer;
    private final com.google.gson.TypeAdapterFactory skipPast;
    private final com.google.gson.reflect.TypeToken<T> typeToken;

    static class 1 {
    }

    private final class GsonContextImpl implements com.google.gson.JsonSerializationContext, com.google.gson.JsonDeserializationContext {
        final com.google.gson.internal.bind.TreeTypeAdapter this$0;

        private GsonContextImpl(com.google.gson.internal.bind.TreeTypeAdapter r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        GsonContextImpl(com.google.gson.internal.bind.TreeTypeAdapter r1, com.google.gson.internal.bind.TreeTypeAdapter.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public <R> R deserialize(com.google.gson.JsonElement r2, java.lang.reflect.Type r3) throws com.google.gson.JsonParseException {
                r1 = this;
                com.google.gson.internal.bind.TreeTypeAdapter r0 = r1.this$0
                com.google.gson.Gson r0 = r0.gson
                java.lang.Object r0 = r0.fromJson(r2, r3)
                return r0
        }

        @Override
        public com.google.gson.JsonElement serialize(java.lang.Object r2) {
                r1 = this;
                com.google.gson.internal.bind.TreeTypeAdapter r0 = r1.this$0
                com.google.gson.Gson r0 = r0.gson
                com.google.gson.JsonElement r0 = r0.toJsonTree(r2)
                return r0
        }

        @Override
        public com.google.gson.JsonElement serialize(java.lang.Object r2, java.lang.reflect.Type r3) {
                r1 = this;
                com.google.gson.internal.bind.TreeTypeAdapter r0 = r1.this$0
                com.google.gson.Gson r0 = r0.gson
                com.google.gson.JsonElement r0 = r0.toJsonTree(r2, r3)
                return r0
        }
    }

    private static final class SingleTypeFactory implements com.google.gson.TypeAdapterFactory {
        private final com.google.gson.JsonDeserializer<?> deserializer;
        private final com.google.gson.reflect.TypeToken<?> exactType;
        private final java.lang.Class<?> hierarchyType;
        private final boolean matchRawType;
        private final com.google.gson.JsonSerializer<?> serializer;

        SingleTypeFactory(java.lang.Object r3, com.google.gson.reflect.TypeToken<?> r4, boolean r5, java.lang.Class<?> r6) {
                r2 = this;
                r2.<init>()
                boolean r0 = r3 instanceof com.google.gson.JsonSerializer
                r1 = 0
                if (r0 == 0) goto Lc
                r0 = r3
                com.google.gson.JsonSerializer r0 = (com.google.gson.JsonSerializer) r0
                goto Ld
            Lc:
                r0 = r1
            Ld:
                r2.serializer = r0
                boolean r0 = r3 instanceof com.google.gson.JsonDeserializer
                if (r0 == 0) goto L16
                r1 = r3
                com.google.gson.JsonDeserializer r1 = (com.google.gson.JsonDeserializer) r1
            L16:
                r2.deserializer = r1
                com.google.gson.JsonSerializer<?> r0 = r2.serializer
                if (r0 != 0) goto L23
                com.google.gson.JsonDeserializer<?> r0 = r2.deserializer
                if (r0 == 0) goto L21
                goto L23
            L21:
                r0 = 0
                goto L24
            L23:
                r0 = 1
            L24:
                com.google.gson.internal.$Gson$Preconditions.checkArgument(r0)
                r2.exactType = r4
                r2.matchRawType = r5
                r2.hierarchyType = r6
                return
        }

        @Override
        public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r9, com.google.gson.reflect.TypeToken<T> r10) {
                r8 = this;
                com.google.gson.reflect.TypeToken<?> r0 = r8.exactType
                if (r0 == 0) goto L1f
                boolean r0 = r0.equals(r10)
                if (r0 != 0) goto L1d
                boolean r0 = r8.matchRawType
                if (r0 == 0) goto L1b
                com.google.gson.reflect.TypeToken<?> r0 = r8.exactType
                java.lang.reflect.Type r0 = r0.getType()
                java.lang.Class r1 = r10.getRawType()
                if (r0 != r1) goto L1b
                goto L1d
            L1b:
                r0 = 0
                goto L29
            L1d:
                r0 = 1
                goto L29
            L1f:
                java.lang.Class<?> r0 = r8.hierarchyType
                java.lang.Class r1 = r10.getRawType()
                boolean r0 = r0.isAssignableFrom(r1)
            L29:
                if (r0 == 0) goto L3a
                com.google.gson.internal.bind.TreeTypeAdapter r7 = new com.google.gson.internal.bind.TreeTypeAdapter
                com.google.gson.JsonSerializer<?> r2 = r8.serializer
                com.google.gson.JsonDeserializer<?> r3 = r8.deserializer
                r1 = r7
                r4 = r9
                r5 = r10
                r6 = r8
                r1.<init>(r2, r3, r4, r5, r6)
                goto L3b
            L3a:
                r7 = 0
            L3b:
                return r7
        }
    }

    public TreeTypeAdapter(com.google.gson.JsonSerializer<T> r3, com.google.gson.JsonDeserializer<T> r4, com.google.gson.Gson r5, com.google.gson.reflect.TypeToken<T> r6, com.google.gson.TypeAdapterFactory r7) {
            r2 = this;
            r2.<init>()
            com.google.gson.internal.bind.TreeTypeAdapter$GsonContextImpl r0 = new com.google.gson.internal.bind.TreeTypeAdapter$GsonContextImpl
            r1 = 0
            r0.<init>(r2, r1)
            r2.context = r0
            r2.serializer = r3
            r2.deserializer = r4
            r2.gson = r5
            r2.typeToken = r6
            r2.skipPast = r7
            return
    }

    private com.google.gson.TypeAdapter<T> delegate() {
            r4 = this;
            com.google.gson.TypeAdapter<T> r0 = r4.delegate
            if (r0 == 0) goto L6
            r1 = r0
            goto L12
        L6:
            com.google.gson.Gson r1 = r4.gson
            com.google.gson.TypeAdapterFactory r2 = r4.skipPast
            com.google.gson.reflect.TypeToken<T> r3 = r4.typeToken
            com.google.gson.TypeAdapter r1 = r1.getDelegateAdapter(r2, r3)
            r4.delegate = r1
        L12:
            return r1
    }

    public static com.google.gson.TypeAdapterFactory newFactory(com.google.gson.reflect.TypeToken<?> r3, java.lang.Object r4) {
            com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory r0 = new com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory
            r1 = 0
            r2 = 0
            r0.<init>(r4, r3, r1, r2)
            return r0
    }

    public static com.google.gson.TypeAdapterFactory newFactoryWithMatchRawType(com.google.gson.reflect.TypeToken<?> r3, java.lang.Object r4) {
            java.lang.reflect.Type r0 = r3.getType()
            java.lang.Class r1 = r3.getRawType()
            if (r0 != r1) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory r1 = new com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory
            r2 = 0
            r1.<init>(r4, r3, r0, r2)
            return r1
    }

    public static com.google.gson.TypeAdapterFactory newTypeHierarchyFactory(java.lang.Class<?> r3, java.lang.Object r4) {
            com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory r0 = new com.google.gson.internal.bind.TreeTypeAdapter$SingleTypeFactory
            r1 = 0
            r2 = 0
            r0.<init>(r4, r1, r2, r3)
            return r0
    }

    @Override
    public T read(com.google.gson.stream.JsonReader r5) throws java.io.IOException {
            r4 = this;
            com.google.gson.JsonDeserializer<T> r0 = r4.deserializer
            if (r0 != 0) goto Ld
            com.google.gson.TypeAdapter r0 = r4.delegate()
            java.lang.Object r0 = r0.read(r5)
            return r0
        Ld:
            com.google.gson.JsonElement r0 = com.google.gson.internal.Streams.parse(r5)
            boolean r1 = r0.isJsonNull()
            if (r1 == 0) goto L19
            r1 = 0
            return r1
        L19:
            com.google.gson.JsonDeserializer<T> r1 = r4.deserializer
            com.google.gson.reflect.TypeToken<T> r2 = r4.typeToken
            java.lang.reflect.Type r2 = r2.getType()
            com.google.gson.internal.bind.TreeTypeAdapter<T>$GsonContextImpl r3 = r4.context
            java.lang.Object r1 = r1.deserialize(r0, r2, r3)
            return r1
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r4, T r5) throws java.io.IOException {
            r3 = this;
            com.google.gson.JsonSerializer<T> r0 = r3.serializer
            if (r0 != 0) goto Lc
            com.google.gson.TypeAdapter r0 = r3.delegate()
            r0.write(r4, r5)
            return
        Lc:
            if (r5 != 0) goto L12
            r4.nullValue()
            return
        L12:
            com.google.gson.reflect.TypeToken<T> r1 = r3.typeToken
            java.lang.reflect.Type r1 = r1.getType()
            com.google.gson.internal.bind.TreeTypeAdapter<T>$GsonContextImpl r2 = r3.context
            com.google.gson.JsonElement r0 = r0.serialize(r5, r1, r2)
            com.google.gson.internal.Streams.write(r0, r4)
            return
    }
}
