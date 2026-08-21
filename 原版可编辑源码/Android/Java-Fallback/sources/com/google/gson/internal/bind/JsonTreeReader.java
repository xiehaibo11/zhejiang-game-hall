package com.google.gson.internal.bind;

public final class JsonTreeReader extends com.google.gson.stream.JsonReader {
    private static final java.lang.Object SENTINEL_CLOSED = null;
    private static final java.io.Reader UNREADABLE_READER = null;
    private int[] pathIndices;
    private java.lang.String[] pathNames;
    private java.lang.Object[] stack;
    private int stackSize;


    static {
            com.google.gson.internal.bind.JsonTreeReader$1 r0 = new com.google.gson.internal.bind.JsonTreeReader$1
            r0.<init>()
            com.google.gson.internal.bind.JsonTreeReader.UNREADABLE_READER = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.google.gson.internal.bind.JsonTreeReader.SENTINEL_CLOSED = r0
            return
    }

    public JsonTreeReader(com.google.gson.JsonElement r3) {
            r2 = this;
            java.io.Reader r0 = com.google.gson.internal.bind.JsonTreeReader.UNREADABLE_READER
            r2.<init>(r0)
            r0 = 32
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2.stack = r1
            r1 = 0
            r2.stackSize = r1
            java.lang.String[] r1 = new java.lang.String[r0]
            r2.pathNames = r1
            int[] r0 = new int[r0]
            r2.pathIndices = r0
            r2.push(r3)
            return
    }

    private void expect(com.google.gson.stream.JsonToken r4) throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.JsonToken r0 = r3.peek()
            if (r0 != r4) goto L7
            return
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r2 = " but was "
            r1.append(r2)
            com.google.gson.stream.JsonToken r2 = r3.peek()
            r1.append(r2)
            java.lang.String r2 = r3.locationString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private java.lang.String locationString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " at path "
            r0.append(r1)
            java.lang.String r1 = r2.getPath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private java.lang.Object peekStack() {
            r2 = this;
            java.lang.Object[] r0 = r2.stack
            int r1 = r2.stackSize
            int r1 = r1 + (-1)
            r0 = r0[r1]
            return r0
    }

    private java.lang.Object popStack() {
            r4 = this;
            java.lang.Object[] r0 = r4.stack
            int r1 = r4.stackSize
            int r1 = r1 + (-1)
            r4.stackSize = r1
            r1 = r0[r1]
            int r2 = r4.stackSize
            r3 = 0
            r0[r2] = r3
            return r1
    }

    private void push(java.lang.Object r7) {
            r6 = this;
            int r0 = r6.stackSize
            java.lang.Object[] r1 = r6.stack
            int r2 = r1.length
            if (r0 != r2) goto L2b
            int r2 = r0 * 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            int r3 = r0 * 2
            int[] r3 = new int[r3]
            int r4 = r0 * 2
            java.lang.String[] r4 = new java.lang.String[r4]
            r5 = 0
            java.lang.System.arraycopy(r1, r5, r2, r5, r0)
            int[] r0 = r6.pathIndices
            int r1 = r6.stackSize
            java.lang.System.arraycopy(r0, r5, r3, r5, r1)
            java.lang.String[] r0 = r6.pathNames
            int r1 = r6.stackSize
            java.lang.System.arraycopy(r0, r5, r4, r5, r1)
            r6.stack = r2
            r6.pathIndices = r3
            r6.pathNames = r4
        L2b:
            java.lang.Object[] r0 = r6.stack
            int r1 = r6.stackSize
            int r2 = r1 + 1
            r6.stackSize = r2
            r0[r1] = r7
            return
    }

    @Override
    public void beginArray() throws java.io.IOException {
            r4 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.BEGIN_ARRAY
            r4.expect(r0)
            java.lang.Object r0 = r4.peekStack()
            com.google.gson.JsonArray r0 = (com.google.gson.JsonArray) r0
            java.util.Iterator r1 = r0.iterator()
            r4.push(r1)
            int[] r1 = r4.pathIndices
            int r2 = r4.stackSize
            int r2 = r2 + (-1)
            r3 = 0
            r1[r2] = r3
            return
    }

