.class public final Lcom/kwad/sdk/collector/e;
.super Ljava/lang/Object;


# direct methods
.method public static cl(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/4 v1, 0x0

    const/16 v2, 0x13

    if-lt v0, v2, :cond_0

    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->U(Ljava/io/File;)[B

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/m;->k([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AJ()Lcom/kwad/sdk/core/a/c$b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/a/c$b;->encode([B)[B

    move-result-object p0

    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p0}, Ljava/lang/String;-><init>([B)V

    return-object v0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    return-object v1
.end method
