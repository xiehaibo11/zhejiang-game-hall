.class public final Lcom/mbridge/msdk/interstitial/a/a;
.super Ljava/lang/Object;
.source "IntersAdapter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/interstitial/a/a$b;,
        Lcom/mbridge/msdk/interstitial/a/a$a;
    }
.end annotation


# instance fields
.field private a:Landroid/content/Context;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:I

.field private e:Z

.field private f:I

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Lcom/mbridge/msdk/interstitial/c/a$a;

.field private k:Lcom/mbridge/msdk/c/d;

.field private l:Landroid/os/Handler;

.field private m:Lcom/mbridge/msdk/interstitial/a/a$b;

.field private n:Z

.field private o:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1

    .line 135
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 106
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->n:Z

    .line 110
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->o:Z

    .line 137
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    .line 138
    iput-object p2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    .line 139
    iput-object p3, p0, Lcom/mbridge/msdk/interstitial/a/a;->c:Ljava/lang/String;

    .line 140
    iput-object p4, p0, Lcom/mbridge/msdk/interstitial/a/a;->i:Ljava/lang/String;

    .line 141
    iput-boolean p5, p0, Lcom/mbridge/msdk/interstitial/a/a;->e:Z

    .line 143
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p1

    .line 144
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p3

    invoke-virtual {p3, p1, p2}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    if-nez p1, :cond_0

    const-string p1, "IntersAdapter"

    const-string p2, "\u83b7\u53d6\u9ed8\u8ba4\u7684unitsetting"

    .line 146
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 147
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/c/d;->f(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    .line 1154
    :cond_0
    new-instance p1, Lcom/mbridge/msdk/interstitial/a/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p0, p2}, Lcom/mbridge/msdk/interstitial/a/a$1;-><init>(Lcom/mbridge/msdk/interstitial/a/a;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;)Ljava/util/List;
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/util/List;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    const-string v0, "IntersAdapter"

    .line 688
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_a

    .line 690
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_a

    .line 692
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onload \u603b\u5171\u8fd4\u56de \u7684compaign\u6709\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 694
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/d;->q()I

    move-result v2

    const/4 v3, 0x0

    .line 697
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_9

    iget v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    if-ge v3, v4, :cond_9

    .line 700
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v4

    if-lt v4, v2, :cond_0

    goto/16 :goto_4

    .line 704
    :cond_0
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v5, 0x1

    if-eqz v4, :cond_1

    .line 705
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v6

    if-ne v6, v5, :cond_1

    .line 706
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_1

    const-string v4, "offertype=1 \u4f46\u662fvideourl\u4e3a\u7a7a"

    .line 707
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_1
    if-eqz v4, :cond_8

    .line 711
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v6

    if-eqz v6, :cond_8

    :cond_2
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v6

    const/16 v7, 0x63

    if-eq v6, v7, :cond_8

    .line 712
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 713
    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_3

    move v6, v5

    goto :goto_1

    :cond_3
    const/4 v6, 0x2

    :goto_1
    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setRtinsType(I)V

    .line 715
    :cond_4
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v6

    if-eq v6, v5, :cond_7

    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_5

    goto :goto_2

    .line 719
    :cond_5
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 720
    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 722
    :cond_6
    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->E:I

    invoke-static {v5, v4, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_3

    .line 716
    :cond_7
    :goto_2
    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_8
    :goto_3
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    .line 728
    :cond_9
    :goto_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onload \u8fd4\u56de\u6709\u4ee5\u4e0b\u6709\u6548\u7684compaign\uff1a"

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_5

    :catch_0
    move-exception p1

    .line 731
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_a
    :goto_5
    return-object v1
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 5

    if-eqz p1, :cond_6

    .line 1653
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_6

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-gtz v0, :cond_0

    goto/16 :goto_1

    .line 1657
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    .line 1659
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    const-string v2, "IntersAdapter"

    if-eqz p1, :cond_1

    .line 1663
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getSessionId()Ljava/lang/String;

    move-result-object p1

    .line 1963
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1964
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onload sessionId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1965
    sput-object p1, Lcom/mbridge/msdk/interstitial/c/a;->a:Ljava/lang/String;

    .line 2853
    :cond_1
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onload offset\u76f8\u52a0\u524d "

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, " mTnum:"

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2854
    iget p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    add-int/2addr p1, v3

    iput p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    .line 2855
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->i()I

    move-result p1

    .line 2856
    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    if-le v3, p1, :cond_2

    .line 2857
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onload \u91cd\u7f6eoffset\u4e3a0 :"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 2858
    iput p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    .line 2860
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onload \u7b97\u51fa \u4e0b\u6b21\u7684offset\u662f:"

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2862
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 2863
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    iget v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    invoke-static {p1, v3}, Lcom/mbridge/msdk/interstitial/c/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2866
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    if-eqz v0, :cond_5

    .line 1670
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_5

    const-string p1, "\u5728\u4e3b\u7ebf\u7a0b \u5f00\u59cb\u5904\u7406vba"

    .line 3565
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_4

    .line 3566
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    if-nez p1, :cond_5

    :cond_4
    const-string p1, "\u5904\u7406vba null retun"

    .line 3567
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1674
    :cond_5
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/util/List;)V

    .line 3745
    new-instance p1, Ljava/lang/Thread;

    new-instance v2, Lcom/mbridge/msdk/interstitial/a/a$3;

    invoke-direct {v2, p0, v1, v0}, Lcom/mbridge/msdk/interstitial/a/a$3;-><init>(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;Ljava/util/List;)V

    invoke-direct {p1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 3781
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    goto :goto_2

    :cond_6
    :goto_1
    const-string p1, "no server ads available"

    .line 1654
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;Ljava/util/List;)V
    .locals 1

    .line 4598
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 4599
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object p0

    .line 5125
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p2, :cond_0

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 5126
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 5127
    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/interstitial/b/a;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 5131
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 381
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 382
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 383
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x3

    .line 384
    iput p1, v0, Landroid/os/Message;->what:I

    .line 385
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/a/a;Z)Z
    .locals 0

    .line 57
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->n:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->h:Ljava/lang/String;

    return-object p0
