package com.google.gson.internal.bind;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonNull;
import com.google.gson.JsonObject;
import com.google.gson.JsonPrimitive;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonToken;
import com.google.gson.stream.MalformedJsonException;
import java.io.IOException;
import java.io.Reader;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Map;

public final class JsonTreeReader extends JsonReader {
    private static final Object SENTINEL_CLOSED = null;
    private static final Reader UNREADABLE_READER = null;
    private int[] pathIndices;
    private String[] pathNames;
    private Object[] stack;
    private int stackSize;

    static class 2 {
        static final int[] $SwitchMap$com$google$gson$stream$JsonToken = null;

        static {
            $SwitchMap$com$google$gson$stream$JsonToken = new int[JsonToken.values().length];
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.NAME.ordinal()] = 1;     // Catch: NoSuchFieldError -> L8
        L12:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.END_ARRAY.ordinal()] = 2;     // Catch: NoSuchFieldError -> L9
        L14:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.END_OBJECT.ordinal()] = 3;     // Catch: NoSuchFieldError -> L10
        L18:
            $SwitchMap$com$google$gson$stream$JsonToken[JsonToken.END_DOCUMENT.ordinal()] = 4;     // Catch: NoSuchFieldError -> L11
            return;
        }
    }

    static {
        UNREADABLE_READER = new 1();
        SENTINEL_CLOSED = new Object();
    }

    public JsonTreeReader(JsonElement r3) {
        super(UNREADABLE_READER);
        this.stack = new Object[32];
        this.stackSize = 0;
        this.pathNames = new String[32];
        this.pathIndices = new int[32];
        push(r3);
    }

    @Override
    public void beginArray() throws IOException {
        expect(JsonToken.BEGIN_ARRAY);
        push(((JsonArray) peekStack()).iterator());
        this.pathIndices[this.stackSize - 1] = 0;
    }

    @Override
    public void endArray() throws IOException {
        expect(JsonToken.END_ARRAY);
        popStack();
        popStack();
        int r0 = this.stackSize;
        if (r0 <= 0) goto L6;
        int[] r1 = this.pathIndices;
        int r02 = r0 - 1;
        r1[r02] = r1[r02] + 1;
        return;
    }

    @Override
    public void beginObject() throws IOException {
        expect(JsonToken.BEGIN_OBJECT);
        push(((JsonObject) peekStack()).entrySet().iterator());
    }

    @Override
    public void endObject() throws IOException {
        expect(JsonToken.END_OBJECT);
        this.pathNames[this.stackSize - 1] = null;
        popStack();
        popStack();
        int r0 = this.stackSize;
        if (r0 <= 0) goto L6;
        int[] r1 = this.pathIndices;
        int r02 = r0 - 1;
        r1[r02] = r1[r02] + 1;
        return;
    }

    @Override
    public boolean hasNext() throws IOException {
        JsonToken r0 = peek();
        if (r0 != JsonToken.END_OBJECT) goto L5;
    L9:
        return false;
    L5:
        if (r0 == JsonToken.END_ARRAY) goto L9;
        if (r0 == JsonToken.END_DOCUMENT) goto L9;
        return true;
    }

    @Override
    public JsonToken peek() throws IOException {
        if (this.stackSize == 0) goto L5;
        Object r0 = peekStack();
        if ((r0 instanceof Iterator) == false) goto L20;
        boolean r1 = this.stack[this.stackSize - 2] instanceof JsonObject;
        Iterator r02 = (Iterator) r0;
        if (r02.hasNext() == false) goto L15;
        if (r1 == true) goto L12;
        push(r02.next());
        return peek();
    L12:
        return JsonToken.NAME;
    L15:
        if (r1 == false) goto L18;
        return JsonToken.END_OBJECT;
    L18:
        return JsonToken.END_ARRAY;
    L20:
        if ((r0 instanceof JsonObject) == false) goto L24;
        return JsonToken.BEGIN_OBJECT;
    L24:
        if ((r0 instanceof JsonArray) == false) goto L28;
        return JsonToken.BEGIN_ARRAY;
    L28:
        if ((r0 instanceof JsonPrimitive) == false) goto L44;
        JsonPrimitive r03 = (JsonPrimitive) r0;
        if (r03.isString() == false) goto L34;
        return JsonToken.STRING;
    L34:
        if (r03.isBoolean() == false) goto L38;
        return JsonToken.BOOLEAN;
    L38:
        if (r03.isNumber() == false) goto L42;
        return JsonToken.NUMBER;
    L42:
        throw new AssertionError();
    L44:
        if ((r0 instanceof JsonNull) == false) goto L48;
        return JsonToken.NULL;
    L48:
        if (r0 != SENTINEL_CLOSED) goto L52;
        throw new IllegalStateException("JsonReader is closed");
    L52:
        throw new MalformedJsonException("Custom JsonElement subclass " + r0.getClass().getName() + " is not supported");
    L5:
        return JsonToken.END_DOCUMENT;
    }

    private Object peekStack() {
        return this.stack[this.stackSize - 1];
    }

    private Object popStack() {
        Object[] r0 = this.stack;
        int r1 = this.stackSize - 1;
        this.stackSize = r1;
        Object r12 = r0[r1];
        r0[this.stackSize] = null;
        return r12;
    }

    private void expect(JsonToken r4) throws IOException {
        if (peek() != r4) goto L6;
        return;
    L6:
        throw new IllegalStateException("Expected " + r4 + " but was " + peek() + locationString());
    }

    private String nextName(boolean r5) throws IOException {
        expect(JsonToken.NAME);
        Map.Entry r0 = (Map.Entry) ((Iterator) peekStack()).next();
        String r1 = (String) r0.getKey();
        String[] r2 = this.pathNames;
        int r3 = this.stackSize - 1;
        if (r5 == false) goto L5;
        String r52 = "<skipped>";
    L6:
        r2[r3] = r52;
        push(r0.getValue());
        return r1;
    L5:
        r52 = r1;
        goto L6
    }

    @Override
    public String nextName() throws IOException {
        return nextName(false);
    }

    @Override
    public String nextString() throws IOException {
        JsonToken r0 = peek();
        if (r0 != JsonToken.STRING) goto L5;
    L9:
        String r02 = ((JsonPrimitive) popStack()).getAsString();
        int r1 = this.stackSize;
        if (r1 <= 0) goto L12;
        int[] r2 = this.pathIndices;
        int r12 = r1 - 1;
        r2[r12] = r2[r12] + 1;
    L12:
        return r02;
    L5:
        if (r0 == JsonToken.NUMBER) goto L9;
        throw new IllegalStateException("Expected " + JsonToken.STRING + " but was " + r0 + locationString());
    }

    @Override
    public boolean nextBoolean() throws IOException {
        expect(JsonToken.BOOLEAN);
        boolean r0 = ((JsonPrimitive) popStack()).getAsBoolean();
        int r1 = this.stackSize;
        if (r1 <= 0) goto L5;
        int[] r2 = this.pathIndices;
        int r12 = r1 - 1;
        r2[r12] = r2[r12] + 1;
    L5:
        return r0;
    }

    @Override
    public void nextNull() throws IOException {
        expect(JsonToken.NULL);
        popStack();
        int r0 = this.stackSize;
        if (r0 <= 0) goto L6;
        int[] r1 = this.pathIndices;
        int r02 = r0 - 1;
        r1[r02] = r1[r02] + 1;
        return;
    }

    @Override
    public double nextDouble() throws IOException {
        JsonToken r0 = peek();
        if (r0 != JsonToken.NUMBER) goto L5;
    L9:
        double r02 = ((JsonPrimitive) peekStack()).getAsDouble();
        if (isLenient() == false) goto L12;
    L18:
        popStack();
        int r2 = this.stackSize;
        if (r2 <= 0) goto L21;
        int[] r3 = this.pathIndices;
        int r22 = r2 - 1;
        r3[r22] = r3[r22] + 1;
    L21:
        return r02;
    L12:
        if (Double.isNaN(r02) == true) goto L17;
        if (Double.isInfinite(r02) == false) goto L18;
    L17:
        throw new MalformedJsonException("JSON forbids NaN and infinities: " + r02);
    L5:
        if (r0 == JsonToken.STRING) goto L9;
        throw new IllegalStateException("Expected " + JsonToken.NUMBER + " but was " + r0 + locationString());
    }

    @Override
    public long nextLong() throws IOException {
        JsonToken r0 = peek();
        if (r0 != JsonToken.NUMBER) goto L5;
    L9:
        long r02 = ((JsonPrimitive) peekStack()).getAsLong();
        popStack();
        int r2 = this.stackSize;
        if (r2 <= 0) goto L12;
        int[] r3 = this.pathIndices;
        int r22 = r2 - 1;
        r3[r22] = r3[r22] + 1;
    L12:
        return r02;
    L5:
        if (r0 == JsonToken.STRING) goto L9;
        throw new IllegalStateException("Expected " + JsonToken.NUMBER + " but was " + r0 + locationString());
    }

    @Override
    public int nextInt() throws IOException {
        JsonToken r0 = peek();
        if (r0 != JsonToken.NUMBER) goto L5;
    L9:
        int r02 = ((JsonPrimitive) peekStack()).getAsInt();
        popStack();
        int r1 = this.stackSize;
        if (r1 <= 0) goto L12;
        int[] r2 = this.pathIndices;
        int r12 = r1 - 1;
        r2[r12] = r2[r12] + 1;
    L12:
        return r02;
    L5:
        if (r0 == JsonToken.STRING) goto L9;
        throw new IllegalStateException("Expected " + JsonToken.NUMBER + " but was " + r0 + locationString());
    }

    JsonElement nextJsonElement() throws IOException {
        JsonToken r0 = peek();
        if (r0 == JsonToken.NAME) goto L13;
        if (r0 == JsonToken.END_ARRAY) goto L13;
        if (r0 == JsonToken.END_OBJECT) goto L13;
        if (r0 == JsonToken.END_DOCUMENT) goto L13;
        JsonElement r02 = (JsonElement) peekStack();
        skipValue();
        return r02;
    L13:
        throw new IllegalStateException("Unexpected " + r0 + " when reading a JsonElement.");
    }

    @Override
    public void close() throws IOException {
        this.stack = new Object[]{SENTINEL_CLOSED};
        this.stackSize = 1;
    }

    @Override
    public void skipValue() throws IOException {
        JsonToken r0 = peek();
        int r02 = 2.$SwitchMap$com$google$gson$stream$JsonToken[r0.ordinal()];
        if (r02 != 1) goto L5;
        nextName(true);
        return;
    L5:
        if (r02 != 2) goto L7;
        endArray();
        return;
    L7:
        if (r02 != 3) goto L9;
        endObject();
        return;
    L9:
        if (r02 == 4) goto L17;
        popStack();
        int r03 = this.stackSize;
        if (r03 <= 0) goto L18;
        int[] r2 = this.pathIndices;
        int r04 = r03 - 1;
        r2[r04] = r2[r04] + 1;
        return;
    L18:
        return;
    }

    @Override
    public String toString() {
        return getClass().getSimpleName() + locationString();
    }

    public void promoteNameToValue() throws IOException {
        expect(JsonToken.NAME);
        Map.Entry r0 = (Map.Entry) ((Iterator) peekStack()).next();
        push(r0.getValue());
        push(new JsonPrimitive((String) r0.getKey()));
    }

    private void push(Object r4) {
        int r0 = this.stackSize;
        Object[] r1 = this.stack;
        if (r0 != r1.length) goto L5;
        int r02 = r0 * 2;
        this.stack = Arrays.copyOf(r1, r02);
        this.pathIndices = Arrays.copyOf(this.pathIndices, r02);
        this.pathNames = (String[]) Arrays.copyOf(this.pathNames, r02);
    L5:
        Object[] r03 = this.stack;
        int r12 = this.stackSize;
        this.stackSize = r12 + 1;
        r03[r12] = r4;
    }

    private String getPath(boolean r6) {
        StringBuilder r0 = new StringBuilder();
        r0.append('$');
        int r1 = 0;
    L3:
        int r2 = this.stackSize;
        if (r1 >= r2) goto L31;
        Object[] r3 = this.stack;
        if ((r3[r1] instanceof JsonArray) == false) goto L21;
        r1 = r1 + 1;
        if (r1 >= r2) goto L29;
        if ((r3[r1] instanceof Iterator) == false) goto L29;
        int r32 = this.pathIndices[r1];
        if (r6 == false) goto L19;
        if (r32 <= 0) goto L19;
        if (r1 != (r2 - 1)) goto L17;
    L18:
        r32 = r32 - 1;
        goto L19
    L17:
        if (r1 == (r2 - 2)) goto L18;
    L19:
        r0.append('[');
        r0.append(r32);
        r0.append(']');
    L29:
        r1 = r1 + 1;
        goto L3
    L21:
        if ((r3[r1] instanceof JsonObject) == false) goto L29;
        r1 = r1 + 1;
        if (r1 >= r2) goto L29;
        if ((r3[r1] instanceof Iterator) == false) goto L29;
        r0.append('.');
        String[] r22 = this.pathNames;
        if (r22[r1] == null) goto L29;
        r0.append(r22[r1]);
        goto L29
    L31:
        return r0.toString();
    }

    @Override
    public String getPreviousPath() {
        return getPath(true);
    }

    @Override
    public String getPath() {
        return getPath(false);
    }

    private String locationString() {
        return " at path " + getPath();
    }
}
