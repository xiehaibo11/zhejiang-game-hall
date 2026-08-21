.class Lcom/sigmob/sdk/mraid2/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/e$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/c;-><init>(Landroid/content/Context;Ljava/util/List;Lcom/sigmob/sdk/base/common/e;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/c;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/mraid2/e;)V
    .locals 1

    :try_start_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/c$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/c$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/c;->b(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/mraid2/c$a;->a(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/c$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/c$1;->a:Lcom/sigmob/sdk/mraid2/c;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/c;->a(Lcom/sigmob/sdk/mraid2/c;)Lcom/sigmob/sdk/mraid2/c$a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/mraid2/c$a;->a(Lcom/sigmob/windad/WindAdError;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
