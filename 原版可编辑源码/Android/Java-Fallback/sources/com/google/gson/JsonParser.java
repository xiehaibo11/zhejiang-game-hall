package com.google.gson;

public final class JsonParser {
    public JsonParser() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.google.gson.JsonElement parse(com.google.gson.stream.JsonReader r7) throws com.google.gson.JsonIOException, com.google.gson.JsonSyntaxException {
            r6 = this;
            java.lang.String r0 = " to Json"
            java.lang.String r1 = "Failed parsing JSON source: "
            boolean r2 = r7.isLenient()
            r3 = 1
            r7.setLenient(r3)
            com.google.gson.JsonElement r0 = com.google.gson.internal.Streams.parse(r7)     // Catch: java.lang.Throwable -> L14 java.lang.OutOfMemoryError -> L16 java.lang.StackOverflowError -> L2f
            r7.setLenient(r2)
            return r0
        L14:
            r0 = move-exception
            goto L48
        L16:
            r3 = move-exception
            com.google.gson.JsonParseException r4 = new com.google.gson.JsonParseException     // Catch: java.lang.Throwable -> L14
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14
            r5.<init>()     // Catch: java.lang.Throwable -> L14
            r5.append(r1)     // Catch: java.lang.Throwable -> L14
            r5.append(r7)     // Catch: java.lang.Throwable -> L14
            r5.append(r0)     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L14
            r4.<init>(r0, r3)     // Catch: java.lang.Throwable -> L14
            throw r4     // Catch: java.lang.Throwable -> L14
        L2f:
            r3 = move-exception
            com.google.gson.JsonParseException r4 = new com.google.gson.JsonParseException     // Catch: java.lang.Throwable -> L14
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14
            r5.<init>()     // Catch: java.lang.Throwable -> L14
            r5.append(r1)     // Catch: java.lang.Throwable -> L14
            r5.append(r7)     // Catch: java.lang.Throwable -> L14
            r5.append(r0)     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L14
            r4.<init>(r0, r3)     // Catch: java.lang.Throwable -> L14
            throw r4     // Catch: java.lang.Throwable -> L14
        L48:
            r7.setLenient(r2)
            throw r0
    }

    public com.google.gson.JsonElement parse(java.io.Reader r5) throws com.google.gson.JsonIOException, com.google.gson.JsonSyntaxException {
            r4 = this;
            com.google.gson.stream.JsonReader r0 = new com.google.gson.stream.JsonReader     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            r0.<init>(r5)     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            com.google.gson.JsonElement r1 = r4.parse(r0)     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            boolean r2 = r1.isJsonNull()     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            if (r2 != 0) goto L20
            com.google.gson.stream.JsonToken r2 = r0.peek()     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.END_DOCUMENT     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            if (r2 != r3) goto L18
            goto L20
        L18:
            com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            java.lang.String r3 = "Did not consume the entire document."
            r2.<init>(r3)     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
            throw r2     // Catch: java.lang.NumberFormatException -> L21 java.io.IOException -> L28 com.google.gson.stream.MalformedJsonException -> L2f
        L20:
            return r1
        L21:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException
            r1.<init>(r0)
            throw r1
        L28:
            r0 = move-exception
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            r1.<init>(r0)
            throw r1
        L2f:
            r0 = move-exception
            com.google.gson.JsonSyntaxException r1 = new com.google.gson.JsonSyntaxException
            r1.<init>(r0)
            throw r1
    }

    public com.google.gson.JsonElement parse(java.lang.String r2) throws com.google.gson.JsonSyntaxException {
            r1 = this;
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r2)
            com.google.gson.JsonElement r0 = r1.parse(r0)
            return r0
    }
}
