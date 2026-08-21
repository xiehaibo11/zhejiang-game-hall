.class final Lcom/mbridge/msdk/click/i$5;
.super Ljava/lang/Object;
.source "WebViewSpider.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/i;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/i;)V
    .locals 0

    .line 388
    iput-object p1, p0, Lcom/mbridge/msdk/click/i$5;->a:Lcom/mbridge/msdk/click/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 391
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$5;->a:Lcom/mbridge/msdk/click/i;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/i;->b(Lcom/mbridge/msdk/click/i;Z)Z

    .line 392
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$5;->a:Lcom/mbridge/msdk/click/i;

    const/4 v1, 0x2

    invoke-static {v0, v1}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;I)I

    .line 393
    invoke-static {}, Lcom/mbridge/msdk/click/i;->a()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "http\u8d85\u65f6\uff01\u8d85\u65f6\u4e0a\u9650\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/click/i$5;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {v2}, Lcom/mbridge/msdk/click/i;->o(Lcom/mbridge/msdk/click/i;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "ms"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 394
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$5;->a:Lcom/mbridge/msdk/click/i;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->n(Lcom/mbridge/msdk/click/i;)V

    return-void
.end method
