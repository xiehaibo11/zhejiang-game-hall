.class public Lcom/sigmob/sdk/base/common/ae;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/sigmob/windad/WindAdRequest;

.field private g:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private h:Lcom/sigmob/sdk/base/common/z$a;

.field private i:Lcom/sigmob/sdk/base/models/BaseAdUnit;


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "5"

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/ae;->e:Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/common/ae;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/ae;-><init>()V

    iput-object p0, v0, Lcom/sigmob/sdk/base/common/ae;->a:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/common/z$a;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->h:Lcom/sigmob/sdk/base/common/z$a;

    return-object p0
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method public a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->g:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    return-object p0
.end method

.method public a(Lcom/sigmob/windad/WindAdRequest;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->f:Lcom/sigmob/windad/WindAdRequest;

    return-object p0
.end method

.method public a()V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;-><init>()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAc_type(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCategory(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setSub_category(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ae;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/ae;->i:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v1, v2, v3, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ae;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/ae;->f:Lcom/sigmob/windad/WindAdRequest;

    invoke-static {v1, v2, v0, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/windad/WindAdRequest;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ae;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/sigmob/sdk/base/common/ae;->g:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-static {v1, v2, v0, v3}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ae;->h:Lcom/sigmob/sdk/base/common/z$a;

    if-eqz v1, :cond_1

    invoke-interface {v1, v0}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_1
    invoke-static {v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->commit()V

    return-void
.end method

.method public b(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->c:Ljava/lang/String;

    return-object p0
.end method

.method public c(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->c:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->c:Ljava/lang/String;

    return-object p0
.end method

.method public d(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->b:Ljava/lang/String;

    return-object p0
.end method

.method public e(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ae;->d:Ljava/lang/String;

    return-object p0
.end method
