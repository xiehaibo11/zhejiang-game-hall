package android.support.v7.widget;

import android.R;
import android.app.SearchManager;
import android.app.SearchableInfo;
import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.support.v4.content.ContextCompat;
import android.support.v4.widget.ResourceCursorAdapter;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.TextAppearanceSpan;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.bianqi.wpll.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.loader.p.PluginProviderClient;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.List;
import java.util.WeakHashMap;

class SuggestionsAdapter extends ResourceCursorAdapter implements View.OnClickListener {
    private static final boolean DBG = false;
    static final int INVALID_INDEX = -1;
    private static final String LOG_TAG = "SuggestionsAdapter";
    private static final int QUERY_LIMIT = 50;
    static final int REFINE_ALL = 2;
    static final int REFINE_BY_ENTRY = 1;
    static final int REFINE_NONE = 0;
    private boolean mClosed;
    private final int mCommitIconResId;
    private int mFlagsCol;
    private int mIconName1Col;
    private int mIconName2Col;
    private final WeakHashMap<String, Drawable.ConstantState> mOutsideDrawablesCache;
    private final Context mProviderContext;
    private int mQueryRefinement;
    private final SearchManager mSearchManager;
    private final SearchView mSearchView;
    private final SearchableInfo mSearchable;
    private int mText1Col;
    private int mText2Col;
    private int mText2UrlCol;
    private ColorStateList mUrlColor;

    private static final class ChildViewCache {
        public final ImageView mIcon1;
        public final ImageView mIcon2;
        public final ImageView mIconRefine;
        public final TextView mText1;
        public final TextView mText2;

        public ChildViewCache(View r2) {
            this.mText1 = (TextView) r2.findViewById(R.id.text1);
            this.mText2 = (TextView) r2.findViewById(R.id.text2);
            this.mIcon1 = (ImageView) r2.findViewById(R.id.icon1);
            this.mIcon2 = (ImageView) r2.findViewById(R.id.icon2);
            this.mIconRefine = (ImageView) r2.findViewById(android.support.v7.appcompat.R.id.edit_query);
        }
    }

    @Override
    public boolean hasStableIds() {
        return false;
    }

    public SuggestionsAdapter(Context r4, SearchView r5, SearchableInfo r6, WeakHashMap<String, Drawable.ConstantState> r7) {
        super(r4, r5.getSuggestionRowLayout(), null, true);
        this.mClosed = false;
        this.mQueryRefinement = 1;
        this.mText1Col = -1;
        this.mText2Col = -1;
        this.mText2UrlCol = -1;
        this.mIconName1Col = -1;
        this.mIconName2Col = -1;
        this.mFlagsCol = -1;
        this.mSearchManager = (SearchManager) this.mContext.getSystemService("search");
        this.mSearchView = r5;
        this.mSearchable = r6;
        this.mCommitIconResId = r5.getSuggestionCommitIconResId();
        this.mProviderContext = r4;
        this.mOutsideDrawablesCache = r7;
    }

    public void setQueryRefinement(int r1) {
        this.mQueryRefinement = r1;
    }

    public int getQueryRefinement() {
        return this.mQueryRefinement;
    }

    @Override
    public Cursor runQueryOnBackgroundThread(CharSequence r4) {
        if (r4 != null) goto L4;
        String r42 = "";
    L6:
        if (this.mSearchView.getVisibility() == 0) goto L8;
    L16:
        return null;
    L8:
        if (this.mSearchView.getWindowVisibility() != 0) goto L16;
        Cursor r43 = getSearchManagerSuggestions(this.mSearchable, r42, 50);     // Catch: RuntimeException -> L14
        if (r43 == null) goto L16;
        r43.getCount();     // Catch: RuntimeException -> L14
        return r43;
    L14:
        e = move-exception;
        Log.w(LOG_TAG, "Search suggestions query threw an exception.", e);
        goto L16
    L4:
        r42 = r4.toString();
        goto L6
    }

    public void close() {
        changeCursor(null);
        this.mClosed = true;
    }

