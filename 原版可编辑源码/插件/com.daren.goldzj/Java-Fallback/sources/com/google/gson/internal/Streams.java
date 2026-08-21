package com.google.gson.internal;

import com.google.gson.JsonElement;
import com.google.gson.JsonIOException;
import com.google.gson.JsonNull;
import com.google.gson.JsonParseException;
import com.google.gson.JsonSyntaxException;
import com.google.gson.internal.bind.TypeAdapters;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.google.gson.stream.MalformedJsonException;
import java.io.EOFException;
import java.io.IOException;
import java.io.Writer;
import java.util.Objects;

public final class Streams {

    static class 1 {
    }

    private static final class AppendableWriter extends Writer {
        private final Appendable appendable;
        private final CurrentWrite currentWrite;

        private static class CurrentWrite implements CharSequence {
            private String cachedString;
            private char[] chars;

            private CurrentWrite() {
            }

            CurrentWrite(1 r1) {
                this();
            }

            void setChars(char[] r1) {
                this.chars = r1;
                this.cachedString = null;
            }

            @Override
            public int length() {
                return this.chars.length;
            }

            @Override
            public char charAt(int r2) {
                return this.chars[r2];
            }

            @Override
            public CharSequence subSequence(int r3, int r4) {
                return new String(this.chars, r3, r4 - r3);
            }

            @Override
            public String toString() {
                if (this.cachedString != null) goto L6;
                this.cachedString = new String(this.chars);
            L6:
                return this.cachedString;
            }
        }

        @Override
        public void close() {
        }

        @Override
        public void flush() {
        }

        @Override
        public Appendable append(CharSequence r1) throws IOException {
            return append(r1);
        }

        @Override
        public Appendable append(CharSequence r1, int r2, int r3) throws IOException {
            return append(r1, r2, r3);
        }

        AppendableWriter(Appendable r3) {
            this.currentWrite = new CurrentWrite(null);
            this.appendable = r3;
        }

        @Override
        public void write(char[] r2, int r3, int r4) throws IOException {
            this.currentWrite.setChars(r2);
            this.appendable.append(this.currentWrite, r3, r4 + r3);
        }

        @Override
        public void write(int r2) throws IOException {
            this.appendable.append((char) r2);
        }

        @Override
        public void write(String r2, int r3, int r4) throws IOException {
            Objects.requireNonNull(r2);
            this.appendable.append(r2, r3, r4 + r3);
        }

        @Override
        public Writer append(CharSequence r2) throws IOException {
            this.appendable.append(r2);
            return this;
        }

        @Override
        public Writer append(CharSequence r2, int r3, int r4) throws IOException {
            this.appendable.append(r2, r3, r4);
            return this;
        }
    }

    private Streams() {
        throw new UnsupportedOperationException();
    }

    public static JsonElement parse(JsonReader r2) throws JsonParseException {
        r2.peek();     // Catch: NumberFormatException -> L8 IOException -> L11 MalformedJsonException -> L14 EOFException -> L17
        boolean r0 = false;
        return TypeAdapters.JSON_ELEMENT.read(r2);
    L6:
        e = e;
    L19:
        if (r0 == false) goto L23;
        return JsonNull.INSTANCE;
    L23:
        throw new JsonSyntaxException(e);
    L17:
        e = e;
        r0 = true;
    L14:
        e = move-exception;
        throw new JsonSyntaxException(e);
    L11:
        e = move-exception;
        throw new JsonIOException(e);
    L8:
        e = move-exception;
        throw new JsonSyntaxException(e);
    }

    public static void write(JsonElement r1, JsonWriter r2) throws IOException {
        TypeAdapters.JSON_ELEMENT.write(r2, r1);
    }

    public static Writer writerForAppendable(Appendable r1) {
        if ((r1 instanceof Writer) == false) goto L6;
        return (Writer) r1;
    L6:
        return new AppendableWriter(r1);
    }
}
