.class final Lcom/mbridge/msdk/foundation/controller/a$1;
.super Ljava/lang/Object;
.source "MBSDKContext.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/controller/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/Handler;

.field final synthetic b:Lcom/mbridge/msdk/foundation/controller/a$b;

.field final synthetic c:Lcom/mbridge/msdk/foundation/controller/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/foundation/controller/a;Landroid/os/Handler;Lcom/mbridge/msdk/foundation/controller/a$b;)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->a:Landroid/os/Handler;

    iput-object p3, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->b:Lcom/mbridge/msdk/foundation/controller/a$b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 217
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_device_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 218
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->h()Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v0, "com.google.android.gms.ads.identifier.AdvertisingIdClient"

    .line 220
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 221
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    .line 222
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/google/android/gms/ads/identifier/AdvertisingIdClient;->getAdvertisingIdInfo(Landroid/content/Context;)Lcom/google/android/gms/ads/identifier/AdvertisingIdClient$Info;

    move-result-object v0

    .line 223
    invoke-virtual {v0}, Lcom/google/android/gms/ads/identifier/AdvertisingIdClient$Info;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->h(Ljava/lang/String;)V

    .line 224
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-virtual {v0}, Lcom/google/android/gms/ads/identifier/AdvertisingIdClient$Info;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 236
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 226
    :catch_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    const-string v2, "GET ADID ERROR TRY TO GET FROM GOOGLE PLAY APP"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 229
    :try_start_1
    new-instance v0, Lcom/mbridge/msdk/foundation/controller/a$a;

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-direct {v0, v2}, Lcom/mbridge/msdk/foundation/controller/a$a;-><init>(Lcom/mbridge/msdk/foundation/controller/a;)V

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/controller/a$a;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/controller/a$a$a;

    move-result-object v0

    .line 230
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a$a$a;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->h(Ljava/lang/String;)V

    .line 231
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a$a$a;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    .line 233
    :catch_1
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    const-string v2, "GET ADID FROM GOOGLE PLAY APP ERROR"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 241
    :cond_0
    :goto_0
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const-string v2, "com.android.vending"

    .line 242
    invoke-virtual {v0, v2, v1}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget-boolean v0, v0, Landroid/content/pm/ApplicationInfo;->enabled:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x2

    .line 243
    :goto_1
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->b(I)V
    :try_end_2
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 247
    sget-object v2, Lcom/mbridge/msdk/foundation/controller/a;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 245
    :catch_2
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->b(I)V

    .line 252
    :cond_2
    :goto_2
    :try_start_3
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_3

    .line 254
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 256
    :cond_3
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v2

    .line 257
    iput-object v0, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 v0, 0x9

    .line 258
    iput v0, v2, Landroid/os/Message;->what:I

    .line 259
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->a:Landroid/os/Handler;

    invoke-virtual {v0, v2}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    :catch_3
    move-exception v0

    .line 261
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 264
    :goto_3
    :try_start_4
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->q(Landroid/content/Context;)V

    .line 267
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->g()V

    .line 268
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a;)Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/controller/a;->b(Lcom/mbridge/msdk/foundation/controller/a;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/c/b;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 269
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Z)Ljava/util/List;

    .line 272
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->c:Lcom/mbridge/msdk/foundation/controller/a;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/a$1;->b:Lcom/mbridge/msdk/foundation/controller/a$b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a$b;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    :catch_4
    return-void
.end method
