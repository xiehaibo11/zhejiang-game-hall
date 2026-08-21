package com.google.gson.internal;

import java.io.Serializable;
import java.lang.reflect.Array;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.GenericDeclaration;
import java.lang.reflect.Modifier;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.lang.reflect.WildcardType;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Properties;

public final class $Gson$Types {
    static final boolean $assertionsDisabled = false;
    static final Type[] EMPTY_TYPE_ARRAY = null;

    private static final class GenericArrayTypeImpl implements GenericArrayType, Serializable {
        private static final long serialVersionUID = 0;
        private final Type componentType;

        public GenericArrayTypeImpl(Type r1) {
            Objects.requireNonNull(r1);
            this.componentType = $Gson$Types.canonicalize(r1);
        }

        @Override
        public Type getGenericComponentType() {
            return this.componentType;
        }

        public boolean equals(Object r2) {
            if ((r2 instanceof GenericArrayType) == true) goto L5;
        L7:
            return false;
        L5:
            if ($Gson$Types.equals(this, (GenericArrayType) r2) == false) goto L7;
            return true;
        }

        public int hashCode() {
            return this.componentType.hashCode();
        }

        public String toString() {
            return $Gson$Types.typeToString(this.componentType) + "[]";
        }
    }

    private static final class ParameterizedTypeImpl implements ParameterizedType, Serializable {
        private static final long serialVersionUID = 0;
        private final Type ownerType;
        private final Type rawType;
        private final Type[] typeArguments;

        public ParameterizedTypeImpl(Type r5, Type r6, Type... r7) {
            Objects.requireNonNull(r6);
            int r1 = 0;
            if ((r6 instanceof Class) == false) goto L16;
            Class r0 = (Class) r6;
            boolean r3 = true;
            if (Modifier.isStatic(r0.getModifiers()) == false) goto L7;
        L10:
            boolean r02 = true;
        L11:
            if (r5 != null) goto L15;
            if (r02 == true) goto L15;
            r3 = false;
        L15:
            $Gson$Preconditions.checkArgument(r3);
            goto L16
        L7:
            if (r0.getEnclosingClass() == null) goto L10;
            r02 = false;
        L16:
            if (r5 != null) goto L18;
            Type r52 = null;
        L19:
            this.ownerType = r52;
            this.rawType = $Gson$Types.canonicalize(r6);
            this.typeArguments = (Type[]) r7.clone();
            int r53 = this.typeArguments.length;
        L20:
            if (r1 >= r53) goto L22;
            Objects.requireNonNull(this.typeArguments[r1]);
            $Gson$Types.checkNotPrimitive(this.typeArguments[r1]);
            Type[] r62 = this.typeArguments;
            r62[r1] = $Gson$Types.canonicalize(r62[r1]);
            r1 = r1 + 1;
            goto L20
        L22:
            return;
        L18:
            r52 = $Gson$Types.canonicalize(r5);
            goto L19
        }

        @Override
        public Type[] getActualTypeArguments() {
            return (Type[]) this.typeArguments.clone();
        }

        @Override
        public Type getRawType() {
            return this.rawType;
        }

        @Override
        public Type getOwnerType() {
            return this.ownerType;
        }

        public boolean equals(Object r2) {
            if ((r2 instanceof ParameterizedType) == true) goto L5;
        L7:
            return false;
        L5:
            if ($Gson$Types.equals(this, (ParameterizedType) r2) == false) goto L7;
            return true;
        }

        private static int hashCodeOrZero(Object r0) {
            if (r0 != null) goto L6;
            return 0;
        L6:
            return r0.hashCode();
        }

        public int hashCode() {
            return (Arrays.hashCode(this.typeArguments) ^ this.rawType.hashCode()) ^ hashCodeOrZero(this.ownerType);
        }

        public String toString() {
            int r0 = this.typeArguments.length;
            if (r0 == 0) goto L5;
            StringBuilder r1 = new StringBuilder((r0 + 1) * 30);
            r1.append($Gson$Types.typeToString(this.rawType));
            r1.append("<");
            r1.append($Gson$Types.typeToString(this.typeArguments[0]));
            int r2 = 1;
        L7:
            if (r2 >= r0) goto L9;
            r1.append(", ");
            r1.append($Gson$Types.typeToString(this.typeArguments[r2]));
            r2 = r2 + 1;
            goto L7
        L9:
            r1.append(">");
            return r1.toString();
        L5:
            return $Gson$Types.typeToString(this.rawType);
        }
    }

