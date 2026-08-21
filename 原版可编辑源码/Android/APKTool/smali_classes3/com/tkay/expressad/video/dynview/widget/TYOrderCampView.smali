.class public Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;


# instance fields
.field private n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

.field private o:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private p:I

.field private q:I

.field private r:I

.field private s:I

.field private t:Ljava/lang/String;

.field private u:Lcom/tkay/expressad/widget/FeedBackButton;

.field private v:Landroid/widget/ImageView;

.field private w:Z

.field private x:Lcom/tkay/expressad/video/dynview/f/c;

.field private y:Lcom/tkay/expressad/video/dynview/f/b;

.field private z:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 81
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 55
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    .line 57
    new-instance v0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->x:Lcom/tkay/expressad/video/dynview/f/c;

    .line 78
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->z:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 85
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 55
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    .line 57
    new-instance p2, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$1;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->x:Lcom/tkay/expressad/video/dynview/f/c;

    .line 78
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->z:Z

    return-void
.end method

.method private a()V
    .locals 3

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    .line 192
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x68

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;II)V
    .locals 1

    if-eqz p1, :cond_0

    .line 152
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 154
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->b()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 168
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    const/4 p1, 0x0

    .line 174
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    .line 175
    :try_start_2
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {p0, p2}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->a(I)Lorg/json/JSONObject;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "camp_position"

    .line 176
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    goto :goto_1

    :catch_2
    move-exception p2

    move-object v0, p1

    move-object p1, p2

    .line 178
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 180
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_1

    .line 181
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p2, 0x69

    invoke-interface {p1, p2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V
    .locals 2

    .line 2191
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_0

    .line 2192
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x68

    const-string v1, ""

    invoke-interface {p0, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Lcom/tkay/expressad/foundation/d/c;I)V
    .locals 2

    if-eqz p1, :cond_0

    .line 2152
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2154
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 2157
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c$c;->b()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2168
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    const/4 p1, 0x0

    .line 2174
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    .line 2175
    :try_start_2
    sget-object p1, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->a(I)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "camp_position"

    .line 2176
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    goto :goto_1

    :catch_2
    move-exception p2

    move-object v0, p1

    move-object p1, p2

    .line 2178
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 2180
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_1

    .line 2181
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p1, 0x69

    invoke-interface {p0, p1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Z)Z
    .locals 0

    .line 47
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    return-object p0
.end method

.method private b()V
    .locals 10

    .line 256
    new-instance v9, Landroid/view/animation/ScaleAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x3f800000    # 1.0f

    const/4 v3, 0x0

    const/high16 v4, 0x3f800000    # 1.0f

    const/4 v5, 0x2

    const/high16 v6, 0x3f000000    # 0.5f

    const/4 v7, 0x2

    const/high16 v8, 0x3f000000    # 0.5f

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/ScaleAnimation;-><init>(FFFFIFIF)V

    const-wide/16 v0, 0x1f4

    .line 257
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/ScaleAnimation;->setDuration(J)V

    .line 258
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {v0, v9}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)Lcom/tkay/expressad/video/dynview/f/b;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->y:Lcom/tkay/expressad/video/dynview/f/b;

    return-object p0
.end method

.method private e()V
    .locals 4

    .line 274
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    if-nez v0, :cond_0

    return-void

    .line 277
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    const/16 v2, 0x8

    if-nez v1, :cond_1

    .line 278
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 281
    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_2

    .line 282
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    return-void

    .line 285
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 286
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    .line 287
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    iput-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 289
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$3;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$3;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 302
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 303
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    return-void

    .line 305
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    return-void
.end method

