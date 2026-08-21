package com.google.gson.internal.bind;

public final class CollectionTypeAdapterFactory implements com.google.gson.TypeAdapterFactory {
    private final com.google.gson.internal.ConstructorConstructor constructorConstructor;

    private static final class Adapter<E> extends com.google.gson.TypeAdapter<java.util.Collection<E>> {
        private final com.google.gson.internal.ObjectConstructor<? extends java.util.Collection<E>> constructor;
        private final com.google.gson.TypeAdapter<E> elementTypeAdapter;

        public Adapter(com.google.gson.Gson r2, java.lang.reflect.Type r3, com.google.gson.TypeAdapter<E> r4, com.google.gson.internal.ObjectConstructor<? extends java.util.Collection<E>> r5) {
                r1 = this;
                r1.<init>()
                com.google.gson.internal.bind.TypeAdapterRuntimeTypeWrapper r0 = new com.google.gson.internal.bind.TypeAdapterRuntimeTypeWrapper
                r0.<init>(r2, r4, r3)
                r1.elementTypeAdapter = r0
                r1.constructor = r5
                return
        }

        @Override
        public java.lang.Object read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
                r0 = this;
                java.util.Collection r1 = r0.read(r1)
                return r1
        }

        @Override
        public java.util.Collection<E> read(com.google.gson.stream.JsonReader r3) throws java.io.IOException {
                r2 = this;
                com.google.gson.stream.JsonToken r0 = r3.peek()
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
                if (r0 != r1) goto Ld
                r3.nextNull()
                r0 = 0
                return r0
            Ld:
                com.google.gson.internal.ObjectConstructor<? extends java.util.Collection<E>> r0 = r2.constructor
                java.lang.Object r0 = r0.construct()
                java.util.Collection r0 = (java.util.Collection) r0
                r3.beginArray()
            L18:
                boolean r1 = r3.hasNext()
                if (r1 == 0) goto L28
                com.google.gson.TypeAdapter<E> r1 = r2.elementTypeAdapter
                java.lang.Object r1 = r1.read(r3)
                r0.add(r1)
                goto L18
            L28:
                r3.endArray()
                return r0
        }

        @Override
        public void write(com.google.gson.stream.JsonWriter r1, java.lang.Object r2) throws java.io.IOException {
                r0 = this;
                java.util.Collection r2 = (java.util.Collection) r2
                r0.write(r1, r2)
                return
        }

        public void write(com.google.gson.stream.JsonWriter r4, java.util.Collection<E> r5) throws java.io.IOException {
                r3 = this;
                if (r5 != 0) goto L6
                r4.nullValue()
                return
            L6:
                r4.beginArray()
                java.util.Iterator r0 = r5.iterator()
            Ld:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1d
                java.lang.Object r1 = r0.next()
                com.google.gson.TypeAdapter<E> r2 = r3.elementTypeAdapter
                r2.write(r4, r1)
                goto Ld
            L1d:
                r4.endArray()
                return
        }
    }

    public CollectionTypeAdapterFactory(com.google.gson.internal.ConstructorConstructor r1) {
            r0 = this;
            r0.<init>()
            r0.constructorConstructor = r1
            return
    }

    @Override
    public <T> com.google.gson.TypeAdapter<T> create(com.google.gson.Gson r7, com.google.gson.reflect.TypeToken<T> r8) {
            r6 = this;
            java.lang.reflect.Type r0 = r8.getType()
            java.lang.Class r1 = r8.getRawType()
            java.lang.Class<java.util.Collection> r2 = java.util.Collection.class
            boolean r2 = r2.isAssignableFrom(r1)
            if (r2 != 0) goto L12
            r2 = 0
            return r2
        L12:
            java.lang.reflect.Type r2 = com.google.gson.internal.$Gson$Types.getCollectionElementType(r0, r1)
            com.google.gson.reflect.TypeToken r3 = com.google.gson.reflect.TypeToken.get(r2)
            com.google.gson.TypeAdapter r3 = r7.getAdapter(r3)
            com.google.gson.internal.ConstructorConstructor r4 = r6.constructorConstructor
            com.google.gson.internal.ObjectConstructor r4 = r4.get(r8)
            com.google.gson.internal.bind.CollectionTypeAdapterFactory$Adapter r5 = new com.google.gson.internal.bind.CollectionTypeAdapterFactory$Adapter
            r5.<init>(r7, r2, r3, r4)
            return r5
    }
}