    private static final class WildcardTypeImpl implements WildcardType, Serializable {
        private static final long serialVersionUID = 0;
        private final Type lowerBound;
        private final Type upperBound;

        public WildcardTypeImpl(Type[] r4, Type[] r5) {
            boolean r1 = true;
            if (r5.length > 1) goto L5;
            boolean r0 = true;
        L6:
            $Gson$Preconditions.checkArgument(r0);
            if (r4.length != 1) goto L9;
            boolean r02 = true;
        L10:
            $Gson$Preconditions.checkArgument(r02);
            if (r5.length != 1) goto L17;
            Objects.requireNonNull(r5[0]);
            $Gson$Types.checkNotPrimitive(r5[0]);
            if (r4[0] == Object.class) goto L16;
            r1 = false;
        L16:
            $Gson$Preconditions.checkArgument(r1);
            this.lowerBound = $Gson$Types.canonicalize(r5[0]);
            this.upperBound = Object.class;
            return;
        L17:
            Objects.requireNonNull(r4[0]);
            $Gson$Types.checkNotPrimitive(r4[0]);
            this.lowerBound = null;
            this.upperBound = $Gson$Types.canonicalize(r4[0]);
            return;
        L9:
            r02 = false;
            goto L10
        L5:
            r0 = false;
            goto L6
        }

        @Override
        public Type[] getUpperBounds() {
            return new Type[]{this.upperBound};
        }

        @Override
        public Type[] getLowerBounds() {
            Type r0 = this.lowerBound;
            if (r0 == null) goto L6;
            return new Type[]{r0};
        L6:
            return $Gson$Types.EMPTY_TYPE_ARRAY;
        }

        public boolean equals(Object r2) {
            if ((r2 instanceof WildcardType) == true) goto L5;
        L7:
            return false;
        L5:
            if ($Gson$Types.equals(this, (WildcardType) r2) == false) goto L7;
            return true;
        }

        public int hashCode() {
            Type r0 = this.lowerBound;
            if (r0 == null) goto L5;
            int r02 = r0.hashCode() + 31;
        L7:
            return r02 ^ (this.upperBound.hashCode() + 31);
        L5:
            r02 = 1;
            goto L7
        }

        public String toString() {
            if (this.lowerBound == null) goto L7;
            return "? super " + $Gson$Types.typeToString(this.lowerBound);
        L7:
            if (this.upperBound != Object.class) goto L11;
            return "?";
        L11:
            return "? extends " + $Gson$Types.typeToString(this.upperBound);
        }
    }

    static {
        EMPTY_TYPE_ARRAY = new Type[0];
    }

    private $Gson$Types() {
        throw new UnsupportedOperationException();
    }

    public static ParameterizedType newParameterizedTypeWithOwner(Type r1, Type r2, Type... r3) {
        return new ParameterizedTypeImpl(r1, r2, r3);
    }

    public static GenericArrayType arrayOf(Type r1) {
        return new GenericArrayTypeImpl(r1);
    }

    public static WildcardType subtypeOf(Type r2) {
        if ((r2 instanceof WildcardType) == false) goto L5;
        Type[] r22 = ((WildcardType) r2).getUpperBounds();
    L7:
        return new WildcardTypeImpl(r22, EMPTY_TYPE_ARRAY);
    L5:
        r22 = new Type[]{r2};
        goto L7
    }

    public static WildcardType supertypeOf(Type r4) {
        if ((r4 instanceof WildcardType) == false) goto L5;
        Type[] r42 = ((WildcardType) r4).getLowerBounds();
    L7:
        return new WildcardTypeImpl(new Type[]{Object.class}, r42);
    L5:
        r42 = new Type[]{r4};
        goto L7
    }