    @Override
    public void notifyDataSetChanged() {
        super.notifyDataSetChanged();
        updateSpinnerState(getCursor());
    }

    @Override
    public void notifyDataSetInvalidated() {
        super.notifyDataSetInvalidated();
        updateSpinnerState(getCursor());
    }

    private void updateSpinnerState(Cursor r2) {
        if (r2 == null) goto L4;
        Bundle r22 = r2.getExtras();
    L5:
        if (r22 != null) goto L7;
        return;
    L7:
        if (r22.getBoolean("in_progress") == true) goto L9;
    L9:
        return;
    L4:
        r22 = null;
        goto L5
    }

    @Override
    public void changeCursor(Cursor r3) {
        if (this.mClosed == false) goto L15;
        Log.w(LOG_TAG, "Tried to change cursor after adapter was closed.");
        if (r3 == null) goto L17;
        r3.close();
        return;
    L17:
        return;
    L15:
        super.changeCursor(r3);     // Catch: Exception -> L12
        if (r3 == null) goto L18;
        this.mText1Col = r3.getColumnIndex("suggest_text_1");     // Catch: Exception -> L12
        this.mText2Col = r3.getColumnIndex("suggest_text_2");     // Catch: Exception -> L12
        this.mText2UrlCol = r3.getColumnIndex("suggest_text_2_url");     // Catch: Exception -> L12
        this.mIconName1Col = r3.getColumnIndex("suggest_icon_1");     // Catch: Exception -> L12
        this.mIconName2Col = r3.getColumnIndex("suggest_icon_2");     // Catch: Exception -> L12
        this.mFlagsCol = r3.getColumnIndex("suggest_flags");     // Catch: Exception -> L12
        return;
    L18:
        return;
    L12:
        e = move-exception;
        Log.e(LOG_TAG, "error changing cursor and caching columns", e);
    }

    @Override
    public View newView(Context r1, Cursor r2, ViewGroup r3) {
        View r12 = super.newView(r1, r2, r3);
        r12.setTag(new ChildViewCache(r12));
        ((ImageView) r12.findViewById(android.support.v7.appcompat.R.id.edit_query)).setImageResource(this.mCommitIconResId);
        return r12;
    }

    @Override
    public void bindView(View r7, Context r8, Cursor r9) {
        ChildViewCache r72 = (ChildViewCache) r7.getTag();
        int r82 = this.mFlagsCol;
        if (r82 == (-1)) goto L5;
        int r83 = r9.getInt(r82);
    L7:
        if (r72.mText1 == null) goto L10;
        String r1 = getStringOrNull(r9, this.mText1Col);
        setViewText(r72.mText1, r1);
    L10:
        if (r72.mText2 == null) goto L25;
        String r12 = getStringOrNull(r9, this.mText2UrlCol);
        if (r12 == null) goto L14;
        CharSequence r13 = formatUrl(r12);
    L16:
        if (TextUtils.isEmpty(r13) == false) goto L21;
        if (r72.mText1 == null) goto L23;
        r72.mText1.setSingleLine(false);
        r72.mText1.setMaxLines(2);
    L23:
        setViewText(r72.mText2, r13);
        goto L25
    L21:
        if (r72.mText1 == null) goto L23;
        r72.mText1.setSingleLine(true);
        r72.mText1.setMaxLines(1);
        goto L23
    L14:
        r13 = getStringOrNull(r9, this.mText2Col);
    L25:
        if (r72.mIcon1 == null) goto L28;
        setViewDrawable(r72.mIcon1, getIcon1(r9), 4);
    L28:
        if (r72.mIcon2 == null) goto L30;
        setViewDrawable(r72.mIcon2, getIcon2(r9), 8);
    L30:
        int r92 = this.mQueryRefinement;
        if (r92 == 2) goto L37;
        if (r92 == 1) goto L34;
    L36:
        r72.mIconRefine.setVisibility(8);
        return;
    L34:
        if ((r83 & 1) == 0) goto L36;
    L37:
        r72.mIconRefine.setVisibility(0);
        r72.mIconRefine.setTag(r72.mText1.getText());
        r72.mIconRefine.setOnClickListener(this);
        return;
    L5:
        r83 = 0;
        goto L7
    }

