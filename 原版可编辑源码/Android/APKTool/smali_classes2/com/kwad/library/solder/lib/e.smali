.class final Lcom/kwad/library/solder/lib/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/lib/a/g;


# instance fields
.field private afA:Lcom/kwad/library/solder/lib/a/g$a;

.field private final mContext:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/e;->mContext:Landroid/content/Context;

    return-void
.end method

.method private a(ILcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    const/4 v0, -0x3

    if-nez p1, :cond_1

    invoke-static {p2}, Lcom/kwad/library/solder/lib/f;->k(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/c/b;

    move-result-object p1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Download new plugin, version = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p1, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", url = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/kwad/library/solder/lib/c/b;->agz:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x3

    invoke-virtual {p2, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    iget-object v0, p1, Lcom/kwad/library/solder/lib/c/b;->agz:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/kwad/library/solder/lib/a/f;->bK(Ljava/lang/String;)V

    iget-wide v0, p1, Lcom/kwad/library/solder/lib/c/b;->agA:J

    invoke-virtual {p2, v0, v1}, Lcom/kwad/library/solder/lib/a/f;->P(J)V

    iget-object v0, p1, Lcom/kwad/library/solder/lib/c/b;->agB:Ljava/lang/String;

    invoke-virtual {p2, v0}, Lcom/kwad/library/solder/lib/a/f;->bJ(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    invoke-virtual {p2, p1}, Lcom/kwad/library/solder/lib/a/f;->bD(Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v1, -0x1

    if-ne p1, v1, :cond_2

    :goto_0
    invoke-virtual {p2, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    :cond_2
    return-void
.end method

.method private static a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onCanceled state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v0, -0x7

    invoke-virtual {p0, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/library/solder/lib/ext/a;->o(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onError state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v0, -0x4

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p1, p2}, Lcom/kwad/library/solder/lib/a/f;->j(Ljava/lang/Throwable;)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wE()V

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->b(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/a/f;Ljava/io/File;)V
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "start download:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "Sodler.update"

    invoke-static {v3, v2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    iget-object v2, p0, Lcom/kwad/library/solder/lib/e;->afA:Lcom/kwad/library/solder/lib/a/g$a;

    if-eqz v2, :cond_0

    :try_start_0
    invoke-interface {v2, p1, p2}, Lcom/kwad/library/solder/lib/a/g$a;->a(Lcom/kwad/library/solder/lib/a/f;Ljava/io/File;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v0

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "finish download:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " cost:"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :catchall_0
    move-exception p1

    throw p1

    :cond_0
    new-instance p1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    const/16 p2, 0x7d8

    const-string v0, "update "

    invoke-direct {p1, v0, p2}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/String;I)V

    throw p1
.end method

.method private static b(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPostUpdate state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/library/solder/lib/ext/a;->q(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private static c(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPreUpdate state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/library/solder/lib/ext/a;->p(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private j(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;
    .locals 3

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wt()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/kwad/library/solder/lib/a/c;->bz(Ljava/lang/String;)V

    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wy()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/f;->k(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/c/b;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {p1, v1}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    iget-object v0, v0, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bD(Ljava/lang/String;)V

    return-object p1

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wy()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wC()Lcom/kwad/library/solder/lib/c/b;

    move-result-object v0

    if-nez v0, :cond_2

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wh()Lcom/kwad/library/solder/lib/a/b;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/kwad/library/solder/lib/a/b;->e(Lcom/kwad/library/solder/lib/a/f;)V

    :cond_2
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v0, -0x1

    invoke-direct {p0, v0, p1}, Lcom/kwad/library/solder/lib/e;->a(ILcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_3
    const/4 v0, 0x0

    invoke-direct {p0, v0, p1}, Lcom/kwad/library/solder/lib/e;->a(ILcom/kwad/library/solder/lib/a/f;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Request remote plugin info fail, error = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Sodler.update"

    invoke-static {v2, v1}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v2, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 v1, -0x2

    invoke-virtual {p1, v1}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    const/16 v2, 0x7d6

    invoke-direct {v1, v0, v2}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-virtual {p1, v1}, Lcom/kwad/library/solder/lib/a/f;->j(Ljava/lang/Throwable;)Lcom/kwad/library/solder/lib/a/f;

    :goto_0
    return-object p1
.end method


# virtual methods
.method public final a(Lcom/kwad/library/solder/lib/a/g$a;)Lcom/kwad/library/solder/lib/a/g;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/e;->afA:Lcom/kwad/library/solder/lib/a/g$a;

    return-object p0
.end method

.method public final i(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Start update, id = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "Update"

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bG(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->c(Lcom/kwad/library/solder/lib/a/f;)V

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/e;->j(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v0

    const/4 v1, 0x2

    const/16 v2, 0x7d3

    const-string v3, "Can not get temp file, error = "

    const/16 v4, 0x7d5

    const/4 v5, 0x1

    const-string v6, "Sodler.update"

    if-ne v0, v1, :cond_2

    :try_start_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/c;->vZ()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wz()Ljava/lang/String;

    move-result-object v1

    const/4 v4, 0x0

    invoke-interface {v0, v1, v4}, Lcom/kwad/library/solder/lib/a/c;->d(Ljava/lang/String;Z)Ljava/io/File;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->isCanceled()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/kwad/library/solder/lib/e;->mContext:Landroid/content/Context;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wz()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/utils/q;->a(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bH(Ljava/lang/String;)V

    invoke-virtual {p1, v5}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->b(Lcom/kwad/library/solder/lib/a/f;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object p1

    :catchall_0
    move-exception v0

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    const/16 v2, 0x7d4

    invoke-direct {v1, v0, v2}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-direct {p0, p1, v1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :catchall_1
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    invoke-direct {v1, v0, v2}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-direct {p0, p1, v1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :catchall_2
    move-exception v0

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    invoke-direct {v1, v0, v4}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-direct {p0, p1, v1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :cond_2
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_4

    :try_start_3
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/c;->vZ()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    :try_start_4
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/library/solder/lib/a/e;->wd()Lcom/kwad/library/solder/lib/ext/c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/library/solder/lib/ext/c;->wM()Z

    move-result v4

    invoke-interface {v0, v1, v4}, Lcom/kwad/library/solder/lib/a/c;->d(Ljava/lang/String;Z)Ljava/io/File;

    move-result-object v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wA()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {v0}, Lcom/kwad/sdk/utils/ad;->ab(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wA()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bH(Ljava/lang/String;)V

    invoke-virtual {p1, v5}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->b(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_3
    :try_start_5
    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Ljava/io/File;)V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bH(Ljava/lang/String;)V

    invoke-virtual {p1, v5}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->b(Lcom/kwad/library/solder/lib/a/f;)V
    :try_end_5
    .catch Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError; {:try_start_5 .. :try_end_5} :catch_1
    .catch Lcom/kwad/library/solder/lib/ext/PluginError$CancelError; {:try_start_5 .. :try_end_5} :catch_0

    return-object p1

    :catch_0
    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :catch_1
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Download plugin fail, error = "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->j(Ljava/lang/Throwable;)Lcom/kwad/library/solder/lib/a/f;

    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :catchall_3
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    invoke-direct {v1, v0, v2}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-direct {p0, p1, v1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :catchall_4
    move-exception v0

    invoke-static {v6, v0}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v1, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;

    invoke-direct {v1, v0, v4}, Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;-><init>(Ljava/lang/Throwable;I)V

    invoke-direct {p0, p1, v1}, Lcom/kwad/library/solder/lib/e;->a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError$UpdateError;)V

    return-object p1

    :cond_4
    invoke-static {p1}, Lcom/kwad/library/solder/lib/e;->b(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1
.end method
