.class final Lcom/kwad/library/b/c/c;
.super Landroid/view/ContextThemeWrapper;

# interfaces
.implements Lcom/kwad/library/b/c/b;


# instance fields
.field private final afl:Landroid/view/ContextThemeWrapper;

.field private afm:Landroid/content/res/Resources$Theme;

.field private afn:I

.field private afo:Ljava/lang/String;


# direct methods
.method constructor <init>(Landroid/view/ContextThemeWrapper;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Landroid/view/ContextThemeWrapper;-><init>(Landroid/content/Context;I)V

    iput-object p1, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    iput-object p2, p0, Lcom/kwad/library/b/c/c;->afo:Ljava/lang/String;

    :try_start_0
    const-string p2, "getThemeResId"

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, p2, v0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/kwad/library/b/c/c;->afn:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method


# virtual methods
.method public final getApplicationContext()Landroid/content/Context;
    .locals 2

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    invoke-virtual {v0}, Landroid/view/ContextThemeWrapper;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/library/b/c/c;->afo:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/library/b/c/a;->g(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final getBaseContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    return-object v0
.end method

.method public final getClassLoader()Ljava/lang/ClassLoader;
    .locals 2

    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/library/b/c/c;->afo:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/library/b/c/a;->b(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0
.end method

.method public final getDelegatedContext()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    return-object v0
.end method

.method public final getResources()Landroid/content/res/Resources;
    .locals 2

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    invoke-virtual {v0}, Landroid/view/ContextThemeWrapper;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/library/b/c/c;->afo:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/library/b/c/a;->a(Landroid/content/res/Resources;Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v0

    return-object v0
.end method

.method public final getSystemService(Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    invoke-virtual {v0, p1}, Landroid/view/ContextThemeWrapper;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0, p1, p0}, Lcom/kwad/library/b/c/a;->wrapSystemService(Ljava/lang/Object;Ljava/lang/String;Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public final getTheme()Landroid/content/res/Resources$Theme;
    .locals 4

    :try_start_0
    invoke-super {p0}, Landroid/view/ContextThemeWrapper;->getTheme()Landroid/content/res/Resources$Theme;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/library/b/c/c;->afm:Landroid/content/res/Resources$Theme;

    if-eqz v1, :cond_0

    if-ne v1, v0, :cond_1

    :cond_0
    iget-object v1, p0, Lcom/kwad/library/b/c/c;->afm:Landroid/content/res/Resources$Theme;

    iget v2, p0, Lcom/kwad/library/b/c/c;->afn:I

    iget-object v3, p0, Lcom/kwad/library/b/c/c;->afo:Ljava/lang/String;

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/library/b/c/a;->a(Landroid/content/res/Resources$Theme;Landroid/content/res/Resources$Theme;ILjava/lang/String;)Landroid/content/res/Resources$Theme;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/library/b/c/c;->afm:Landroid/content/res/Resources$Theme;

    :cond_1
    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afm:Landroid/content/res/Resources$Theme;

    return-object v0
.end method

.method public final registerComponentCallbacks(Landroid/content/ComponentCallbacks;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    invoke-virtual {v0, p1}, Landroid/view/ContextThemeWrapper;->registerComponentCallbacks(Landroid/content/ComponentCallbacks;)V

    return-void
.end method

.method public final setTheme(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/library/b/c/c;->afn:I

    invoke-super {p0, p1}, Landroid/view/ContextThemeWrapper;->setTheme(I)V

    return-void
.end method

.method public final unregisterComponentCallbacks(Landroid/content/ComponentCallbacks;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/c/c;->afl:Landroid/view/ContextThemeWrapper;

    invoke-virtual {v0, p1}, Landroid/view/ContextThemeWrapper;->unregisterComponentCallbacks(Landroid/content/ComponentCallbacks;)V

    return-void
.end method