    @Override
    public void onClick(View r2) {
        Object r22 = r2.getTag();
        if ((r22 instanceof CharSequence) == false) goto L6;
        this.mSearchView.onQueryRefine((CharSequence) r22);
        return;
    }

    private CharSequence formatUrl(CharSequence r9) {
        if (this.mUrlColor != null) goto L5;
        TypedValue r0 = new TypedValue();
        this.mContext.getTheme().resolveAttribute(android.support.v7.appcompat.R.attr.textColorSearchUrl, r0, true);
        this.mUrlColor = this.mContext.getResources().getColorStateList(r0.resourceId);
    L5:
        SpannableString r02 = new SpannableString(r9);
        r02.setSpan(new TextAppearanceSpan(null, 0, 0, this.mUrlColor, null), 0, r9.length(), 33);
        return r02;
    }

    private void setViewText(TextView r1, CharSequence r2) {
        r1.setText(r2);
        if (TextUtils.isEmpty(r2) == false) goto L5;
        r1.setVisibility(8);
        return;
    L5:
        r1.setVisibility(0);
    }

    private Drawable getIcon1(Cursor r3) {
        int r0 = this.mIconName1Col;
        if (r0 != (-1)) goto L6;
        return null;
    L6:
        Drawable r02 = getDrawableFromResourceValue(r3.getString(r0));
        if (r02 == null) goto L10;
        return r02;
    L10:
        return getDefaultIcon1(r3);
    }

    private Drawable getIcon2(Cursor r3) {
        int r0 = this.mIconName2Col;
        if (r0 != (-1)) goto L7;
        return null;
    L7:
        return getDrawableFromResourceValue(r3.getString(r0));
    }

    private void setViewDrawable(ImageView r1, Drawable r2, int r3) {
        r1.setImageDrawable(r2);
        if (r2 != null) goto L5;
        r1.setVisibility(r3);
        return;
    L5:
        r1.setVisibility(0);
        r2.setVisible(false, false);
        r2.setVisible(true, false);
    }

    @Override
    public CharSequence convertToString(Cursor r3) {
        if (r3 != null) goto L5;
        return null;
    L5:
        String r1 = getColumnString(r3, "suggest_intent_query");
        if (r1 == null) goto L9;
        return r1;
    L9:
        if (this.mSearchable.shouldRewriteQueryFromData() == false) goto L14;
        String r12 = getColumnString(r3, "suggest_intent_data");
        if (r12 == null) goto L14;
        return r12;
    L14:
        if (this.mSearchable.shouldRewriteQueryFromText() == false) goto L18;
        String r32 = getColumnString(r3, "suggest_text_1");
        if (r32 == null) goto L18;
        return r32;
    L18:
        return null;
    }

    @Override
    public View getView(int r2, View r3, ViewGroup r4) {
        return super.getView(r2, r3, r4);
    L4:
        e = move-exception;
        Log.w(LOG_TAG, "Search suggestions cursor threw exception.", e);
        View r32 = newView(this.mContext, this.mCursor, r4);
        if (r32 == null) goto L8;
        ((ChildViewCache) r32.getTag()).mText1.setText(e.toString());
    L8:
        return r32;
    }

    @Override
    public View getDropDownView(int r2, View r3, ViewGroup r4) {
        return super.getDropDownView(r2, r3, r4);
    L4:
        e = move-exception;
        Log.w(LOG_TAG, "Search suggestions cursor threw exception.", e);
        View r32 = newDropDownView(this.mContext, this.mCursor, r4);
        if (r32 == null) goto L8;
        ((ChildViewCache) r32.getTag()).mText1.setText(e.toString());
    L8:
        return r32;
    }

