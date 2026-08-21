package com.google.gson;

import com.google.gson.internal.LazilyParsedNumber;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Objects;

public final class JsonPrimitive extends JsonElement {
    private final Object value;

    @Override
    public JsonPrimitive deepCopy() {
        return this;
    }

    @Override
    public JsonElement deepCopy() {
        return deepCopy();
    }

    public JsonPrimitive(Boolean r1) {
        this.value = Objects.requireNonNull(r1);
    }

    public JsonPrimitive(Number r1) {
        this.value = Objects.requireNonNull(r1);
    }

    public JsonPrimitive(String r1) {
        this.value = Objects.requireNonNull(r1);
    }

    public JsonPrimitive(Character r1) {
        this.value = ((Character) Objects.requireNonNull(r1)).toString();
    }

    public boolean isBoolean() {
        return this.value instanceof Boolean;
    }

    @Override
    public boolean getAsBoolean() {
        if (isBoolean() == false) goto L7;
        return ((Boolean) this.value).booleanValue();
    L7:
        return Boolean.parseBoolean(getAsString());
    }

    public boolean isNumber() {
        return this.value instanceof Number;
    }

    @Override
    public Number getAsNumber() {
        Object r0 = this.value;
        if ((r0 instanceof Number) == false) goto L7;
        return (Number) r0;
    L7:
        if ((r0 instanceof String) == false) goto L11;
        return new LazilyParsedNumber((String) r0);
    L11:
        throw new UnsupportedOperationException("Primitive is neither a number nor a string");
    }

    public boolean isString() {
        return this.value instanceof String;
    }

    @Override
    public String getAsString() {
        Object r0 = this.value;
        if ((r0 instanceof String) == false) goto L7;
        return (String) r0;
    L7:
        if (isNumber() == false) goto L11;
        return getAsNumber().toString();
    L11:
        if (isBoolean() == false) goto L15;
        return ((Boolean) this.value).toString();
    L15:
        throw new AssertionError("Unexpected value type: " + this.value.getClass());
    }

    @Override
    public double getAsDouble() {
        if (isNumber() == false) goto L6;
        return getAsNumber().doubleValue();
    L6:
        return Double.parseDouble(getAsString());
    }

    @Override
    public BigDecimal getAsBigDecimal() {
        Object r0 = this.value;
        if ((r0 instanceof BigDecimal) == false) goto L6;
        return (BigDecimal) r0;
    L6:
        return new BigDecimal(getAsString());
    }

    @Override
    public BigInteger getAsBigInteger() {
        Object r0 = this.value;
        if ((r0 instanceof BigInteger) == false) goto L6;
        return (BigInteger) r0;
    L6:
        return new BigInteger(getAsString());
    }

    @Override
    public float getAsFloat() {
        if (isNumber() == false) goto L6;
        return getAsNumber().floatValue();
    L6:
        return Float.parseFloat(getAsString());
    }

    @Override
    public long getAsLong() {
        if (isNumber() == false) goto L6;
        return getAsNumber().longValue();
    L6:
        return Long.parseLong(getAsString());
    }

    @Override
    public short getAsShort() {
        if (isNumber() == false) goto L6;
        return getAsNumber().shortValue();
    L6:
        return Short.parseShort(getAsString());
    }

    @Override
    public int getAsInt() {
        if (isNumber() == false) goto L6;
        return getAsNumber().intValue();
    L6:
        return Integer.parseInt(getAsString());
    }

    @Override
    public byte getAsByte() {
        if (isNumber() == false) goto L6;
        return getAsNumber().byteValue();
    L6:
        return Byte.parseByte(getAsString());
    }

    @Override
    @Deprecated
    public char getAsCharacter() {
        String r0 = getAsString();
        if (r0.isEmpty() == true) goto L7;
        return r0.charAt(0);
    L7:
        throw new UnsupportedOperationException("String value is empty");
    }

    public int hashCode() {
        if (this.value != null) goto L7;
        return 31;
    L7:
        if (isIntegral(this) == false) goto L11;
        long r2 = getAsNumber().longValue();
    L10:
        return (int) ((r2 >>> 32) ^ r2);
    L11:
        Object r0 = this.value;
        if ((r0 instanceof Number) == false) goto L15;
        r2 = Double.doubleToLongBits(getAsNumber().doubleValue());
        goto L10
    L15:
        return r0.hashCode();
    }

    public boolean equals(Object r7) {
        if (this != r7) goto L6;
        return true;
    L6:
        if (r7 != null) goto L8;
    L41:
        return false;
    L8:
        if (getClass() != r7.getClass()) goto L41;
        JsonPrimitive r72 = (JsonPrimitive) r7;
        if (this.value != null) goto L18;
        if (r72.value == null) goto L42;
        return false;
    L42:
        return true;
    L18:
        if (isIntegral(this) == false) goto L27;
        if (isIntegral(r72) == false) goto L27;
        if (getAsNumber().longValue() == r72.getAsNumber().longValue()) goto L43;
        return false;
    L43:
        return true;
    L27:
        if ((this.value instanceof Number) == false) goto L40;
        if ((r72.value instanceof Number) == false) goto L40;
        double r2 = getAsNumber().doubleValue();
        double r4 = r72.getAsNumber().doubleValue();
        if (r2 != r4) goto L33;
        return true;
    L33:
        if (Double.isNaN(r2) == true) goto L35;
    L37:
        return false;
    L35:
        if (Double.isNaN(r4) == false) goto L37;
        return true;
    L40:
        return this.value.equals(r72.value);
    }

    private static boolean isIntegral(JsonPrimitive r2) {
        Object r22 = r2.value;
        if ((r22 instanceof Number) == false) goto L16;
        Number r23 = (Number) r22;
        if ((r23 instanceof BigInteger) == false) goto L7;
    L14:
        return true;
    L7:
        if ((r23 instanceof Long) == true) goto L14;
        if ((r23 instanceof Integer) == true) goto L14;
        if ((r23 instanceof Short) == true) goto L14;
        if ((r23 instanceof Byte) == true) goto L14;
        return false;
    L16:
        return false;
    }
}