    public static Type canonicalize(Type r3) {
        if ((r3 instanceof Class) == false) goto L10;
        Class r32 = (Class) r3;
        boolean r0 = r32.isArray();
        Type r33 = r32;
        if (r0 == false) goto L8;
        r33 = new GenericArrayTypeImpl(canonicalize(r32.getComponentType()));
    L8:
        return r33;
    L10:
        if ((r3 instanceof ParameterizedType) == false) goto L14;
        ParameterizedType r34 = (ParameterizedType) r3;
        return new ParameterizedTypeImpl(r34.getOwnerType(), r34.getRawType(), r34.getActualTypeArguments());
    L14:
        if ((r3 instanceof GenericArrayType) == false) goto L18;
        return new GenericArrayTypeImpl(((GenericArrayType) r3).getGenericComponentType());
    L18:
        if ((r3 instanceof WildcardType) == false) goto L21;
        WildcardType r35 = (WildcardType) r3;
        return new WildcardTypeImpl(r35.getUpperBounds(), r35.getLowerBounds());
    L21:
        return r3;
    }

    public static Class<?> getRawType(Type r4) {
        if ((r4 instanceof Class) == false) goto L7;
        return (Class) r4;
    L7:
        if ((r4 instanceof ParameterizedType) == false) goto L11;
        Type r42 = ((ParameterizedType) r4).getRawType();
        $Gson$Preconditions.checkArgument(r42 instanceof Class);
        return (Class) r42;
    L11:
        if ((r4 instanceof GenericArrayType) == false) goto L15;
        return Array.newInstance(getRawType(((GenericArrayType) r4).getGenericComponentType()), 0).getClass();
    L15:
        if ((r4 instanceof TypeVariable) == false) goto L19;
        return Object.class;
    L19:
        if ((r4 instanceof WildcardType) == true) goto L21;
        if (r4 != null) goto L24;
        String r0 = "null";
    L26:
        throw new IllegalArgumentException("Expected a Class, ParameterizedType, or GenericArrayType, but <" + r4 + "> is of type " + r0);
    L24:
        r0 = r4.getClass().getName();
        goto L26
    L21:
        return getRawType(((WildcardType) r4).getUpperBounds()[0]);
    }

    private static boolean equal(Object r0, Object r1) {
        return Objects.equals(r0, r1);
    }

    public static boolean equals(Type r4, Type r5) {
        if (r4 != r5) goto L6;
        return true;
    L6:
        if ((r4 instanceof Class) == false) goto L10;
        return r4.equals(r5);
    L10:
        if ((r4 instanceof ParameterizedType) == false) goto L24;
        if ((r5 instanceof ParameterizedType) == true) goto L14;
        return false;
    L14:
        ParameterizedType r42 = (ParameterizedType) r4;
        ParameterizedType r52 = (ParameterizedType) r5;
        if (equal(r42.getOwnerType(), r52.getOwnerType()) == true) goto L17;
    L21:
        return false;
    L17:
        if (r42.getRawType().equals(r52.getRawType()) == false) goto L21;
        if (Arrays.equals(r42.getActualTypeArguments(), r52.getActualTypeArguments()) == false) goto L21;
        return true;
    L24:
        if ((r4 instanceof GenericArrayType) == false) goto L31;
        if ((r5 instanceof GenericArrayType) == true) goto L29;
        return false;
    L29:
        return equals(((GenericArrayType) r4).getGenericComponentType(), ((GenericArrayType) r5).getGenericComponentType());
    L31:
        if ((r4 instanceof WildcardType) == false) goto L43;
        if ((r5 instanceof WildcardType) == true) goto L35;
        return false;
    L35:
        WildcardType r43 = (WildcardType) r4;
        WildcardType r53 = (WildcardType) r5;
        if (Arrays.equals(r43.getUpperBounds(), r53.getUpperBounds()) == true) goto L38;
    L40:
        return false;
    L38:
        if (Arrays.equals(r43.getLowerBounds(), r53.getLowerBounds()) == false) goto L40;
        return true;
    L43:
        if ((r4 instanceof TypeVariable) == true) goto L45;
        return false;
    L45:
        if ((r5 instanceof TypeVariable) == true) goto L47;
        return false;
    L47:
        TypeVariable r44 = (TypeVariable) r4;
        TypeVariable r54 = (TypeVariable) r5;
        if (r44.getGenericDeclaration() == r54.getGenericDeclaration()) goto L50;
    L52:
        return false;
    L50:
        if (r44.getName().equals(r54.getName()) == false) goto L52;
        return true;
    }

    public static String typeToString(Type r1) {
        if ((r1 instanceof Class) == false) goto L6;
        return ((Class) r1).getName();
    L6:
        return r1.toString();
    }

