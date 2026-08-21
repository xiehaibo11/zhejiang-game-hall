.class public Lcom/sigmob/sdk/base/common/h;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field private static final serialVersionUID:J = 0x2L


# instance fields
.field protected a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field protected b:Ljava/lang/String;

.field protected c:Ljava/lang/String;

.field protected d:Ljava/lang/String;

.field protected e:Ljava/lang/String;

.field protected f:Ljava/lang/String;

.field protected g:Ljava/lang/String;

.field protected h:Ljava/lang/String;

.field protected i:I

.field public j:Z

.field private final k:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/videoAd/f;",
            ">;"
        }
    .end annotation
.end field

.field private l:Z

.field private m:Z

.field private n:Ljava/lang/String;

.field private o:Z

.field private p:Lcom/sigmob/sdk/base/common/x;

.field private q:Lcom/sigmob/sdk/base/views/q;

.field private r:Landroid/content/Context;

.field private s:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private t:Lcom/sigmob/sdk/base/views/q$b;

.field private u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private v:Z

.field private w:I


# direct methods
.method protected constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/base/common/h;->i:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/h;->k:Ljava/util/List;

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/h;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/common/h;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/h;-><init>()V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-object v0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/h;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/h;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->n:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/h;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/common/h;->l:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method private b(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    sget-object p2, Lcom/sigmob/sdk/base/common/h$6;->a:[I

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/a;->ordinal()I

    move-result p1

    aget p1, p2, p1

    const/4 p2, 0x1

    const/4 p3, 0x0

    if-eq p1, p2, :cond_1

    const/4 p2, 0x2

    if-eq p1, p2, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->v:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-interface {p1, p2, p3}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/h;->t:Lcom/sigmob/sdk/base/views/q$b;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/common/h;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/h;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/common/x;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/h;->p:Lcom/sigmob/sdk/base/common/x;

    return-object p0
.end method

.method private l()Z
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->s:Ljava/lang/ref/WeakReference;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    if-eqz v0, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isDownloadDialog()Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    if-nez v2, :cond_1

    new-instance v2, Lcom/sigmob/sdk/base/views/q;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {v2, v0, v3}, Lcom/sigmob/sdk/base/views/q;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    iput-object v2, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    new-instance v0, Lcom/sigmob/sdk/base/common/h$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/common/h$1;-><init>(Lcom/sigmob/sdk/base/common/h;)V

    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q$b;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->a()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/h;->l:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->q:Lcom/sigmob/sdk/base/views/q;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->show()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/common/h;->l:Z

    return v0

    :cond_2
    :goto_0
    return v1
.end method


# virtual methods
.method public a(JJ)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(JJ)",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/common/g;",
            ">;"
        }
    .end annotation

    const-wide/16 v0, 0x0

    cmp-long v2, p3, v0

    if-lez v2, :cond_3

    cmp-long v0, p1, v0

    if-ltz v0, :cond_3

    long-to-float p1, p1

    long-to-float p2, p3

    div-float/2addr p1, p2

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    new-instance p3, Lcom/sigmob/sdk/videoAd/f;

    sget-object p4, Lcom/sigmob/sdk/base/common/a;->n:Lcom/sigmob/sdk/base/common/a;

    invoke-direct {p3, p4, p1}, Lcom/sigmob/sdk/videoAd/f;-><init>(Lcom/sigmob/sdk/base/common/a;F)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->k:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    const/4 p4, 0x0

    :goto_0
    if-ge p4, p1, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->k:Ljava/util/List;

    invoke-interface {v0, p4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/videoAd/f;

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/videoAd/f;->a(Lcom/sigmob/sdk/videoAd/f;)I

    move-result v1

    if-lez v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/videoAd/f;->m()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-interface {p2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 p4, p4, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-object p2

    :cond_3
    invoke-static {}, Ljava/util/Collections;->emptyList()Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public a(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/common/h;->w:I

    return-void
.end method

.method public a(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    const-string p1, "start"

    const/4 p2, 0x0

    invoke-static {p1, p2, p3}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p3, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/sigmob/sdk/base/a;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "landing_page_show"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public a(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/views/q$b;)V
    .locals 1

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/h;->s:Ljava/lang/ref/WeakReference;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/h;->t:Lcom/sigmob/sdk/base/views/q$b;

    :cond_1
    :goto_0
    return-void
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V
    .locals 1

    const-string v0, "context cannot be null"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    invoke-static {p4, p5, p2, p3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->b:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    move-object v0, p2

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v1

    iput-object p1, v1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUIType:Lcom/sigmob/sdk/base/a;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v1

    iput-object p3, v1, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p3

    iput-object v0, p3, Lcom/sigmob/sdk/base/models/ClickCommon;->clickUrl:Ljava/lang/String;

    new-instance p3, Lcom/sigmob/sdk/base/common/ag$a;

    invoke-direct {p3}, Lcom/sigmob/sdk/base/common/ag$a;-><init>()V

    sget-object v0, Lcom/sigmob/sdk/base/common/af;->a:Lcom/sigmob/sdk/base/common/af;

    const/4 v1, 0x5

    new-array v1, v1, [Lcom/sigmob/sdk/base/common/af;

    const/4 v2, 0x0

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->f:Lcom/sigmob/sdk/base/common/af;

    aput-object v3, v1, v2

    const/4 v2, 0x1

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->d:Lcom/sigmob/sdk/base/common/af;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->e:Lcom/sigmob/sdk/base/common/af;

    aput-object v3, v1, v2

    const/4 v2, 0x3

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->c:Lcom/sigmob/sdk/base/common/af;

    aput-object v3, v1, v2

    const/4 v2, 0x4

    sget-object v3, Lcom/sigmob/sdk/base/common/af;->b:Lcom/sigmob/sdk/base/common/af;

    aput-object v3, v1, v2

    invoke-virtual {p3, v0, v1}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/common/af;[Lcom/sigmob/sdk/base/common/af;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p3

    new-instance v0, Lcom/sigmob/sdk/base/common/h$5;

    invoke-direct {v0, p0, p4, p5, p1}, Lcom/sigmob/sdk/base/common/h$5;-><init>(Lcom/sigmob/sdk/base/common/h;ZZLcom/sigmob/sdk/base/a;)V

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/common/ag$b;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p1

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p3}, Lcom/sigmob/sdk/base/common/ag$a;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p1

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isSkipSigmobBrowser()Z

    move-result p3

    invoke-virtual {p1, p3}, Lcom/sigmob/sdk/base/common/ag$a;->a(Z)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p1

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object p3

    iget-object p3, p3, Lcom/sigmob/sdk/base/models/rtb/Ad;->forbiden_parse_landingpage:Ljava/lang/Boolean;

    invoke-virtual {p3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p3

    invoke-virtual {p1, p3}, Lcom/sigmob/sdk/base/common/ag$a;->b(Z)Lcom/sigmob/sdk/base/common/ag$a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/common/ag$a;->a()Lcom/sigmob/sdk/base/common/ag;

    move-result-object p1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p1, p3, p2}, Lcom/sigmob/sdk/base/common/ag;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V
    .locals 6

    const/4 v2, 0x0

    const/4 v5, 0x1

    move-object v0, p0

    move-object v1, p1

    move-object v3, p2

    move v4, p3

    invoke-virtual/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/common/x;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->p:Lcom/sigmob/sdk/base/common/x;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->h:Ljava/lang/String;

    return-void
.end method

.method public a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/videoAd/f;",
            ">;)V"
        }
    .end annotation

    const-string v0, "fractionalTrackers cannot be null"

    invoke-static {p1, v0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->k:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->k:Ljava/util/List;

    invoke-static {p1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    return-void
.end method

.method public a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/common/h;->o:Z

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/h;->v:Z

    return v0
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->h:Ljava/lang/String;

    return-object v0
.end method

.method public b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public b(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string p1, "landing_page_close"

    const/4 v0, 0x0

    invoke-static {p1, v0, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/h;->d(Ljava/lang/String;)V

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->b:Ljava/lang/String;

    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->b:Ljava/lang/String;

    return-object v0
.end method

.method public c(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->c:Ljava/lang/String;

    return-void
.end method

.method public d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->c:Ljava/lang/String;

    return-object v0
.end method

.method public d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->v:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method protected d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->d:Ljava/lang/String;

    return-void
.end method

.method public e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->d:Ljava/lang/String;

    return-object v0
.end method

.method public e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->e:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public f()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->e:Ljava/lang/String;

    return-object v0
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->f:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public g()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->f:Ljava/lang/String;

    return-object v0
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->g:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->g:Ljava/lang/String;

    return-object v0
.end method

.method public h(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/h;->l()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/h;->i(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public i()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->a:Ljava/util/Map;

    return-object v0
.end method

.method public i(Ljava/lang/String;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->n:Ljava/lang/String;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p1

    const-string v0, "\u5f53\u524d\u6b63\u5728\u52aa\u529b\u4e0b\u8f7d\uff0c\u8bf7\u7a0d\u7b49"

    invoke-static {p1, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    move-object v0, p1

    :cond_1
    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->macroProcess(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getBubInteractionType()I

    move-result v2

    if-ne v2, v1, :cond_3

    new-instance p1, Lcom/czhj/sdk/common/network/JsonRequest;

    new-instance v2, Lcom/sigmob/sdk/base/common/h$2;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/h$2;-><init>(Lcom/sigmob/sdk/base/common/h;)V

    invoke-direct {p1, v0, v2, v1}, Lcom/czhj/sdk/common/network/JsonRequest;-><init>(Ljava/lang/String;Lcom/czhj/sdk/common/network/JsonRequest$Listener;I)V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getRequestQueue()Lcom/czhj/sdk/common/network/SigmobRequestQueue;

    move-result-object v0

    if-nez v0, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v0, Lcom/sigmob/sdk/base/common/h$3;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/common/h$3;-><init>(Lcom/sigmob/sdk/base/common/h;)V

    const-string v1, "download_start"

    const-string v2, "0"

    invoke-static {v1, v2, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    const/4 p1, 0x0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v2, Lcom/sigmob/sdk/base/common/h$4;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/h$4;-><init>(Lcom/sigmob/sdk/base/common/h;)V

    const-string v3, "request queue is null"

    invoke-static {v1, p1, v3, v0, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    goto :goto_0

    :cond_2
    const-string v1, "GDTRequestConvert"

    invoke-virtual {p1, v1}, Lcom/czhj/sdk/common/network/JsonRequest;->setTag(Ljava/lang/Object;)Lcom/czhj/volley/Request;

    invoke-virtual {v0, p1}, Lcom/czhj/volley/RequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    goto :goto_0

    :cond_3
    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h;->n:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h;->u:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :goto_0
    return-void
.end method

.method public j()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/h;->m:Z

    return v0
.end method

.method public k()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/h;->t:Lcom/sigmob/sdk/base/views/q$b;

    return-void
.end method
