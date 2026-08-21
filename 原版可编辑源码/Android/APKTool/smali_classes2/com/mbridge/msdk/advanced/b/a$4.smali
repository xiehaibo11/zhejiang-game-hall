.class final Lcom/mbridge/msdk/advanced/b/a$4;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->i(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 918
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$4;->b:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 921
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Video \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 922
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p1

    .line 923
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$4;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v0, 0x5

    .line 924
    iput v0, p1, Landroid/os/Message;->what:I

    .line 925
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$4;->b:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 930
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Video \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object p2

    .line 932
    iput-object p1, p2, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 933
    iput p1, p2, Landroid/os/Message;->what:I

    .line 934
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$4;->b:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method
