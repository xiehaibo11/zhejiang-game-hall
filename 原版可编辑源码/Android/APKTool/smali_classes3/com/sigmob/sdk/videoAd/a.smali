.class public Lcom/sigmob/sdk/videoAd/a;
.super Lcom/sigmob/sdk/base/common/h;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field protected static final serialVersionUID:J = 0x2L


# instance fields
.field protected k:Lcom/sigmob/sdk/videoAd/h;

.field protected l:Lcom/sigmob/sdk/videoAd/h;

.field protected m:Z

.field protected n:I

.field protected o:I

.field protected p:F

.field protected q:I

.field protected r:I

.field protected s:Z

.field private final t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/videoAd/f;",
            ">;"
        }
    .end annotation
.end field

.field private u:I

.field private v:I

.field private w:Z

.field private x:Lcom/sigmob/sdk/videoAd/e;

.field private y:I

.field private z:Z


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/h;-><init>()V

    const/4 v0, 0x3

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->n:I

    const/4 v0, 0x4

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->o:I

    const/high16 v0, 0x3f800000    # 1.0f

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->p:F

    const/16 v0, -0x3e8

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->q:I

    const/16 v0, 0x64

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->r:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/a;->s:Z

    const/4 v1, -0x1

    iput v1, p0, Lcom/sigmob/sdk/videoAd/a;->u:I

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/sigmob/sdk/videoAd/a;->w:Z

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/a;->x:Lcom/sigmob/sdk/videoAd/e;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/sigmob/sdk/videoAd/a;->t:Ljava/util/List;

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoAd/a;->m:Z

    return-void
.end method

