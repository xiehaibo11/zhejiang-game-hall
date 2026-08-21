package com.google.gson.internal.bind;

public final class NumberTypeAdapter extends com.google.gson.TypeAdapter<java.lang.Number> {
    private static final com.google.gson.TypeAdapterFactory LAZILY_PARSED_NUMBER_FACTORY = null;
    private final com.google.gson.ToNumberStrategy toNumberStrategy;


    static class 2 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
                com.google.gson.stream.JsonToken[] r0 = com.google.gson.stream.JsonToken.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.google.gson.internal.bind.NumberTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken = r0
                int[] r0 = com.google.gson.internal.bind.NumberTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L14
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL     // Catch: java.lang.NoSuchFieldError -> L14
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L14
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L14
            L14:
                int[] r0 = com.google.gson.internal.bind.NumberTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L1f
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER     // Catch: java.lang.NoSuchFieldError -> L1f
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1f
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1f
            L1f:
                int[] r0 = com.google.gson.internal.bind.NumberTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken     // Catch: java.lang.NoSuchFieldError -> L2a
                com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING     // Catch: java.lang.NoSuchFieldError -> L2a
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L2a
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L2a
            L2a:
                return
        }
    }

    static {
            com.google.gson.ToNumberPolicy r0 = com.google.gson.ToNumberPolicy.LAZILY_PARSED_NUMBER
            com.google.gson.TypeAdapterFactory r0 = newFactory(r0)
            com.google.gson.internal.bind.NumberTypeAdapter.LAZILY_PARSED_NUMBER_FACTORY = r0
            return
    }

    private NumberTypeAdapter(com.google.gson.ToNumberStrategy r1) {
            r0 = this;
            r0.<init>()
            r0.toNumberStrategy = r1
            return
    }

    public static com.google.gson.TypeAdapterFactory getFactory(com.google.gson.ToNumberStrategy r1) {
            com.google.gson.ToNumberPolicy r0 = com.google.gson.ToNumberPolicy.LAZILY_PARSED_NUMBER
            if (r1 != r0) goto L7
            com.google.gson.TypeAdapterFactory r1 = com.google.gson.internal.bind.NumberTypeAdapter.LAZILY_PARSED_NUMBER_FACTORY
            return r1
        L7:
            com.google.gson.TypeAdapterFactory r1 = newFactory(r1)
            return r1
    }

    private static com.google.gson.TypeAdapterFactory newFactory(com.google.gson.ToNumberStrategy r1) {
            com.google.gson.internal.bind.NumberTypeAdapter r0 = new com.google.gson.internal.bind.NumberTypeAdapter
            r0.<init>(r1)
            com.google.gson.internal.bind.NumberTypeAdapter$1 r1 = new com.google.gson.internal.bind.NumberTypeAdapter$1
            r1.<init>(r0)
            return r1
    }

    @Override
    public java.lang.Number read(com.google.gson.stream.JsonReader r5) throws java.io.IOException {
            r4 = this;
            com.google.gson.stream.JsonToken r0 = r5.peek()
            int[] r1 = com.google.gson.internal.bind.NumberTypeAdapter.2.$SwitchMap$com$google$gson$stream$JsonToken
            int r2 = r0.ordinal()
            r1 = r1[r2]
            r2 = 1
            if (r1 == r2) goto L40
            r2 = 2
            if (r1 == r2) goto L39
            r2 = 3
            if (r1 != r2) goto L16
            goto L39
        L16:
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expecting number, got: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = "; at path "
            r2.append(r0)
            java.lang.String r5 = r5.getPath()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
        L39:
            com.google.gson.ToNumberStrategy r0 = r4.toNumberStrategy
            java.lang.Number r5 = r0.readNumber(r5)
            return r5
        L40:
            r5.nextNull()
            r5 = 0
            return r5
    }

    @Override
    public java.lang.Number read(com.google.gson.stream.JsonReader r1) throws java.io.IOException {
            r0 = this;
            java.lang.Number r1 = r0.read(r1)
            return r1
    }

    public void write(com.google.gson.stream.JsonWriter r1, java.lang.Number r2) throws java.io.IOException {
            r0 = this;
            r1.value(r2)
            return
    }

    @Override
    public void write(com.google.gson.stream.JsonWriter r1, java.lang.Number r2) throws java.io.IOException {
            r0 = this;
            java.lang.Number r2 = (java.lang.Number) r2
            r0.write(r1, r2)
            return
    }
}
