.class public Lcom/sigmob/sdk/videoplayer/d;
.super Ljava/lang/Object;


# static fields
.field public static a:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/app/Activity;)I
    .locals 4

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/app/Activity;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    const-string v0, "navigation_bar_height"

    const-string v2, "dimen"

    const-string v3, "android"

    invoke-virtual {p0, v0, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0

    return p0

    :cond_1
    return v1
.end method

.method public static a(Landroid/content/Context;F)I
    .locals 0

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method public static a(J)Ljava/lang/String;
    .locals 6

    const-wide/16 v0, 0x0

    cmp-long v0, p0, v0

    if-lez v0, :cond_2

    const-wide/32 v0, 0x5265c00

    cmp-long v0, p0, v0

    if-ltz v0, :cond_0

    goto :goto_1

    :cond_0
    const-wide/16 v0, 0x3e8

    div-long/2addr p0, v0

    const-wide/16 v0, 0x3c

    rem-long v2, p0, v0

    long-to-int v2, v2

    div-long v3, p0, v0

    rem-long/2addr v3, v0

    long-to-int v0, v3

    const-wide/16 v3, 0xe10

    div-long/2addr p0, v3

    long-to-int p0, p0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v1, Ljava/util/Formatter;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v3

    invoke-direct {v1, p1, v3}, Ljava/util/Formatter;-><init>(Ljava/lang/Appendable;Ljava/util/Locale;)V

    const/4 p1, 0x1

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-lez p0, :cond_1

    const/4 v5, 0x3

    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v5, v3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v5, p1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v5, v4

    const-string p0, "%d:%02d:%02d"

    invoke-virtual {v1, p0, v5}, Ljava/util/Formatter;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;

    move-result-object p0

    :goto_0
    invoke-virtual {p0}, Ljava/util/Formatter;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    new-array p0, v4, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, p0, v3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, p0, p1

    const-string p1, "%02d:%02d"

    invoke-virtual {v1, p1, p0}, Ljava/util/Formatter;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;

    move-result-object p0

    goto :goto_0

    :cond_2
    :goto_1
    const-string p0, "00:00"

    return-object p0
.end method

.method public static a(Landroid/content/Context;I)V
    .locals 1

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/app/Activity;->setRequestedOrientation(I)V

    :cond_0
    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 1

    const-string v0, "connectivity"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    const/4 v0, 0x1

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getType()I

    move-result p0

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static b(Landroid/content/Context;)Landroid/app/Activity;
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    instance-of v1, p0, Landroid/app/Activity;

    if-eqz v1, :cond_1

    check-cast p0, Landroid/app/Activity;

    return-object p0

    :cond_1
    instance-of v1, p0, Landroid/content/ContextWrapper;

    if-eqz v1, :cond_2

    check-cast p0, Landroid/content/ContextWrapper;

    invoke-virtual {p0}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    return-object p0

    :cond_2
    return-object v0
.end method

.method public static b(Landroid/app/Activity;)Z
    .locals 4

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x1

    const/4 v2, 0x0

    const/16 v3, 0x11

    if-lt v0, v3, :cond_1

    invoke-virtual {p0}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object p0

    invoke-interface {p0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object p0

    new-instance v0, Landroid/graphics/Point;

    invoke-direct {v0}, Landroid/graphics/Point;-><init>()V

    new-instance v3, Landroid/graphics/Point;

    invoke-direct {v3}, Landroid/graphics/Point;-><init>()V

    invoke-virtual {p0, v0}, Landroid/view/Display;->getSize(Landroid/graphics/Point;)V

    invoke-virtual {p0, v3}, Landroid/view/Display;->getRealSize(Landroid/graphics/Point;)V

    iget p0, v3, Landroid/graphics/Point;->y:I

    iget v0, v0, Landroid/graphics/Point;->y:I

    if-eq p0, v0, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    return v1

    :cond_1
    invoke-static {p0}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object p0

    invoke-virtual {p0}, Landroid/view/ViewConfiguration;->hasPermanentMenuKey()Z

    move-result p0

    const/4 v0, 0x4

    invoke-static {v0}, Landroid/view/KeyCharacterMap;->deviceHasKey(I)Z

    move-result v0

    if-nez p0, :cond_3

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    return v1

    :cond_3
    :goto_1
    return v2
.end method

.method public static c(Landroid/content/Context;)Landroid/view/Window;
    .locals 1

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->b(Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static d(Landroid/content/Context;)V
    .locals 1

    sget-boolean v0, Lcom/sigmob/sdk/videoplayer/g;->p:Z

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    if-eqz p0, :cond_0

    const/16 v0, 0x400

    invoke-virtual {p0, v0}, Landroid/view/Window;->clearFlags(I)V

    :cond_0
    return-void
.end method

.method public static e(Landroid/content/Context;)V
    .locals 1

    sget-boolean v0, Lcom/sigmob/sdk/videoplayer/g;->p:Z

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    if-eqz p0, :cond_0

    const/16 v0, 0x400

    invoke-virtual {p0, v0, v0}, Landroid/view/Window;->setFlags(II)V

    :cond_0
    return-void
.end method

.method public static f(Landroid/content/Context;)V
    .locals 2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/16 v0, 0x1606

    goto :goto_0

    :cond_0
    const/16 v0, 0x606

    :goto_0
    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v1

    sput v1, Lcom/sigmob/sdk/videoplayer/d;->a:I

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_1
    return-void
.end method

.method public static g(Landroid/content/Context;)V
    .locals 1

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p0

    sget v0, Lcom/sigmob/sdk/videoplayer/d;->a:I

    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    :cond_0
    return-void
.end method

.method public static h(Landroid/content/Context;)I
    .locals 4

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "status_bar_height"

    const-string v2, "dimen"

    const-string v3, "android"

    invoke-virtual {v0, v1, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v0, "com.android.internal.R$dimen"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    invoke-virtual {v0, v2}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private static i(Landroid/content/Context;)V
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/high16 v1, 0x8000000

    const/16 v2, 0x15

    if-lt v0, v2, :cond_0

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0, v1}, Landroid/view/Window;->clearFlags(I)V

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getSystemUiVisibility()I

    move-result v0

    invoke-virtual {p0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v1

    or-int/lit16 v0, v0, 0x400

    or-int/lit8 v0, v0, 0x4

    or-int/lit16 v0, v0, 0x100

    or-int/lit16 v0, v0, 0x200

    invoke-virtual {v1, v0}, Landroid/view/View;->setSystemUiVisibility(I)V

    const/high16 v0, -0x80000000

    invoke-virtual {p0, v0}, Landroid/view/Window;->addFlags(I)V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Landroid/view/Window;->setStatusBarColor(I)V

    invoke-virtual {p0, v0}, Landroid/view/Window;->setNavigationBarColor(I)V

    goto :goto_0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v0, v2, :cond_1

    invoke-static {p0}, Lcom/sigmob/sdk/videoplayer/d;->c(Landroid/content/Context;)Landroid/view/Window;

    move-result-object p0

    invoke-virtual {p0, v1}, Landroid/view/Window;->addFlags(I)V

    :cond_1
    :goto_0
    return-void
.end method
