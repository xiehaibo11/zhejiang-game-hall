.class public final Lcom/kwad/sdk/crash/a/a;
.super Ljava/lang/Object;


# static fields
.field private static PG:Landroid/content/Context;

.field private static aAa:Ljava/lang/String;


# direct methods
.method public static A(Ljava/io/File;)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    move-result p0

    if-nez p0, :cond_1

    return v0

    :cond_1
    const/4 p0, 0x1

    return p0
.end method

.method public static EM()Ljava/io/File;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/crash/a/a;->aAa:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/kwad/sdk/crash/a/a;->aAa:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/kwad/sdk/crash/a/a;->PG:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/crash/a/a;->getDataDir(Landroid/content/Context;)Ljava/io/File;

    move-result-object v1

    const-string v2, "kwad_ex"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    :goto_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->mkdir()Z

    :cond_1
    return-object v0
.end method

.method public static EN()Ljava/io/File;
    .locals 3

    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/a/a;->EM()Ljava/io/File;

    move-result-object v1

    const-string v2, "java_crash/dump"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method

.method public static EO()Ljava/io/File;
    .locals 3

    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/a/a;->EM()Ljava/io/File;

    move-result-object v1

    const-string v2, "anr_log/dump"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method

.method public static EP()Ljava/io/File;
    .locals 3

    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/a/a;->EM()Ljava/io/File;

    move-result-object v1

    const-string v2, "native_crash_log/dump"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0
.end method

.method private static getDataDir(Landroid/content/Context;)Ljava/io/File;
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x1d

    if-lt v0, v2, :cond_0

    new-instance v0, Ljava/io/File;

    invoke-virtual {p0, v1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    return-object v0

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x18

    if-lt v0, v2, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getDataDir()Ljava/io/File;

    move-result-object v1

    :cond_1
    if-nez v1, :cond_2

    new-instance v1, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/data/"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_2

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "/data/data/"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    return-object v0

    :cond_2
    return-object v1
.end method

.method public static init(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/crash/a/a;->PG:Landroid/content/Context;

    sput-object p1, Lcom/kwad/sdk/crash/a/a;->aAa:Ljava/lang/String;

    return-void
.end method
