package com.google.gson.internal;

public final class Streams {

    private static final class AppendableWriter extends java.io.Writer {
        private final java.lang.Appendable appendable;
        private final com.google.gson.internal.Streams.AppendableWriter.CurrentWrite currentWrite;

        static class CurrentWrite implements java.lang.CharSequence {
            char[] chars;

            CurrentWrite() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public char charAt(int r2) {
                    r1 = this;
                    char[] r0 = r1.chars
                    char r0 = r0[r2]
                    return r0
            }

            @Override
            public int length() {
                    r1 = this;
                    char[] r0 = r1.chars
                    int r0 = r0.length
                    return r0
            }

            @Override
            public java.lang.CharSequence subSequence(int r4, int r5) {
                    r3 = this;
                    java.lang.String r0 = new java.lang.String
                    char[] r1 = r3.chars
                    int r2 = r5 - r4
                    r0.<init>(r1, r4, r2)
                    return r0
            }
        }

        AppendableWriter(java.lang.Appendable r2) {
                r1 = this;
                r1.<init>()
                com.google.gson.internal.Streams$AppendableWriter$CurrentWrite r0 = new com.google.gson.internal.Streams$AppendableWriter$CurrentWrite
                r0.<init>()
                r1.currentWrite = r0
                r1.appendable = r2
                return
        }

        @Override
        public void close() {
                r0 = this;
                return
        }

        @Override
        public void flush() {
                r0 = this;
                return
        }

        @Override
        public void write(int r3) throws java.io.IOException {
                r2 = this;
                java.lang.Appendable r0 = r2.appendable
                char r1 = (char) r3
                r0.append(r1)
                return
        }

        @Override
        public void write(char[] r4, int r5, int r6) throws java.io.IOException {
                r3 = this;
                com.google.gson.internal.Streams$AppendableWriter$CurrentWrite r0 = r3.currentWrite
                r0.chars = r4
                java.lang.Appendable r1 = r3.appendable
                int r2 = r5 + r6
                r1.append(r0, r5, r2)
                return
        }
    }

    private Streams() {
            r1 = this;
            r1.<init>()
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            r0.<init>()
            throw r0
    }

    public static com.google.gson.JsonElement parse(com.google.gson.stream.JsonReader r3) throws com.google.gson.JsonParseException {
            r0 = 1
            r3.peek()     // Catch: java.lang.NumberFormatException -> Le java.io.IOException -> L15 com.google.gson.stream.MalformedJsonException -> L1c java.io.EOFException -> L23
            r0 = 0
            com.google.gson.TypeAdapter<com.google.gson.JsonElement> r1 = com.google.gson.internal.bind.TypeAdapters.JSON_ELEMENT     // Catch: java.lang.NumberFormatException -> Le java.io.IOException -> L15 com.google.gson.stream.MalformedJsonException -> L1c java.io.EOFException -> L23
            java.lang.Object r1 = r1.read(r3)     // Catch: java.lang.NumberFormatException -> Le java.io.IOException -> L15 com.google.gson.stream.MalformedJsonException -> L1c java.io.EOFException -> L23
            com.google.gson.JsonElement r1 = (com.google.gson.JsonElement) r1     // Catch: java.lang.NumberFormatException -> Le java.io.IOException -> L15 com.google.gson.stream.MalformedJsonException -> L1c java.io.EOFException -> L23
            return r1
        Le:
            r1 = move-exception
            com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException
            r2.<init>(r1)
            throw r2
        L15:
            r1 = move-exception
            com.google.gson.JsonIOException r2 = new com.google.gson.JsonIOException
            r2.<init>(r1)
            throw r2
        L1c:
            r1 = move-exception
            com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException
            r2.<init>(r1)
            throw r2
        L23:
            r1 = move-exception
            if (r0 == 0) goto L29
            com.google.gson.JsonNull r2 = com.google.gson.JsonNull.INSTANCE
            return r2
        L29:
            com.google.gson.JsonSyntaxException r2 = new com.google.gson.JsonSyntaxException
            r2.<init>(r1)
            throw r2
    }

    public static void write(com.google.gson.JsonElement r1, com.google.gson.stream.JsonWriter r2) throws java.io.IOException {
            com.google.gson.TypeAdapter<com.google.gson.JsonElement> r0 = com.google.gson.internal.bind.TypeAdapters.JSON_ELEMENT
            r0.write(r2, r1)
            return
    }

    public static java.io.Writer writerForAppendable(java.lang.Appendable r1) {
            boolean r0 = r1 instanceof java.io.Writer
            if (r0 == 0) goto L8
            r0 = r1
            java.io.Writer r0 = (java.io.Writer) r0
            goto Ld
        L8:
            com.google.gson.internal.Streams$AppendableWriter r0 = new com.google.gson.internal.Streams$AppendableWriter
            r0.<init>(r1)
        Ld:
            return r0
    }
}
