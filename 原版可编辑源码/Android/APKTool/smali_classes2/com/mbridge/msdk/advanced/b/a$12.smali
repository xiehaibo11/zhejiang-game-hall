.class final Lcom/mbridge/msdk/advanced/b/a$12;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->h(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 0

    .line 791
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$12;->c:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$12;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/advanced/b/a$12;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 804
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "zip \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " "

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 805
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 806
    iput v0, p2, Landroid/os/Message;->what:I

    .line 807
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 808
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$12;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 3

    .line 794
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "zip \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 795
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x1

    .line 796
    iput v0, p1, Landroid/os/Message;->what:I

    .line 797
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$12;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 798
    iget v0, p0, Lcom/mbridge/msdk/advanced/b/a$12;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 799
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$12;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
