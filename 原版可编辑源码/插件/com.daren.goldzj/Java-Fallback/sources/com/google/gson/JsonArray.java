package com.google.gson;

import com.google.gson.internal.NonNullElementWrapperList;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class JsonArray extends JsonElement implements Iterable<JsonElement> {
    private final ArrayList<JsonElement> elements;

    @Override
    public JsonElement deepCopy() {
        return deepCopy();
    }

    public JsonArray() {
        this.elements = new ArrayList();
    }

    public JsonArray(int r2) {
        this.elements = new ArrayList(r2);
    }

    @Override
    public JsonArray deepCopy() {
        if (this.elements.isEmpty() == true) goto L10;
        JsonArray r0 = new JsonArray(this.elements.size());
        Iterator<JsonElement> r1 = this.elements.iterator();
    L6:
        if (r1.hasNext() == false) goto L8;
        r0.add(r1.next().deepCopy());
        goto L6
    L8:
        return r0;
    L10:
        return new JsonArray();
    }

    public void add(Boolean r3) {
        ArrayList<JsonElement> r0 = this.elements;
        if (r3 != null) goto L5;
        JsonElement r32 = JsonNull.INSTANCE;
    L6:
        r0.add(r32);
        return;
    L5:
        r32 = new JsonPrimitive(r3);
        goto L6
    }

    public void add(Character r3) {
        ArrayList<JsonElement> r0 = this.elements;
        if (r3 != null) goto L5;
        JsonElement r32 = JsonNull.INSTANCE;
    L6:
        r0.add(r32);
        return;
    L5:
        r32 = new JsonPrimitive(r3);
        goto L6
    }

    public void add(Number r3) {
        ArrayList<JsonElement> r0 = this.elements;
        if (r3 != null) goto L5;
        JsonElement r32 = JsonNull.INSTANCE;
    L6:
        r0.add(r32);
        return;
    L5:
        r32 = new JsonPrimitive(r3);
        goto L6
    }

    public void add(String r3) {
        ArrayList<JsonElement> r0 = this.elements;
        if (r3 != null) goto L5;
        JsonElement r32 = JsonNull.INSTANCE;
    L6:
        r0.add(r32);
        return;
    L5:
        r32 = new JsonPrimitive(r3);
        goto L6
    }

    public void add(JsonElement r2) {
        if (r2 != null) goto L4;
        r2 = JsonNull.INSTANCE;
    L4:
        this.elements.add(r2);
    }

    public void addAll(JsonArray r2) {
        this.elements.addAll(r2.elements);
    }

    public JsonElement set(int r2, JsonElement r3) {
        ArrayList<JsonElement> r0 = this.elements;
        if (r3 != null) goto L6;
        r3 = JsonNull.INSTANCE;
    L6:
        return r0.set(r2, r3);
    }

    public boolean remove(JsonElement r2) {
        return this.elements.remove(r2);
    }

    public JsonElement remove(int r2) {
        return this.elements.remove(r2);
    }

    public boolean contains(JsonElement r2) {
        return this.elements.contains(r2);
    }

    public int size() {
        return this.elements.size();
    }

    public boolean isEmpty() {
        return this.elements.isEmpty();
    }

    @Override
    public Iterator<JsonElement> iterator() {
        return this.elements.iterator();
    }

    public JsonElement get(int r2) {
        return this.elements.get(r2);
    }

    private JsonElement getAsSingleElement() {
        int r0 = this.elements.size();
        if (r0 != 1) goto L7;
        return this.elements.get(0);
    L7:
        throw new IllegalStateException("Array must have size 1, but has size " + r0);
    }

    @Override
    public Number getAsNumber() {
        return getAsSingleElement().getAsNumber();
    }

    @Override
    public String getAsString() {
        return getAsSingleElement().getAsString();
    }

    @Override
    public double getAsDouble() {
        return getAsSingleElement().getAsDouble();
    }

    @Override
    public BigDecimal getAsBigDecimal() {
        return getAsSingleElement().getAsBigDecimal();
    }

    @Override
    public BigInteger getAsBigInteger() {
        return getAsSingleElement().getAsBigInteger();
    }

    @Override
    public float getAsFloat() {
        return getAsSingleElement().getAsFloat();
    }

    @Override
    public long getAsLong() {
        return getAsSingleElement().getAsLong();
    }

    @Override
    public int getAsInt() {
        return getAsSingleElement().getAsInt();
    }

    @Override
    public byte getAsByte() {
        return getAsSingleElement().getAsByte();
    }

    @Override
    @Deprecated
    public char getAsCharacter() {
        return getAsSingleElement().getAsCharacter();
    }

    @Override
    public short getAsShort() {
        return getAsSingleElement().getAsShort();
    }

    @Override
    public boolean getAsBoolean() {
        return getAsSingleElement().getAsBoolean();
    }

    public List<JsonElement> asList() {
        return new NonNullElementWrapperList(this.elements);
    }

    public boolean equals(Object r2) {
        if (r2 != this) goto L4;
    L9:
        return true;
    L4:
        if ((r2 instanceof JsonArray) == true) goto L6;
    L8:
        return false;
    L6:
        if (((JsonArray) r2).elements.equals(this.elements) == false) goto L8;
        goto L8
    }

    public int hashCode() {
        return this.elements.hashCode();
    }
}
