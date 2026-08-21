package android.support.v4.widget;

import android.content.Context;
import android.database.Cursor;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

public abstract class ResourceCursorAdapter extends CursorAdapter {
    private int mDropDownLayout;
    private LayoutInflater mInflater;
    private int mLayout;

    @Deprecated
    public ResourceCursorAdapter(Context r1, int r2, Cursor r3) {
        super(r1, r3);
        this.mDropDownLayout = r2;
        this.mLayout = r2;
        this.mInflater = (LayoutInflater) r1.getSystemService("layout_inflater");
    }

    @Deprecated
    public ResourceCursorAdapter(Context r1, int r2, Cursor r3, boolean r4) {
        super(r1, r3, r4);
        this.mDropDownLayout = r2;
        this.mLayout = r2;
        this.mInflater = (LayoutInflater) r1.getSystemService("layout_inflater");
    }

    public ResourceCursorAdapter(Context r1, int r2, Cursor r3, int r4) {
        super(r1, r3, r4);
        this.mDropDownLayout = r2;
        this.mLayout = r2;
        this.mInflater = (LayoutInflater) r1.getSystemService("layout_inflater");
    }

    @Override
    public View newView(Context r2, Cursor r3, ViewGroup r4) {
        return this.mInflater.inflate(this.mLayout, r4, false);
    }

    @Override
    public View newDropDownView(Context r2, Cursor r3, ViewGroup r4) {
        return this.mInflater.inflate(this.mDropDownLayout, r4, false);
    }

    public void setViewResource(int r1) {
        this.mLayout = r1;
    }

    public void setDropDownViewResource(int r1) {
        this.mDropDownLayout = r1;
    }
}
