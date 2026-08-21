.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;
.super Lcom/tkay/expressad/video/signal/a/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "d"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 1617
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/c$a;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V
    .locals 0

    .line 1617
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 1

    .line 1678
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(ILjava/lang/String;)V

    .line 1679
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->defaultLoad(ILjava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 0

    .line 1627
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 1628
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->s(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 0

    .line 1672
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 1673
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 2

    .line 1637
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    .line 1638
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1639
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->u(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    if-eqz p1, :cond_2

    .line 1640
    instance-of p2, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p2, :cond_2

    .line 1642
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 1643
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/j;->getCurrentProgress()Ljava/lang/String;

    move-result-object p2

    .line 1644
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "progress"

    const-string v1, ""

    .line 1645
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1646
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->C()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    const-string p1, "1.0"

    .line 1647
    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->v(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1648
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->w(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1649
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void

    .line 1651
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->x(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 1656
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public final b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 0

    .line 1665
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    .line 1666
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->u(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    .line 1667
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->t(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    return-void
.end method

.method public final c()V
    .locals 1

    .line 1621
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c$a;->c()V

    .line 1622
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->receiveSuccess()V

    return-void
.end method

.method public final d()V
    .locals 2

    .line 1684
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c$a;->d()V

    .line 1685
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 1686
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v0, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$d;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object v1, v1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method
