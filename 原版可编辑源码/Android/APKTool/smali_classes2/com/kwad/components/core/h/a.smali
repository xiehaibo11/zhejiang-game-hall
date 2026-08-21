.class public final Lcom/kwad/components/core/h/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/h/a$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/h/a;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;J)V
    .locals 7

    invoke-static {p1}, Lcom/kwad/components/core/h/a;->ad(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/core/h/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/h/a$2;-><init>(Lcom/kwad/components/core/h/a;)V

    invoke-virtual {p1, v0}, Ljava/io/File;->listFiles(Ljava/io/FileFilter;)[Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_2

    array-length v0, p1

    if-lez v0, :cond_2

    const-wide/16 v0, 0x0

    array-length v2, p1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_0

    aget-object v5, p1, v4

    invoke-virtual {v5}, Ljava/io/File;->lastModified()J

    move-result-wide v5

    invoke-static {v0, v1, v5, v6}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    invoke-static {p2, p3, v0, v1}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p2

    array-length v0, p1

    :goto_1
    if-ge v3, v0, :cond_2

    aget-object v1, p1, v3

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->lastModified()J

    move-result-wide v4

    cmp-long v2, v4, p2

    if-gez v2, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/h/a;Landroid/content/Context;J)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/components/core/h/a;->a(Landroid/content/Context;J)V

    return-void
.end method

.method private static ad(Landroid/content/Context;)Ljava/io/File;
    .locals 2

    new-instance v0, Ljava/io/File;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->dataDir:Ljava/lang/String;

    const-string v1, "ksad_dynamic"

    invoke-direct {v0, p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public static nY()Lcom/kwad/components/core/h/a;
    .locals 1

    invoke-static {}, Lcom/kwad/components/core/h/a$a;->nZ()Lcom/kwad/components/core/h/a;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final ac(Landroid/content/Context;)V
    .locals 3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Lcom/kwad/components/core/h/a$1;

    invoke-direct {v2, p0, p1, v0, v1}, Lcom/kwad/components/core/h/a$1;-><init>(Lcom/kwad/components/core/h/a;Landroid/content/Context;J)V

    sget-object p1, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/16 v0, 0xa

    invoke-static {v2, v0, v1, p1}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    return-void
.end method
