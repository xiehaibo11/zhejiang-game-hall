package com.qihoo360.replugin.ext.parser.struct;

import com.xiaomi.mipush.sdk.Constants;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public abstract class ResourceValue {
    protected final int value;

    public abstract String toStringValue();

    protected ResourceValue(int i) {
        this.value = i;
    }

    public static ResourceValue string(int i, StringPool stringPool) {
        return new StringResourceValue(i, stringPool);
    }

    public static ResourceValue raw(int i, short s) {
        return new RawValue(i, s);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class StringResourceValue extends ResourceValue {
        private final StringPool stringPool;

        private StringResourceValue(int i, StringPool stringPool) {
            super(i);
            this.stringPool = stringPool;
        }

        @Override // com.qihoo360.replugin.ext.parser.struct.ResourceValue
        public String toStringValue() {
            if (this.value >= 0) {
                return this.stringPool.get(this.value);
            }
            return null;
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class RawValue extends ResourceValue {
        private final short dataType;

        private RawValue(int i, short s) {
            super(i);
            this.dataType = s;
        }

        @Override // com.qihoo360.replugin.ext.parser.struct.ResourceValue
        public String toStringValue() {
            return "{" + ((int) this.dataType) + Constants.COLON_SEPARATOR + (((long) this.value) & 4294967295L) + "}";
        }
    }
}
