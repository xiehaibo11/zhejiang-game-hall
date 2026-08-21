.class final Lcom/mbridge/msdk/advanced/b/a$9;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
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

    .line 666
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/advanced/b/a$9;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 681
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "endcard \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 682
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 683
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p2

    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setEndCardReady(Z)V

    .line 686
    :cond_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    const/4 v0, 0x2

    .line 687
    iput v0, p2, Landroid/os/Message;->what:I

    .line 688
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 689
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 3

    .line 669
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "endcard \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 670
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 671
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    const/4 v0, 0x4

    .line 672
    iput v0, p1, Landroid/os/Message;->what:I

    .line 673
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$9;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 674
    iget v0, p0, Lcom/mbridge/msdk/advanced/b/a$9;->b:I

    iput v0, p1, Landroid/os/Message;->arg1:I

    .line 675
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$9;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method
