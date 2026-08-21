.class Lcom/sigmob/sdk/base/views/t$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/t;->b()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/t;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/t;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    const-string v0, "RecommendDialog onEndCardShow()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(F)V
    .locals 0

    const-string p1, "RecommendDialog onReward()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V
    .locals 4

    iget-object p5, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p5}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object p5

    invoke-virtual {p5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p5

    invoke-virtual {p5}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p5

    iget p5, p5, Landroid/util/DisplayMetrics;->widthPixels:I

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "RecommendDialog Origin onResize :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "=="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    int-to-float p1, p1

    invoke-static {v1}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    invoke-static {v1, p1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;I)I

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    int-to-float p2, p2

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p2

    invoke-static {p1, p2}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;I)I

    int-to-float p1, p3

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    int-to-float p2, p4

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p2

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;

    move-result-object p3

    if-eqz p3, :cond_8

    if-nez p6, :cond_5

    const/4 p3, 0x0

    if-gez p1, :cond_0

    move p1, p3

    :cond_0
    if-le p1, p5, :cond_1

    move p1, p5

    :cond_1
    if-gez p2, :cond_2

    move p2, p3

    :cond_2
    if-le p2, v0, :cond_3

    move p2, v0

    :cond_3
    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->f(Lcom/sigmob/sdk/base/views/t;)I

    move-result p3

    add-int/2addr p3, p1

    if-le p3, p5, :cond_4

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sub-int/2addr p5, p1

    invoke-static {p3, p5}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;I)I

    :cond_4
    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->g(Lcom/sigmob/sdk/base/views/t;)I

    move-result p3

    add-int/2addr p3, p2

    if-le p3, v0, :cond_5

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sub-int/2addr v0, p2

    invoke-static {p3, v0}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;I)I

    :cond_5
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "RecommendDialog onResize: "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p4, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p4}, Lcom/sigmob/sdk/base/views/t;->f(Lcom/sigmob/sdk/base/views/t;)I

    move-result p4

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p4, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p4}, Lcom/sigmob/sdk/base/views/t;->g(Lcom/sigmob/sdk/base/views/t;)I

    move-result p4

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->f(Lcom/sigmob/sdk/base/views/t;)I

    move-result p3

    if-lez p3, :cond_6

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->g(Lcom/sigmob/sdk/base/views/t;)I

    move-result p3

    if-gtz p3, :cond_7

    :cond_6
    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    const/4 p4, 0x1

    invoke-static {p3, p4}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;Z)Z

    :cond_7
    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;

    move-result-object p3

    int-to-float p1, p1

    invoke-virtual {p3, p1}, Landroid/view/View;->setX(F)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;

    move-result-object p1

    int-to-float p2, p2

    invoke-virtual {p1, p2}, Landroid/view/View;->setY(F)V

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->f(Lcom/sigmob/sdk/base/views/t;)I

    move-result p2

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->g(Lcom/sigmob/sdk/base/views/t;)I

    move-result p3

    invoke-direct {p1, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/View;->requestLayout()V

    :cond_8
    return-void
.end method

.method public a(Landroid/view/View;)V
    .locals 0

    const-string p1, "RecommendDialog onLoaded()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RecommendDialog onRenderProcessGone:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;Z)Z

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RecommendDialog onCompanionClick:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "type"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const-string v2, "x"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "y"

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iget-object v3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v3}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v3

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eq p1, v1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    move v1, p1

    goto :goto_0

    :catch_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    const-string v0, "0"

    invoke-virtual {p1, v0, v0}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->c(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v2}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v0, v2, v1}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    return-void
.end method

.method public a(Ljava/net/URI;ILjava/lang/String;)V
    .locals 8

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RecommendDialog  onOpen:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "======"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "====="

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x0

    const-string v1, "0"

    const/4 v2, 0x1

    if-nez p2, :cond_2

    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p3, "type"

    invoke-virtual {p2, p3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    const-string v3, "x"

    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "y"

    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    const-string v5, "disable_landing"

    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v6, "feDisable"

    invoke-virtual {p2, v6}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-nez p2, :cond_0

    move p2, v2

    goto :goto_0

    :cond_0
    move p2, v0

    :goto_0
    :try_start_2
    iget-object v6, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v6}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v6

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v3, v4}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eq p3, v2, :cond_1

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    move v0, v2

    :cond_1
    move v6, p2

    move v7, v5

    move v5, v0

    move v0, v7

    goto :goto_2

    :catch_0
    move p2, v2

    :catch_1
    move v0, v5

    goto :goto_1

    :catch_2
    move p2, v2

    :goto_1
    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p3}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p3

    invoke-virtual {p3, v1, v1}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p3, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p3, v1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    move v6, p2

    move v5, v2

    goto :goto_2

    :cond_2
    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p2

    invoke-virtual {p2, v1, v1}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object p3, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p2, p3}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    move v5, v2

    move v6, v5

    :goto_2
    if-nez v0, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->h(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    goto :goto_3

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->c(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    const/4 v3, 0x0

    goto :goto_4

    :cond_4
    :goto_3
    iget-object p2, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p2}, Lcom/sigmob/sdk/base/views/t;->c(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    invoke-virtual {p1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_4
    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/t;->b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V

    return-void
.end method

.method public a(Z)V
    .locals 0

    const-string p1, "RecommendDialog onMute()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public b()V
    .locals 1

    const-string v0, "RecommendDialog onShowSkipTime()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public b(F)V
    .locals 0

    const-string p1, "RecommendDialog onSkip()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 1

    const-string v0, "RecommendDialog onExpand()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public d()V
    .locals 2

    const-string v0, "RecommendDialog onFailedToLoad()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;Z)Z

    return-void
.end method

.method public e()V
    .locals 2

    const-string v0, "RecommendDialog onUnload()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/t;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->e:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/t;->c()V

    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method

.method public g()V
    .locals 2

    const-string v0, "RecommendDialog onClose()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->b:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/views/t$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t$2;->a:Lcom/sigmob/sdk/base/views/t;

    invoke-static {v0}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/views/t$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/views/t$a;->a()V

    :cond_0
    return-void
.end method
