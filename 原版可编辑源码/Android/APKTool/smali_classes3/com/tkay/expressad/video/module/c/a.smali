.class public final Lcom/tkay/expressad/video/module/c/a;
.super Lcom/tkay/expressad/foundation/g/f/h/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/expressad/foundation/g/f/h/a;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/h/b;)V
    .locals 1

    .line 27
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/foundation/g/f/h/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/h/b;)V

    const-string p1, "platform"

    const-string v0, "1"

    .line 29
    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 30
    sget-object p1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    const-string v0, "os_version"

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 31
    iget-object p1, p0, Lcom/tkay/expressad/video/module/c/a;->a:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/k;->h(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "package_name"

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 32
    iget-object p1, p0, Lcom/tkay/expressad/video/module/c/a;->a:Landroid/content/Context;

    .line 33
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/k;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "app_version_name"

    .line 32
    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 34
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/video/module/c/a;->a:Landroid/content/Context;

    .line 35
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->c(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "app_version_code"

    .line 34
    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/tkay/expressad/video/module/c/a;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "orientation"

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "gaid"

    const-string v0, ""

    .line 37
    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    sget-object p1, Lcom/tkay/expressad/out/n;->a:Ljava/lang/String;

    const-string v0, "sdk_version"

    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 40
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 39
    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 43
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    .line 45
    :try_start_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 47
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 46
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 48
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "dvi"

    .line 49
    invoke-virtual {p2, v0, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 53
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method
