package android.support.v4.widget;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.support.annotation.RestrictTo;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

public class SimpleCursorAdapter extends ResourceCursorAdapter {
    private CursorToStringConverter mCursorToStringConverter;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected int[] mFrom;
    String[] mOriginalFrom;
    private int mStringConversionColumn;

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    protected int[] mTo;
    private ViewBinder mViewBinder;

    public interface CursorToStringConverter {
        CharSequence convertToString(Cursor r1);
    }

    public interface ViewBinder {
        boolean setViewValue(View r1, Cursor r2, int r3);
    }

    @Deprecated
    public SimpleCursorAdapter(Context r1, int r2, Cursor r3, String[] r4, int[] r5) {
        super(r1, r2, r3);
        this.mStringConversionColumn = -1;
        this.mTo = r5;
        this.mOriginalFrom = r4;
        findColumns(r3, r4);
    }

    public SimpleCursorAdapter(Context r1, int r2, Cursor r3, String[] r4, int[] r5, int r6) {
        super(r1, r2, r3, r6);
        this.mStringConversionColumn = -1;
        this.mTo = r5;
        this.mOriginalFrom = r4;
        findColumns(r3, r4);
    }

    @Override
    public void bindView(View r9, Context r10, Cursor r11) {
        ViewBinder r102 = this.mViewBinder;
        int[] r0 = this.mTo;
        int r1 = r0.length;
        int[] r2 = this.mFrom;
        int r4 = 0;
    L3:
        if (r4 >= r1) goto L22;
        View r5 = r9.findViewById(r0[r4]);
        if (r5 == null) goto L21;
        if (r102 == null) goto L8;
        boolean r6 = r102.setViewValue(r5, r11, r2[r4]);
    L9:
        if (r6 == true) goto L21;
        String r62 = r11.getString(r2[r4]);
        if (r62 != null) goto L14;
        r62 = "";
    L14:
        if ((r5 instanceof TextView) == false) goto L17;
        setViewText((TextView) r5, r62);
        goto L21
    L17:
        if ((r5 instanceof ImageView) == false) goto L20;
        setViewImage((ImageView) r5, r62);
        goto L21
    L20:
        throw new IllegalStateException(r5.getClass().getName() + " is not a  view that can be bounds by this SimpleCursorAdapter");
    L8:
        r6 = false;
    L21:
        r4 = r4 + 1;
        goto L3
    }

    public ViewBinder getViewBinder() {
        return this.mViewBinder;
    }

    public void setViewBinder(ViewBinder r1) {
        this.mViewBinder = r1;
    }

    public void setViewImage(ImageView r2, String r3) {
        r2.setImageResource(Integer.parseInt(r3));     // Catch: NumberFormatException -> L4
        return;
    L4:
        r2.setImageURI(Uri.parse(r3));
    }

    public void setViewText(TextView r1, String r2) {
        r1.setText(r2);
    }

    public int getStringConversionColumn() {
        return this.mStringConversionColumn;
    }

    public void setStringConversionColumn(int r1) {
        this.mStringConversionColumn = r1;
    }

    public CursorToStringConverter getCursorToStringConverter() {
        return this.mCursorToStringConverter;
    }

    public void setCursorToStringConverter(CursorToStringConverter r1) {
        this.mCursorToStringConverter = r1;
    }

    @Override
    public CharSequence convertToString(Cursor r3) {
        CursorToStringConverter r0 = this.mCursorToStringConverter;
        if (r0 != null) goto L5;
        int r02 = this.mStringConversionColumn;
        if (r02 <= (-1)) goto L11;
        return r3.getString(r02);
    L11:
        return super.convertToString(r3);
    L5:
        return r0.convertToString(r3);
    }

    private void findColumns(Cursor r5, String[] r6) {
        if (r5 == null) goto L11;
        int r0 = r6.length;
        int[] r1 = this.mFrom;
        if (r1 != null) goto L6;
    L7:
        this.mFrom = new int[r0];
    L8:
        int r12 = 0;
    L9:
        if (r12 >= r0) goto L14;
        this.mFrom[r12] = r5.getColumnIndexOrThrow(r6[r12]);
        r12 = r12 + 1;
        goto L9
    L14:
        return;
    L6:
        if (r1.length == r0) goto L8;
    L11:
        this.mFrom = null;
    }

    @Override
    public Cursor swapCursor(Cursor r2) {
        findColumns(r2, this.mOriginalFrom);
        return super.swapCursor(r2);
    }

    public void changeCursorAndColumns(Cursor r1, String[] r2, int[] r3) {
        this.mOriginalFrom = r2;
        this.mTo = r3;
        findColumns(r1, this.mOriginalFrom);
        super.changeCursor(r1);
    }
}
