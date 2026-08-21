.class public final Lcom/loc/ad;
.super Lcom/loc/af;
.source "AAIDRemapRequest.java"


# instance fields
.field public a:Ljava/lang/String;

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:Ljava/lang/String;

.field public e:Ljava/lang/String;

.field public f:Ljava/lang/String;

.field public g:Ljava/lang/String;

.field public h:Ljava/lang/String;

.field public i:Ljava/lang/String;

.field protected j:[B


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/af;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final d()[B
    .locals 3

    iget-object v0, p0, Lcom/loc/ad;->j:[B

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "method"

    const-string v2, "remap"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "package_name"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/l;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "model"

    sget-object v2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "os_version"

    sget-object v2, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "os_type"

    const-string v2, "Android"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sdk_version"

    const-string v2, "4.3.6"

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->a()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->a:Ljava/lang/String;

    const-string v2, "t1"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_t1"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->b()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->b:Ljava/lang/String;

    const-string v2, "t2"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_t2"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->h(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->c()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->c:Ljava/lang/String;

    const-string v2, "t3"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_t3"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->d()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->d:Ljava/lang/String;

    const-string v2, "s1"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_s1"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->e()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->e:Ljava/lang/String;

    const-string v2, "s2"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_s2"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->f()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->f:Ljava/lang/String;

    const-string v2, "s3"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_s3"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-static {}, Lcom/loc/ab;->g()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->g:Ljava/lang/String;

    const-string v2, "s4"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_s4"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->m(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "uuid"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/ab;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "android_id"

    invoke-static {}, Lcom/loc/o;->g()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "hostname"

    invoke-static {}, Lcom/loc/ab;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/o;->t(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->h:Ljava/lang/String;

    const-string v2, "gaid"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_gaid"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->n(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/o;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ad;->i:Ljava/lang/String;

    const-string v2, "oaid"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "old_oaid"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "aaid"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "resetToken"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "uabc"

    iget-object v2, p0, Lcom/loc/ad;->k:Landroid/content/Context;

    invoke-static {v2}, Lcom/loc/y;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "utf-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-static {v0}, Lcom/loc/x;->d([B)[B

    move-result-object v0

    const-string v1, "YWDR1a2R2WEd0M3RXdHRocg=="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v0, v1}, Lcom/loc/ab;->a([B[B)[B

    move-result-object v0

    iput-object v0, p0, Lcom/loc/ad;->j:[B
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iget-object v0, p0, Lcom/loc/ad;->j:[B

    return-object v0
.end method
