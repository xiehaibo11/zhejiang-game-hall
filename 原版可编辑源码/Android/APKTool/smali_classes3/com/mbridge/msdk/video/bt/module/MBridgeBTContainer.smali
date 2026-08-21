.class public Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;
.super Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;
.source "MBridgeBTContainer.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$b;,
        Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$c;,
        Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private A:Ljava/lang/String;

.field private B:Z

.field private C:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private D:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;"
        }
    .end annotation
.end field

.field private E:Lcom/mbridge/msdk/video/bt/module/a/a;

.field private F:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private G:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private H:Lcom/mbridge/msdk/video/bt/module/a/c;

.field private I:Ljava/lang/String;

.field private J:Ljava/lang/String;

.field private K:Z

.field private L:I

.field private M:Z

.field private N:I

.field private O:Ljava/lang/String;

.field private P:Lcom/mbridge/msdk/video/dynview/e/d;

.field private b:I

.field private c:I

.field private d:Landroid/widget/FrameLayout;

.field private e:Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

.field private f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private g:Landroid/view/LayoutInflater;

.field private h:Landroid/content/Context;

.field private i:Landroid/widget/TextView;

.field private y:Z

.field private z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 87
    const-class v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 127
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x0

    .line 89
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->b:I

    const/4 v1, 0x1

    .line 90
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->c:I

    .line 101
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->y:Z

    .line 102
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->z:Z

    .line 105
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->B:Z

    .line 117
    iput v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    .line 128
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 132
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x0

    .line 89
    iput p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->b:I

    const/4 v0, 0x1

    .line 90
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->c:I

    .line 101
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->y:Z

    .line 102
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->z:Z

    .line 105
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->B:Z

    .line 117
    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    .line 133
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;I)I
    .locals 0

    .line 86
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->N:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->i:Landroid/widget/TextView;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 86
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 5

    const-string p0, "encrypt_p="

    const-string v0, "irlfa="

    if-eqz p1, :cond_0

    .line 3429
    :try_start_0
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 3430
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lcom/mbridge/msdk/foundation/db/b;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 3431
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    const/4 v3, 0x0

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 3432
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/d;->d()I

    move-result v4

    .line 3433
    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/d;->b()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    if-ne v4, v3, :cond_0

    .line 3435
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3436
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, v0, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3437
    invoke-virtual {v1}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 3438
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 3439
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 3440
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setOnlyImpressionURL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 3445
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private a(I)Z
    .locals 5

    .line 1128
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const/4 v3, 0x4

    if-eqz v0, :cond_2

    .line 1129
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->z()Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1131
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/b/c;->a()I

    move-result v4

    if-nez v4, :cond_1

    if-le p1, v3, :cond_0

    return v1

    :cond_0
    return v2

    .line 1138
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/b/c;->b()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1140
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_2
    if-le p1, v3, :cond_3

    return v1

    :cond_3
    return v2
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Z)Z
    .locals 0

    .line 86
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->M:Z

    return p1
.end method

.method private a(Z)Z
    .locals 4

    const/4 v0, 0x0

    .line 1177
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v1, :cond_0

    return v0

    .line 1180
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->A()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_4

    const/4 v3, 0x2

    if-eq v1, v3, :cond_2

    const/4 p1, 0x3

    if-eq v1, p1, :cond_1

    goto :goto_0

    .line 1188
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d()Z

    move-result p1

    return p1

    :cond_2
    if-eqz p1, :cond_3

    .line 1185
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d()Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_3

    move v0, v2

    :cond_3
    return v0

    :cond_4
    return p1

    :catchall_0
    move-exception p1

    .line 1191
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v1, v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Landroid/widget/FrameLayout;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Lcom/mbridge/msdk/video/bt/module/a/a;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    return-object p0
.end method

.method private c()Lcom/mbridge/msdk/video/bt/module/a/c;
    .locals 1

    .line 493
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->H:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-nez v0, :cond_0

    .line 494
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$3;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->H:Lcom/mbridge/msdk/video/bt/module/a/c;

    .line 627
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->H:Lcom/mbridge/msdk/video/bt/module/a/c;

    return-object v0
.end method

