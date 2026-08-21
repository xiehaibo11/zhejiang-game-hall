package android.support.v7.widget;

import android.content.Context;
import android.content.res.Resources;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.v7.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.widget.SpinnerAdapter;

public interface ThemedSpinnerAdapter extends SpinnerAdapter {

    public static final class Helper {
        private final Context mContext;
        private LayoutInflater mDropDownInflater;
        private final LayoutInflater mInflater;

        public Helper(@NonNull Context r1) {
            this.mContext = r1;
            this.mInflater = LayoutInflater.from(r1);
        }

        public void setDropDownViewTheme(@Nullable Resources.Theme r3) {
            if (r3 != null) goto L5;
            this.mDropDownInflater = null;
            return;
        L5:
            if (r3 != this.mContext.getTheme()) goto L7;
            this.mDropDownInflater = this.mInflater;
            return;
        L7:
            this.mDropDownInflater = LayoutInflater.from(new ContextThemeWrapper(this.mContext, r3));
        }

        @Nullable
        public Resources.Theme getDropDownViewTheme() {
            LayoutInflater r0 = this.mDropDownInflater;
            if (r0 != null) goto L6;
            return null;
        L6:
            return r0.getContext().getTheme();
        }

        @NonNull
        public LayoutInflater getDropDownViewInflater() {
            LayoutInflater r0 = this.mDropDownInflater;
            if (r0 == null) goto L6;
            return r0;
        L6:
            return this.mInflater;
        }
    }

    @Nullable
    Resources.Theme getDropDownViewTheme();

    void setDropDownViewTheme(@Nullable Resources.Theme r1);
}