    private Drawable getDrawableFromResourceValue(String r5) {
        if (r5 != null) goto L5;
        return null;
    L5:
        if (r5.isEmpty() == false) goto L7;
        return null;
    L7:
        if ("0".equals(r5) == true) goto L25;
        int r1 = Integer.parseInt(r5);     // Catch: Resources.NotFoundException -> L14 NumberFormatException -> L16
        String r2 = "android.resource://" + this.mProviderContext.getPackageName() + "/" + r1;     // Catch: Resources.NotFoundException -> L14 NumberFormatException -> L16
        Drawable r3 = checkIconCache(r2);     // Catch: Resources.NotFoundException -> L14 NumberFormatException -> L16
        if (r3 == null) goto L12;
        return r3;
    L12:
        Drawable r12 = ContextCompat.getDrawable(this.mProviderContext, r1);     // Catch: Resources.NotFoundException -> L14 NumberFormatException -> L16
        storeInIconCache(r2, r12);     // Catch: Resources.NotFoundException -> L14 NumberFormatException -> L16
        return r12;
    L14:
        Log.w(LOG_TAG, "Icon resource not found: " + r5);
        return null;
    L16:
        Drawable r0 = checkIconCache(r5);
        if (r0 == null) goto L19;
        return r0;
    L19:
        Drawable r02 = getDrawable(Uri.parse(r5));
        storeInIconCache(r5, r02);
        return r02;
    L25:
        return null;
    }

    private Drawable getDrawable(Uri r7) {
    L25:
        e = move-exception;
        Log.w(LOG_TAG, "Icon not found: " + r7 + ", " + e.getMessage());
        return null;
    L4:
        if ("android.resource".equals(r7.getScheme()) == true) goto L28;
        this.mProviderContext.getContentResolver();     // Catch: FileNotFoundException -> L25
        InputStream r3 = PluginProviderClient.openInputStream(RePlugin.getPluginContext(), r7);     // Catch: FileNotFoundException -> L25
        if (r3 == null) goto L24;
        Drawable r4 = Drawable.createFromStream(r3, null);     // Catch: Throwable -> L17
        r3.close();     // Catch: IOException -> L14 FileNotFoundException -> L25
    L16:
        return r4;
    L14:
        e = move-exception;
        Log.e(LOG_TAG, "Error closing icon stream for " + r7, e);     // Catch: FileNotFoundException -> L25
        goto L16
    L17:
        th = move-exception;
        r3.close();     // Catch: IOException -> L20 FileNotFoundException -> L25
    L22:
        throw th;     // Catch: FileNotFoundException -> L25
    L20:
        e = move-exception;
        Log.e(LOG_TAG, "Error closing icon stream for " + r7, e);     // Catch: FileNotFoundException -> L25
        goto L22
    L24:
        throw new FileNotFoundException("Failed to open " + r7);     // Catch: FileNotFoundException -> L25
    L28:
        return getDrawableFromResourceUri(r7);
    L8:
        throw new FileNotFoundException("Resource does not exist: " + r7);     // Catch: FileNotFoundException -> L25
    }

    private Drawable checkIconCache(String r2) {
        Drawable.ConstantState r22 = this.mOutsideDrawablesCache.get(r2);
        if (r22 != null) goto L7;
        return null;
    L7:
        return r22.newDrawable();
    }

    private void storeInIconCache(String r2, Drawable r3) {
        if (r3 == null) goto L5;
        this.mOutsideDrawablesCache.put(r2, r3.getConstantState());
        return;
    }

    private Drawable getDefaultIcon1(Cursor r1) {
        Drawable r12 = getActivityIconWithCache(this.mSearchable.getSearchActivity());
        if (r12 == null) goto L6;
        return r12;
    L6:
        return this.mContext.getPackageManager().getDefaultActivityIcon();
    }

    private Drawable getActivityIconWithCache(ComponentName r4) {
        String r0 = r4.flattenToShortString();
        Drawable.ConstantState r2 = null;
        if (this.mOutsideDrawablesCache.containsKey(r0) == false) goto L9;
        Drawable.ConstantState r42 = this.mOutsideDrawablesCache.get(r0);
        if (r42 != null) goto L8;
        return null;
    L8:
        return r42.newDrawable(this.mProviderContext.getResources());
    L9:
        Drawable r43 = getActivityIcon(r4);
        if (r43 == null) goto L13;
        r2 = r43.getConstantState();
    L13:
        this.mOutsideDrawablesCache.put(r0, r2);
        return r43;
    }