.method private d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/download/a;
    .locals 4

    .line 1006
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->D:Ljava/util/List;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 1007
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/download/a;

    .line 1008
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1009
    sget-object p1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    const-string v0, "tempContainer task initSuccess"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method private d()Z
    .locals 5

    const/4 v0, 0x0

    .line 1205
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v1, :cond_0

    return v0

    .line 1208
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->B()D

    move-result-wide v1

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    cmpl-double v3, v1, v3

    if-nez v3, :cond_1

    return v0

    .line 1212
    :cond_1
    new-instance v3, Ljava/util/Random;

    invoke-direct {v3}, Ljava/util/Random;-><init>()V

    invoke-virtual {v3}, Ljava/util/Random;->nextDouble()D

    move-result-wide v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmpl-double v1, v3, v1

    if-lez v1, :cond_2

    const/4 v0, 0x1

    :cond_2
    return v0

    :catchall_0
    move-exception v1

    .line 1215
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v2, v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/util/List;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->F:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V
    .locals 0

    .line 4390
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d:Landroid/widget/FrameLayout;

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    return-void
.end method

.method static synthetic o(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Landroid/app/Activity;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Z
    .locals 0

    .line 86
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->z:Z

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Landroid/app/Activity;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Ljava/lang/String;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)Lcom/mbridge/msdk/video/bt/module/b/h;
    .locals 0

    .line 86
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->G:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 461
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 462
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 463
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    .line 464
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v3, p1

    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 469
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected final a(Ljava/lang/String;)V
    .locals 1

    .line 452
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->F:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 453
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 455
    :cond_0
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->a(Ljava/lang/String;)V

    return-void
.end method

