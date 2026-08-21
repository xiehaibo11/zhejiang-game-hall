package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;

public abstract class AndroidMessage<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> extends com.czhj.wire.Message<M, B> implements android.os.Parcelable {

    private static final class ProtoAdapterCreator<M> implements android.os.Parcelable.Creator<M> {
        private final com.czhj.wire.ProtoAdapter<M> a;

        ProtoAdapterCreator(com.czhj.wire.ProtoAdapter<M> r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public M createFromParcel(android.os.Parcel r2) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<M> r0 = r1.a     // Catch: java.io.IOException -> Lb
                byte[] r2 = r2.createByteArray()     // Catch: java.io.IOException -> Lb
                java.lang.Object r2 = r0.decode(r2)     // Catch: java.io.IOException -> Lb
                return r2
            Lb:
                r2 = move-exception
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                r0.<init>(r2)
                throw r0
        }

        @Override
        public M[] newArray(int r2) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<M> r0 = r1.a
                java.lang.Class<?> r0 = r0.javaType
                java.lang.Object r2 = java.lang.reflect.Array.newInstance(r0, r2)
                java.lang.Object[] r2 = (java.lang.Object[]) r2
                return r2
        }
    }

    protected AndroidMessage(com.czhj.wire.ProtoAdapter<M> r1, com.czhj.wire.okio.ByteString r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static <E> android.os.Parcelable.Creator<E> newCreator(com.czhj.wire.ProtoAdapter<E> r1) {
            com.czhj.wire.AndroidMessage$ProtoAdapterCreator r0 = new com.czhj.wire.AndroidMessage$ProtoAdapterCreator
            r0.<init>(r1)
            return r0
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            byte[] r2 = r0.encode()
            r1.writeByteArray(r2)
            return
    }
}