    private Drawable getActivityIcon(ComponentName r7) {
        PackageManager r1 = this.mContext.getPackageManager();
        ActivityInfo r2 = r1.getActivityInfo(r7, 128);     // Catch: PackageManager.NameNotFoundException -> L12
        int r4 = r2.getIconResource();
        if (r4 != 0) goto L7;
        return null;
    L7:
        Drawable r12 = r1.getDrawable(r7.getPackageName(), r4, r2.applicationInfo);
        if (r12 != null) goto L11;
        Log.w(LOG_TAG, "Invalid icon resource " + r4 + " for " + r7.flattenToShortString());
        return null;
    L11:
        return r12;
    L12:
        e = move-exception;
        Log.w(LOG_TAG, e.toString());
        return null;
    }

    public static String getColumnString(Cursor r0, String r1) {
        return getStringOrNull(r0, r0.getColumnIndex(r1));
    }

    private static String getStringOrNull(Cursor r2, int r3) {
        if (r3 != (-1)) goto L10;
        return null;
    L10:
        return r2.getString(r3);
    L7:
        e = move-exception;
        Log.e(LOG_TAG, "unexpected error retrieving valid column from cursor, did the remote process die?", e);
        return null;
    }

    Drawable getDrawableFromResourceUri(Uri r7) throws FileNotFoundException {
        String r0 = r7.getAuthority();
        if (TextUtils.isEmpty(r0) == true) goto L28;
        Resources r02 = this.mContext.getPackageManager().getResourcesForApplication(r0);     // Catch: PackageManager.NameNotFoundException -> L25
        List<String> r1 = r7.getPathSegments();
        if (r1 == null) goto L24;
        int r2 = r1.size();
        if (r2 != 1) goto L14;
        int r12 = Integer.parseInt(r1.get(0));     // Catch: NumberFormatException -> L11
    L16:
        if (r12 == 0) goto L20;
        return r02.getDrawable(r12);
    L20:
        throw new FileNotFoundException("No resource found for: " + r7);
    L12:
        throw new FileNotFoundException("Single path segment is not a resource ID: " + r7);
    L14:
        if (r2 != 2) goto L22;
        r12 = r02.getIdentifier(r1.get(1), r1.get(0), BuildConfig.APPLICATION_ID);
        goto L16
    L22:
        throw new FileNotFoundException("More than two path segments: " + r7);
    L24:
        throw new FileNotFoundException("No path: " + r7);
    L26:
        throw new FileNotFoundException("No package found for authority: " + r7);
    L28:
        throw new FileNotFoundException("No authority: " + r7);
    }

    Cursor getSearchManagerSuggestions(SearchableInfo r10, String r11, int r12) {
        String[] r0 = null;
        if (r10 != null) goto L5;
        return null;
    L5:
        String r1 = r10.getSuggestAuthority();
        if (r1 != null) goto L8;
        return null;
    L8:
        Uri.Builder r13 = new Uri.Builder().scheme("content").authority(r1).query("").fragment("");
        String r2 = r10.getSuggestPath();
        if (r2 == null) goto L11;
        r13.appendEncodedPath(r2);
    L11:
        r13.appendPath("search_suggest_query");
        String r6 = r10.getSuggestSelection();
        if (r6 == null) goto L14;
        r0 = new String[]{r11};
    L15:
        String[] r7 = r0;
        if (r12 <= 0) goto L18;
        r13.appendQueryParameter("limit", String.valueOf(r12));
    L18:
        Uri r4 = r13.build();
        this.mContext.getContentResolver();
        return PluginProviderClient.query(RePlugin.getPluginContext(), r4, null, r6, r7, null);
    L14:
        r13.appendPath(r11);
        goto L15
    }
}