    private static Type getGenericSupertype(Type r3, Class<?> r4, Class<?> r5) {
        if (r5 != r4) goto L5;
        return r3;
    L5:
        if (r5.isInterface() == false) goto L18;
        Class<?>[] r32 = r4.getInterfaces();
        int r0 = 0;
        int r1 = r32.length;
    L7:
        if (r0 >= r1) goto L18;
        if (r32[r0] == r5) goto L11;
        if (r5.isAssignableFrom(r32[r0]) == true) goto L15;
        r0 = r0 + 1;
        goto L7
    L15:
        return getGenericSupertype(r4.getGenericInterfaces()[r0], r32[r0], r5);
    L11:
        return r4.getGenericInterfaces()[r0];
    L18:
        if (r4.isInterface() == false) goto L20;
    L30:
        return r5;
    L20:
        if (r4 == Object.class) goto L30;
        Class<? super Object> r33 = r4.getSuperclass();
        if (r33 == r5) goto L24;
        if (r5.isAssignableFrom(r33) == true) goto L28;
        r4 = r33;
        goto L20
    L28:
        return getGenericSupertype(r4.getGenericSuperclass(), r33, r5);
    L24:
        return r4.getGenericSuperclass();
    }

    private static Type getSupertype(Type r1, Class<?> r2, Class<?> r3) {
        if ((r1 instanceof WildcardType) == false) goto L5;
        r1 = ((WildcardType) r1).getUpperBounds()[0];
    L5:
        $Gson$Preconditions.checkArgument(r3.isAssignableFrom(r2));
        return resolve(r1, r2, getGenericSupertype(r1, r2, r3));
    }

    public static Type getArrayComponentType(Type r1) {
        if ((r1 instanceof GenericArrayType) == false) goto L6;
        return ((GenericArrayType) r1).getGenericComponentType();
    L6:
        return ((Class) r1).getComponentType();
    }

    public static Type getCollectionElementType(Type r1, Class<?> r2) {
        Type r12 = getSupertype(r1, r2, Collection.class);
        if ((r12 instanceof ParameterizedType) == true) goto L5;
        return Object.class;
    L5:
        return ((ParameterizedType) r12).getActualTypeArguments()[0];
    }

    public static Type[] getMapKeyAndValueTypes(Type r4, Class<?> r5) {
        if (r4 == Properties.class) goto L5;
        Type r42 = getSupertype(r4, r5, Map.class);
        if ((r42 instanceof ParameterizedType) == false) goto L11;
        return ((ParameterizedType) r42).getActualTypeArguments();
    L11:
        return new Type[]{Object.class, Object.class};
    L5:
        return new Type[]{String.class, String.class};
    }