.end method

.method private b(Ljava/util/List;)Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    const-string v0, "5"

    const-string v1, ""

    .line 792
    new-instance v2, Ljava/util/ArrayList;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(I)V

    .line 794
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 795
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_5

    const/4 v4, 0x0

    .line 798
    :try_start_0
    sget-object v5, Lcom/mbridge/msdk/foundation/same/b/c;->g:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v5

    .line 799
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 800
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_0

    .line 801
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v6

    :cond_0
    const-string v7, ".html"

    invoke-virtual {v6, v7}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 802
    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v5, v6}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 803
    new-instance v5, Ljava/io/FileOutputStream;

    invoke-direct {v5, v7}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 805
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 806
    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object v6

    .line 807
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    const-string v8, "<script>"

    .line 808
    invoke-virtual {v4, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "</script>"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 810
    :cond_1
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 812
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/io/FileOutputStream;->write([B)V

    .line 813
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->flush()V

    .line 814
    invoke-virtual {v7}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 815
    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v3, v1, v4, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 823
    :try_start_2
    invoke-virtual {v5}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catchall_0
    move-exception p1

    move-object v4, v5

    goto :goto_3

    :catch_0
    move-exception v4

    move-object v9, v5

    move-object v5, v4

    move-object v4, v9

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_3

    :catch_1
    move-exception v5

    .line 817
    :goto_1
    :try_start_3
    invoke-virtual {v5}, Ljava/lang/Exception;->printStackTrace()V

    .line 818
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setMraid(Ljava/lang/String;)V

    .line 819
    invoke-virtual {v5}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v3, v5, v6, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v4, :cond_2

    .line 823
    :try_start_4
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_2

    :catch_2
    move-exception v4

    .line 826
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    .line 830
    :cond_2
    :goto_2
    new-instance v4, Ljava/io/File;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 831
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-virtual {v4}, Ljava/io/File;->isFile()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-virtual {v4}, Ljava/io/File;->canRead()Z

    move-result v4

    if-nez v4, :cond_5

    :cond_3
    const-string v3, "mraid resource write fail"

    .line 832
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    goto/16 :goto_0

    :goto_3
    if-eqz v4, :cond_4

    .line 823
    :try_start_5
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_4

    :catch_3
    move-exception v0

    .line 826
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 828
    :cond_4
    :goto_4
    throw p1

    .line 837
    :cond_5
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_0

    :cond_6
    return-object v2
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/a/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/a/a;Ljava/util/List;)V
    .locals 9

    const-string v0, "IntersAdapter"

    const-string v1, "onload \u5f00\u59cb \u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 5511
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 5512
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    if-eqz v1, :cond_4

    if-eqz p1, :cond_4

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_2

    .line 5517
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    .line 5519
    :goto_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v3, v5, :cond_3

    .line 5520
    invoke-interface {p1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v5, :cond_2

    .line 5523
    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 5525
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v6

    if-eqz v6, :cond_2

    .line 5526
    new-instance v4, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v6, v5}, Lcom/mbridge/msdk/foundation/entity/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 5527
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object v5

    invoke-interface {v5, v4}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const/4 v4, 0x1

    goto :goto_1

    :cond_1
    if-eqz v1, :cond_2

    .line 5534
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_2

    .line 5535
    new-instance v6, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {v6}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 5536
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 5537
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v7

    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 5538
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result v5

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    .line 5539
    invoke-virtual {v6, v2}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    .line 5540
    invoke-virtual {v6, v2}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 5541
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    invoke-virtual {v6, v7, v8}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 5542
    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    :cond_2
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    if-eqz v4, :cond_5

    const-string p0, "\u66f4\u65b0\u5b89\u88c5\u5217\u8868"

    .line 5549
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 5550
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->h()V

    goto :goto_3

    :cond_4
    :goto_2
    const-string p0, "onload \u5217\u8868\u4e3a\u7a7a \u4e0d\u505a\u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 5513
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_3
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 395
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 396
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 397
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x4

    .line 398
    iput p1, v0, Landroid/os/Message;->what:I

    .line 399
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 402
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/a/a;Z)Z
    .locals 0

    .line 57
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->o:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/c/a$a;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->j:Lcom/mbridge/msdk/interstitial/c/a$a;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->g:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/interstitial/a/a;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 57
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->h:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/interstitial/a/a;)Z
    .locals 0

    .line 57
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->e:Z

    return p0