.method public appendSubView(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Lcom/mbridge/msdk/video/bt/module/MBTempContainer;Lorg/json/JSONObject;)V
    .locals 7

    .line 958
    :try_start_0
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    if-eqz p3, :cond_5

    .line 960
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-string v2, "left"

    const/16 v3, -0x3e7

    .line 961
    invoke-virtual {p3, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v4, "top"

    .line 962
    invoke-virtual {p3, v4, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "right"

    .line 963
    invoke-virtual {p3, v5, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "bottom"

    .line 964
    invoke-virtual {p3, v6, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    if-eq v2, v3, :cond_0

    if-eqz v1, :cond_0

    int-to-float v2, v2

    .line 966
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    :cond_0
    if-eq v4, v3, :cond_1

    if-eqz v1, :cond_1

    int-to-float v2, v4

    .line 969
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    :cond_1
    if-eq v5, v3, :cond_2

    if-eqz v1, :cond_2

    int-to-float v2, v5

    .line 972
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    :cond_2
    if-eq v6, v3, :cond_3

    if-eqz v1, :cond_3

    int-to-float v2, v6

    .line 975
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    :cond_3
    const-string v1, "width"

    .line 977
    invoke-virtual {p3, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const-string v2, "height"

    .line 978
    invoke-virtual {p3, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    if-lez v1, :cond_4

    .line 980
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_4
    if-lez p3, :cond_5

    .line 983
    iput p3, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 986
    :cond_5
    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 987
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setActivity(Landroid/app/Activity;)V

    .line 988
    iget p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->q:I

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setMute(I)V

    .line 989
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->y:Z

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setBidCampaign(Z)V

    .line 990
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->r:Z

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setIV(Z)V

    .line 991
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->z:Z

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setBigOffer(Z)V

    .line 992
    iget p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->t:I

    iget p3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->u:I

    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->v:I

    invoke-virtual {p2, p1, p3, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setIVRewardEnable(III)V

    .line 993
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->G:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setShowRewardListener(Lcom/mbridge/msdk/video/bt/module/b/h;)V

    .line 994
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setCampaignDownLoadTask(Lcom/mbridge/msdk/videocommon/download/a;)V

    .line 995
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->c()Lcom/mbridge/msdk/video/bt/module/a/c;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setMBridgeTempCallback(Lcom/mbridge/msdk/video/bt/module/a/c;)V

    .line 996
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/c;->a()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setH5Cbp(I)V

    .line 997
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/video/js/c;->b()I

    move-result p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setWebViewFront(I)V

    .line 998
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->h:Landroid/content/Context;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->init(Landroid/content/Context;)V

    .line 999
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onCreate()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1001
    sget-object p2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 1018
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_0

    .line 1020
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 1021
    iget v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->b:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 1022
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 1023
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 1024
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1025
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1027
    :catch_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public click(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 1056
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 1060
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 137
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->h:Landroid/content/Context;

    .line 138
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->g:Landroid/view/LayoutInflater;

    return-void
.end method

.method public isNativeKilledCallback(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 3

    .line 1089
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c;->a()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    return v1

    :cond_0
    if-eqz p1, :cond_4

    .line 1095
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getSpareOfferFlag()I

    move-result v0

    if-ne v0, v2, :cond_2

    .line 1096
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_4

    .line 1097
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->C()I

    move-result v0

    if-ne v0, v2, :cond_1

    .line 1098
    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    return v2

    .line 1101
    :cond_1
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    return v1

    .line 1106
    :cond_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1108
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    return v1

    .line 1111
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->d()I

    move-result v0

    .line 1112
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCbt(I)V

    if-ne v0, v2, :cond_4

    move v1, v2

    :cond_4
    return v1
.end method

.method public onAdClose()V
    .locals 1

    .line 741
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 742
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 3

    .line 693
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 694
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 695
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 696
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v2, :cond_1

    .line 697
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onBackPressed()V

    goto :goto_0

    .line 698
    :cond_1
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    if-eqz v2, :cond_2

    .line 699
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->onBackPressed()V

    goto :goto_0

    .line 700
    :cond_2
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    if-eqz v2, :cond_0

    .line 701
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->onBackPressed()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 706
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 3

    .line 475
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 476
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 477
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 478
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v2, :cond_1

    .line 479
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    .line 480
    :cond_1
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    if-eqz v2, :cond_2

    .line 481
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    goto :goto_0

    .line 482
    :cond_2
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    if-eqz v2, :cond_0

    .line 483
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 488
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public onCreate()V
    .locals 9

    const-string v0, ""

    const-string v1, "_"

    :try_start_0
    const-string v2, "mbridge_bt_container"

    .line 143
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->findLayout(Ljava/lang/String;)I

    move-result v2

    if-gez v2, :cond_0

    const-string v0, "mbridge_bt_container layout null"

    .line 145
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 148
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->g:Landroid/view/LayoutInflater;

    invoke-virtual {v3, v2, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/FrameLayout;

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d:Landroid/widget/FrameLayout;

    if-nez v2, :cond_1

    const-string v0, "ViewIds null"

    .line 150
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 155
    :cond_1
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    .line 156
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    const/4 v3, 0x0

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 157
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 158
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    .line 159
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    goto :goto_0

    :cond_2
    move-object v4, v0

    .line 161
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1631
    invoke-static {v2}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v2

    const/4 v5, 0x0

    if-eqz v2, :cond_3

    .line 1633
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/a$a;->b()Ljava/lang/String;

    move-result-object v6

    iput-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    .line 1634
    sget-object v6, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "get BT wraper.getTag = "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v6, v7}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1635
    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/videocommon/a$a;->a(Ljava/lang/String;)V

    .line 1636
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/a$a;->a()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v2

    goto :goto_1

    :cond_3
    move-object v2, v5

    .line 161
    :goto_1
    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 162
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/videocommon/a;->b(Ljava/lang/String;)V

    .line 163
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_e

    .line 164
    new-instance v2, Lcom/mbridge/msdk/video/js/factory/b;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-direct {v2, v4, p0, v6}, Lcom/mbridge/msdk/video/js/factory/b;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Landroid/webkit/WebView;)V

    .line 165
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->registerJsFactory(Lcom/mbridge/msdk/video/js/factory/IJSFactory;)V

    .line 166
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 167
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_4

    const-string v0, "preload template webview is null or load error"

    .line 168
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 171
    :cond_4
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Lcom/mbridge/msdk/video/js/a/j;

    const/4 v6, 0x1

    if-eqz v4, :cond_6

    .line 172
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/video/js/factory/b;->a(Lcom/mbridge/msdk/video/js/a/j;)V

    .line 173
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_5

    .line 174
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 175
    sget-object v4, Lcom/mbridge/msdk/foundation/same/a;->s:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v7}, Lcom/mbridge/msdk/foundation/tools/ae;->d(Landroid/content/Context;)F

    move-result v7

    float-to-double v7, v7

    invoke-virtual {v2, v4, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 177
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v7, "name"

    .line 178
    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v8}, Lcom/mbridge/msdk/videocommon/b/d;->a()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v4, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "amount"

    .line 179
    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v8}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result v8

    invoke-virtual {v4, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v7, "id"

    .line 180
    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->p:Ljava/lang/String;

    invoke-virtual {v4, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "userId"

    .line 181
    iget-object v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->n:Ljava/lang/String;

    invoke-virtual {v2, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v7, "reward"

    .line 182
    invoke-virtual {v2, v7, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "playVideoMute"

    .line 183
    iget v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->q:I

    invoke-virtual {v2, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "extra"

    .line 184
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    invoke-virtual {v2, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_2

    :catch_0
    move-exception v4

    .line 188
    :try_start_2
    sget-object v7, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :catch_1
    move-exception v4

    .line 186
    sget-object v7, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v4}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v7, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 190
    :goto_2
    new-instance v4, Lcom/mbridge/msdk/video/bt/module/b/d;

    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->c()Lcom/mbridge/msdk/video/bt/module/a/c;

    move-result-object v7

    invoke-direct {v4, v7, v0}, Lcom/mbridge/msdk/video/bt/module/b/d;-><init>(Lcom/mbridge/msdk/video/bt/module/a/c;Ljava/lang/String;)V

    iput-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->G:Lcom/mbridge/msdk/video/bt/module/b/h;

    .line 191
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    .line 192
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSNotifyProxy()Lcom/mbridge/msdk/video/js/f;

    move-result-object v2

    invoke-interface {v2, v0}, Lcom/mbridge/msdk/video/js/f;->a(Ljava/lang/Object;)V

    .line 193
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    invoke-interface {v0, v6}, Lcom/mbridge/msdk/video/js/c;->b(Z)V

    .line 194
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    new-instance v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$c;

    invoke-direct {v2, p0, v5}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$c;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$1;)V

    invoke-interface {v0, v2}, Lcom/mbridge/msdk/video/js/c;->a(Lcom/mbridge/msdk/video/js/c$a;)V

    .line 196
    :cond_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getJSCommon()Lcom/mbridge/msdk/video/js/c;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/js/a/c;

    iget-object v0, v0, Lcom/mbridge/msdk/video/js/a/c;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->a()V

    .line 198
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 199
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_d

    .line 200
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_d

    .line 201
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 202
    instance-of v4, v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    if-eqz v4, :cond_c

    .line 203
    check-cast v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->e:Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    .line 204
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v7, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v8, -0x1

    invoke-direct {v7, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v4, v3, v7}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 205
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-instance v7, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$1;

    invoke-direct {v7, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V

    invoke-virtual {v2, v4, v7}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 258
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v7, 0x2

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 259
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/b/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object v2

    .line 260
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v4, :cond_9

    if-eqz v2, :cond_9

    .line 263
    :try_start_3
    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    check-cast v4, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move-object v5, v4

    goto :goto_3

    :catch_2
    move-exception v4

    .line 265
    :try_start_4
    invoke-virtual {v4}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    if-nez v5, :cond_7

    .line 268
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    sget v4, Lcom/mbridge/msdk/foundation/b/b;->a:I

    sget v6, Lcom/mbridge/msdk/foundation/b/b;->b:I

    invoke-direct {v5, v4, v6}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 270
    :cond_7
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    const/high16 v6, 0x41200000    # 10.0f

    invoke-static {v4, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v5, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 271
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4, v6}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    iput v4, v5, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 272
    invoke-virtual {v2, v5}, Lcom/mbridge/msdk/widget/FeedBackButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 273
    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    check-cast v4, Landroid/view/ViewGroup;

    if-eqz v4, :cond_8

    .line 275
    invoke-virtual {v4, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 278
    :cond_8
    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->e:Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->addView(Landroid/view/View;)V

    .line 280
    :cond_9
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->e:Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;->setTag(Ljava/lang/Object;)V

    .line 281
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->e:Lcom/mbridge/msdk/video/bt/module/MBridgeBTLayout;

    invoke-virtual {v0, v2, v4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 282
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_a
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_b

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    .line 283
    instance-of v5, v4, Lcom/mbridge/msdk/video/bt/module/MBridgeBTRootLayout;

    if-eqz v5, :cond_a

    .line 284
    check-cast v4, Lcom/mbridge/msdk/video/bt/module/MBridgeBTRootLayout;

    .line 285
    invoke-virtual {v4}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTRootLayout;->getInstanceId()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->I:Ljava/lang/String;

    .line 286
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->d:Landroid/widget/FrameLayout;

    new-instance v5, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v5, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v4, v5}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 290
    :cond_b
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->I:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 291
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->I:Ljava/lang/String;

    invoke-virtual {v0, v2, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 297
    :cond_c
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->q:I

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;I)V

    .line 298
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 299
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->I:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 300
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->j:Landroid/app/Activity;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Landroid/app/Activity;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    .line 302
    :try_start_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 303
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$a;

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->l:Ljava/lang/String;

    invoke-direct {v2, v4, v0, v5, v6}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$a;-><init>(Ljava/util/List;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_4

    .line 305
    :catchall_0
    :try_start_6
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    const-string v1, "remove campaign failed"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 307
    :goto_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_11

    .line 309
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Lcom/mbridge/msdk/videocommon/d/c;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto/16 :goto_6

    :cond_d
    const-string v0, "big template webviewLayout is null"

    .line 294
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    return-void

    .line 312
    :cond_e
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_10

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_10

    .line 313
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_10

    .line 314
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    if-eqz v0, :cond_10

    .line 316
    :try_start_7
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$b;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$b;-><init>(Ljava/util/List;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    .line 320
    :catch_3
    :try_start_8
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->h:Landroid/content/Context;

    .line 2363
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->P:Lcom/mbridge/msdk/video/dynview/e/d;

    if-nez v1, :cond_f

    const-string v0, "ChoiceOneCallback is null"

    .line 2364
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    goto :goto_5

    .line 2367
    :cond_f
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "choice_one_callback"

    .line 2368
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->P:Lcom/mbridge/msdk/video/dynview/e/d;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2369
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b;->a()Lcom/mbridge/msdk/video/dynview/b;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    new-instance v3, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$2;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;)V

    .line 3043
    new-instance v4, Lcom/mbridge/msdk/video/dynview/h/a;

    invoke-direct {v4, v0, v2, v3, v1}, Lcom/mbridge/msdk/video/dynview/h/a;-><init>(Landroid/content/Context;Ljava/util/List;Lcom/mbridge/msdk/video/dynview/e/g;Ljava/util/Map;)V

    :goto_5
    return-void

    :cond_10
    const-string v0, "big template webview is null"

    .line 324
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    goto :goto_6

    :catchall_1
    move-exception v0

    .line 327
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onCreate exception "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/String;)V

    :cond_11
    :goto_6
    return-void
.end method

.method public onDestroy()V
    .locals 5

    .line 748
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->B:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 751
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->B:Z

    .line 752
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onDestroy()V

    .line 753
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->e(Ljava/lang/String;)V

    .line 756
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_2

    .line 757
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    .line 759
    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 761
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->clearWebView()V

    .line 762
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 764
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->H:Lcom/mbridge/msdk/video/bt/module/a/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 765
    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->H:Lcom/mbridge/msdk/video/bt/module/a/c;

    .line 767
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    if-eqz v0, :cond_4

    .line 768
    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    .line 770
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->h:Landroid/content/Context;

    if-eqz v0, :cond_5

    .line 771
    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->h:Landroid/content/Context;

    .line 773
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_8

    .line 774
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_6
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_6

    .line 775
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    if-eqz v3, :cond_6

    .line 776
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/videocommon/a;->b(Ljava/lang/String;)V

    goto :goto_0

    .line 779
    :cond_7
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b/a;->a()Lcom/mbridge/msdk/video/dynview/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/b/a;->b()V

    .line 781
    :cond_8
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->g(Ljava/lang/String;)V

    .line 782
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->h(Ljava/lang/String;)V

    .line 783
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->A:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 784
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->I:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 785
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->clear()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 787
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 736
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onDetachedFromWindow()V

    return-void
.end method

.method public onPause()V
    .locals 3

    .line 712
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onPause()V

    .line 713
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 714
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 715
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 716
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b/a;->a()Lcom/mbridge/msdk/video/dynview/b/a;

    move-result-object v0

    .line 3095
    iget-object v1, v0, Lcom/mbridge/msdk/video/dynview/b/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    if-eqz v1, :cond_0

    .line 3096
    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/b/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/dynview/d/a;->b()V

    .line 721
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 722
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 723
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 724
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    if-eqz v2, :cond_1

    .line 725
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;->onPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 730
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public onResume()V
    .locals 3

    .line 643
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onResume()V

    .line 644
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 645
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 646
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 647
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b/a;->a()Lcom/mbridge/msdk/video/dynview/b/a;

    move-result-object v0

    .line 3089
    iget-object v1, v0, Lcom/mbridge/msdk/video/dynview/b/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    if-eqz v1, :cond_0

    .line 3090
    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/b/a;->a:Lcom/mbridge/msdk/video/dynview/d/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/dynview/d/a;->a()V

    .line 651
    :cond_0
    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-eqz v0, :cond_1

    return-void

    .line 655
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 656
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 657
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 658
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    if-eqz v2, :cond_2

    .line 659
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;->onResume()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 664
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public onStop()V
    .locals 3

    .line 670
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/container/AbstractJSContainer;->onStop()V

    .line 671
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 672
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 673
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 674
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b/a;->a()Lcom/mbridge/msdk/video/dynview/b/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/b/a;->b()V

    .line 678
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 679
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 680
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 681
    instance-of v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    if-eqz v2, :cond_1

    .line 682
    check-cast v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;->onStop()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 687
    sget-object v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 13

    const-string v0, "error"

    .line 793
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    if-eqz v1, :cond_1d

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1d

    .line 795
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 796
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v2, "hit"

    .line 797
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "unitId"

    .line 798
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getUnitId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 799
    sget-object v4, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->getPlacementId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "data"

    .line 800
    invoke-virtual {v1, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    .line 802
    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    const/4 v7, 0x0

    invoke-interface {v6, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v8, 0x1

    if-ne p2, v8, :cond_2

    const-string v9, "expired"

    .line 805
    invoke-virtual {v5, v9}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v9

    if-eqz v6, :cond_1

    if-eqz v9, :cond_0

    .line 809
    invoke-virtual {v6, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    goto :goto_0

    .line 811
    :cond_0
    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setSpareOfferFlag(I)V

    .line 815
    :cond_1
    :goto_0
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->isNativeKilledCallback(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v9

    iput-boolean v9, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    const/4 v9, 0x5

    const/4 v10, 0x4

    const/4 v11, 0x2

    const-string v12, ""

    packed-switch p2, :pswitch_data_0

    goto/16 :goto_7

    :pswitch_0
    :try_start_1
    const-string p2, "convert"

    .line 834
    invoke-virtual {v5, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    if-ne p2, v8, :cond_3

    move p2, v8

    goto :goto_1

    :cond_3
    move p2, v7

    :goto_1
    const-string v0, "reward"

    .line 835
    invoke-virtual {v5, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "campaign"

    .line 836
    invoke-virtual {v5, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    .line 837
    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/b/d;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/videocommon/b/d;

    move-result-object v0

    if-nez v0, :cond_4

    .line 838
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->o:Lcom/mbridge/msdk/videocommon/b/d;

    :cond_4
    const-string v10, "extra"

    .line 839
    invoke-virtual {v5, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 840
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_5

    .line 841
    iput-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    .line 843
    :cond_5
    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    const/4 v10, 0x7

    invoke-interface {v5, v10, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ILjava/lang/String;Ljava/lang/String;)V

    .line 844
    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    const-string v5, "sendToServerRewardInfo"

    if-eqz v4, :cond_c

    .line 845
    :try_start_2
    invoke-direct {p0, v9}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result v2

    if-nez v2, :cond_1c

    .line 3156
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v2, :cond_6

    .line 3157
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->m:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->z()Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 3159
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/b/c;->a()I

    move-result v2

    goto :goto_2

    :cond_6
    move v2, v8

    :goto_2
    if-nez v2, :cond_7

    .line 846
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 847
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {v2, v12}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(Ljava/lang/String;)V

    .line 851
    :cond_7
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->r:Z

    if-eqz v2, :cond_9

    iget v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v2, v4, :cond_8

    iget v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v2, v4, :cond_9

    .line 852
    :cond_8
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->M:Z

    iget v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->N:I

    invoke-interface {v2, v4, v8}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZI)V

    :cond_9
    if-nez p2, :cond_a

    .line 855
    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 857
    :cond_a
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {v2, p2, v0}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    .line 858
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 859
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->r:Z

    if-nez v2, :cond_1c

    if-eqz p2, :cond_1c

    if-eqz v1, :cond_b

    .line 861
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->n:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    invoke-static {v1, v0, v3, p2, v2}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 863
    :cond_b
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->n:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    invoke-static {v6, v0, v3, p2, v1}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 868
    :cond_c
    iget v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, v4, :cond_1c

    .line 870
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->r:Z

    if-eqz v2, :cond_e

    iget v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v2, v4, :cond_d

    iget v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->t:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v2, v4, :cond_e

    .line 871
    :cond_d
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    iget-boolean v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->M:Z

    iget v8, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->N:I

    invoke-interface {v2, v4, v8}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZI)V

    :cond_e
    if-nez p2, :cond_f

    .line 874
    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 876
    :cond_f
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {v2, p2, v0}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZLcom/mbridge/msdk/videocommon/b/d;)V

    .line 877
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 878
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->r:Z

    if-nez v2, :cond_1c

    if-eqz p2, :cond_1c

    if-eqz v1, :cond_10

    .line 880
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->n:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    invoke-static {v1, v0, v3, p2, v2}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 882
    :cond_10
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->n:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    invoke-static {v6, v0, v3, p2, v1}, Lcom/mbridge/msdk/video/module/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/videocommon/b/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    :pswitch_1
    const-string p2, "isAutoClick"

    .line 910
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p2

    .line 911
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z

    if-eqz v0, :cond_11

    .line 912
    invoke-direct {p0, v10}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result v0

    if-nez v0, :cond_1c

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Z)Z

    move-result v0

    if-nez v0, :cond_1c

    .line 913
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {v0, p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 916
    :cond_11
    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, v0, :cond_1c

    .line 917
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {v0, p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ZLjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 934
    :pswitch_2
    iget-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z

    if-eqz p2, :cond_12

    const/4 p2, 0x3

    .line 935
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result p2

    if-nez p2, :cond_13

    .line 936
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    .line 939
    :cond_12
    iget p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, p2, :cond_13

    .line 940
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 943
    :cond_13
    :goto_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    const/4 v0, 0x6

    invoke-interface {p2, v0, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ILjava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 922
    :pswitch_3
    iget-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z

    if-eqz p2, :cond_14

    .line 923
    invoke-direct {p0, v11}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result p2

    if-nez p2, :cond_15

    .line 924
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    .line 927
    :cond_14
    iget p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, p2, :cond_15

    .line 928
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    :cond_15
    :goto_4
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v9, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    .line 889
    :pswitch_4
    invoke-virtual {v5, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_16

    const-string v1, "msg"

    .line 892
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 894
    :cond_16
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_17

    .line 895
    invoke-virtual {v5, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 897
    :cond_17
    iget-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z

    if-eqz p2, :cond_18

    .line 898
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result p2

    if-nez p2, :cond_19

    .line 899
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v12}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(Ljava/lang/String;)V

    goto :goto_5

    .line 902
    :cond_18
    iget p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, p2, :cond_19

    .line 903
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v12}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(Ljava/lang/String;)V

    .line 907
    :cond_19
    :goto_5
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v10, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    .line 820
    :pswitch_5
    iget-boolean p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->K:Z

    if-eqz p2, :cond_1a

    .line 821
    invoke-direct {p0, v8}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(I)Z

    move-result p2

    if-nez p2, :cond_1b

    .line 822
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/bt/module/a/a;->a()V

    goto :goto_6

    .line 825
    :cond_1a
    iget p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->L:I

    if-eq v2, p2, :cond_1b

    .line 826
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/bt/module/a/a;->a()V

    .line 830
    :cond_1b
    :goto_6
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    invoke-interface {p2, v11, v4, v3}, Lcom/mbridge/msdk/video/bt/module/a/a;->a(ILjava/lang/String;Ljava/lang/String;)V

    .line 946
    :cond_1c
    :goto_7
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/Object;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_8

    :catch_0
    move-exception p2

    .line 948
    invoke-virtual {p2}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 949
    sget-object p1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {p2}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    :cond_1d
    const-string p2, "listener is null"

    .line 952
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :goto_8
    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public setBTContainerCallback(Lcom/mbridge/msdk/video/bt/module/a/a;)V
    .locals 0

    .line 1064
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->E:Lcom/mbridge/msdk/video/bt/module/a/a;

    return-void
.end method

.method public setCampaignDownLoadTasks(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;)V"
        }
    .end annotation

    .line 1073
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->D:Ljava/util/List;

    return-void
.end method

.method public setCampaigns(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 1069
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    return-void
.end method

.method public setChoiceOneCallback(Lcom/mbridge/msdk/video/dynview/e/d;)V
    .locals 0

    .line 1085
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->P:Lcom/mbridge/msdk/video/dynview/e/d;

    return-void
.end method

.method public setDeveloperExtraData(Ljava/lang/String;)V
    .locals 0

    .line 1294
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->O:Ljava/lang/String;

    return-void
.end method

.method public setJSFactory(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 0

    .line 1077
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->x:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    return-void
.end method

.method public setNotchPadding(IIIII)V
    .locals 16

    move-object/from16 v1, p0

    move/from16 v8, p2

    move/from16 v9, p3

    move/from16 v10, p4

    move/from16 v11, p5

    .line 1222
    :try_start_0
    invoke-static/range {p1 .. p5}, Lcom/mbridge/msdk/foundation/tools/m;->a(IIIII)Ljava/lang/String;

    move-result-object v12

    .line 1224
    sget-object v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-static {v0, v12}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1226
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v13, "oncutoutfetched"

    const/4 v14, 0x0

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v0, :cond_0

    .line 1227
    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1228
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v0, v12}, Lcom/mbridge/msdk/video/js/a/j;->b(Ljava/lang/String;)V

    .line 1229
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v12}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-static {v3, v14}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v13, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 3266
    :cond_0
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    if-eqz v0, :cond_6

    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lez v0, :cond_6

    .line 3268
    :try_start_2
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->C:Ljava/util/List;

    invoke-interface {v0, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_6

    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->i:Landroid/widget/TextView;

    if-eqz v0, :cond_6

    .line 3269
    iget-object v0, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->i:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    if-lez v8, :cond_2

    .line 3274
    iput v8, v0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    :cond_2
    if-lez v9, :cond_3

    .line 3277
    iput v9, v0, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    :cond_3
    if-lez v10, :cond_4

    .line 3280
    iput v10, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    :cond_4
    if-lez v11, :cond_5

    .line 3283
    iput v11, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    .line 3285
    :cond_5
    iget-object v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->i:Landroid/widget/TextView;

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 3288
    :try_start_3
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1235
    :cond_6
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v2

    move/from16 v3, p1

    move/from16 v4, p2

    move/from16 v5, p3

    move/from16 v6, p4

    move/from16 v7, p5

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/video/bt/a/c;->a(IIIII)V

    .line 1237
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->k:Ljava/lang/String;

    iget-object v3, v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->J:Ljava/lang/String;

    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 1238
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v2

    if-lez v2, :cond_a

    .line 1239
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_7
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_a

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v15, v2

    check-cast v15, Landroid/view/View;

    .line 1240
    instance-of v2, v15, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    if-eqz v2, :cond_8

    .line 1241
    move-object v2, v15

    check-cast v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;

    invoke-virtual {v2, v8, v9, v10, v11}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTVideoView;->setNotchPadding(IIII)V

    .line 1244
    :cond_8
    instance-of v2, v15, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v2, :cond_9

    .line 1245
    move-object v2, v15

    check-cast v2, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    move/from16 v3, p1

    move/from16 v4, p2

    move/from16 v5, p3

    move/from16 v6, p4

    move/from16 v7, p5

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setNotchPadding(IIIII)V

    .line 1248
    :cond_9
    instance-of v2, v15, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_7

    invoke-static {v12}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_7

    .line 1249
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v2

    invoke-virtual {v12}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-static {v3, v14}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v15, v13, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 1254
    sget-object v2, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    return-void
.end method

.method public setShowRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/h;)V
    .locals 0

    .line 1081
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->F:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-void
.end method
