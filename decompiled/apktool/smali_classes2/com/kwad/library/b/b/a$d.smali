.class final Lcom/kwad/library/b/b/a$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/b/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "d"
.end annotation


# direct methods
.method private static a(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;
    .locals 2

    :try_start_0
    invoke-static {p0, p1}, Lcom/kwad/library/b/b/a$d;->g(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    :try_start_1
    invoke-static {p0, p1}, Lcom/kwad/library/b/b/a$a;->b(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-object p0

    :catch_1
    new-instance v0, Landroid/content/res/Resources;

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    invoke-direct {v0, p1, v1, p0}, Landroid/content/res/Resources;-><init>(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V

    return-object v0
.end method

.method private static g(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;
    .locals 2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p1

    const/4 v1, 0x1

    aput-object p1, v0, v1

    invoke-virtual {p0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object p0

    const/4 p1, 0x2

    aput-object p0, v0, p1

    const-string p0, "android.content.res.MiuiResources"

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/Resources;

    if-eqz p0, :cond_0

    return-object p0

    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "Can not create Resources"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method static synthetic h(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/library/b/b/a$d;->a(Landroid/content/res/Resources;Landroid/content/res/AssetManager;)Landroid/content/res/Resources;

    move-result-object p0

    return-object p0
.end method
