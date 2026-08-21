package com.google.gson;

public final class JsonPrimitive extends com.google.gson.JsonElement {
    private static final java.lang.Class<?>[] PRIMITIVE_TYPES = null;
    private java.lang.Object value;

    static {
            r0 = 16
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class r1 = java.lang.Integer.TYPE
            r2 = 0
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Long.TYPE
            r2 = 1
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Short.TYPE
            r2 = 2
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Float.TYPE
            r2 = 3
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Double.TYPE
            r2 = 4
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Byte.TYPE
            r2 = 5
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Boolean.TYPE
            r2 = 6
            r0[r2] = r1
            java.lang.Class r1 = java.lang.Character.TYPE
            r2 = 7
            r0[r2] = r1
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            r2 = 8
            r0[r2] = r1
            java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
            r2 = 9
            r0[r2] = r1
            java.lang.Class<java.lang.Short> r1 = java.lang.Short.class
            r2 = 10
            r0[r2] = r1
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            r2 = 11
            r0[r2] = r1
            java.lang.Class<java.lang.Double> r1 = java.lang.Double.class
            r2 = 12
            r0[r2] = r1
            java.lang.Class<java.lang.Byte> r1 = java.lang.Byte.class
            r2 = 13
            r0[r2] = r1
            java.lang.Class<java.lang.Boolean> r1 = java.lang.Boolean.class
            r2 = 14
            r0[r2] = r1
            java.lang.Class<java.lang.Character> r1 = java.lang.Character.class
            r2 = 15
            r0[r2] = r1
            com.google.gson.JsonPrimitive.PRIMITIVE_TYPES = r0
            return
    }

    public JsonPrimitive(java.lang.Boolean r1) {
            r0 = this;
            r0.<init>()
            r0.setValue(r1)
            return
    }

    public JsonPrimitive(java.lang.Character r1) {
            r0 = this;
            r0.<init>()
            r0.setValue(r1)
            return
    }

    public JsonPrimitive(java.lang.Number r1) {
            r0 = this;
            r0.<init>()
            r0.setValue(r1)
            return
    }

    JsonPrimitive(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.setValue(r1)
            return
    }

    public JsonPrimitive(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.setValue(r1)
            return
    }

    private static boolean isIntegral(com.google.gson.JsonPrimitive r3) {
            java.lang.Object r0 = r3.value
            boolean r1 = r0 instanceof java.lang.Number
            r2 = 0
            if (r1 == 0) goto L1f
            java.lang.Number r0 = (java.lang.Number) r0
            boolean r1 = r0 instanceof java.math.BigInteger
            if (r1 != 0) goto L1d
            boolean r1 = r0 instanceof java.lang.Long
            if (r1 != 0) goto L1d
            boolean r1 = r0 instanceof java.lang.Integer
            if (r1 != 0) goto L1d
            boolean r1 = r0 instanceof java.lang.Short
            if (r1 != 0) goto L1d
            boolean r1 = r0 instanceof java.lang.Byte
            if (r1 == 0) goto L1e
        L1d:
            r2 = 1
        L1e:
            return r2
        L1f:
            return r2
    }

    private static boolean isPrimitiveOrString(java.lang.Object r8) {
            boolean r0 = r8 instanceof java.lang.String
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.Class r0 = r8.getClass()
            java.lang.Class<?>[] r2 = com.google.gson.JsonPrimitive.PRIMITIVE_TYPES
            int r3 = r2.length
            r4 = 0
            r5 = 0
        Lf:
            if (r5 >= r3) goto L1d
            r6 = r2[r5]
            boolean r7 = r6.isAssignableFrom(r0)
            if (r7 == 0) goto L1a
            return r1
        L1a:
            int r5 = r5 + 1
            goto Lf
        L1d:
            return r4
    }

    @Override
    public com.google.gson.JsonElement deepCopy() {
            r1 = this;
            com.google.gson.JsonPrimitive r0 = r1.deepCopy()
            return r0
    }

    @Override
    public com.google.gson.JsonPrimitive deepCopy() {
            r0 = this;
            return r0
    }

