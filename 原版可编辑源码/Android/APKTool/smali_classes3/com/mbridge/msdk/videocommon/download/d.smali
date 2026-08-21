.class public final Lcom/mbridge/msdk/videocommon/download/d;
.super Ljava/lang/Object;
.source "UnitCacheCtroller.java"


# instance fields
.field a:Lcom/mbridge/msdk/c/d;

.field b:Lcom/mbridge/msdk/c/d;

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private d:Z

.field private e:Lcom/mbridge/msdk/videocommon/listener/a;

.field private f:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/listener/a;",
            ">;"
        }
    .end annotation
.end field

.field private g:Lcom/mbridge/msdk/videocommon/download/c;

.field private h:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;>;"
        }
    .end annotation
.end field

.field private i:Landroid/content/Context;

.field private j:Ljava/util/concurrent/ExecutorService;

.field private k:J

.field private l:Ljava/lang/String;

.field private m:Lcom/mbridge/msdk/videocommon/d/c;

.field private n:I

.field private o:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V
    .locals 2

    .line 107
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    const/4 p1, 0x1

    .line 42
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    .line 46
    new-instance v0, Lcom/mbridge/msdk/videocommon/download/d$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/videocommon/download/d$1;-><init>(Lcom/mbridge/msdk/videocommon/download/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->g:Lcom/mbridge/msdk/videocommon/download/c;

    .line 63
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    const-wide/16 v0, 0xe10

    .line 69
    iput-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 78
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    .line 89
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/4 p1, 0x0

    .line 90
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    .line 91
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    .line 108
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->i:Landroid/content/Context;

    .line 110
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 111
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 113
    :cond_0
    iput-object p3, p0, Lcom/mbridge/msdk/videocommon/download/d;->j:Ljava/util/concurrent/ExecutorService;

    .line 114
    iput-object p4, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    .line 115
    iput p5, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    .line 116
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/util/List;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/util/concurrent/ExecutorService;",
            "Ljava/lang/String;",
            "I)V"
        }
    .end annotation

    .line 95
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    const/4 p1, 0x1

    .line 42
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    .line 46
    new-instance v0, Lcom/mbridge/msdk/videocommon/download/d$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/videocommon/download/d$1;-><init>(Lcom/mbridge/msdk/videocommon/download/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->g:Lcom/mbridge/msdk/videocommon/download/c;

    .line 63
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    const-wide/16 v0, 0xe10

    .line 69
    iput-wide v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 78
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    .line 89
    iput p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/4 p1, 0x0

    .line 90
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    .line 91
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    .line 96
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->i:Landroid/content/Context;

    .line 98
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    .line 99
    invoke-interface {p1, p2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 101
    :cond_0
    iput-object p3, p0, Lcom/mbridge/msdk/videocommon/download/d;->j:Ljava/util/concurrent/ExecutorService;

    .line 102
    iput-object p4, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    .line 103
    iput p5, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    .line 104
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/util/List;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/d;)Lcom/mbridge/msdk/videocommon/listener/a;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/d;->e:Lcom/mbridge/msdk/videocommon/listener/a;

    return-object p0
.end method

.method private a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z
    .locals 3

    .line 918
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "check template "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "UnitCacheCtroller"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 920
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p1

    const/4 v1, 0x1

    if-eqz p1, :cond_0

    return v1

    .line 924
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    if-lez p1, :cond_1

    .line 925
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "Is not check template download status"

    .line 927
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 933
    :cond_1
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLoadTimeoutState()I

    move-result p1

    if-nez p1, :cond_2

    .line 934
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "check template \u4e0b\u8f7d\u60c5\u51b5\uff1a"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 936
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_2

    const/4 p1, 0x0

    return p1

    :cond_2
    return v1
.end method

.method public static a(Lcom/mbridge/msdk/videocommon/download/a;I)Z
    .locals 8

    .line 761
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->h()J

    move-result-wide v0

    .line 762
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->e()J

    move-result-wide v2

    .line 763
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->a()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_0

    const-string p0, "UnitCacheCtroller"

    const-string p1, "checkVideoDownload video done return true"

    .line 764
    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v5

    :cond_0
    const/4 v4, 0x0

    if-nez p1, :cond_1

    .line 769
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_4

    return v5

    :cond_1
    const-wide/16 v6, 0x0

    cmp-long v6, v2, v6

    if-lez v6, :cond_4

    const-wide/16 v6, 0x64

    mul-long/2addr v0, v6

    int-to-long v6, p1

    mul-long/2addr v2, v6

    cmp-long v0, v0, v2

    if-ltz v0, :cond_4

    const/16 v0, 0x64

    if-ne p1, v0, :cond_3

    .line 775
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_2

    return v5

    .line 778
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    return v4

    :cond_3
    return v5

    :cond_4
    return v4
.end method

.method private static a(Lcom/mbridge/msdk/videocommon/download/a;IZ)Z
    .locals 9

    .line 789
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->h()J

    move-result-wide v0

    .line 790
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->e()J

    move-result-wide v2

    .line 791
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->a()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const-string v5, "UnitCacheCtroller"

    const/4 v6, 0x1

    if-eqz v4, :cond_0

    const-string p0, "checkVideoDownload video done return true"

    .line 792
    invoke-static {v5, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v6

    .line 796
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v4

    if-eqz v4, :cond_5

    .line 798
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v7

    if-eqz v7, :cond_1

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v7

    invoke-virtual {v7}, Ljava/util/ArrayList;->size()I

    move-result v7

    if-lez v7, :cond_1

    .line 799
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v7

    const/4 v8, 0x0

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_1

    const-string p0, "Is not check video download status"

    .line 800
    invoke-static {v5, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v6

    .line 805
    :cond_1
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIsTimeoutCheckVideoStatus()I

    move-result v5

    if-ne v5, v6, :cond_2

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCheckType()I

    move-result v5

    if-ne v5, v6, :cond_2

    return v6

    :cond_2
    if-eqz p2, :cond_5

    .line 810
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCheckType()I

    move-result p2

    if-ne p2, v6, :cond_5

    if-nez p1, :cond_3

    return v6

    :cond_3
    const-wide/16 v7, 0x0

    cmp-long p2, v2, v7

    if-nez p2, :cond_4

    cmp-long p2, v0, v7

    if-eqz p2, :cond_5

    .line 816
    :cond_4
    div-int/lit8 p2, p1, 0x64

    int-to-long v7, p2

    mul-long/2addr v7, v2

    cmp-long p2, v0, v7

    if-ltz p2, :cond_5

    .line 818
    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIsTimeoutCheckVideoStatus(I)V

    return v6

    .line 826
    :cond_5
    invoke-static {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/videocommon/download/d;Z)Z
    .locals 0

    .line 35
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    return p1
.end method

.method private a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 4

    const-string v0, "UnitCacheCtroller"

    .line 837
    :try_start_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 838
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v1

    const/4 v3, 0x2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 840
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Is not check endCard download status : "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 844
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 845
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->j(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    return v2

    .line 850
    :cond_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string p1, "checkEndcardDownload endcardUrl is null return true"

    .line 851
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 854
    :cond_2
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-eqz p1, :cond_3

    const-string p1, "checkEndcardDownload endcardUrl done return true"

    .line 855
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    move-exception p1

    .line 860
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    const-string p1, "checkEndcardDownload endcardUrl return false"

    .line 862
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method private a(Ljava/util/concurrent/CopyOnWriteArrayList;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;>;)Z"
        }
    .end annotation

    .line 989
    :try_start_0
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;

    if-nez v0, :cond_1

    goto :goto_0

    .line 993
    :cond_1
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 994
    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 995
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 996
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/download/a;

    .line 997
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x1

    if-ne v1, v2, :cond_2

    return v2

    :catchall_0
    move-exception p1

    .line 1004
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_3

    .line 1005
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    const/4 p1, 0x0

    return p1
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 3

    const/4 v0, -0x1

    if-eqz p1, :cond_1

    .line 547
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result v1

    const-string v2, "UnitCacheCtroller"

    if-eq v1, v0, :cond_0

    .line 548
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result v0

    .line 549
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ready_rate(campaign): "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 551
    :cond_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    .line 552
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ready_rate(reward_unit_setting): "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/videocommon/download/d;)Ljava/util/concurrent/ConcurrentHashMap;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    return-object p0
.end method

.method private b(Ljava/util/List;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_15

    .line 145
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_7

    .line 149
    :cond_0
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/d;->e()V

    .line 150
    invoke-direct {p0}, Lcom/mbridge/msdk/videocommon/download/d;->d()V

    .line 152
    iget v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v1, 0x5e

    const/16 v2, 0x11f

    const/4 v3, 0x1

    if-eq v0, v3, :cond_9

    if-eq v0, v2, :cond_5

    const/16 v4, 0x12a

    if-eq v0, v4, :cond_3

    if-eq v0, v1, :cond_5

    const/16 v4, 0x5f

    if-eq v0, v4, :cond_1

    goto/16 :goto_0

    .line 186
    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 187
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    .line 188
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    if-nez v0, :cond_2

    .line 190
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->e(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    :cond_2
    if-eqz v0, :cond_b

    .line 193
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 194
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->k()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    const-string p1, "UnitCacheCtroller"

    const-string v0, "make sure your had put feeds jar into your project"

    .line 198
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 172
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/c/b;->f(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_4

    .line 174
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/c/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    .line 176
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_b

    .line 177
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 178
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->k()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    goto/16 :goto_0

    :cond_5
    :try_start_1
    const-string v0, "com.mbridge.msdk.videocommon.d.a"

    .line 206
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 207
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v0

    if-nez v0, :cond_6

    .line 209
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/b;->c()Lcom/mbridge/msdk/videocommon/d/a;

    :cond_6
    if-eqz v0, :cond_7

    .line 212
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/a;->f()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 214
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    .line 215
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    .line 217
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_b

    .line 218
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->w()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    const-string p1, "UnitCacheCtroller"

    const-string v0, "make sure your had put reward jar into your project"

    .line 221
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 156
    :cond_9
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_b

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_a

    .line 159
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    .line 161
    :cond_a
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_b

    .line 162
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->i()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    .line 163
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->k()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :cond_b
    :goto_0
    const/4 v0, 0x0

    move v4, v0

    .line 228
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_13

    .line 229
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v5, :cond_12

    .line 233
    iget v6, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-eq v6, v1, :cond_d

    if-ne v6, v2, :cond_c

    goto :goto_2

    .line 236
    :cond_c
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    goto :goto_3

    .line 234
    :cond_d
    :goto_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    .line 238
    :goto_3
    invoke-direct {p0, v5}, Lcom/mbridge/msdk/videocommon/download/d;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v7

    if-nez v7, :cond_e

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_e

    goto :goto_6

    .line 241
    :cond_e
    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v7, :cond_12

    .line 242
    monitor-enter v7

    move v8, v0

    .line 246
    :goto_4
    :try_start_3
    iget-object v9, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v9

    if-ge v8, v9, :cond_10

    .line 247
    iget-object v9, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v9, v8}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/util/Map;

    if-eqz v9, :cond_f

    .line 249
    invoke-interface {v9, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_f

    .line 252
    invoke-interface {v9, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/mbridge/msdk/videocommon/download/a;

    .line 253
    invoke-virtual {v10, v5}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 254
    iget v11, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    invoke-virtual {v10, v11}, Lcom/mbridge/msdk/videocommon/download/a;->a(I)V

    .line 255
    invoke-virtual {v10, v0}, Lcom/mbridge/msdk/videocommon/download/a;->a(Z)V

    .line 256
    invoke-interface {v9, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 257
    invoke-interface {v9, v6, v10}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 258
    iget-object v10, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v10, v8, v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    move v8, v3

    goto :goto_5

    :cond_f
    add-int/lit8 v8, v8, 0x1

    goto :goto_4

    :cond_10
    move v8, v0

    :goto_5
    if-nez v8, :cond_11

    .line 265
    new-instance v8, Lcom/mbridge/msdk/videocommon/download/a;

    iget-object v9, p0, Lcom/mbridge/msdk/videocommon/download/d;->i:Landroid/content/Context;

    iget-object v10, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    iget v11, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    invoke-direct {v8, v9, v5, v10, v11}, Lcom/mbridge/msdk/videocommon/download/a;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;I)V

    .line 266
    iget v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    invoke-virtual {v8, v5}, Lcom/mbridge/msdk/videocommon/download/a;->a(I)V

    .line 267
    iget v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    invoke-virtual {v8, v5}, Lcom/mbridge/msdk/videocommon/download/a;->d(I)V

    .line 268
    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    .line 269
    invoke-interface {v5, v6, v8}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 270
    iget-object v6, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v6, v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 275
    :catchall_0
    :cond_11
    :try_start_4
    monitor-exit v7

    goto :goto_6

    :catchall_1
    move-exception p1

    monitor-exit v7
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    throw p1

    :cond_12
    :goto_6
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_1

    .line 279
    :cond_13
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    if-eqz p1, :cond_14

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_14

    .line 280
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_14
    return-void

    :catch_2
    const-string p1, "UnitCacheCtroller"

    const-string v0, "make sure your had put feeds jar into your project"

    .line 167
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_15
    :goto_7
    return-void
.end method

.method private b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 3

    .line 874
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    const-string v1, "UnitCacheCtroller"

    const/4 v2, 0x1

    if-nez v0, :cond_5

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    .line 879
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLoadTimeoutState()I

    move-result v0

    if-ne v0, v2, :cond_1

    .line 880
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/videocommon/download/d;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_1

    return v2

    .line 885
    :cond_1
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 886
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRsIgnoreCheckRule()Ljava/util/ArrayList;

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 888
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Is not check endCard download status : "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 893
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_3

    .line 894
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "endcard zip \u4e0b\u8f7d\u5b8c\u6210 return true endcardUrl:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 897
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 898
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "endcard url \u6e90\u7801 \u4e0b\u8f7d\u5b8c\u6210 return true endcardUrl:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 901
    :cond_4
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "checkEndcardZipOrSourceDownLoad endcardUrl return false endcardUrl:"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_5
    :goto_0
    const-string p1, "Campaign is Mraid, do not need download endcardurl or Campaign load timeout"

    .line 875
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 1

    if-eqz p1, :cond_0

    .line 1304
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    .line 1308
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 1309
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 1

    const/16 p1, 0x64

    .line 1318
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_0

    .line 1319
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->f()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return p1
.end method

.method private d()V
    .locals 14

    .line 286
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "u_n_c_e_d"

    invoke-virtual {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 289
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-nez v0, :cond_1

    return-void

    .line 293
    :cond_1
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 294
    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const/4 v4, 0x0

    .line 296
    :goto_0
    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v5

    if-ge v4, v5, :cond_6

    .line 298
    iget-object v5, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v5, v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Map;

    .line 300
    invoke-interface {v5}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    .line 301
    :cond_2
    :goto_1
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_5

    .line 303
    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/Map$Entry;

    .line 304
    invoke-interface {v7}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v7, :cond_3

    goto :goto_1

    .line 308
    :cond_3
    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->c()J

    move-result-wide v8

    sub-long v8, v2, v8

    .line 309
    iget-wide v10, p0, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    const-wide/16 v12, 0x3e8

    mul-long/2addr v10, v12

    cmp-long v8, v8, v10

    if-lez v8, :cond_4

    .line 310
    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v8

    if-ne v8, v1, :cond_4

    const-string v8, "download timeout"

    .line 311
    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/videocommon/download/a;->b(Ljava/lang/String;)V

    .line 312
    iget v8, p0, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/videocommon/download/a;->a(I)V

    .line 313
    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    .line 314
    iget-object v8, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v8, v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, -0x1

    .line 318
    :cond_4
    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v8

    if-eq v8, v1, :cond_2

    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v8

    const/4 v9, 0x5

    if-eq v8, v9, :cond_2

    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v8

    if-eqz v8, :cond_2

    .line 319
    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    .line 320
    iget-object v7, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v7, v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, -0x1

    goto :goto_1

    :cond_5
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 325
    :cond_6
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception v0

    .line 327
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_2
    return-void
.end method

.method private e(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I
    .locals 3

    .line 1349
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v1, 0x12a

    if-ne v0, v1, :cond_1

    .line 1350
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    if-nez p1, :cond_0

    .line 1351
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    .line 1353
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->f()I

    move-result p1

    return p1

    .line 1354
    :cond_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 v0, 0x2a

    if-ne p1, v0, :cond_2

    const/4 p1, 0x0

    .line 1355
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result p1

    return p1

    .line 1357
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez p1, :cond_3

    .line 1358
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    .line 1360
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->r()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 1363
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "UnitCacheCtroller"

    invoke-static {v1, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/16 p1, 0x64

    return p1
.end method

.method private e()V
    .locals 6

    .line 333
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_4

    .line 335
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    .line 336
    :goto_0
    :try_start_1
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_3

    .line 337
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    .line 338
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 339
    :cond_0
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 340
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 341
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v4, :cond_0

    .line 342
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v5

    if-nez v5, :cond_1

    goto :goto_1

    .line 345
    :cond_1
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v5

    if-eqz v5, :cond_0

    .line 346
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    .line 347
    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, -0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 353
    :cond_3
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    const-string v0, "UnitCacheCtroller"

    const-string v1, "cleanDisplayTask ERROR"

    .line 355
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_2
    return-void
.end method


# virtual methods
.method public final a(IZ)Lcom/mbridge/msdk/videocommon/download/a;
    .locals 23

    move-object/from16 v1, p0

    move/from16 v0, p1

    move/from16 v2, p2

    .line 559
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "isReady unitID "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " ad_type "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "UnitCacheCtroller"

    invoke-static {v4, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 560
    iget-object v3, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v4, 0x0

    if-eqz v3, :cond_28

    .line 561
    monitor-enter v3

    .line 564
    :try_start_0
    iget v5, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v6, 0x11f

    const/16 v7, 0x5e

    const/4 v8, 0x1

    if-eq v5, v7, :cond_1

    iget v5, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v5, v6, :cond_0

    goto :goto_0

    .line 578
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v5

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v5, v9, v8}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;I)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v5, :cond_5

    .line 580
    :try_start_1
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v4

    .line 565
    :cond_1
    :goto_0
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v5

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v5, v9, v8, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZ)Ljava/util/List;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 566
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v9

    if-nez v9, :cond_4

    :cond_2
    if-eq v0, v7, :cond_3

    if-ne v0, v6, :cond_4

    .line 568
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v5

    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    const-string v10, ""

    .line 6389
    invoke-virtual {v5, v9, v8, v2, v10}, Lcom/mbridge/msdk/videocommon/a/a;->c(Ljava/lang/String;IZLjava/lang/String;)Ljava/util/List;

    move-result-object v5

    :cond_4
    if-eqz v5, :cond_26

    const-string v9, "UnitCacheCtroller"

    .line 572
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "UnitCache isReady ===== campaignList = "

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v11

    invoke-virtual {v10, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 584
    :cond_5
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    const/4 v12, 0x0

    .line 585
    :goto_1
    iget-object v13, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v13}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v13

    if-ge v12, v13, :cond_27

    .line 586
    iget-object v13, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v13, v12}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/util/Map;

    .line 587
    invoke-interface {v13}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v14

    invoke-interface {v14}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v14

    .line 588
    :goto_2
    invoke-interface {v14}, Ljava/util/Iterator;->hasNext()Z

    move-result v15

    if-eqz v15, :cond_25

    .line 589
    invoke-interface {v14}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Ljava/util/Map$Entry;

    .line 590
    invoke-interface {v15}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v15, :cond_23

    .line 591
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v16

    if-nez v16, :cond_6

    goto/16 :goto_8

    .line 596
    :cond_6
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v8

    .line 600
    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v17

    const/4 v4, 0x0

    :goto_3
    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->hasNext()Z

    move-result v18

    if-eqz v18, :cond_8

    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v18

    check-cast v18, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 601
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v11

    invoke-virtual/range {v18 .. v18}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v11, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v4, 0x1

    :cond_7
    const/16 v6, 0x11f

    goto :goto_3

    :cond_8
    if-nez v4, :cond_9

    const-string v6, "UnitCacheCtroller"

    .line 607
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "UnitCache isReady ==== Campaign isAvailable = "

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v6, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    const/4 v2, 0x1

    :goto_5
    const/16 v8, 0x11f

    goto/16 :goto_9

    :cond_9
    if-eqz v2, :cond_a

    .line 611
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v4

    if-eqz v4, :cond_b

    :cond_a
    if-nez v2, :cond_c

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v4

    if-eqz v4, :cond_c

    :cond_b
    const-string v4, "UnitCacheCtroller"

    .line 612
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "UnitCache isReady ==== isBidCampaign = "

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v11, " campaign.isBidCampaign() = "

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v8

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v4, v6}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 615
    :cond_c
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    .line 616
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v6

    const-string v11, ""

    if-eqz v8, :cond_d

    .line 618
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v17

    if-eqz v17, :cond_d

    .line 619
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v11

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v11

    .line 621
    :cond_d
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    .line 623
    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-eq v2, v7, :cond_e

    const/16 v2, 0x11f

    if-ne v0, v2, :cond_12

    .line 624
    :cond_e
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_f

    const-string v2, "cmpt=1"

    invoke-virtual {v11, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_f

    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    invoke-direct {v1, v2, v8, v11}, Lcom/mbridge/msdk/videocommon/download/d;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_f

    const-string v2, "UnitCacheCtroller"

    const-string v4, "UnitCache isReady ====  templateZipDownload check false continue"

    .line 625
    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 630
    :cond_f
    invoke-direct {v1, v4, v8}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v2

    if-eqz v2, :cond_12

    .line 631
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v2

    if-eqz v2, :cond_10

    .line 632
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    const-string v2, "UnitCacheCtroller"

    const-string v4, "isready endcard\u4e0b\u8f7d\u5b8c \u4f46\u662foffer\u5c55\u793a\u8fc7 continue"

    .line 633
    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_4

    .line 637
    :cond_10
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_11

    const-string v0, "UnitCacheCtroller"

    const-string v2, "endcard\u4e3a\u57fa\u51c6 endcard\u548c\u56fe\u7247\u4e0b\u8f7d\u5b8c\u6210 videourl\u4e3a\u7a7a\u4e0d\u7528\u4e0b\u8f7d return task"

    .line 639
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 640
    :try_start_3
    monitor-exit v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    return-object v15

    .line 644
    :cond_11
    :try_start_4
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v2

    invoke-static {v15, v2}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v2

    if-eqz v2, :cond_12

    const-string v0, "UnitCacheCtroller"

    const-string v2, "endcard\u4e3a\u57fa\u51c6 endcard \u56fe\u7247 \u548c videourl \u4e0b\u8f7d\u5b8c\u6210 return task"

    .line 645
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 646
    :try_start_5
    monitor-exit v3
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    return-object v15

    .line 653
    :cond_12
    :try_start_6
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    .line 654
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v6

    const-string v11, "UnitCacheCtroller"

    .line 655
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "isready unit state:"

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v11, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 657
    iget v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v7, 0x12a

    if-ne v0, v7, :cond_13

    .line 658
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    invoke-static {v15, v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v0
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    if-eqz v0, :cond_13

    .line 659
    :try_start_7
    monitor-exit v3
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    return-object v15

    :cond_13
    const/4 v0, 0x5

    const/16 v7, 0x5f

    if-ne v6, v0, :cond_18

    .line 666
    :try_start_8
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v0

    if-eqz v0, :cond_14

    .line 667
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    .line 668
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v13}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v12, v12, -0x1

    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready state == DownLoadConstant.DOWNLOAD_DONE \u4f46\u662foffer\u5c55\u793a\u8fc7 continue"

    .line 670
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_6
    move/from16 v0, p1

    move/from16 v2, p2

    const/4 v4, 0x0

    const/16 v6, 0x11f

    const/16 v7, 0x5e

    const/4 v8, 0x1

    goto/16 :goto_2

    :cond_14
    if-nez v2, :cond_16

    const/4 v0, 0x0

    .line 674
    invoke-virtual {v15, v0, v0}, Lcom/mbridge/msdk/videocommon/download/a;->a(II)V

    .line 676
    iget v4, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v4, v7, :cond_15

    const-string v0, "UnitCacheCtroller"

    .line 677
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isready ==========done but isEffectivePath:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " is feed"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 678
    :try_start_9
    monitor-exit v3
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    return-object v15

    :cond_15
    :try_start_a
    const-string v2, "UnitCacheCtroller"

    const-string v4, "isready !isEffectivePath continue"

    .line 680
    invoke-static {v2, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x1

    const/16 v7, 0x5e

    goto/16 :goto_5

    .line 683
    :cond_16
    invoke-direct {v1, v4, v8}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_17

    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready videourl\u4e3a\u57fa\u51c6 state\uff1ddone endcard \u56fe\u7247 \u548c videourl \u4e0b\u8f7d\u5b8c\u6210 return task"

    .line 684
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_0
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    .line 685
    :try_start_b
    monitor-exit v3
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_0

    return-object v15

    :cond_17
    :try_start_c
    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready done but continue"

    .line 687
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_0
    .catchall {:try_start_c .. :try_end_c} :catchall_0

    .line 688
    :try_start_d
    monitor-exit v3
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_0

    const/4 v2, 0x0

    return-object v2

    :cond_18
    const/4 v0, 0x0

    .line 690
    :try_start_e
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v2

    const-string v11, "u_n_c_e_d"

    const/4 v0, 0x1

    invoke-virtual {v2, v11, v0}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v2

    if-nez v2, :cond_1a

    .line 691
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->c()J

    move-result-wide v19

    .line 692
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v2

    if-ne v2, v0, :cond_1a

    sub-long v19, v9, v19

    move-object v0, v8

    .line 693
    iget-wide v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    const-wide/16 v21, 0x3e8

    mul-long v7, v7, v21

    cmp-long v7, v19, v7

    if-lez v7, :cond_1b

    const-string v7, "download timeout"

    .line 694
    invoke-virtual {v15, v7}, Lcom/mbridge/msdk/videocommon/download/a;->b(Ljava/lang/String;)V

    .line 695
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    .line 696
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v7, v13}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v12, v12, -0x1

    .line 698
    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/4 v8, 0x1

    if-eq v7, v8, :cond_19

    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v8, 0x5e

    if-ne v7, v8, :cond_1b

    :cond_19
    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready download !timeout continue"

    .line 699
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    :cond_1a
    move-object v0, v8

    .line 707
    :cond_1b
    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v2, 0x5f

    if-ne v7, v2, :cond_1d

    .line 708
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v0

    if-eqz v0, :cond_1c

    .line 709
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    .line 710
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v13}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v12, v12, -0x1

    goto/16 :goto_6

    :cond_1c
    const-string v0, "UnitCacheCtroller"

    .line 714
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "==========isready ad_type is :"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_0
    .catchall {:try_start_e .. :try_end_e} :catchall_0

    .line 715
    :try_start_f
    monitor-exit v3
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    return-object v15

    .line 717
    :cond_1d
    :try_start_10
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v2

    const-string v7, "u_n_c_e_d"

    const/4 v8, 0x1

    invoke-virtual {v2, v7, v8}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v2

    if-nez v2, :cond_1f

    const/4 v2, 0x4

    if-eq v6, v2, :cond_1e

    const/4 v2, 0x2

    if-ne v6, v2, :cond_1f

    .line 719
    :cond_1e
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v13}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 720
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    add-int/lit8 v12, v12, -0x1

    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready stop continue"

    .line 722
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_6

    :cond_1f
    const/4 v2, 0x1

    if-ne v6, v2, :cond_21

    .line 728
    invoke-virtual {v15}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v6

    if-eqz v6, :cond_20

    const-string v0, "UnitCacheCtroller"

    const-string v4, "isready run \u5df2\u7ecf\u88ab\u5c55\u793a\u8fc7 continue"

    .line 729
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v7, 0x5e

    goto/16 :goto_5

    .line 732
    :cond_20
    sget-boolean v6, Lcom/mbridge/msdk/MBridgeConstans;->IS_DOWANLOAD_FINSH_PLAY:Z

    if-nez v6, :cond_21

    .line 733
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v6

    invoke-static {v15, v6}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v6

    if-eqz v6, :cond_21

    invoke-direct {v1, v4, v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v6

    if-eqz v6, :cond_21

    const-string v0, "UnitCacheCtroller"

    .line 734
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "isready  IS_DOWANLOAD_FINSH_PLAY is :"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v4, Lcom/mbridge/msdk/MBridgeConstans;->IS_DOWANLOAD_FINSH_PLAY:Z

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_0
    .catchall {:try_start_10 .. :try_end_10} :catchall_0

    .line 735
    :try_start_11
    monitor-exit v3
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_0

    return-object v15

    .line 739
    :cond_21
    :try_start_12
    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v7, 0x5e

    if-eq v6, v7, :cond_22

    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v8, 0x11f

    if-ne v6, v8, :cond_24

    goto :goto_7

    :cond_22
    const/16 v8, 0x11f

    .line 740
    :goto_7
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v6

    invoke-static {v15, v6}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v6

    if-eqz v6, :cond_24

    invoke-direct {v1, v4, v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0
    :try_end_12
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_0
    .catchall {:try_start_12 .. :try_end_12} :catchall_0

    if-eqz v0, :cond_24

    .line 741
    :try_start_13
    monitor-exit v3
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_0

    return-object v15

    :cond_23
    :goto_8
    move v2, v8

    move v8, v6

    :try_start_14
    const-string v0, "UnitCacheCtroller"

    const-string v4, "UnitCache isReady ==== task \u6216\u8005 campaign\u4e3a\u7a7a continue"

    .line 592
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_24
    :goto_9
    move/from16 v0, p1

    move v6, v8

    const/4 v4, 0x0

    move v8, v2

    move/from16 v2, p2

    goto/16 :goto_2

    :cond_25
    move v2, v8

    move v8, v6

    add-int/lit8 v12, v12, 0x1

    move/from16 v0, p1

    const/4 v4, 0x0

    move v8, v2

    move/from16 v2, p2

    goto/16 :goto_1

    :cond_26
    const-string v0, "UnitCacheCtroller"

    const-string v2, "UnitCache isReady ===== campaignList = 0"

    .line 574
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_14
    .catch Ljava/lang/Exception; {:try_start_14 .. :try_end_14} :catch_0
    .catchall {:try_start_14 .. :try_end_14} :catchall_0

    .line 575
    :try_start_15
    monitor-exit v3

    const/4 v2, 0x0

    return-object v2

    :catchall_0
    move-exception v0

    goto :goto_a

    :catch_0
    move-exception v0

    .line 747
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 749
    :cond_27
    monitor-exit v3

    const/4 v2, 0x0

    goto :goto_b

    :goto_a
    monitor-exit v3
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_0

    throw v0

    :cond_28
    move-object v2, v4

    :goto_b
    return-object v2
.end method

.method public final a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/a;
    .locals 4

    .line 964
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_2

    .line 965
    monitor-enter v0

    .line 967
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 968
    invoke-interface {v2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 969
    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/videocommon/download/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return-object p1

    :catchall_0
    const-string p1, "UnitCacheCtroller"

    const-string v1, "failed to get campaignTast by cid"

    .line 973
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 975
    :cond_1
    monitor-exit v0

    goto :goto_0

    :catchall_1
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Ljava/lang/String;IZLjava/util/List;Z)Ljava/util/List;
    .locals 23
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "IZ",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;Z)",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;"
        }
    .end annotation

    move-object/from16 v1, p0

    move/from16 v0, p2

    move/from16 v2, p3

    move/from16 v3, p5

    .line 379
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 381
    iget-object v5, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v5, :cond_20

    .line 382
    monitor-enter v5

    .line 385
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    const/4 v9, 0x0

    .line 386
    :goto_0
    iget-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v10}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v10

    if-ge v9, v10, :cond_1f

    .line 387
    iget-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v10, v9}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Ljava/util/Map;

    .line 388
    invoke-interface {v10}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v11

    invoke-interface {v11}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v11

    .line 389
    :goto_1
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v12

    if-eqz v12, :cond_1e

    .line 390
    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Ljava/util/Map$Entry;

    .line 391
    invoke-interface {v12}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v12

    check-cast v12, Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v12, :cond_1c

    .line 392
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v13

    if-nez v13, :cond_0

    goto/16 :goto_8

    .line 397
    :cond_0
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v13

    .line 401
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v14

    const/4 v15, 0x0

    :goto_2
    invoke-interface {v14}, Ljava/util/Iterator;->hasNext()Z

    move-result v16

    if-eqz v16, :cond_3

    invoke-interface {v14}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v16

    check-cast v16, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v13, :cond_1

    if-eqz v16, :cond_1

    .line 402
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17

    if-nez v17, :cond_1

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v17

    invoke-static/range {v17 .. v17}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v17

    if-nez v17, :cond_1

    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v8

    move-object/from16 v18, v11

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v8, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v8

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v8, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_2

    const/4 v15, 0x1

    goto :goto_3

    :cond_1
    move-object/from16 v18, v11

    :cond_2
    :goto_3
    move-object/from16 v11, v18

    goto :goto_2

    :cond_3
    move-object/from16 v18, v11

    if-nez v15, :cond_4

    const-string v8, "UnitCacheCtroller"

    .line 408
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "UnitCache isReady ==== Campaign isAvailable = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v8, v11}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_9

    :cond_4
    if-eqz v2, :cond_5

    .line 412
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v8

    if-eqz v8, :cond_6

    :cond_5
    if-nez v2, :cond_7

    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v8

    if-eqz v8, :cond_7

    :cond_6
    const-string v8, "UnitCacheCtroller"

    .line 413
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "UnitCache isReady ==== isBidCampaign = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v12, " campaign.isBidCampaign() = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v8, v11}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_9

    .line 417
    :cond_7
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v8

    .line 418
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v11

    const-string v14, ""

    if-eqz v13, :cond_8

    .line 420
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v15

    if-eqz v15, :cond_8

    .line 421
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v14

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v14

    .line 423
    :cond_8
    invoke-virtual {v13}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    const/16 v15, 0x11f

    const/16 v2, 0x5e

    if-eq v0, v2, :cond_9

    if-ne v0, v15, :cond_d

    .line 426
    :cond_9
    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_a

    const-string v15, "cmpt=1"

    invoke-virtual {v14, v15}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v15

    if-nez v15, :cond_a

    invoke-direct {v1, v0, v13, v14}, Lcom/mbridge/msdk/videocommon/download/d;->a(ILcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)Z

    move-result v14

    if-nez v14, :cond_a

    const-string v2, "UnitCacheCtroller"

    const-string v8, "UnitCache isReady ====  templateZipDownload check false continue"

    .line 427
    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_9

    .line 432
    :cond_a
    invoke-direct {v1, v8, v13}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v14

    if-eqz v14, :cond_d

    .line 433
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v14

    if-eqz v14, :cond_b

    .line 434
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    const-string v2, "UnitCacheCtroller"

    const-string v8, "isready endcard\u4e0b\u8f7d\u5b8c \u4f46\u662foffer\u5c55\u793a\u8fc7 continue"

    .line 435
    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_9

    .line 439
    :cond_b
    invoke-static {v11}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_c

    const-string v2, "UnitCacheCtroller"

    const-string v8, "endcard\u4e3a\u57fa\u51c6 endcard\u548c\u56fe\u7247\u4e0b\u8f7d\u5b8c\u6210 videourl\u4e3a\u7a7a\u4e0d\u7528\u4e0b\u8f7d return task"

    .line 441
    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 442
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_9

    .line 447
    :cond_c
    invoke-direct {v1, v13}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v11

    invoke-static {v12, v11, v3}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;IZ)Z

    move-result v11

    if-eqz v11, :cond_d

    const-string v2, "UnitCacheCtroller"

    const-string v8, "endcard\u4e3a\u57fa\u51c6 endcard \u56fe\u7247 \u548c videourl \u4e0b\u8f7d\u5b8c\u6210 return task"

    .line 448
    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 449
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_9

    .line 457
    :cond_d
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->k()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    .line 458
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v14

    const-string v15, "UnitCacheCtroller"

    .line 459
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isready unit state:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v15, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v2, 0x5

    if-ne v14, v2, :cond_12

    .line 464
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v2

    if-eqz v2, :cond_e

    .line 465
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->l()V

    .line 466
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v10}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v9, v9, -0x1

    const-string v2, "UnitCacheCtroller"

    const-string v3, "isready state == DownLoadConstant.DOWNLOAD_DONE \u4f46\u662foffer\u5c55\u793a\u8fc7 continue"

    .line 468
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    move/from16 v2, p3

    move/from16 v3, p5

    goto/16 :goto_a

    :cond_e
    if-nez v11, :cond_10

    const/4 v2, 0x0

    .line 472
    invoke-virtual {v12, v2, v2}, Lcom/mbridge/msdk/videocommon/download/a;->a(II)V

    const/16 v3, 0x5f

    if-ne v0, v3, :cond_f

    const-string v3, "UnitCacheCtroller"

    .line 475
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "isready ==========done but isEffectivePath:"

    invoke-virtual {v8, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v11, " is feed"

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v3, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 476
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_f
    const-string v3, "UnitCacheCtroller"

    const-string v8, "isready !isEffectivePath continue"

    .line 479
    invoke-static {v3, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    move/from16 v3, p5

    goto/16 :goto_9

    :cond_10
    const/4 v2, 0x0

    .line 482
    invoke-direct {v1, v8, v13}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v3

    if-eqz v3, :cond_11

    const-string v3, "UnitCacheCtroller"

    const-string v8, "isready videourl\u4e3a\u57fa\u51c6 state\uff1ddone endcard \u56fe\u7247 \u548c videourl \u4e0b\u8f7d\u5b8c\u6210 return task"

    .line 483
    invoke-static {v3, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 484
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_11
    const-string v0, "UnitCacheCtroller"

    const-string v2, "isready done but continue"

    .line 487
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x0

    .line 488
    :try_start_1
    monitor-exit v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    :cond_12
    const/4 v2, 0x0

    .line 490
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object v3

    const-string v11, "u_n_c_e_d"

    const/4 v15, 0x1

    invoke-virtual {v3, v11, v15}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result v3

    if-nez v3, :cond_17

    .line 491
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->c()J

    move-result-wide v19

    .line 492
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v3

    if-ne v3, v15, :cond_14

    sub-long v19, v6, v19

    .line 493
    iget-wide v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->k:J

    const-wide/16 v21, 0x3e8

    mul-long v2, v2, v21

    cmp-long v2, v19, v2

    if-lez v2, :cond_14

    const-string v2, "download timeout"

    .line 494
    invoke-virtual {v12, v2}, Lcom/mbridge/msdk/videocommon/download/a;->b(Ljava/lang/String;)V

    .line 495
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    .line 496
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v10}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    add-int/lit8 v9, v9, -0x1

    const/4 v2, 0x1

    if-eq v0, v2, :cond_13

    const/16 v2, 0x5e

    if-ne v0, v2, :cond_14

    :cond_13
    const-string v2, "UnitCacheCtroller"

    const-string v3, "isready download !timeout continue"

    .line 499
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_4

    :cond_14
    const/4 v2, 0x4

    if-eq v14, v2, :cond_16

    const/4 v2, 0x2

    if-ne v14, v2, :cond_15

    goto :goto_6

    :cond_15
    const/4 v2, 0x1

    goto :goto_7

    .line 506
    :cond_16
    :goto_6
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v10}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 507
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    add-int/lit8 v9, v9, -0x1

    const-string v2, "UnitCacheCtroller"

    const-string v3, "isready stop continue"

    .line 509
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_4

    :cond_17
    move v2, v15

    :goto_7
    if-ne v14, v2, :cond_19

    .line 515
    invoke-virtual {v12}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v2

    if-eqz v2, :cond_18

    const-string v2, "UnitCacheCtroller"

    const-string v3, "isready run \u5df2\u7ecf\u88ab\u5c55\u793a\u8fc7 continue"

    .line 516
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_5

    .line 519
    :cond_18
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->IS_DOWANLOAD_FINSH_PLAY:Z

    if-nez v2, :cond_19

    .line 520
    invoke-direct {v1, v13}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v2

    move/from16 v3, p5

    invoke-static {v12, v2, v3}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;IZ)Z

    move-result v2

    if-eqz v2, :cond_1a

    invoke-direct {v1, v8, v13}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v2

    if-eqz v2, :cond_1a

    const-string v2, "UnitCacheCtroller"

    .line 521
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "isready  IS_DOWANLOAD_FINSH_PLAY is :"

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v11, Lcom/mbridge/msdk/MBridgeConstans;->IS_DOWANLOAD_FINSH_PLAY:Z

    invoke-virtual {v8, v11}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 522
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_9

    :cond_19
    move/from16 v3, p5

    :cond_1a
    const/16 v2, 0x5e

    if-eq v0, v2, :cond_1b

    const/16 v2, 0x11f

    if-ne v0, v2, :cond_1d

    .line 528
    :cond_1b
    invoke-direct {v1, v13}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v2

    invoke-static {v12, v2, v3}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;IZ)Z

    move-result v2

    if-eqz v2, :cond_1d

    invoke-direct {v1, v8, v13}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v2

    if-eqz v2, :cond_1d

    .line 529
    invoke-interface {v4, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_9

    :cond_1c
    :goto_8
    move-object/from16 v18, v11

    const-string v2, "UnitCacheCtroller"

    const-string v8, "UnitCache isReady ==== task \u6216\u8005 campaign\u4e3a\u7a7a continue"

    .line 393
    invoke-static {v2, v8}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1d
    :goto_9
    move/from16 v2, p3

    :goto_a
    move-object/from16 v11, v18

    goto/16 :goto_1

    :cond_1e
    add-int/lit8 v9, v9, 0x1

    move/from16 v2, p3

    goto/16 :goto_0

    :catchall_0
    move-exception v0

    goto :goto_b

    :catch_0
    move-exception v0

    .line 536
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 538
    :cond_1f
    monitor-exit v5

    goto :goto_c

    :goto_b
    monitor-exit v5
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw v0

    :cond_20
    :goto_c
    return-object v4
.end method

.method public final a()V
    .locals 16

    move-object/from16 v1, p0

    .line 1016
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/videocommon/download/d;->d()V

    .line 1018
    iget-object v2, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v2, :cond_1f

    .line 1019
    monitor-enter v2

    .line 1020
    :try_start_0
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/videocommon/download/d;->a(Ljava/util/concurrent/CopyOnWriteArrayList;)Z

    move-result v0

    const/4 v3, 0x1

    if-nez v0, :cond_0

    .line 1021
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    .line 1024
    :cond_0
    iget-object v0, v1, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1e

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map;

    if-nez v4, :cond_2

    goto :goto_0

    .line 1029
    :cond_2
    invoke-interface {v4}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v4

    .line 1030
    :cond_3
    :goto_1
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 1031
    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/Map$Entry;

    .line 1032
    invoke-interface {v5}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v5, :cond_4

    goto :goto_1

    .line 1036
    :cond_4
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/download/a;->b()Z

    move-result v6

    if-eqz v6, :cond_5

    goto :goto_1

    .line 1039
    :cond_5
    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v7, 0x5f

    if-ne v6, v7, :cond_6

    .line 1040
    iput-boolean v3, v1, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    .line 1042
    :cond_6
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v6

    .line 1043
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v8

    if-eqz v8, :cond_7

    if-nez v6, :cond_7

    .line 1045
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v6

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v6, v9, v10}, Lcom/mbridge/msdk/videocommon/download/b;->b(Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    .line 1048
    :cond_7
    new-instance v9, Lcom/mbridge/msdk/videocommon/download/d$2;

    invoke-direct {v9, v1, v8}, Lcom/mbridge/msdk/videocommon/download/d$2;-><init>(Lcom/mbridge/msdk/videocommon/download/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-virtual {v5, v9}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/videocommon/listener/a;)V

    .line 1088
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v9

    .line 1089
    iget v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v10, v3, :cond_9

    .line 1090
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-nez v9, :cond_8

    .line 1091
    iget-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-static {v9}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v9

    iput-object v9, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    .line 1093
    :cond_8
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/videocommon/download/d;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v9

    .line 1095
    :cond_9
    invoke-virtual {v5, v9}, Lcom/mbridge/msdk/videocommon/download/a;->c(I)V

    .line 1098
    iget v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v11, 0x5e

    const/16 v12, 0x12a

    const/16 v13, 0x11f

    if-eq v10, v11, :cond_e

    iget v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-eq v10, v13, :cond_e

    iget v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v10, v7, :cond_a

    goto :goto_3

    .line 1106
    :cond_a
    iget v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v10, v12, :cond_c

    .line 1107
    iget-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    if-nez v10, :cond_b

    .line 1108
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v10

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v15

    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v15

    iget-object v14, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v10, v15, v14}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v10

    iput-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    .line 1110
    :cond_b
    iget-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    if-eqz v10, :cond_c

    .line 1111
    iget-object v10, v1, Lcom/mbridge/msdk/videocommon/download/d;->b:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v10}, Lcom/mbridge/msdk/c/d;->g()I

    move-result v10

    goto :goto_2

    :cond_c
    const/4 v10, 0x0

    .line 1115
    :goto_2
    iget v14, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v14, v3, :cond_12

    .line 1116
    iget-object v14, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-nez v14, :cond_d

    .line 1117
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v14

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v15

    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v15

    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    invoke-virtual {v14, v15, v7}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    .line 1119
    :cond_d
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    if-eqz v7, :cond_12

    .line 1120
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->a:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v7}, Lcom/mbridge/msdk/c/d;->g()I

    move-result v10

    goto :goto_5

    .line 1099
    :cond_e
    :goto_3
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v7, :cond_10

    .line 1100
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v7

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v10

    iget-object v14, v1, Lcom/mbridge/msdk/videocommon/download/d;->l:Ljava/lang/String;

    iget v15, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v15, v13, :cond_f

    move v15, v3

    goto :goto_4

    :cond_f
    const/4 v15, 0x0

    :goto_4
    invoke-virtual {v7, v10, v14, v15}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    .line 1102
    :cond_10
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v7, :cond_11

    .line 1103
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/d/c;->s()I

    move-result v10

    goto :goto_5

    :cond_11
    const/4 v10, 0x0

    .line 1124
    :cond_12
    :goto_5
    invoke-virtual {v5, v10}, Lcom/mbridge/msdk/videocommon/download/a;->b(I)V

    if-eqz v8, :cond_13

    .line 1125
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCtnType()I

    move-result v7

    goto :goto_6

    :cond_13
    move v7, v3

    .line 1126
    :goto_6
    invoke-virtual {v5, v7}, Lcom/mbridge/msdk/videocommon/download/a;->e(I)V

    const-string v14, "UnitCacheCtroller"

    .line 1127
    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v13, "ready_rate : "

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, " cd_rate : "

    invoke-virtual {v15, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, " videoCtnType : "

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v14, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1129
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/videocommon/download/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v7

    invoke-static {v5, v7}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v7

    if-eqz v7, :cond_16

    .line 1130
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->e:Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v7, :cond_15

    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v10, 0x129

    if-eq v7, v10, :cond_14

    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v7, v12, :cond_15

    .line 1131
    :cond_14
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->e:Lcom/mbridge/msdk/videocommon/listener/a;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v10

    invoke-interface {v7, v10}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    .line 1134
    :cond_15
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v7, :cond_16

    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v7}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v7

    if-lez v7, :cond_16

    .line 1135
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v7, v10}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/videocommon/listener/a;

    if-eqz v7, :cond_16

    if-eqz v8, :cond_16

    .line 1137
    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v7, v8}, Lcom/mbridge/msdk/videocommon/listener/a;->a(Ljava/lang/String;)V

    :cond_16
    if-eq v6, v3, :cond_3

    const/4 v7, 0x5

    if-ne v6, v7, :cond_17

    .line 1143
    invoke-static {v5, v9}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v7

    if-nez v7, :cond_3

    :cond_17
    const/4 v7, 0x4

    if-eq v6, v7, :cond_3

    .line 1144
    iget-object v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->i:Landroid/content/Context;

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v7

    const/16 v8, 0x9

    const/4 v10, 0x2

    if-eq v7, v8, :cond_18

    .line 1145
    iget v7, v1, Lcom/mbridge/msdk/videocommon/download/d;->n:I

    if-ne v7, v10, :cond_18

    .line 1146
    monitor-exit v2

    return-void

    :cond_18
    if-eq v6, v10, :cond_19

    .line 1149
    iget-boolean v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    if-nez v6, :cond_19

    goto/16 :goto_1

    .line 1152
    :cond_19
    iget-object v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->g:Lcom/mbridge/msdk/videocommon/download/c;

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/videocommon/download/a;->a(Lcom/mbridge/msdk/videocommon/download/c;)V

    .line 1154
    invoke-static {v5, v9}, Lcom/mbridge/msdk/videocommon/download/d;->a(Lcom/mbridge/msdk/videocommon/download/a;I)Z

    move-result v6

    if-eqz v6, :cond_1b

    .line 1155
    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-eq v6, v11, :cond_1a

    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v7, 0x11f

    if-ne v6, v7, :cond_3

    .line 1156
    :cond_1a
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/download/a;->i()V

    goto/16 :goto_1

    .line 1159
    :cond_1b
    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-eq v6, v3, :cond_1c

    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    const/16 v7, 0x5f

    if-eq v6, v7, :cond_1c

    iget v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->o:I

    if-ne v6, v12, :cond_1d

    :cond_1c
    const/4 v6, 0x0

    .line 1160
    iput-boolean v6, v1, Lcom/mbridge/msdk/videocommon/download/d;->d:Z

    .line 1162
    :cond_1d
    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/download/a;->i()V

    goto/16 :goto_1

    .line 1167
    :cond_1e
    monitor-exit v2

    goto :goto_7

    :catchall_0
    move-exception v0

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    :cond_1f
    :goto_7
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 139
    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 141
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/util/List;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/listener/a;)V
    .locals 0

    .line 120
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->e:Lcom/mbridge/msdk/videocommon/listener/a;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/videocommon/listener/a;)V
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    .line 125
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    .line 127
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->f:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 131
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 132
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 134
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/download/d;->c:Ljava/util/List;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/videocommon/download/d;->b(Ljava/util/List;)V

    return-void
