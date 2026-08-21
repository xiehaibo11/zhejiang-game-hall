.class final Lcom/mbridge/msdk/interstitial/a/a$3;
.super Ljava/lang/Object;
.source "IntersAdapter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/interstitial/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/List;

.field final synthetic b:Ljava/util/List;

.field final synthetic c:Lcom/mbridge/msdk/interstitial/a/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;Ljava/util/List;)V
    .locals 0

    .line 745
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    iput-object p2, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    iput-object p3, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->b:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    const-string v0, "IntersAdapter"

    const-string v1, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5f00\u59cb"

    .line 749
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 752
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 753
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload load\u6210\u529f size:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 754
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload \u628a\u5e7f\u544a\u5b58\u5728\u672c\u5730 size:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 756
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/a/a;->f(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    invoke-static {v3, v4}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;)Ljava/util/List;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;Ljava/util/List;)V

    .line 759
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->a:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 761
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, ""

    .line 763
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v2, v1}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)V

    goto :goto_1

    :cond_1
    const-string v1, "onload load\u5931\u8d25 size:0"

    .line 766
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 767
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    const-string v2, "no ads available"

    invoke-static {v1, v2}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)V

    .line 771
    :goto_1
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/a/a;->g(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    .line 772
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/l;->b()V

    .line 775
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->b:Ljava/util/List;

    if-eqz v1, :cond_2

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 776
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->c:Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a$3;->b:Ljava/util/List;

    invoke-static {v1, v2}, Lcom/mbridge/msdk/interstitial/a/a;->b(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;)V

    :cond_2
    const-string v1, "\u5728\u5b50\u7ebf\u7a0b\u5904\u7406\u4e1a\u52a1\u903b\u8f91 \u5b8c\u6210"

    .line 779
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
