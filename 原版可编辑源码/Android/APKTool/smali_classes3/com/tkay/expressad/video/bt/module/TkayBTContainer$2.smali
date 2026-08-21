.class final Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V
    .locals 0

    .line 344
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/video/dynview/a;)V
    .locals 7

    .line 348
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->b(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_4

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->b(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->b(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/a;->a()Landroid/view/View;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 351
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    const-string v0, "tkay_choice_one_countdown_tv"

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Landroid/widget/TextView;)Landroid/widget/TextView;

    .line 352
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->c(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/video/bt/module/a/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 353
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->c(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/video/bt/module/a/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/a/a;->a()V

    .line 356
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 357
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->d(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/util/List;

    move-result-object p1

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_3

    .line 366
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v0

    .line 367
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v3}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->e(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 370
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->M()I

    move-result v1

    goto :goto_0

    :cond_1
    move v1, v2

    .line 372
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->n()I

    move-result v3

    const-string v4, "&tmorl="

    if-ne v3, v2, :cond_2

    .line 373
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&to=1&cbt="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    .line 375
    :cond_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "&to=0&cbt="

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    move-object v3, v0

    .line 377
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->f(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    const/4 v5, 0x1

    sget v6, Lcom/tkay/expressad/a/a/a;->j:I

    move-object v1, p1

    invoke-static/range {v0 .. v6}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 378
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->h:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 379
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_3
    return-void

    .line 383
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    const-string v0, "nativeview is null"

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 393
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "errorCode:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c/b;->a()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "Msg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/dynview/c/b;->b()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 395
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$2;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "nativeview is null"

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->a(Ljava/lang/String;)V

    return-void
.end method