    public boolean equals(java.lang.Object r9) {
            r8 = this;
            r0 = 1
            if (r8 != r9) goto L4
            return r0
        L4:
            r1 = 0
            if (r9 == 0) goto L7b
            java.lang.Class r2 = r8.getClass()
            java.lang.Class r3 = r9.getClass()
            if (r2 == r3) goto L12
            goto L7b
        L12:
            r2 = r9
            com.google.gson.JsonPrimitive r2 = (com.google.gson.JsonPrimitive) r2
            java.lang.Object r3 = r8.value
            if (r3 != 0) goto L20
            java.lang.Object r3 = r2.value
            if (r3 != 0) goto L1e
            goto L1f
        L1e:
            r0 = 0
        L1f:
            return r0
        L20:
            boolean r3 = isIntegral(r8)
            if (r3 == 0) goto L43
            boolean r3 = isIntegral(r2)
            if (r3 == 0) goto L43
            java.lang.Number r3 = r8.getAsNumber()
            long r3 = r3.longValue()
            java.lang.Number r5 = r2.getAsNumber()
            long r5 = r5.longValue()
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 != 0) goto L41
            goto L42
        L41:
            r0 = 0
        L42:
            return r0
        L43:
            java.lang.Object r3 = r8.value
            boolean r3 = r3 instanceof java.lang.Number
            if (r3 == 0) goto L72
            java.lang.Object r3 = r2.value
            boolean r3 = r3 instanceof java.lang.Number
            if (r3 == 0) goto L72
            java.lang.Number r3 = r8.getAsNumber()
            double r3 = r3.doubleValue()
            java.lang.Number r5 = r2.getAsNumber()
            double r5 = r5.doubleValue()
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 == 0) goto L71
            boolean r7 = java.lang.Double.isNaN(r3)
            if (r7 == 0) goto L70
            boolean r7 = java.lang.Double.isNaN(r5)
            if (r7 == 0) goto L70
            goto L71
        L70:
            r0 = 0
        L71:
            return r0
        L72:
            java.lang.Object r0 = r8.value
            java.lang.Object r1 = r2.value
            boolean r0 = r0.equals(r1)
            return r0
        L7b:
            return r1
    }

    @Override
    public java.math.BigDecimal getAsBigDecimal() {
            r2 = this;
            java.lang.Object r0 = r2.value
            boolean r1 = r0 instanceof java.math.BigDecimal
            if (r1 == 0) goto L9
            java.math.BigDecimal r0 = (java.math.BigDecimal) r0
            goto L13
        L9:
            java.math.BigDecimal r1 = new java.math.BigDecimal
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            r0 = r1
        L13:
            return r0
    }

    @Override
    public java.math.BigInteger getAsBigInteger() {
            r2 = this;
            java.lang.Object r0 = r2.value
            boolean r1 = r0 instanceof java.math.BigInteger
            if (r1 == 0) goto L9
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            goto L13
        L9:
            java.math.BigInteger r1 = new java.math.BigInteger
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            r0 = r1
        L13:
            return r0
    }

    @Override
    public boolean getAsBoolean() {
            r1 = this;
            boolean r0 = r1.isBoolean()
            if (r0 == 0) goto Lf
            java.lang.Boolean r0 = r1.getAsBooleanWrapper()
            boolean r0 = r0.booleanValue()
            return r0
        Lf:
            java.lang.String r0 = r1.getAsString()
            boolean r0 = java.lang.Boolean.parseBoolean(r0)
            return r0
    }

    @Override
    java.lang.Boolean getAsBooleanWrapper() {
            r1 = this;
            java.lang.Object r0 = r1.value
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            return r0
    }

    @Override
    public byte getAsByte() {
            r1 = this;
            boolean r0 = r1.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r1.getAsNumber()
            byte r0 = r0.byteValue()
            goto L17
        Lf:
            java.lang.String r0 = r1.getAsString()
            byte r0 = java.lang.Byte.parseByte(r0)
        L17:
            return r0
    }

    @Override
    public char getAsCharacter() {
            r2 = this;
            java.lang.String r0 = r2.getAsString()
            r1 = 0
            char r0 = r0.charAt(r1)
            return r0
    }

    @Override
    public double getAsDouble() {
            r2 = this;
            boolean r0 = r2.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r2.getAsNumber()
            double r0 = r0.doubleValue()
            goto L17
        Lf:
            java.lang.String r0 = r2.getAsString()
            double r0 = java.lang.Double.parseDouble(r0)
        L17:
            return r0
    }

    @Override
    public float getAsFloat() {
            r1 = this;
            boolean r0 = r1.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r1.getAsNumber()
            float r0 = r0.floatValue()
            goto L17
        Lf:
            java.lang.String r0 = r1.getAsString()
            float r0 = java.lang.Float.parseFloat(r0)
        L17:
            return r0
    }

    @Override
    public int getAsInt() {
            r1 = this;
            boolean r0 = r1.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r1.getAsNumber()
            int r0 = r0.intValue()
            goto L17
        Lf:
            java.lang.String r0 = r1.getAsString()
            int r0 = java.lang.Integer.parseInt(r0)
        L17:
            return r0
    }

    @Override
    public long getAsLong() {
            r2 = this;
            boolean r0 = r2.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r2.getAsNumber()
            long r0 = r0.longValue()
            goto L17
        Lf:
            java.lang.String r0 = r2.getAsString()
            long r0 = java.lang.Long.parseLong(r0)
        L17:
            return r0
    }

    @Override
    public java.lang.Number getAsNumber() {
            r2 = this;
            java.lang.Object r0 = r2.value
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto Le
            com.google.gson.internal.LazilyParsedNumber r1 = new com.google.gson.internal.LazilyParsedNumber
            java.lang.String r0 = (java.lang.String) r0
            r1.<init>(r0)
            goto L11
        Le:
            r1 = r0
            java.lang.Number r1 = (java.lang.Number) r1
        L11:
            return r1
    }

    @Override
    public short getAsShort() {
            r1 = this;
            boolean r0 = r1.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r1.getAsNumber()
            short r0 = r0.shortValue()
            goto L17
        Lf:
            java.lang.String r0 = r1.getAsString()
            short r0 = java.lang.Short.parseShort(r0)
        L17:
            return r0
    }

    @Override
    public java.lang.String getAsString() {
            r1 = this;
            boolean r0 = r1.isNumber()
            if (r0 == 0) goto Lf
            java.lang.Number r0 = r1.getAsNumber()
            java.lang.String r0 = r0.toString()
            return r0
        Lf:
            boolean r0 = r1.isBoolean()
            if (r0 == 0) goto L1e
            java.lang.Boolean r0 = r1.getAsBooleanWrapper()
            java.lang.String r0 = r0.toString()
            return r0
        L1e:
            java.lang.Object r0 = r1.value
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public int hashCode() {
            r4 = this;
            java.lang.Object r0 = r4.value
            if (r0 != 0) goto L7
            r0 = 31
            return r0
        L7:
            boolean r0 = isIntegral(r4)
            r1 = 32
            if (r0 == 0) goto L1c
            java.lang.Number r0 = r4.getAsNumber()
            long r2 = r0.longValue()
            long r0 = r2 >>> r1
            long r0 = r0 ^ r2
            int r1 = (int) r0
            return r1
        L1c:
            java.lang.Object r0 = r4.value
            boolean r2 = r0 instanceof java.lang.Number
            if (r2 == 0) goto L33
            java.lang.Number r0 = r4.getAsNumber()
            double r2 = r0.doubleValue()
            long r2 = java.lang.Double.doubleToLongBits(r2)
            long r0 = r2 >>> r1
            long r0 = r0 ^ r2
            int r1 = (int) r0
            return r1
        L33:
            int r0 = r0.hashCode()
            return r0
    }

    public boolean isBoolean() {
            r1 = this;
            java.lang.Object r0 = r1.value
            boolean r0 = r0 instanceof java.lang.Boolean
            return r0
    }

    public boolean isNumber() {
            r1 = this;
            java.lang.Object r0 = r1.value
            boolean r0 = r0 instanceof java.lang.Number
            return r0
    }

    public boolean isString() {
            r1 = this;
            java.lang.Object r0 = r1.value
            boolean r0 = r0 instanceof java.lang.String
            return r0
    }

    void setValue(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.Character
            if (r0 == 0) goto L12
            r0 = r3
            java.lang.Character r0 = (java.lang.Character) r0
            char r0 = r0.charValue()
            java.lang.String r1 = java.lang.String.valueOf(r0)
            r2.value = r1
            goto L25
        L12:
            boolean r0 = r3 instanceof java.lang.Number
            if (r0 != 0) goto L1f
            boolean r0 = isPrimitiveOrString(r3)
            if (r0 == 0) goto L1d
            goto L1f
        L1d:
            r0 = 0
            goto L20
        L1f:
            r0 = 1
        L20:
            com.google.gson.internal.$Gson$Preconditions.checkArgument(r0)
            r2.value = r3
        L25:
            return
    }
}