    @Override
    public void beginObject() throws java.io.IOException {
            r2 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.BEGIN_OBJECT
            r2.expect(r0)
            java.lang.Object r0 = r2.peekStack()
            com.google.gson.JsonObject r0 = (com.google.gson.JsonObject) r0
            java.util.Set r1 = r0.entrySet()
            java.util.Iterator r1 = r1.iterator()
            r2.push(r1)
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r4 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.Object r2 = com.google.gson.internal.bind.JsonTreeReader.SENTINEL_CLOSED
            r3 = 0
            r1[r3] = r2
            r4.stack = r1
            r4.stackSize = r0
            return
    }

    @Override
    public void endArray() throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.END_ARRAY
            r3.expect(r0)
            r3.popStack()
            r3.popStack()
            int r0 = r3.stackSize
            if (r0 <= 0) goto L19
            int[] r1 = r3.pathIndices
            int r0 = r0 + (-1)
            r2 = r1[r0]
            int r2 = r2 + 1
            r1[r0] = r2
        L19:
            return
    }

    @Override
    public void endObject() throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.END_OBJECT
            r3.expect(r0)
            r3.popStack()
            r3.popStack()
            int r0 = r3.stackSize
            if (r0 <= 0) goto L19
            int[] r1 = r3.pathIndices
            int r0 = r0 + (-1)
            r2 = r1[r0]
            int r2 = r2 + 1
            r1[r0] = r2
        L19:
            return
    }

    @Override
    public java.lang.String getPath() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 36
            java.lang.StringBuilder r0 = r0.append(r1)
            r1 = 0
        Lc:
            int r2 = r4.stackSize
            if (r1 >= r2) goto L53
            java.lang.Object[] r2 = r4.stack
            r3 = r2[r1]
            boolean r3 = r3 instanceof com.google.gson.JsonArray
            if (r3 == 0) goto L32
            int r1 = r1 + 1
            r2 = r2[r1]
            boolean r2 = r2 instanceof java.util.Iterator
            if (r2 == 0) goto L50
            r2 = 91
            r0.append(r2)
            int[] r2 = r4.pathIndices
            r2 = r2[r1]
            r0.append(r2)
            r2 = 93
            r0.append(r2)
            goto L50
        L32:
            r3 = r2[r1]
            boolean r3 = r3 instanceof com.google.gson.JsonObject
            if (r3 == 0) goto L50
            int r1 = r1 + 1
            r2 = r2[r1]
            boolean r2 = r2 instanceof java.util.Iterator
            if (r2 == 0) goto L50
            r2 = 46
            r0.append(r2)
            java.lang.String[] r2 = r4.pathNames
            r3 = r2[r1]
            if (r3 == 0) goto L50
            r2 = r2[r1]
            r0.append(r2)
        L50:
            int r1 = r1 + 1
            goto Lc
        L53:
            java.lang.String r1 = r0.toString()
            return r1
    }

    @Override
    public boolean hasNext() throws java.io.IOException {
            r2 = this;
            com.google.gson.stream.JsonToken r0 = r2.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_OBJECT
            if (r0 == r1) goto Le
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.END_ARRAY
            if (r0 == r1) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    @Override
    public boolean nextBoolean() throws java.io.IOException {
            r4 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.BOOLEAN
            r4.expect(r0)
            java.lang.Object r0 = r4.popStack()
            com.google.gson.JsonPrimitive r0 = (com.google.gson.JsonPrimitive) r0
            boolean r0 = r0.getAsBoolean()
            int r1 = r4.stackSize
            if (r1 <= 0) goto L1d
            int[] r2 = r4.pathIndices
            int r1 = r1 + (-1)
            r3 = r2[r1]
            int r3 = r3 + 1
            r2[r1] = r3
        L1d:
            return r0
    }

    @Override
    public double nextDouble() throws java.io.IOException {
            r6 = this;
            com.google.gson.stream.JsonToken r0 = r6.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            if (r0 == r1) goto L35
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            if (r0 != r1) goto Ld
            goto L35
        Ld:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.NUMBER
            r2.append(r3)
            java.lang.String r3 = " but was "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = r6.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L35:
            java.lang.Object r1 = r6.peekStack()
            com.google.gson.JsonPrimitive r1 = (com.google.gson.JsonPrimitive) r1
            double r1 = r1.getAsDouble()
            boolean r3 = r6.isLenient()
            if (r3 != 0) goto L69
            boolean r3 = java.lang.Double.isNaN(r1)
            if (r3 != 0) goto L52
            boolean r3 = java.lang.Double.isInfinite(r1)
            if (r3 != 0) goto L52
            goto L69
        L52:
            java.lang.NumberFormatException r3 = new java.lang.NumberFormatException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "JSON forbids NaN and infinities: "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
        L69:
            r6.popStack()
            int r3 = r6.stackSize
            if (r3 <= 0) goto L7a
            int[] r4 = r6.pathIndices
            int r3 = r3 + (-1)
            r5 = r4[r3]
            int r5 = r5 + 1
            r4[r3] = r5
        L7a:
            return r1
    }

    @Override
    public int nextInt() throws java.io.IOException {
            r5 = this;
            com.google.gson.stream.JsonToken r0 = r5.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            if (r0 == r1) goto L35
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            if (r0 != r1) goto Ld
            goto L35
        Ld:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.NUMBER
            r2.append(r3)
            java.lang.String r3 = " but was "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = r5.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L35:
            java.lang.Object r1 = r5.peekStack()
            com.google.gson.JsonPrimitive r1 = (com.google.gson.JsonPrimitive) r1
            int r1 = r1.getAsInt()
            r5.popStack()
            int r2 = r5.stackSize
            if (r2 <= 0) goto L50
            int[] r3 = r5.pathIndices
            int r2 = r2 + (-1)
            r4 = r3[r2]
            int r4 = r4 + 1
            r3[r2] = r4
        L50:
            return r1
    }

    @Override
    public long nextLong() throws java.io.IOException {
            r6 = this;
            com.google.gson.stream.JsonToken r0 = r6.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            if (r0 == r1) goto L35
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            if (r0 != r1) goto Ld
            goto L35
        Ld:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.NUMBER
            r2.append(r3)
            java.lang.String r3 = " but was "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = r6.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L35:
            java.lang.Object r1 = r6.peekStack()
            com.google.gson.JsonPrimitive r1 = (com.google.gson.JsonPrimitive) r1
            long r1 = r1.getAsLong()
            r6.popStack()
            int r3 = r6.stackSize
            if (r3 <= 0) goto L50
            int[] r4 = r6.pathIndices
            int r3 = r3 + (-1)
            r5 = r4[r3]
            int r5 = r5 + 1
            r4[r3] = r5
        L50:
            return r1
    }

    @Override
    public java.lang.String nextName() throws java.io.IOException {
            r5 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.NAME
            r5.expect(r0)
            java.lang.Object r0 = r5.peekStack()
            java.util.Iterator r0 = (java.util.Iterator) r0
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String[] r3 = r5.pathNames
            int r4 = r5.stackSize
            int r4 = r4 + (-1)
            r3[r4] = r2
            java.lang.Object r3 = r1.getValue()
            r5.push(r3)
            return r2
    }

    @Override
    public void nextNull() throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.NULL
            r3.expect(r0)
            r3.popStack()
            int r0 = r3.stackSize
            if (r0 <= 0) goto L16
            int[] r1 = r3.pathIndices
            int r0 = r0 + (-1)
            r2 = r1[r0]
            int r2 = r2 + 1
            r1[r0] = r2
        L16:
            return
    }

    @Override
    public java.lang.String nextString() throws java.io.IOException {
            r5 = this;
            com.google.gson.stream.JsonToken r0 = r5.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.STRING
            if (r0 == r1) goto L35
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NUMBER
            if (r0 != r1) goto Ld
            goto L35
        Ld:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected "
            r2.append(r3)
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.STRING
            r2.append(r3)
            java.lang.String r3 = " but was "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = r5.locationString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L35:
            java.lang.Object r1 = r5.popStack()
            com.google.gson.JsonPrimitive r1 = (com.google.gson.JsonPrimitive) r1
            java.lang.String r1 = r1.getAsString()
            int r2 = r5.stackSize
            if (r2 <= 0) goto L4d
            int[] r3 = r5.pathIndices
            int r2 = r2 + (-1)
            r4 = r3[r2]
            int r4 = r4 + 1
            r3[r2] = r4
        L4d:
            return r1
    }

    @Override
    public com.google.gson.stream.JsonToken peek() throws java.io.IOException {
            r4 = this;
            int r0 = r4.stackSize
            if (r0 != 0) goto L7
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.END_DOCUMENT
            return r0
        L7:
            java.lang.Object r0 = r4.peekStack()
            boolean r1 = r0 instanceof java.util.Iterator
            if (r1 == 0) goto L3b
            java.lang.Object[] r1 = r4.stack
            int r2 = r4.stackSize
            int r2 = r2 + (-2)
            r1 = r1[r2]
            boolean r1 = r1 instanceof com.google.gson.JsonObject
            r2 = r0
            java.util.Iterator r2 = (java.util.Iterator) r2
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L33
            if (r1 == 0) goto L27
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.NAME
            return r3
        L27:
            java.lang.Object r3 = r2.next()
            r4.push(r3)
            com.google.gson.stream.JsonToken r3 = r4.peek()
            return r3
        L33:
            if (r1 == 0) goto L38
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.END_OBJECT
            goto L3a
        L38:
            com.google.gson.stream.JsonToken r3 = com.google.gson.stream.JsonToken.END_ARRAY
        L3a:
            return r3
        L3b:
            boolean r1 = r0 instanceof com.google.gson.JsonObject
            if (r1 == 0) goto L42
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_OBJECT
            return r1
        L42:
            boolean r1 = r0 instanceof com.google.gson.JsonArray
            if (r1 == 0) goto L49
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.BEGIN_ARRAY
            return r1
        L49:
            boolean r1 = r0 instanceof com.google.gson.JsonPrimitive
            if (r1 == 0) goto L71
            r1 = r0
            com.google.gson.JsonPrimitive r1 = (com.google.gson.JsonPrimitive) r1
            boolean r2 = r1.isString()
            if (r2 == 0) goto L59
            com.google.gson.stream.JsonToken r2 = com.google.gson.stream.JsonToken.STRING
            return r2
        L59:
            boolean r2 = r1.isBoolean()
            if (r2 == 0) goto L62
            com.google.gson.stream.JsonToken r2 = com.google.gson.stream.JsonToken.BOOLEAN
            return r2
        L62:
            boolean r2 = r1.isNumber()
            if (r2 == 0) goto L6b
            com.google.gson.stream.JsonToken r2 = com.google.gson.stream.JsonToken.NUMBER
            return r2
        L6b:
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>()
            throw r2
        L71:
            boolean r1 = r0 instanceof com.google.gson.JsonNull
            if (r1 == 0) goto L78
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NULL
            return r1
        L78:
            java.lang.Object r1 = com.google.gson.internal.bind.JsonTreeReader.SENTINEL_CLOSED
            if (r0 != r1) goto L84
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "JsonReader is closed"
            r1.<init>(r2)
            throw r1
        L84:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
    }

    public void promoteNameToValue() throws java.io.IOException {
            r4 = this;
            com.google.gson.stream.JsonToken r0 = com.google.gson.stream.JsonToken.NAME
            r4.expect(r0)
            java.lang.Object r0 = r4.peekStack()
            java.util.Iterator r0 = (java.util.Iterator) r0
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            r4.push(r2)
            com.google.gson.JsonPrimitive r2 = new com.google.gson.JsonPrimitive
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r2.<init>(r3)
            r4.push(r2)
            return
    }

    @Override
    public void skipValue() throws java.io.IOException {
            r3 = this;
            com.google.gson.stream.JsonToken r0 = r3.peek()
            com.google.gson.stream.JsonToken r1 = com.google.gson.stream.JsonToken.NAME
            java.lang.String r2 = "null"
            if (r0 != r1) goto L16
            r3.nextName()
            java.lang.String[] r0 = r3.pathNames
            int r1 = r3.stackSize
            int r1 = r1 + (-2)
            r0[r1] = r2
            goto L23
        L16:
            r3.popStack()
            int r0 = r3.stackSize
            if (r0 <= 0) goto L23
            java.lang.String[] r1 = r3.pathNames
            int r0 = r0 + (-1)
            r1[r0] = r2
        L23:
            int r0 = r3.stackSize
            if (r0 <= 0) goto L31
            int[] r1 = r3.pathIndices
            int r0 = r0 + (-1)
            r2 = r1[r0]
            int r2 = r2 + 1
            r1[r0] = r2
        L31:
            return
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.Class r0 = r1.getClass()
            java.lang.String r0 = r0.getSimpleName()
            return r0
    }
}
