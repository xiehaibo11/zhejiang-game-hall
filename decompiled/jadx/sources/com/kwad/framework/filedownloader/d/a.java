package com.kwad.framework.filedownloader.d;

import android.content.ContentValues;
import com.kwad.framework.filedownloader.f.f;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private long ack;
    private long acl;
    private long acm;
    private int id;
    private int index;

    public static long o(List<a> list) {
        long jVi = 0;
        for (a aVar : list) {
            jVi += aVar.vi() - aVar.getStartOffset();
        }
        return jVi;
    }

    public final void J(long j) {
        this.acl = j;
    }

    public final void K(long j) {
        this.acm = j;
    }

    public final int getId() {
        return this.id;
    }

    public final int getIndex() {
        return this.index;
    }

    public final long getStartOffset() {
        return this.ack;
    }

    public final void setId(int i) {
        this.id = i;
    }

    public final void setIndex(int i) {
        this.index = i;
    }

    public final void setStartOffset(long j) {
        this.ack = j;
    }

    public final String toString() {
        return f.b("id[%d] index[%d] range[%d, %d) current offset(%d)", Integer.valueOf(this.id), Integer.valueOf(this.index), Long.valueOf(this.ack), Long.valueOf(this.acm), Long.valueOf(this.acl));
    }

    public final long vi() {
        return this.acl;
    }

    public final long vj() {
        return this.acm;
    }

    public final ContentValues vk() {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(this.id));
        contentValues.put("connectionIndex", Integer.valueOf(this.index));
        contentValues.put(DBDefinition.START_OFFSET, Long.valueOf(this.ack));
        contentValues.put("currentOffset", Long.valueOf(this.acl));
        contentValues.put(DBDefinition.END_OFFSET, Long.valueOf(this.acm));
        return contentValues;
    }
}
