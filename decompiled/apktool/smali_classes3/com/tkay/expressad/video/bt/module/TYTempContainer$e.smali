.class final Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;
.super Lcom/tkay/expressad/video/module/a/a/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TYTempContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "e"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V
    .locals 0

    .line 1301
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/f;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;B)V
    .locals 0

    .line 1301
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;-><init>(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 2

    .line 1304
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/f;->a(ILjava/lang/Object;)V

    .line 1305
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->e(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1307
    :try_start_0
    instance-of v0, p2, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 1308
    check-cast p2, Ljava/lang/String;

    .line 1309
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 1310
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1311
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const-string v1, "Alert_window_status"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v1

    invoke-static {p2, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->b(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I

    .line 1312
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const-string v1, "complete_info"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    invoke-static {p2, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->c(Lcom/tkay/expressad/video/bt/module/TYTempContainer;I)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 1316
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    const/4 p2, 0x2

    const/4 v0, 0x0

    if-eq p1, p2, :cond_7

    const/16 p2, 0x79

    if-eq p1, p2, :cond_5

    const/16 p2, 0x10

    if-eq p1, p2, :cond_4

    const/16 p2, 0x11

    const/4 v1, 0x1

    if-eq p1, p2, :cond_3

    packed-switch p1, :pswitch_data_0

    goto :goto_1

    .line 1322
    :pswitch_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Z)Z

    .line 1323
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 1324
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1325
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->f(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1326
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->l()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 1327
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    return-void

    .line 1330
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    return-void

    .line 1333
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    return-void

    .line 1340
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1341
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz p1, :cond_6

    .line 1342
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    iget-object p1, p1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->setRewardStatus(Z)V

    return-void

    .line 1385
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void

    .line 1388
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->h(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    .line 1389
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->b()V

    .line 1390
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Z)Z

    :cond_6
    :goto_1
    return-void

    :cond_7
    :pswitch_1
    const/16 p2, 0xc

    if-ne p1, p2, :cond_b

    .line 1359
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->i(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result p1

    if-nez p1, :cond_b

    .line 1360
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->j(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->U()I

    move-result p1

    if-nez p1, :cond_8

    .line 1361
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    const-string p2, "play error"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 1362
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Z)Z

    .line 1363
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->k(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)V

    return-void

    .line 1366
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    if-eqz p1, :cond_a

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p1

    if-eqz p1, :cond_a

    .line 1367
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->l(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 1368
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->d(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->l()Z

    move-result p1

    if-eqz p1, :cond_b

    goto :goto_2

    .line 1372
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    goto :goto_3

    .line 1375
    :cond_a
    :goto_2
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->g(Lcom/tkay/expressad/video/bt/module/TYTempContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a()V

    .line 1381
    :cond_b
    :goto_3
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p1

    const/4 p2, 0x3

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 1382
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TYTempContainer$e;->a:Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->a(Lcom/tkay/expressad/video/bt/module/TYTempContainer;Z)Z

    return-void

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_0
        :pswitch_1
        :pswitch_1
    .end packed-switch
.end method