.method private f()V
    .locals 3

    .line 310
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    if-nez v0, :cond_0

    return-void

    .line 313
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 314
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    const/16 v1, 0x8

    if-eqz v0, :cond_2

    .line 316
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v0

    .line 317
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 318
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 320
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$4;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$4;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    .line 327
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public createView(Landroid/view/ViewGroup;)V
    .locals 3

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    if-nez v0, :cond_1

    .line 95
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->y:Lcom/tkay/expressad/video/dynview/f/b;

    if-eqz p1, :cond_0

    .line 96
    invoke-interface {p1}, Lcom/tkay/expressad/video/dynview/f/b;->b()V

    :cond_0
    return-void

    .line 100
    :cond_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 101
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->x:Lcom/tkay/expressad/video/dynview/f/c;

    const-string v2, "order_view_callback"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 102
    new-instance v1, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v1}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-static {v1, v2}, Lcom/tkay/expressad/video/dynview/j/c;->b(Landroid/content/Context;Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object v1

    .line 103
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$2;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Landroid/view/ViewGroup;)V

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V

    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    .line 90
    iput-object p0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 5

    .line 198
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onAttachedToWindow()V

    .line 199
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 202
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    const/4 v1, 0x0

    .line 205
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    const-string v1, "camp_position"

    .line 206
    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v2

    move-object v4, v2

    move-object v2, v1

    move-object v1, v4

    .line 208
    :goto_1
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 210
    :goto_2
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v1, :cond_1

    .line 211
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v3, 0x6e

    invoke-interface {v1, v3, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public setCampOrderViewBuildCallback(Lcom/tkay/expressad/video/dynview/f/b;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->y:Lcom/tkay/expressad/video/dynview/f/b;

    return-void
.end method

.method public setCampaignExes(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 0

    .line 247
    iput p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->p:I

    .line 248
    iput p2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->q:I

    .line 249
    iput p3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->r:I

    .line 250
    iput p4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->s:I

    .line 252
    invoke-virtual {p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->setViewStatus()V

    return-void
.end method

.method public setRewarded(Z)V
    .locals 0

    .line 147
    iput-boolean p1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->z:Z

    return-void
.end method

.method public setViewStatus()V
    .locals 6

    const-string v0, "_2"

    .line 219
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    if-eqz v1, :cond_7

    iget-boolean v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->z:Z

    if-eqz v2, :cond_7

    .line 220
    iget-boolean v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    const-string v3, "tkay_native_order_camp_controller"

    invoke-virtual {p0, v2, v3}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    .line 221
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    const-string v4, "tkay_native_order_camp_feed_btn"

    invoke-virtual {p0, v3, v4}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 222
    iget-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    iget-boolean v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->w:Z

    const-string v4, "tkay_iv_link"

    invoke-virtual {p0, v3, v4}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    if-eqz v1, :cond_0

    .line 225
    iget v2, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->p:I

    iget v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->r:I

    iget v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->q:I

    iget v5, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->s:I

    invoke-virtual {v1, v2, v3, v4, v5}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 227
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    const/16 v2, 0x8

    if-eqz v1, :cond_4

    if-eqz v1, :cond_4

    .line 1277
    :try_start_0
    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    if-nez v3, :cond_1

    .line 1278
    invoke-virtual {v1, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    goto/16 :goto_0

    .line 1281
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    const/4 v3, 0x0

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_2

    .line 1282
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    goto/16 :goto_0

    .line 1285
    :cond_2
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 1286
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    .line 1287
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->o:Ljava/util/List;

    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    iput-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 1289
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$3;

    invoke-direct {v4, p0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$3;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;)V

    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 1302
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 1303
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->t:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v1, v0, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    goto :goto_0

    .line 1305
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->u:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 231
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 235
    :cond_4
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    if-eqz v0, :cond_7

    if-eqz v0, :cond_7

    .line 1313
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 1314
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 1316
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v0

    .line 1317
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 1318
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 1320
    :cond_5
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    new-instance v2, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$4;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView$4;-><init>(Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void

    .line 1327
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->v:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 239
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    nop

    :cond_7
    :goto_1
    return-void
.end method

.method public startAlphaAnimation()V
    .locals 3

    .line 262
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    const-wide/16 v1, 0x1f4

    .line 263
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    .line 264
    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method

.method public startTranslateAnimation()V
    .locals 10

    .line 268
    new-instance v9, Landroid/view/animation/TranslateAnimation;

    const/4 v1, 0x2

    const/high16 v2, 0x3f800000    # 1.0f

    const/4 v3, 0x2

    const/4 v4, 0x0

    const/4 v5, 0x2

    const/4 v6, 0x0

    const/4 v7, 0x2

    const/4 v8, 0x0

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    const-wide/16 v0, 0x1f4

    .line 269
    invoke-virtual {v9, v0, v1}, Landroid/view/animation/TranslateAnimation;->setDuration(J)V

    .line 270
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->n:Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;

    invoke-virtual {v0, v9}, Lcom/tkay/expressad/video/dynview/widget/TYOrderCampView;->startAnimation(Landroid/view/animation/Animation;)V

    return-void
.end method
