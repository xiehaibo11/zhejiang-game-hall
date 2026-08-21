.class public Lcom/kwad/library/solder/lib/g;
.super Lcom/kwad/library/solder/lib/a/a;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/a/a;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method private static e(Ljava/io/File;)V
    .locals 3

    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v0

    const-string v1, "Sodler.simple.package"

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    const-string v2, "/data/"

    invoke-virtual {v0, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "Apk file seems to locate in external path (not executable), path = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void

    :cond_1
    const-string p0, "Apk file not exist."

    invoke-static {v1, p0}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;

    const/16 v1, 0xfa1

    invoke-direct {v0, p0, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;-><init>(Ljava/lang/String;I)V

    throw v0
.end method


# virtual methods
.method public f(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/library/solder/lib/g;->e(Ljava/io/File;)V

    return-void
.end method
