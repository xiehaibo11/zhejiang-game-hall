package com.google.gson.internal.bind;

public final class ObjectTypeAdapter extends com.google.gson.TypeAdapter<java.lang.Object> {
    private static final com.google.gson.TypeAdapterFactory DOUBLE_FACTORY = null;
    private final com.google.gson.Gson gson;
    private final com.google.gson.ToNumberStrategy toNumberStrategy;


    static class 2 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
                com.google.gson.stream.JsonToken[] r0 = com.google.gson.stream.JsonToken.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken = r0
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L14
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_ARRAY     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L1f
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_OBJECT     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L2a
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L35
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER     // Catch: java.lang.NoSuchFieldError -> L35
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L35
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L35
            L35:
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L40
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BOOLEAN     // Catch: java.lang.NoSuchFieldError -> L40
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L40
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L40
            L40:
                int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L4b
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL     // Catch: java.lang.NoSuchFieldError -> L4b
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L4b
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L4b
            L4b:
                return
        }
    }

    static {
            com.google.gson.ToNumberPolicy r0 = com.google.gson.ToNumberPolicy.DOUBLE
            com.google.gson.TypeAdapterFactory r0 = newFactory(r0)
            com.google.gson.internal.bind.ObjectTypeAdapter.DOUBLE_FACTORY = r0
            return
    }

    private ObjectTypeAdapter(com.google.gson.Gson r1, com.google.gson.ToNumberStrategy r2) {
            r0 = this;
            r0.<init>()
            r0.gson = r1
            r0.toNumberStrategy = r2
            return
    }

    ObjectTypeAdapter(com.google.gson.Gson r1, com.google.gson.ToNumberStrategy r2, com.google.gson.internal.bind.ObjectTypeAdapter.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.google.gson.TypeAdapterFactory getFactory(com.google.gson.ToNumberStrategy r1) {
            com.google.gson.ToNumberPolicy r0 = com.google.gson.ToNumberPolicy.DOUBLE
            if (r1 != r0) goto L7
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.ObjectTypeAdapter.DOUBLE_FACTORY
            return r1
        L7:
            com.google.gson.TypeAdapterFactory r1 = newFactory(r1)
            return r1
    }

    private static com.google.gson.TypeAdapterFactory newFactory(com.google.gson.ToNumberStrategy r1) {
            com.google.gson.internal.bind.ObjectTypeAdapter$1 r0 = new com.google.gson.internal.bind.ObjectTypeAdapter$1
            r0.<init>(r1)
            return r0
    }

    private java.lang.Object readTerminal(com.google.gson.stream.JsonReader r3, com.google.gson.stream.JsonToken r4) throws java.io.IOException {
            r2 = this;
            int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken
            int r1 = r4.ordinal()
            r0 = r0[r1]
            r1 = 3
            if (r0 == r1) goto L40
            r1 = 4
            if (r0 == r1) goto L39
            r1 = 5
            if (r0 == r1) goto L30
            r1 = 6
            if (r0 != r1) goto L19
            r3.nextNull()
            r3 = 0
            return r3
        L19:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected token: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L30:
            boolean r3 = r3.nextBoolean()
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            return r3
        L39:
            com.google.gson.ToNumberStrategy r4 = r2.toNumberStrategy
            java.lang.Number r3 = r4.readNumber(r3)
            return r3
        L40:
            java.lang.String r3 = r3.nextString()
            return r3
    }

    private java.lang.Object tryBeginNesting(com.google.gson.stream.JsonReader r2, com.google.gson.stream.JsonToken r3) throws java.io.IOException {
            r1 = this;
            int[] r0 = com.google.gson.internal.bind.ObjectTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken
            int r3 = r3.ordinal()
            r3 = r0[r3]
            r0 = 1
            if (r3 == r0) goto L19
            r0 = 2
            if (r3 == r0) goto L10
            r2 = 0
            return r2
        L10:
            r2.beginObject()
            com.google.gson.internal.LinkedTreeMap r2 = new com.google.gson.internal.LinkedTreeMap
            r2.<init>()
            return r2
        L19:
            r2.beginArray()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            return r2
    }

    @Override
    public java.lang.Object read(com.google.gson.stream.JsonReader r7) throws java.io.IOException {
            r6 = this;
            com.google.gson.stream.JsonToken r0 = r7.peek()
            java.lang.Object r1 = r6.tryBeginNesting(r7, r0)
            if (r1 != 0) goto Lf
            java.lang.Object r7 = r6.readTerminal(r7, r0)
            return r7
        Lf:
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
        L14:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L4e
            r2 = 0
            boolean r3 = r1 instanceof java.util.Map
            if (r3 == 0) goto L23
            java.lang.String r2 = r7.nextName()
        L23:
            com.google.gson.stream.JsonToken r3 = r7.peek()
            java.lang.Object r4 = r6.tryBeginNesting(r7, r3)
            if (r4 == 0) goto L2f
            r5 = 1
            goto L30
        L2f:
            r5 = 0
        L30:
            if (r4 != 0) goto L36
            java.lang.Object r4 = r6.readTerminal(r7, r3)
        L36:
            boolean r3 = r1 instanceof java.util.List
            if (r3 == 0) goto L41
            r2 = r1
            java.util.List r2 = (java.util.List) r2
            r2.add(r4)
            goto L47
        L41:
            r3 = r1
            java.util.Map r3 = (java.util.Map) r3
            r3.put(r2, r4)
        L47:
            if (r5 == 0) goto L14
            r0.addLast(r1)
            r1 = r4
            goto L14
        L4e:
            boolean r2 = r1 instanceof java.util.List
            if (r2 == 0) goto L56
            r7.endArray()
            goto L59
        L56:
            r7.endObject()
        L59:
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L60
            return r1
        L60:
            java.lang.Object r1 = r0.removeLast()
            goto L14
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r3, java.lang.Object r4) throws java.io.IOException {
            r2 = this;
            if (r4 != 0) goto L6
            r3.nullValue()
            return
        L6:
            com.google.gson.Gson r0 = r2.gson
            java.lang.Class r1 = r4.getClass()
            com.google.gson.TypeAdapter r0 = r0.getAdapter(r1)
            boolean r1 = r0 instanceof com.google.gson.internal.bind.ObjectTypeAdapter
            if (r1 == 0) goto L1b
            r3.beginObject()
            r3.endObject()
            return
        L1b:
            r0.write(r3, r4)
            return
    }
}
