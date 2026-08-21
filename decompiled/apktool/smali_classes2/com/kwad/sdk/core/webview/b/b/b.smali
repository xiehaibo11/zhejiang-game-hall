.class public final Lcom/kwad/sdk/core/webview/b/b/b;
.super Ljava/lang/Object;


# direct methods
.method public static declared-synchronized a(Landroid/content/Context;Lcom/kwad/sdk/h/a/b;)Z
    .locals 8

    const-class v0, Lcom/kwad/sdk/core/webview/b/b/b;

    monitor-enter v0

    :try_start_0
    iget-object v1, p1, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/kwad/sdk/utils/q;->L(Ljava/io/File;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v4, 0x0

    if-nez v3, :cond_0

    monitor-exit v0

    return v4

    :cond_0
    :try_start_1
    iget-object v3, p1, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v5, 0x1

    xor-int/2addr v3, v5

    if-eqz v3, :cond_2

    invoke-static {v2}, Lcom/kwad/sdk/utils/a;->getFileMD5(Ljava/io/File;)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v6

    const/16 v7, 0xa

    if-le v6, v7, :cond_1

    invoke-virtual {v3, v4, v7}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    :cond_1
    iget-object v6, p1, Lcom/kwad/sdk/h/a/b;->agi:Ljava/lang/String;

    invoke-static {v3, v6}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {v2}, Lcom/kwad/sdk/utils/q;->aa(Ljava/io/File;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return v4

    :cond_2
    const/4 v3, 0x2

    :try_start_2
    invoke-static {p1, v3}, Lcom/kwad/sdk/core/webview/b/c/b;->a(Lcom/kwad/sdk/h/a/b;I)V

    iget-object v6, p1, Lcom/kwad/sdk/h/a/b;->aCc:Ljava/lang/String;

    invoke-static {p0, v6}, Lcom/kwad/sdk/core/webview/b/c/a;->B(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :try_start_3
    invoke-static {p0, v1, v6}, Lcom/kwad/sdk/core/webview/b/c/a;->e(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    invoke-static {v2}, Lcom/kwad/sdk/utils/q;->aa(Ljava/io/File;)Z
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit v0

    return v5

    :catch_0
    move-exception p0

    :try_start_5
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, v4, v3, p0}, Lcom/kwad/sdk/core/webview/b/c/b;->a(Lcom/kwad/sdk/h/a/b;IILjava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    monitor-exit v0

    return v4

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method
