.class final Lcom/mbridge/msdk/mbdownload/k$1;
.super Ljava/lang/Object;
.source "WorkThread.java"

# interfaces
.implements Lcom/mbridge/msdk/out/IDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbdownload/k;->a(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/k;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/k;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onEnd(IILjava/lang/String;)V
    .locals 0

    .line 192
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "onEnd:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/k;->e(Lcom/mbridge/msdk/mbdownload/k;)Ljava/io/File;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "download workthread"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 195
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;Ljava/io/File;)Ljava/io/File;

    .line 196
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/k;->b(Lcom/mbridge/msdk/mbdownload/k;)I

    move-result p2

    invoke-virtual {p1, p2, p3}, Lcom/mbridge/msdk/mbdownload/c;->a(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 199
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final onProgressUpdate(I)V
    .locals 3

    .line 180
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 181
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/k;->b(Lcom/mbridge/msdk/mbdownload/k;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(II)V

    .line 182
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catch_1
    move-exception v0

    .line 184
    :goto_0
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 187
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/k;->d(Lcom/mbridge/msdk/mbdownload/k;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/d;->a(Landroid/content/Context;)Lcom/mbridge/msdk/mbdownload/d;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/k;->c(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/b$a;

    move-result-object v1

    iget-object v1, v1, Lcom/mbridge/msdk/mbdownload/b$a;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/k;->c(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/b$a;

    move-result-object v2

    iget-object v2, v2, Lcom/mbridge/msdk/mbdownload/b$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbdownload/d;->a(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public final onStart()V
    .locals 2

    const-string v0, "download workthread"

    const-string v1, "onstart"

    .line 171
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onStatus(I)V
    .locals 2

    const/16 v0, 0x9

    if-ne p1, v0, :cond_0

    .line 208
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/k;->a(Lcom/mbridge/msdk/mbdownload/k;)Lcom/mbridge/msdk/mbdownload/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/k$1;->a:Lcom/mbridge/msdk/mbdownload/k;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/k;->b(Lcom/mbridge/msdk/mbdownload/k;)I

    move-result v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/mbdownload/c;->b(II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 213
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