.end method

.method private e()Lcom/mbridge/msdk/foundation/same/net/g/d;
    .locals 13

    .line 414
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 415
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 417
    iget-boolean v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->e:Z

    if-eqz v2, :cond_0

    const/4 v2, 0x3

    goto :goto_0

    :cond_0
    const/4 v2, 0x2

    :goto_0
    const/4 v3, 0x1

    .line 423
    iput v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    .line 424
    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/d;->q()I

    move-result v4

    if-lez v4, :cond_1

    .line 425
    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/d;->q()I

    move-result v4

    iput v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    .line 429
    :cond_1
    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/d;->p()I

    move-result v4

    if-lez v4, :cond_2

    .line 430
    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/c/d;->p()I

    move-result v4

    goto :goto_1

    :cond_2
    move v4, v3

    .line 437
    :goto_1
    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/a/a;->h:Ljava/lang/String;

    .line 438
    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/a/a;->g:Ljava/lang/String;

    .line 439
    iget-object v7, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    const-string v8, "interstitial"

    invoke-static {v7, v8}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 440
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->m()Ljava/lang/String;

    move-result-object v8

    .line 442
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->j()I

    move-result v9

    iput v9, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    .line 444
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->l()Ljava/lang/String;

    move-result-object v9

    const/16 v10, 0x117

    .line 449
    iget-object v11, p0, Lcom/mbridge/msdk/interstitial/a/a;->i:Ljava/lang/String;

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-eqz v11, :cond_3

    const-string v11, "0"

    .line 450
    iput-object v11, p0, Lcom/mbridge/msdk/interstitial/a/a;->i:Ljava/lang/String;

    .line 453
    :cond_3
    new-instance v11, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v11}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    const-string v12, "app_id"

    .line 455
    invoke-static {v11, v12, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 456
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    const-string v12, "unit_id"

    invoke-static {v11, v12, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 458
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->c:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 459
    sget-object v0, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    iget-object v12, p0, Lcom/mbridge/msdk/interstitial/a/a;->c:Ljava/lang/String;

    invoke-static {v11, v0, v12}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    const-string v0, "sign"

    .line 462
    invoke-static {v11, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 463
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->i:Ljava/lang/String;

    const-string v1, "category"

    invoke-static {v11, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 465
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "req_type"

    invoke-static {v11, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 466
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_num"

    invoke-static {v11, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 467
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->f:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "tnum"

    invoke-static {v11, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 468
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "1"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "only_impression"

    invoke-static {v11, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ping_mode"

    .line 469
    invoke-static {v11, v0, v2}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ttc_ids"

    .line 470
    invoke-static {v11, v0, v6}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-static {v11, v0, v7}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 472
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v11, v0, v5}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "install_ids"

    .line 473
    invoke-static {v11, v0, v8}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 474
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_source_id"

    invoke-static {v11, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 475
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->a:Ljava/lang/String;

    invoke-static {v11, v0, v9}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "ad_type"

    invoke-static {v11, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    .line 477
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->d:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "offset"

    invoke-static {v11, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/f/b;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Ljava/lang/String;Ljava/lang/String;)V

    return-object v11
.end method

.method static synthetic e(Lcom/mbridge/msdk/interstitial/a/a;)V
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->k()V

    return-void
.end method

.method private f()Ljava/lang/String;
    .locals 4

    const-string v0, ""

    .line 493
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 494
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_0

    .line 495
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    const-string v1, "IntersAdapter"

    .line 497
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "get excludes:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 499
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method static synthetic f(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/content/Context;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    return-object p0
.end method

.method private g()V
    .locals 4

    .line 608
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 609
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 611
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 613
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    .line 614
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-virtual {v2, v0, v1, v3}, Lcom/mbridge/msdk/interstitial/b/a;->a(JLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 617
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/interstitial/a/a;)Ljava/lang/String;
    .locals 0

    .line 57
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->f()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private h()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 629
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 630
    invoke-static {}, Lcom/mbridge/msdk/interstitial/b/a;->a()Lcom/mbridge/msdk/interstitial/b/a;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/interstitial/b/a;->a(Ljava/lang/String;I)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 633
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private i()I
    .locals 3

    const/4 v0, 0x1

    .line 878
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/interstitial/c/a;->d:Ljava/util/Map;

    .line 879
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    if-eqz v1, :cond_0

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 880
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    if-gtz v1, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    goto :goto_1

    :catch_0
    move-exception v1

    .line 886
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return v0
.end method

.method static synthetic i(Lcom/mbridge/msdk/interstitial/a/a;)Z
    .locals 0

    .line 57
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->o:Z

    return p0
.end method

.method private j()I
    .locals 4

    const/4 v0, 0x0

    .line 906
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 908
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v0

    .line 911
    :goto_0
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->i()I

    move-result v2

    if-le v1, v2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    const-string v1, "IntersAdapter"

    .line 918
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getCurrentOffset:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 920
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return v0
.end method

.method static synthetic j(Lcom/mbridge/msdk/interstitial/a/a;)Z
    .locals 0

    .line 57
    iget-boolean p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->n:Z

    return p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/interstitial/a/a;)Lcom/mbridge/msdk/interstitial/a/a$b;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->m:Lcom/mbridge/msdk/interstitial/a/a$b;

    return-object p0
.end method

.method private k()V
    .locals 2

    .line 930
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 931
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 934
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic l(Lcom/mbridge/msdk/interstitial/a/a;)Landroid/os/Handler;
    .locals 0

    .line 57
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    return-object p0
.end method

.method private l()Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 947
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/interstitial/c/a;->a:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 948
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->a:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 951
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private m()Ljava/lang/String;
    .locals 5

    const-string v0, ""

    .line 979
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 980
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->i()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 981
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 982
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    .line 983
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    goto :goto_0

    .line 986
    :cond_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-lez v2, :cond_1

    .line 987
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 990
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-object v0
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 7

    const-string v0, "IntersAdapter"

    const/4 v1, 0x0

    .line 228
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    .line 232
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->g()V

    .line 234
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->h()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 235
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-gtz v3, :cond_1

    goto :goto_1

    :cond_1
    const/4 v3, 0x0

    .line 239
    :goto_0
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_5

    .line 240
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 241
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "html url:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v0, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v4, :cond_3

    .line 244
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 245
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 247
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "adapter htmlurl:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getHtmlUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " id:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v4

    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    :goto_1
    const-string v2, "adapter allCamp is null"

    .line 236
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception v2

    .line 252
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    const-string v2, "==getIntersAvaCampaign \u83b7\u53d6campaign \u51fa\u9519"

    .line 253
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return-object v1
.end method

.method public final a(Lcom/mbridge/msdk/interstitial/c/a$a;)V
    .locals 0

    .line 643
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/a/a;->j:Lcom/mbridge/msdk/interstitial/c/a$a;

    return-void
.end method

.method public final b()V
    .locals 4

    .line 264
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "context is null"

    .line 265
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 268
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "unitid is null"

    .line 269
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 272
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_2

    const-string v0, "unitSetting is null please call load"

    .line 273
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 277
    :cond_2
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->p()I

    move-result v0

    const-string v1, "IntersAdapter"

    if-gtz v0, :cond_3

    .line 279
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "aqn\u4e3a-1\u548c0 \u4e0d\u8bf7\u6c42 \u76f4\u63a5\u8fd4\u56de\u5931\u8d25 apiRepNum\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "controller don\'t request ad"

    .line 280
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    :cond_3
    const-string v0, "load \u5f00\u59cb\u6e05\u9664\u8fc7\u671f\u6570\u636e"

    .line 284
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->g()V

    .line 289
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->h()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 290
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_5

    .line 292
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "load \u672c\u5730\u5df2\u6709\u7f13\u5b58\u6570\u91cf\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 294
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    .line 296
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_4
    const-string v0, ""

    .line 298
    :goto_0
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->a(Ljava/lang/String;)V

    return-void

    .line 1206
    :cond_5
    new-instance v0, Lcom/mbridge/msdk/interstitial/a/a$a;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/a/a$a;-><init>(Lcom/mbridge/msdk/interstitial/a/a;)V

    .line 1207
    new-instance v2, Ljava/lang/Thread;

    invoke-direct {v2, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v2}, Ljava/lang/Thread;->start()V

    .line 1209
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    if-eqz v0, :cond_6

    .line 1210
    new-instance v0, Lcom/mbridge/msdk/interstitial/a/a$b;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/a/a$b;-><init>(Lcom/mbridge/msdk/interstitial/a/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->m:Lcom/mbridge/msdk/interstitial/a/a$b;

    .line 1211
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->l:Landroid/os/Handler;

    const-wide/32 v2, 0x15f90

    invoke-virtual {v1, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    :cond_6
    const-string v0, "handler \u4e3a\u7a7a \u76f4\u63a5load"

    .line 1214
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1215
    invoke-virtual {p0}, Lcom/mbridge/msdk/interstitial/a/a;->c()V

    :goto_1
    return-void
.end method

.method public final c()V
    .locals 5

    const-string v0, "IntersAdapter"

    .line 312
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    if-nez v1, :cond_0

    const-string v0, "context is null"

    .line 313
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 316
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v0, "unitid is null"

    .line 317
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 320
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/a/a;->k:Lcom/mbridge/msdk/c/d;

    if-nez v1, :cond_2

    const-string v0, "unitSetting is null please call load"

    .line 321
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    :cond_2
    const-string v1, "load \u5f00\u59cb\u51c6\u5907\u8bf7\u6c42\u53c2\u6570"

    .line 325
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 327
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->e()Lcom/mbridge/msdk/foundation/same/net/g/d;

    move-result-object v1

    if-nez v1, :cond_3

    const-string v1, "load \u8bf7\u6c42\u53c2\u6570\u4e3a\u7a7a load\u5931\u8d25"

    .line 329
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "request parameter is null"

    .line 330
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    return-void

    .line 334
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 335
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "j"

    .line 336
    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 338
    :cond_4
    new-instance v0, Lcom/mbridge/msdk/interstitial/d/a;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/a/a;->a:Landroid/content/Context;

    invoke-direct {v0, v2}, Lcom/mbridge/msdk/interstitial/d/a;-><init>(Landroid/content/Context;)V

    .line 340
    new-instance v2, Lcom/mbridge/msdk/interstitial/a/a$2;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/interstitial/a/a$2;-><init>(Lcom/mbridge/msdk/interstitial/a/a;)V

    .line 365
    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/interstitial/d/b;->setUnitId(Ljava/lang/String;)V

    .line 366
    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/a/a;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/interstitial/d/b;->setPlacementId(Ljava/lang/String;)V

    const/16 v3, 0x117

    .line 367
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/interstitial/d/b;->setAdType(I)V

    const/4 v3, 0x1

    const-string v4, ""

    .line 368
    invoke-virtual {v0, v3, v1, v2, v4}, Lcom/mbridge/msdk/interstitial/d/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 370
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "can\'t show because unknow error"

    .line 371
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/a/a;->b(Ljava/lang/String;)V

    .line 372
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/a/a;->k()V

    :goto_0
    return-void
.end method

.method public final d()Z
    .locals 1

    .line 1091
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/a/a;->e:Z

    return v0
.end method
