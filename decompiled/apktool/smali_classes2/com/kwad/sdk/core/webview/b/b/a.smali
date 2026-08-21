.class public final Lcom/kwad/sdk/core/webview/b/b/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/webview/b/b/a$a;
    }
.end annotation


# direct methods
.method public static a(Lcom/kwad/sdk/h/a/b;Lcom/kwad/sdk/core/webview/b/b/a$a;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "reportHybrid: download+++url "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HybridDownloader"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {p1, p0}, Lcom/kwad/sdk/core/webview/b/b/a$a;->c(Lcom/kwad/sdk/h/a/b;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/h/a/b;->an(J)V

    const/4 v0, 0x1

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/webview/b/c/b;->a(Lcom/kwad/sdk/h/a/b;I)V

    invoke-static {}, Lcom/kwad/sdk/m/l;->KT()Landroid/app/Application;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/framework/filedownloader/r;->ao(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    iget-object v1, p0, Lcom/kwad/sdk/h/a/b;->packageUrl:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/framework/filedownloader/r;->aX(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a;

    move-result-object v1

    invoke-interface {v1, p0}, Lcom/kwad/framework/filedownloader/a;->e(Ljava/lang/Object;)Lcom/kwad/framework/filedownloader/a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/sdk/h/a/b;->aCd:Ljava/lang/String;

    invoke-interface {v1, v2}, Lcom/kwad/framework/filedownloader/a;->aU(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/kwad/framework/filedownloader/a;->aU(Z)Lcom/kwad/framework/filedownloader/a;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/webview/b/b/a$1;

    invoke-direct {v1, p1, p0}, Lcom/kwad/sdk/core/webview/b/b/a$1;-><init>(Lcom/kwad/sdk/core/webview/b/b/a$a;Lcom/kwad/sdk/h/a/b;)V

    invoke-interface {v0, v1}, Lcom/kwad/framework/filedownloader/a;->a(Lcom/kwad/framework/filedownloader/i;)Lcom/kwad/framework/filedownloader/a;

    move-result-object p0

    invoke-interface {p0}, Lcom/kwad/framework/filedownloader/a;->start()I

    return-void
.end method
