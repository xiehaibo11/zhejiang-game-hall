package library;

import android.annotation.TargetApi;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.Movie;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.TypedValue;
import com.bianqi.wpll.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import java.io.InputStream;

public class e extends Resources {
    private Context a;
    private Resources b;
    private Resources c;

    public e(Context context) {
        super(context.getResources().getAssets(), context.getResources().getDisplayMetrics(), context.getResources().getConfiguration());
        this.a = context;
        this.b = context.getResources();
        this.c = (RePlugin.isHostInitialized() ? RePlugin.getHostContext() : context).getResources();
    }

    @Override
    public XmlResourceParser getAnimation(int i) {
        try {
            return this.b.getAnimation(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getAnimation(i);
        }
    }

    @Override
    @TargetApi(3)
    public boolean getBoolean(int i) {
        try {
            return this.b.getBoolean(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getBoolean(i);
        }
    }

    @Override
    public int getColor(int i) {
        try {
            return this.b.getColor(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getColor(i);
        }
    }

    @Override
    public ColorStateList getColorStateList(int i) {
        try {
            return this.b.getColorStateList(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getColorStateList(i);
        }
    }

    @Override
    public Configuration getConfiguration() {
        try {
            return this.b.getConfiguration();
        } catch (Exception e) {
            e.printStackTrace();
            return this.c.getConfiguration();
        }
    }

    @Override
    public float getDimension(int i) {
        try {
            return this.b.getDimension(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDimension(i);
        }
    }

    @Override
    public int getDimensionPixelOffset(int i) {
        try {
            return this.b.getDimensionPixelOffset(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDimensionPixelOffset(i);
        }
    }

    @Override
    public int getDimensionPixelSize(int i) {
        try {
            return this.b.getDimensionPixelSize(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            try {
                return this.c.getDimensionPixelSize(i);
            } catch (Resources.NotFoundException unused) {
                return 0;
            }
        }
    }

    @Override
    public Drawable getDrawable(int i) {
        try {
            return this.b.getDrawable(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDrawable(i);
        }
    }

    @Override
    @TargetApi(21)
    public Drawable getDrawable(int i, Resources.Theme theme) {
        try {
            return this.b.getDrawable(i, theme);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDrawable(i, theme);
        }
    }

    @Override
    @TargetApi(15)
    public Drawable getDrawableForDensity(int i, int i2) {
        try {
            return this.b.getDrawableForDensity(i, i2);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDrawableForDensity(i, i2);
        }
    }

    @Override
    @TargetApi(15)
    public Drawable getDrawableForDensity(int i, int i2, Resources.Theme theme) {
        try {
            return this.b.getDrawableForDensity(i, i2);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getDrawableForDensity(i, i2);
        }
    }

    @Override
    @TargetApi(3)
    public float getFraction(int i, int i2, int i3) {
        try {
            return this.b.getFraction(i, i2, i3);
        } catch (Exception e) {
            e.printStackTrace();
            return this.c.getFraction(i, i2, i3);
        }
    }

    @Override
    public int getIdentifier(String str, String str2, String str3) {
        try {
            if (RePlugin.isHostInitialized()) {
                if (!TextUtils.equals(RePlugin.getPluginContext().getPackageName(), str3) && !TextUtils.equals(RePlugin.getHostContext().getPackageName(), str3)) {
                    return Integer.parseInt(String.valueOf(h.a(this.c.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.c, new Class[]{String.class, String.class, String.class}, str, str2, str3)));
                }
            } else if (!TextUtils.equals(this.a.getPackageName(), str3)) {
                return Integer.parseInt(String.valueOf(h.a(this.c.getClass().getClassLoader(), "android.content.res.Resources", "getIdentifier", this.c, new Class[]{String.class, String.class, String.class}, str, str2, str3)));
            }
            return this.b.getIdentifier(str, str2, BuildConfig.APPLICATION_ID);
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    @Override
    public int[] getIntArray(int i) {
        try {
            return this.b.getIntArray(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getIntArray(i);
        }
    }

    @Override
    public int getInteger(int i) {
        try {
            return this.b.getInteger(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getInteger(i);
        }
    }

    @Override
    public XmlResourceParser getLayout(int i) {
        try {
            return this.b.getLayout(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getLayout(i);
        }
    }

    @Override
    public Movie getMovie(int i) {
        try {
            return this.b.getMovie(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getMovie(i);
        }
    }

    @Override
    public String getQuantityString(int i, int i2) {
        try {
            return this.b.getQuantityString(i, i2);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getQuantityString(i, i2);
        }
    }

    @Override
    public String getQuantityString(int i, int i2, Object... objArr) {
        try {
            return this.b.getQuantityString(i, i2, objArr);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getQuantityString(i, i2, objArr);
        }
    }

    @Override
    public CharSequence getQuantityText(int i, int i2) {
        try {
            return this.b.getQuantityText(i, i2);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getQuantityText(i, i2);
        }
    }

    @Override
    public String getResourceEntryName(int i) {
        try {
            return this.b.getResourceEntryName(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getResourceEntryName(i);
        }
    }

    @Override
    public String getResourceName(int i) {
        try {
            return this.b.getResourceName(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getResourceName(i);
        }
    }

    @Override
    public String getResourcePackageName(int i) {
        try {
            return this.b.getResourcePackageName(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getResourcePackageName(i);
        }
    }

    @Override
    public String getResourceTypeName(int i) {
        try {
            return this.b.getResourceTypeName(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getResourceTypeName(i);
        }
    }

    @Override
    public String getString(int i) {
        try {
            return this.b.getString(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getString(i);
        }
    }

    @Override
    public String getString(int i, Object... objArr) {
        try {
            return this.b.getString(i, objArr);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getString(i, objArr);
        }
    }

    @Override
    public String[] getStringArray(int i) {
        try {
            return this.b.getStringArray(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getStringArray(i);
        }
    }

    @Override
    public CharSequence getText(int i) {
        try {
            return this.b.getText(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getText(i);
        }
    }

    @Override
    public CharSequence getText(int i, CharSequence charSequence) {
        try {
            return this.b.getText(i, charSequence);
        } catch (Exception e) {
            e.printStackTrace();
            return this.c.getText(i, charSequence);
        }
    }

    @Override
    public CharSequence[] getTextArray(int i) {
        try {
            return this.b.getTextArray(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getTextArray(i);
        }
    }

    @Override
    public void getValue(int i, TypedValue typedValue, boolean z) {
        try {
            this.b.getValue(i, typedValue, z);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            this.c.getValue(i, typedValue, z);
        }
    }

    @Override
    @TargetApi(15)
    public void getValueForDensity(int i, int i2, TypedValue typedValue, boolean z) {
        try {
            this.b.getValueForDensity(i, i2, typedValue, z);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            this.c.getValueForDensity(i, i2, typedValue, z);
        }
    }

    @Override
    public XmlResourceParser getXml(int i) {
        try {
            return this.b.getXml(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.getXml(i);
        }
    }

    @Override
    public TypedArray obtainTypedArray(int i) {
        try {
            return this.b.obtainTypedArray(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.obtainTypedArray(i);
        }
    }

    @Override
    public InputStream openRawResource(int i) {
        try {
            return this.b.openRawResource(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.openRawResource(i);
        }
    }

    @Override
    @TargetApi(3)
    public InputStream openRawResource(int i, TypedValue typedValue) {
        try {
            return this.b.openRawResource(i, typedValue);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.openRawResource(i, typedValue);
        }
    }

    @Override
    public AssetFileDescriptor openRawResourceFd(int i) {
        try {
            return this.b.openRawResourceFd(i);
        } catch (Resources.NotFoundException e) {
            e.printStackTrace();
            return this.c.openRawResourceFd(i);
        }
    }
}