.method private d(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/a;->m:Z

    return-void
.end method

.method public static f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/videoAd/a;
    .locals 6

    new-instance v0, Lcom/sigmob/sdk/videoAd/a;

    invoke-direct {v0}, Lcom/sigmob/sdk/videoAd/a;-><init>()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->d(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    move v1, v3

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-direct {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->d(Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->video_reciprocal_millisecond:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->h(I)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v1

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->creative_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    sget-object v4, Lcom/sigmob/sdk/base/common/l;->e:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v4

    if-eq v1, v4, :cond_1

    move v2, v3

    :cond_1
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/videoAd/a;->c(Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRvAdSetting()Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;

    move-result-object p0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->q()Lcom/sigmob/sdk/base/models/config/DialogSetting;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/videoAd/e;

    if-eqz v1, :cond_2

    iget-object v3, v1, Lcom/sigmob/sdk/base/models/config/DialogSetting;->title:Ljava/lang/String;

    iget-object v4, v1, Lcom/sigmob/sdk/base/models/config/DialogSetting;->body_text:Ljava/lang/String;

    iget-object v5, v1, Lcom/sigmob/sdk/base/models/config/DialogSetting;->cancel_button_text:Ljava/lang/String;

    iget-object v1, v1, Lcom/sigmob/sdk/base/models/config/DialogSetting;->close_button_text:Ljava/lang/String;

    invoke-direct {v2, v3, v4, v5, v1}, Lcom/sigmob/sdk/videoAd/e;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    invoke-static {}, Lcom/sigmob/sdk/base/d;->k()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/d;->j()Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Lcom/sigmob/sdk/base/d;->m()Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Lcom/sigmob/sdk/base/d;->l()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v2, v1, v3, v4, v5}, Lcom/sigmob/sdk/videoAd/e;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/videoAd/e;)V

    if-eqz p0, :cond_3

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->enable_exit_on_video_close:Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->b(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_percent:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->i(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->skip_seconds:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->k(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->endcard_close_position:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->d(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->video_close_position:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->e(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->mute_postion:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->f(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->finished:Ljava/lang/Float;

    invoke-virtual {v1}, Ljava/lang/Float;->floatValue()F

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->a(F)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->if_mute:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videoAd/a;->g(I)V

    iget-object p0, p0, Lcom/sigmob/sdk/base/models/rtb/RvAdSetting;->end_time:Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/videoAd/a;->c(I)V

    :cond_3
    return-object v0
.end method

.method public static g(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/videoAd/h;
    .locals 13

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v1, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->click_type:Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    sget-object v1, Lcom/sigmob/sdk/base/views/k$a;->b:Lcom/sigmob/sdk/base/views/k$a;

    goto :goto_0

    :cond_0
    sget-object v1, Lcom/sigmob/sdk/base/views/k$a;->c:Lcom/sigmob/sdk/base/views/k$a;

    :goto_0
    move-object v5, v1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->resourcePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeResourceType()Lcom/sigmob/sdk/base/views/k$b;

    move-result-object v4

    new-instance v12, Lcom/sigmob/sdk/base/views/k;

    const/16 v6, 0x2d0

    const/16 v7, 0x400

    move-object v2, v12

    invoke-direct/range {v2 .. v7}, Lcom/sigmob/sdk/base/views/k;-><init>(Ljava/lang/String;Lcom/sigmob/sdk/base/views/k$b;Lcom/sigmob/sdk/base/views/k$a;II)V

    new-instance v1, Lcom/sigmob/sdk/videoAd/h;

    const/16 v7, 0x300

    const/16 v8, 0x400

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getInteractionType()I

    move-result v9

    iget-object v10, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->landing_page:Ljava/lang/String;

    iget-object v11, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->deeplink_url:Ljava/lang/String;

    move-object v6, v1

    invoke-direct/range {v6 .. v12}, Lcom/sigmob/sdk/videoAd/h;-><init>(IIILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/views/k;)V

    return-object v1

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public a(F)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->p:F

    return-void
.end method

.method public a(Landroid/content/Context;I)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public a(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public a(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoAd/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/a;->x:Lcom/sigmob/sdk/videoAd/e;

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/a;->h:Ljava/lang/String;

    return-void
.end method

.method public a(ZIILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    return-void
.end method

.method public b(I)I
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->y:I

    if-eqz v0, :cond_1

    mul-int/lit16 v1, v0, 0x3e8

    if-le v1, p1, :cond_0

    goto :goto_0

    :cond_0
    mul-int/lit16 v0, v0, 0x3e8

    return v0

    :cond_1
    :goto_0
    return p1
.end method

.method public b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/a;->h:Ljava/lang/String;

    return-object v0
.end method

.method public b(Landroid/content/Context;I)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public b(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public b(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/a;->w:Z

    return-void
.end method

.method public c(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->y:I

    return-void
.end method

.method public c(Landroid/content/Context;IILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    return-void
.end method

.method public c(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoAd/a;->s:Z

    return-void
.end method

.method public d(I)V
    .locals 1

    if-lez p1, :cond_0

    const/4 v0, 0x5

    if-ge p1, v0, :cond_0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->n:I

    :cond_0
    return-void
.end method

.method public e(I)V
    .locals 1

    if-lez p1, :cond_0

    const/4 v0, 0x5

    if-ge p1, v0, :cond_0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->i:I

    :cond_0
    return-void
.end method

.method public e(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/a;->e:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public f()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/a;->e:Ljava/lang/String;

    return-object v0
.end method

.method public f(I)V
    .locals 1

    if-lez p1, :cond_0

    const/4 v0, 0x5

    if-ge p1, v0, :cond_0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->o:I

    :cond_0
    return-void
.end method

.method public f(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/a;->f:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public g()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/a;->f:Ljava/lang/String;

    return-object v0
.end method

.method public g(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->v:I

    return-void
.end method

.method public g(Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/a;->g:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public h()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/a;->g:Ljava/lang/String;

    return-object v0
.end method

.method public h(I)V
    .locals 0

    if-eqz p1, :cond_0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->q:I

    :cond_0
    return-void
.end method

.method public i(I)V
    .locals 1

    if-gez p1, :cond_1

    const/4 p1, 0x0

    :cond_0
    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->r:I

    goto :goto_0

    :cond_1
    const/16 v0, 0x64

    if-le p1, v0, :cond_0

    iput v0, p0, Lcom/sigmob/sdk/videoAd/a;->r:I

    :goto_0
    return-void
.end method

.method public j(I)I
    .locals 2

    int-to-float p1, p1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->r:I

    int-to-float v0, v0

    const/high16 v1, 0x42c80000    # 100.0f

    div-float/2addr v0, v1

    mul-float/2addr p1, v0

    float-to-int p1, p1

    return p1
.end method

.method public k(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/videoAd/a;->u:I

    return-void
.end method

.method public l()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->y:I

    return v0
.end method

.method public m()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/a;->w:Z

    return v0
.end method

.method public n()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->n:I

    return v0
.end method

.method public o()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->i:I

    return v0
.end method

.method public p()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->o:I

    return v0
.end method

.method public q()F
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->p:F

    return v0
.end method

.method public r()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->v:I

    return v0
.end method

.method public s()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->q:I

    return v0
.end method

.method public t()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/a;->s:Z

    return v0
.end method

.method public u()Lcom/sigmob/sdk/videoAd/e;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoAd/a;->x:Lcom/sigmob/sdk/videoAd/e;

    return-object v0
.end method

.method public v()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public w()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->r:I

    return v0
.end method

.method public x()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoAd/a;->m:Z

    return v0
.end method

.method public y()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoAd/a;->u:I

    return v0
.end method
