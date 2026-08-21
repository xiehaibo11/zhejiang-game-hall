.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;
.super Lcom/tkay/expressad/video/module/a/a/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "c"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 1519
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V
    .locals 0

    .line 1519
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 3

    .line 1522
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/f;->a(ILjava/lang/Object;)V

    .line 1526
    :try_start_0
    instance-of v0, p2, Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    .line 1527
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 1529
    :cond_0
    move-object v0, p2

    check-cast v0, Ljava/lang/String;

    .line 1531
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->p(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 1532
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "type"

    .line 1535
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const-string v2, "complete"

    .line 1536
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x2

    if-eq v0, v2, :cond_2

    const/4 v2, 0x3

    if-eq v0, v2, :cond_1

    .line 1546
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cv:I

    invoke-static {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I

    goto :goto_1

    .line 1543
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cw:I

    invoke-static {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I

    goto :goto_1

    .line 1540
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cx:I

    invoke-static {v0, v2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I

    .line 1549
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_3
    const/16 v0, 0x78

    if-eq p1, v0, :cond_8

    const/16 v0, 0x7e

    if-eq p1, v0, :cond_7

    const/16 v0, 0x7f

    if-eq p1, v0, :cond_6

    packed-switch p1, :pswitch_data_0

    goto :goto_3

    .line 1611
    :pswitch_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    const/4 v0, 0x1

    if-eqz p2, :cond_4

    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_2

    :cond_4
    const-string p2, ""

    :goto_2
    invoke-interface {p1, v0, p2}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V

    :goto_3
    return-void

    .line 1590
    :pswitch_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void

    .line 1557
    :pswitch_2
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1559
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result p1

    if-eqz p1, :cond_5

    .line 1560
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void

    .line 1562
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->j()V

    return-void

    .line 1567
    :pswitch_3
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->j()V

    return-void

    .line 1570
    :pswitch_4
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->q(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1571
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->r(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Ljava/lang/Runnable;

    move-result-object p2

    const-wide/16 v0, 0xfa

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 1573
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    return-void

    .line 1584
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1585
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    .line 1586
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->c()V

    .line 1587
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object p1

    const/16 p2, 0x64

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/signal/e;->showEndcard(I)V

    return-void

    .line 1580
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void

    .line 1576
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$c;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->c()V

    return-void

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_4
        :pswitch_3
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