    public static Type resolve(Type r1, Class<?> r2, Type r3) {
        return resolve(r1, r2, r3, new HashMap());
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v0, types: [java.lang.reflect.Type] */
    /* JADX WARN: Type inference failed for: r11v1, types: [java.lang.reflect.Type] */
    /* JADX WARN: Type inference failed for: r11v10, types: [java.lang.Object, java.lang.reflect.Type] */
    /* JADX WARN: Type inference failed for: r11v13, types: [java.lang.reflect.Type] */
    /* JADX WARN: Type inference failed for: r11v2, types: [java.lang.reflect.WildcardType] */
    /* JADX WARN: Type inference failed for: r11v3, types: [java.lang.reflect.WildcardType] */
    /* JADX WARN: Type inference failed for: r11v4, types: [java.lang.reflect.WildcardType] */
    /* JADX WARN: Type inference failed for: r11v5, types: [java.lang.reflect.ParameterizedType] */
    /* JADX WARN: Type inference failed for: r11v6, types: [java.lang.reflect.GenericArrayType] */
    /* JADX WARN: Type inference failed for: r11v7 */
    /* JADX WARN: Type inference failed for: r11v9 */
    /* JADX WARN: Type inference failed for: r12v0, types: [java.util.Map, java.util.Map<java.lang.reflect.TypeVariable<?>, java.lang.reflect.Type>] */
    /* JADX WARN: Type inference failed for: r1v17 */
    /* JADX WARN: Type inference failed for: r1v19 */
    private static Type resolve(Type r9, Class<?> r10, Type r11, Map<TypeVariable<?>, Type> r12) {
        TypeVariable r0 = null;
    L4:
        if ((r11 instanceof TypeVariable) == false) goto L19;
        TypeVariable r1 = (TypeVariable) r11;
        Type r2 = (Type) r12.get(r1);
        if (r2 != null) goto L8;
        r12.put(r1, Void.TYPE);
        if (r0 != null) goto L15;
        r0 = r1;
    L15:
        r11 = resolveTypeVariable(r9, r10, r1);
        if (r11 != r1) goto L4;
    L59:
        if (r0 == null) goto L61;
        r12.put(r0, r11);
    L61:
        return r11;
    L8:
        if (r2 != Void.TYPE) goto L11;
        return r11;
    L11:
        return r2;
    L19:
        if ((r11 instanceof Class) == false) goto L28;
        Class r13 = (Class) r11;
        if (r13.isArray() == false) goto L28;
        Class<?> r112 = r13.getComponentType();
        Type r92 = resolve(r9, r10, r112, r12);
        if (equal(r112, r92) == false) goto L25;
        r11 = r13;
        goto L59
    L25:
        Type r93 = arrayOf(r92);
    L26:
        r11 = r93;
    L28:
        if ((r11 instanceof GenericArrayType) == false) goto L33;
        r11 = (GenericArrayType) r11;
        Type r14 = r11.getGenericComponentType();
        Type r94 = resolve(r9, r10, r14, r12);
        if (equal(r14, r94) == true) goto L59;
        r93 = arrayOf(r94);
        goto L26
    L33:
        int r22 = 0;
        if ((r11 instanceof ParameterizedType) == false) goto L46;
        r11 = (ParameterizedType) r11;
        Type r15 = r11.getOwnerType();
        Type r4 = resolve(r9, r10, r15, r12);
        boolean r16 = !equal(r4, r15);
        Type[] r5 = r11.getActualTypeArguments();
        int r6 = r5.length;
    L36:
        if (r22 >= r6) goto L43;
        Type r7 = resolve(r9, r10, r5[r22], r12);
        if (equal(r7, r5[r22]) == true) goto L42;
        if (r16 == true) goto L41;
        r5 = (Type[]) r5.clone();
        r16 = true;
    L41:
        r5[r22] = r7;
    L42:
        r22 = r22 + 1;
        goto L36
    L43:
        if (r16 == false) goto L59;
        r93 = newParameterizedTypeWithOwner(r4, r11.getRawType(), r5);
        goto L26
    L46:
        if ((r11 instanceof WildcardType) == false) goto L59;
        r11 = (WildcardType) r11;
        Type[] r17 = r11.getLowerBounds();
        Type[] r42 = r11.getUpperBounds();
        if (r17.length != 1) goto L53;
        Type r95 = resolve(r9, r10, r17[0], r12);
        if (r95 == r17[0]) goto L59;
        r11 = supertypeOf(r95);
        goto L59
    L53:
        if (r42.length != 1) goto L59;
        Type r96 = resolve(r9, r10, r42[0], r12);     // Catch: Throwable -> L62
        if (r96 == r42[0]) goto L59;
        r11 = subtypeOf(r96);
    L62:
        th = move-exception;
        throw th;
    }

    private static Type resolveTypeVariable(Type r1, Class<?> r2, TypeVariable<?> r3) {
        Class<?> r0 = declaringClassOf(r3);
        if (r0 != null) goto L5;
        return r3;
    L5:
        Type r12 = getGenericSupertype(r1, r2, r0);
        if ((r12 instanceof ParameterizedType) == false) goto L9;
        int r22 = indexOf(r0.getTypeParameters(), r3);
        return ((ParameterizedType) r12).getActualTypeArguments()[r22];
    L9:
        return r3;
    }

    private static int indexOf(Object[] r3, Object r4) {
        int r0 = r3.length;
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L9;
        if (r4.equals(r3[r1]) == true) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return r1;
    L9:
        throw new NoSuchElementException();
    }

    private static Class<?> declaringClassOf(TypeVariable<?> r1) {
        GenericDeclaration r12 = r1.getGenericDeclaration();
        if ((r12 instanceof Class) == true) goto L7;
        return null;
    L7:
        return (Class) r12;
    }

    static void checkNotPrimitive(Type r1) {
        if ((r1 instanceof Class) == true) goto L5;
    L8:
        boolean r12 = true;
    L9:
        $Gson$Preconditions.checkArgument(r12);
        return;
    L5:
        if (((Class) r1).isPrimitive() == false) goto L8;
        r12 = false;
        goto L9
    }
}
