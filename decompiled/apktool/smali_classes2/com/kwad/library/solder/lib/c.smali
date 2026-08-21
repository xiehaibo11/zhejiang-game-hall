.class final Lcom/kwad/library/solder/lib/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/lib/a/c;


# instance fields
.field private final afw:Ljava/io/File;

.field private final afx:Ljava/io/File;

.field private final afy:Lcom/kwad/library/solder/lib/ext/c;

.field private final mContext:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/kwad/library/solder/lib/ext/c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/c;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/ext/c;->wF()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/c;->afw:Ljava/io/File;

    iget-object p1, p0, Lcom/kwad/library/solder/lib/c;->mContext:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/c;->afx:Ljava/io/File;

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/a/a;)Ljava/lang/String;
    .locals 1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->getVersion()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lcom/kwad/library/solder/lib/c;->y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private static a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/utils/q;->fr(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "Plugin not found, path = "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "Sodler.installer"

    invoke-static {p1, p0}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_0
    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->wn()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/ad;->ab(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->wn()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    return v1

    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "Check plugin\'s signatures success, path = "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p0, 0x1

    return p0
.end method

.method private a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;Z)Z
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/library/solder/lib/c;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)Z

    move-result p2

    if-eqz p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    invoke-static {p1}, Lcom/kwad/library/solder/lib/c;->delete(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method private static delete(Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/q;->delete(Ljava/lang/String;)Z

    return-void
.end method

.method private i(Ljava/lang/String;Ljava/lang/String;Z)Z
    .locals 1

    invoke-virtual {p0, p1, p2}, Lcom/kwad/library/solder/lib/c;->y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    const/4 v0, 0x0

    invoke-static {p3, v0}, Lcom/kwad/library/solder/lib/c;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)Z

    move-result p3

    if-eqz p3, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/kwad/library/solder/lib/c;->t(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method private t(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-virtual {p0, p1, p2}, Lcom/kwad/library/solder/lib/c;->y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->delete(Ljava/lang/String;)Z

    return-void
.end method

.method private wa()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/c;->afw:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private x(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/c;->wa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public final b(Lcom/kwad/library/solder/lib/a/a;)Ljava/lang/String;
    .locals 7

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/c;->a(Lcom/kwad/library/solder/lib/a/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Install path = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {v2}, Lcom/kwad/library/solder/lib/ext/c;->wL()Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v2, p1, v3}, Lcom/kwad/library/solder/lib/c;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;Z)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->wm()Ljava/lang/String;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "Install plugin, path = "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v5

    const-string v6, "Sodler.installer"

    if-eqz v5, :cond_3

    invoke-direct {p0, v2, p1, v3}, Lcom/kwad/library/solder/lib/c;->a(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;Z)Z

    move-result p1

    if-eqz p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v3, "Install plugin, from = "

    invoke-direct {p1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", to = "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    move-result p1

    if-eqz p1, :cond_1

    return-object v0

    :cond_1
    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/c;->vZ()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-static {v4, v1}, Lcom/kwad/sdk/utils/q;->f(Ljava/io/File;Ljava/io/File;)V

    invoke-static {v4}, Lcom/kwad/sdk/utils/q;->R(Ljava/io/File;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    :catchall_0
    move-exception p1

    invoke-static {v6, p1}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v1, 0xbbc

    invoke-direct {v0, p1, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/Throwable;I)V

    throw v0

    :catchall_1
    move-exception p1

    invoke-static {v6, p1}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v1, 0xbbd

    invoke-direct {v0, p1, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/Throwable;I)V

    throw v0

    :cond_2
    const-string p1, "Check plugin\'s signatures fail."

    invoke-static {v6, p1}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v1, 0xbbb

    invoke-direct {v0, p1, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/String;I)V

    throw v0

    :cond_3
    const-string p1, "Plugin path not exist"

    invoke-static {v6, p1}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p1, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v0, 0xbb9

    const-string v1, "Plugin file not exist."

    invoke-direct {p1, v1, v0}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/String;I)V

    throw p1

    :cond_4
    new-instance p1, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v0, 0xbbe

    const-string v1, "Can not get install path."

    invoke-direct {p1, v1, v0}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/String;I)V

    throw p1
.end method

.method public final bA(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/c;->wa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final bz(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Ljava/io/File;

    invoke-virtual {p0, p1}, Lcom/kwad/library/solder/lib/c;->bA(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->R(Ljava/io/File;)Z

    return-void
.end method

.method public final d(Ljava/lang/String;Z)Ljava/io/File;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-static {p1}, Lcom/kwad/library/solder/lib/d/b;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_1

    return-object v0

    :cond_1
    if-eqz p2, :cond_4

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/c;->wJ()Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/c;->wJ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    new-instance p1, Ljava/io/File;

    iget-object v1, p0, Lcom/kwad/library/solder/lib/c;->afx:Ljava/io/File;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, v1, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p2

    if-nez p2, :cond_3

    invoke-virtual {p1}, Ljava/io/File;->createNewFile()Z

    move-result p2

    if-nez p2, :cond_3

    goto :goto_0

    :cond_3
    move-object v0, p1

    :goto_0
    return-object v0

    :cond_4
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/ext/c;->wJ()Ljava/lang/String;

    move-result-object p2

    iget-object v0, p0, Lcom/kwad/library/solder/lib/c;->afx:Ljava/io/File;

    invoke-static {p1, p2, v0}, Ljava/io/File;->createTempFile(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;

    move-result-object p1

    return-object p1
.end method

.method public final u(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Ljava/io/File;

    invoke-direct {p0, p1, p2}, Lcom/kwad/library/solder/lib/c;->x(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->R(Ljava/io/File;)Z

    return-void
.end method

.method public final vZ()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/library/solder/lib/c;->afw:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getFreeSpace()J

    move-result-wide v0

    const-wide/32 v2, 0x989680

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/io/IOException;

    const-string v1, "No enough capacity."

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/c;->wa()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/c;->wK()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final z(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/c;->afy:Lcom/kwad/library/solder/lib/ext/c;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/ext/c;->wL()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 v0, 0x1

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/library/solder/lib/c;->i(Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method