.end method

.method public final b(IZ)Lcom/mbridge/msdk/videocommon/download/a;
    .locals 1

    .line 956
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/videocommon/download/d;->a(IZ)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 958
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "UnitCacheCtroller"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final b()V
    .locals 7

    .line 1213
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_5

    .line 1216
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1217
    :try_start_1
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-nez v2, :cond_1

    goto :goto_0

    .line 1221
    :cond_1
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 1222
    :cond_2
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1223
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 1224
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v4, :cond_3

    goto :goto_1

    .line 1228
    :cond_3
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->f()I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_2

    const-string v1, "UnitCacheCtroller"

    const-string v3, "\u6682\u505c\u6240\u6709\u4e0b\u8f7d"

    .line 1230
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "playing and stop download"

    .line 1232
    invoke-virtual {v4, v1}, Lcom/mbridge/msdk/videocommon/download/a;->b(Ljava/lang/String;)V

    .line 1233
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/download/a;->m()V

    .line 1234
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 1235
    monitor-exit v0

    return-void

    .line 1239
    :cond_4
    monitor-exit v0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_5
    :goto_2
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 5

    .line 1329
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1330
    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 1331
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    if-eqz v2, :cond_0

    .line 1333
    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    if-eqz v4, :cond_1

    .line 1334
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/CharSequence;

    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 1335
    iget-object v4, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v4, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1341
    :cond_2
    monitor-exit v0

    goto :goto_1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :goto_1
    return-void
.end method

.method public final c()Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;>;"
        }
    .end annotation

    .line 1247
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/download/d;->h:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object v0
.end method
