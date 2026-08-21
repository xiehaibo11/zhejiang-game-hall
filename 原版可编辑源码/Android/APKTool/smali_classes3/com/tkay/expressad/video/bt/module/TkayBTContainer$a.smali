.class final Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;
.super Lcom/tkay/expressad/video/signal/a/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/bt/module/TkayBTContainer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V
    .locals 0

    .line 1282
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/c$a;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;B)V
    .locals 0

    .line 1282
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 0

    .line 1338
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(ILjava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 0

    .line 1291
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 0

    .line 1332
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    .line 1333
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->t(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Lcom/tkay/expressad/video/bt/module/b/h;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/bt/module/b/h;->a(Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 2

    .line 1301
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    if-eqz p1, :cond_2

    .line 1302
    instance-of p2, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p2, :cond_2

    .line 1304
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 1305
    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/j;->getCurrentProgress()Ljava/lang/String;

    move-result-object p2

    .line 1306
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "progress"

    const-string v1, ""

    .line 1307
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1308
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v0

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->C()I

    move-result p1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    const-string p1, "1.0"

    .line 1309
    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->q(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1310
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->r(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1311
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onAdClose()V

    return-void

    .line 1313
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTContainer$a;->a:Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->s(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;)Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception p1

    .line 1318
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public final b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 0

    .line 1327
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/signal/a/c$a;->b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V

    return-void
.end method

.method public final c()V
    .locals 0

    .line 1285
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c$a;->c()V

    return-void
.end method

.method public final d()V
    .locals 0

    .line 1343
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/c$a;->d()V

    return-void
.end method
