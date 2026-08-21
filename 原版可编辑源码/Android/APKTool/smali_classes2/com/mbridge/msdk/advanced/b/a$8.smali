.class final Lcom/mbridge/msdk/advanced/b/a$8;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
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

    .line 636
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$8;->c:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/a$8;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput p3, p0, Lcom/mbridge/msdk/advanced/b/a$8;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 652
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gifurl \u4e0b\u8f7d\u5931\u8d25\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 653
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$8;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 654
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$8;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/mbridge/msdk/advanced/b/a$8$2;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/advanced/b/a$8$2;-><init>(Lcom/mbridge/msdk/advanced/b/a$8;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 2

    .line 639
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "giturl \u4e0b\u8f7d\u6210\u529f\uff1a "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 640
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$8;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 641
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$8;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance p2, Lcom/mbridge/msdk/advanced/b/a$8$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/advanced/b/a$8$1;-><init>(Lcom/mbridge/msdk/advanced/b/a$8;)V

    invoke-virtual {p1, p2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
