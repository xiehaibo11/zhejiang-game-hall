.class public final Lcom/tkay/expressad/video/dynview/ordercamp/a/a;
.super Landroid/widget/BaseAdapter;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "OrderCampAdapter"

.field private static final e:Ljava/lang/String; = "tkay_lv_item_rl"

.field private static final f:Ljava/lang/String; = "tkay_lv_iv"

.field private static final g:Ljava/lang/String; = "tkay_lv_icon_iv"

.field private static final h:Ljava/lang/String; = "tkay_lv_title_tv"

.field private static final i:Ljava/lang/String; = "tkay_lv_tv_install"

.field private static final j:Ljava/lang/String; = "tkay_lv_sv_starlevel"

.field private static final k:Ljava/lang/String; = "tkay_lv_sv_heat_level"

.field private static final l:Ljava/lang/String; = "tkay_lv_ration"

.field private static final m:Ljava/lang/String; = "tkay_lv_desc_tv"

.field private static final n:Ljava/lang/String; = "tkay_iv_flag"

.field private static final o:Ljava/lang/String; = "tkay_order_viewed_tv"

.field private static final p:Ljava/lang/String; = "tkay_order_layout_item"

.field private static final q:Ljava/lang/String; = "tkay_lv_iv_burl"

.field private static final r:Ljava/lang/String; = "501"

.field private static final s:Ljava/lang/String; = "\\.xml"

.field private static final t:Ljava/lang/String; = "\\/xml"

.field private static final u:Ljava/lang/String; = "_item.xml"


# instance fields
.field private b:Z

.field private c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 63
    invoke-direct {p0}, Landroid/widget/BaseAdapter;-><init>()V

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b:Z

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    return-void
.end method

.method private static a(Ljava/lang/String;)I
    .locals 2

    .line 316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p0, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method private a()Landroid/view/View;
    .locals 4

    .line 4244
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    .line 4316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_order_layout_item"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    .line 4244
    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 4245
    new-instance v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_iv"

    .line 4246
    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    .line 4248
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_icon_iv"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    .line 4249
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_sv_starlevel"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    .line 4250
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_ration"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    .line 4251
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-virtual {v0, v1}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/ordercamp/a/a;)Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    return-object p0
.end method

.method private a(I)V
    .locals 7

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    if-eqz v0, :cond_7

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    if-nez v1, :cond_0

    goto/16 :goto_0

    .line 148
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 151
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 152
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p0, v0, v2, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 159
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    if-eqz v0, :cond_3

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    const/16 v2, 0x19

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    invoke-direct {p0, v0, v2, v3}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 163
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aX()D

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmpg-double v0, v2, v4

    if-gtz v0, :cond_4

    const-wide/high16 v2, 0x4014000000000000L    # 5.0

    .line 167
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    if-eqz v0, :cond_5

    .line 168
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v4, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result p1

    invoke-virtual {v0, v2, v3, p1}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setRatingAndUser(DI)V

    .line 169
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setOrientation(I)V

    .line 171
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    if-eqz p1, :cond_6

    .line 172
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setWidthRatio(F)V

    .line 173
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setHeightRatio(F)V

    .line 174
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setAutoscroll(Z)V

    .line 176
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz p1, :cond_7

    .line 177
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    const/16 v1, 0x1e

    const/16 v2, 0x1e

    const/16 v3, 0x1e

    const/16 v4, 0x1e

    const/16 v5, 0xa

    const/high16 v6, -0x67000000

    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setCustomBorder(IIIIII)V

    :cond_7
    :goto_0
    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 2

    .line 256
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_item_rl"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->a:Landroid/widget/RelativeLayout;

    .line 257
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_title_tv"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    .line 258
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_tv_install"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    .line 260
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_desc_tv"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    .line 261
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_iv_flag"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    .line 262
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_order_viewed_tv"

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    return-void
.end method

