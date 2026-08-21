.class public Lcom/sigmob/sdk/mraid/n;
.super Lcom/sigmob/sdk/mraid/i;

# interfaces
.implements Lcom/sigmob/sdk/mraid/i$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/n$a;
    }
.end annotation


# static fields
.field public static final c:I = 0x0

.field public static final d:I = 0x1

.field public static final e:I = 0x2

.field public static final f:I = 0x3

.field public static final g:I = 0x4

.field public static final h:I = 0x0

.field public static final i:I = 0x1

.field public static final j:I = 0x2

.field public static final k:I = 0x4

.field public static final l:I = 0x8


# instance fields
.field private m:Lcom/sigmob/sdk/mraid/l;

.field private n:Landroid/content/Context;

.field private o:Lcom/sigmob/sdk/mraid/n$a;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/i;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/n;->o:Lcom/sigmob/sdk/mraid/n$a;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    return-object p0
.end method


# virtual methods
.method public a(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 0

    new-instance p2, Lcom/sigmob/sdk/mraid/l;

    invoke-direct {p2, p1}, Lcom/sigmob/sdk/mraid/l;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    new-instance p1, Lcom/sigmob/sdk/mraid/n$1;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/mraid/n$1;-><init>(Lcom/sigmob/sdk/mraid/n;)V

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/mraid/l;->setVideoPlayerStatusListener(Lcom/sigmob/sdk/videoplayer/l;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/mraid/n$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/n;->o:Lcom/sigmob/sdk/mraid/n$a;

    return-void
.end method

.method public a(Lorg/json/JSONObject;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz v0, :cond_0

    const-string v0, "URL"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/l;->setUp(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->m()V

    :cond_0
    return-void
.end method

.method public b()Landroid/view/View;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    return-object v0
.end method

.method public b(Lorg/json/JSONObject;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->d()V

    :cond_0
    return-void
.end method

.method public c()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz v0, :cond_0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/l;->removeAllViews()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/l;->q()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    :cond_0
    return-void
.end method

.method public c(Lorg/json/JSONObject;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/l;->a(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->d()V

    :cond_0
    return-void
.end method

.method public d(Lorg/json/JSONObject;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->i()V

    :cond_0
    return-void
.end method

.method public e(Lorg/json/JSONObject;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->h()V

    :cond_0
    return-void
.end method

.method public f(Lorg/json/JSONObject;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    const-string v1, "muted"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/mraid/l;->setMute(Z)V

    :cond_0
    return-void
.end method

.method public g(Lorg/json/JSONObject;)V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz v0, :cond_0

    const-wide/16 v0, 0x0

    const-string v2, "seekTime"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    double-to-int v0, v0

    mul-int/lit16 v0, v0, 0x3e8

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/l;->a(I)V

    :cond_0
    return-void
.end method

.method public h(Lorg/json/JSONObject;)V
    .locals 5

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    if-eqz v0, :cond_2

    const-string v0, "frame"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const/4 v0, 0x0

    const-string v1, "x"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const-string v2, "y"

    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const/4 v2, -0x1

    const-string v3, "w"

    invoke-virtual {p1, v3, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string v4, "h"

    invoke-virtual {p1, v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-lez v3, :cond_0

    int-to-float v2, v3

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v3

    :cond_0
    if-lez p1, :cond_1

    int-to-float p1, p1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    :cond_1
    new-instance v2, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v2, v3, p1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    int-to-float v1, v1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/mraid/l;->setX(F)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    int-to-float v0, v0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/l;->setY(F)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/mraid/l;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n;->m:Lcom/sigmob/sdk/mraid/l;

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->requestLayout()V

    :cond_2
    return-void
.end method