.method private a(Landroid/widget/ImageView;Ljava/lang/String;Z)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 269
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    if-eqz p3, :cond_1

    const/16 p2, 0x8

    .line 271
    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void

    .line 275
    :cond_2
    invoke-virtual {p1}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$1;

    invoke-direct {v1, p0, p1, p3}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$1;-><init>(Lcom/tkay/expressad/video/dynview/ordercamp/a/a;Landroid/widget/ImageView;Z)V

    invoke-virtual {v0, p2, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method private static b(Ljava/lang/String;)I
    .locals 2

    .line 320
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p0, v1}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method private b()Landroid/view/View;
    .locals 4

    .line 244
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    .line 5316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "tkay_order_layout_item"

    const-string v3, "layout"

    invoke-static {v1, v2, v3}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    .line 244
    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 245
    new-instance v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_iv"

    .line 246
    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    .line 248
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_icon_iv"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    .line 249
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_sv_starlevel"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    .line 250
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v2, "tkay_lv_ration"

    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    iput-object v2, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    .line 251
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-virtual {v0, v1}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    return-object v0
.end method

.method private b(I)V
    .locals 3

    .line 331
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    if-eqz v0, :cond_5

    .line 332
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 333
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 334
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    .line 335
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 337
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 338
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v0

    .line 339
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 341
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    if-eqz v0, :cond_3

    .line 6175
    iget-object v0, p1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 343
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    instance-of v1, v1, Lcom/tkay/expressad/video/dynview/widget/TYTextView;

    if-eqz v1, :cond_2

    .line 344
    new-instance v1, Lcom/tkay/expressad/video/dynview/h/b;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/h/b;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->c(Landroid/view/View;)Landroid/animation/ObjectAnimator;

    move-result-object v1

    .line 345
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v2, v2, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYTextView;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/dynview/widget/TYTextView;->setObjectAnimator(Landroid/animation/ObjectAnimator;)V

    .line 347
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 350
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_4

    .line 352
    :try_start_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    .line 353
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 364
    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object p1

    new-instance v2, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$2;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$2;-><init>(Lcom/tkay/expressad/video/dynview/ordercamp/a/a;Landroid/content/Context;)V

    invoke-virtual {v1, p1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 388
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 391
    :cond_4
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    if-eqz p1, :cond_5

    .line 393
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 394
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "tkay_reward_viewed_text_str"

    const-string v2, "string"

    invoke-virtual {v0, v1, v2, p1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 395
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 396
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 398
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_5
    return-void
.end method

.method private static c(Ljava/lang/String;)I
    .locals 1

    .line 324
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 325
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result p0

    return p0

    :cond_0
    const/4 p0, -0x1

    return p0
.end method

.method private d(Ljava/lang/String;)I
    .locals 1

    .line 412
    iget-boolean v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b:Z

    if-eqz v0, :cond_0

    .line 413
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    .line 415
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result p1

    :goto_0
    return p1
.end method


# virtual methods
.method public final getCount()I
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getItem(I)Ljava/lang/Object;
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 79
    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final getItemId(I)J
    .locals 2

    int-to-long v0, p1

    return-wide v0
.end method

.method public final getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 8

    if-nez p2, :cond_0

    .line 1244
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p3

    const-string v0, "tkay_order_layout_item"

    .line 1316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "layout"

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/foundation/h/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    .line 1244
    invoke-virtual {p3, v0, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p3

    .line 1245
    new-instance v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_iv"

    .line 1246
    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    .line 1248
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_icon_iv"

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    .line 1249
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_sv_starlevel"

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    .line 1250
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v1, "tkay_lv_ration"

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p3, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    iput-object v1, v0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    .line 1251
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    invoke-virtual {p3, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    move-object p2, p3

    goto :goto_0

    .line 96
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iput-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    .line 2256
    :goto_0
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_lv_item_rl"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->a:Landroid/widget/RelativeLayout;

    .line 2257
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_lv_title_tv"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    .line 2258
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_lv_tv_install"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    .line 2260
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_lv_desc_tv"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    .line 2261
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_iv_flag"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    .line 2262
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    const-string v0, "tkay_order_viewed_tv"

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    .line 3145
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    const/4 v0, 0x0

    if-eqz p3, :cond_7

    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    if-nez p3, :cond_1

    goto/16 :goto_1

    .line 3148
    :cond_1
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p3

    if-eqz p3, :cond_7

    .line 3151
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz p3, :cond_2

    .line 3152
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, p3, v1, v0}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 3159
    :cond_2
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    if-eqz p3, :cond_3

    .line 3160
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    const/16 v1, 0x19

    invoke-virtual {p3, v1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 3161
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->d:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-direct {p0, p3, v1, v2}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 3163
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {p3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->aX()D

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmpg-double p3, v1, v3

    if-gtz p3, :cond_4

    const-wide/high16 v1, 0x4014000000000000L    # 5.0

    .line 3167
    :cond_4
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    if-eqz p3, :cond_5

    .line 3168
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v3

    invoke-virtual {p3, v1, v2, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setRatingAndUser(DI)V

    .line 3169
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->i:Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    invoke-virtual {p3, v0}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setOrientation(I)V

    .line 3171
    :cond_5
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    if-eqz p3, :cond_6

    .line 3172
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {p3, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setWidthRatio(F)V

    .line 3173
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    invoke-virtual {p3, v1}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setHeightRatio(F)V

    .line 3174
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->b:Lcom/tkay/expressad/video/dynview/widget/ATRotationView;

    invoke-virtual {p3, v0}, Lcom/tkay/expressad/video/dynview/widget/ATRotationView;->setAutoscroll(Z)V

    .line 3176
    :cond_6
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    if-eqz p3, :cond_7

    .line 3177
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->c:Lcom/tkay/expressad/video/dynview/widget/TYImageView;

    const/16 v2, 0x1e

    const/16 v3, 0x1e

    const/16 v4, 0x1e

    const/16 v5, 0x1e

    const/16 v6, 0xa

    const/high16 v7, -0x67000000

    invoke-virtual/range {v1 .. v7}, Lcom/tkay/expressad/video/dynview/widget/TYImageView;->setCustomBorder(IIIIII)V

    .line 3331
    :cond_7
    :goto_1
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    if-eqz p3, :cond_d

    .line 3332
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->d:Ljava/util/List;

    invoke-interface {p3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 3333
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    if-eqz p3, :cond_8

    .line 3334
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object p3

    .line 3335
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    invoke-virtual {v1, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3337
    :cond_8
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    if-eqz p3, :cond_9

    .line 3338
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object p3

    .line 3339
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    invoke-virtual {v1, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3341
    :cond_9
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    if-eqz p3, :cond_b

    .line 4175
    iget-object p3, p1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 3343
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    instance-of v1, v1, Lcom/tkay/expressad/video/dynview/widget/TYTextView;

    if-eqz v1, :cond_a

    .line 3344
    new-instance v1, Lcom/tkay/expressad/video/dynview/h/b;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/h/b;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/h/b;->c(Landroid/view/View;)Landroid/animation/ObjectAnimator;

    move-result-object v1

    .line 3345
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v2, v2, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYTextView;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/dynview/widget/TYTextView;->setObjectAnimator(Landroid/animation/ObjectAnimator;)V

    .line 3347
    :cond_a
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object v1, v1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-virtual {v1, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3350
    :cond_b
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-eqz p3, :cond_c

    .line 3352
    :try_start_1
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object p3

    invoke-virtual {p3}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    .line 3353
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    .line 3364
    invoke-static {p3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object p1

    new-instance v2, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$2;

    invoke-direct {v2, p0, p3}, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$2;-><init>(Lcom/tkay/expressad/video/dynview/ordercamp/a/a;Landroid/content/Context;)V

    invoke-virtual {v1, p1, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception p1

    .line 3388
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 3391
    :cond_c
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    if-eqz p1, :cond_d

    .line 3393
    :try_start_3
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 3394
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    const-string v1, "tkay_reward_viewed_text_str"

    const-string v2, "string"

    invoke-virtual {p3, v1, v2, p1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 3395
    iget-object p3, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p3, p3, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1, p1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3396
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/ordercamp/a/a;->c:Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;

    iget-object p1, p1, Lcom/tkay/expressad/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setVisibility(I)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_3

    :catch_1
    move-exception p1

    .line 3398
    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_3

    :catch_2
    move-exception p1

    .line 107
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_d
    :goto_3
    return-object p2
.end method
