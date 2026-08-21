.class public Lcom/heytap/mcssdk/utils/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/heytap/mcssdk/utils/e$a;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "shared_msg_sdk"

.field private static final b:Ljava/lang/String; = "hasDefaultChannelCreated"

.field private static final c:Ljava/lang/String; = "lastUpLoadInfoSDKVersionName"

.field private static final d:Ljava/lang/String; = "lastUploadInfoUniqueID"

.field private static final e:Ljava/lang/String; = "decryptTag"


# instance fields
.field private f:Landroid/content/Context;

.field private g:Landroid/content/SharedPreferences;

.field private h:Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/heytap/mcssdk/utils/e;->h:Ljava/lang/Object;

    invoke-static {}, Lcom/heytap/mcssdk/PushService;->getInstance()Lcom/heytap/mcssdk/PushService;

    move-result-object v0

    invoke-virtual {v0}, Lcom/heytap/mcssdk/PushService;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-direct {p0, v0}, Lcom/heytap/mcssdk/utils/e;->a(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/heytap/mcssdk/utils/e;->f:Landroid/content/Context;

    :cond_0
    iget-object v0, p0, Lcom/heytap/mcssdk/utils/e;->f:Landroid/content/Context;

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    const-string v2, "shared_msg_sdk"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/heytap/mcssdk/utils/e;->g:Landroid/content/SharedPreferences;

    :cond_1
    return-void
.end method

.method synthetic constructor <init>(Lcom/heytap/mcssdk/utils/e$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;)Landroid/content/Context;
    .locals 3

    invoke-static {}, Lcom/heytap/mcssdk/utils/a;->a()Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "fbeVersion is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/heytap/mcssdk/utils/d;->b(Ljava/lang/String;)V

    if-eqz v0, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x18

    if-lt v0, v1, :cond_0

    invoke-virtual {p1}, Landroid/content/Context;->createDeviceProtectedStorageContext()Landroid/content/Context;

    move-result-object p1

    return-object p1

    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    return-object p1
.end method

.method public static f()Lcom/heytap/mcssdk/utils/e;
    .locals 1

    sget-object v0, Lcom/heytap/mcssdk/utils/e$a;->a:Lcom/heytap/mcssdk/utils/e;

    return-object v0
.end method

.method private g()Landroid/content/SharedPreferences;
    .locals 4

    iget-object v0, p0, Lcom/heytap/mcssdk/utils/e;->g:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/heytap/mcssdk/utils/e;->h:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/heytap/mcssdk/utils/e;->g:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/heytap/mcssdk/utils/e;->f:Landroid/content/Context;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/heytap/mcssdk/utils/e;->f:Landroid/content/Context;

    const-string v2, "shared_msg_sdk"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/heytap/mcssdk/utils/e;->g:Landroid/content/SharedPreferences;

    monitor-exit v0

    return-object v1

    :cond_1
    iget-object v1, p0, Lcom/heytap/mcssdk/utils/e;->g:Landroid/content/SharedPreferences;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method


# virtual methods
.method public a(Ljava/lang/String;I)I
    .locals 1

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1

    return p1

    :cond_0
    return p2
.end method

.method public a(Ljava/lang/String;J)J
    .locals 1

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p1

    return-wide p1

    :cond_0
    return-wide p2
.end method

.method public a(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "lastUploadInfoUniqueID"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    return-void
.end method

.method public a(Z)V
    .locals 2

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "hasDefaultChannelCreated"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    return-void
.end method

.method public a()Z
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const-string v2, "hasDefaultChannelCreated"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v1

    :cond_0
    return v1
.end method

.method public b()V
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "lastUpLoadInfoSDKVersionName"

    const-string v2, "3.0.0"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "decryptTag"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_0
    return-void
.end method

.method public b(Ljava/lang/String;I)V
    .locals 1

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    return-void
.end method

.method public b(Ljava/lang/String;J)V
    .locals 1

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    return-void
.end method

.method public c(Ljava/lang/String;)I
    .locals 2

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1

    return p1

    :cond_0
    return v1
.end method

.method public c()Ljava/lang/String;
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, ""

    if-eqz v0, :cond_0

    const-string v2, "lastUploadInfoUniqueID"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :cond_0
    return-object v1
.end method

.method public d(Ljava/lang/String;)J
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    if-eqz v0, :cond_0

    sget-object v1, Lcom/heytap/mcssdk/constant/a;->b:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    invoke-interface {v0, p1, v1, v2}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0

    :cond_0
    sget-object p1, Lcom/heytap/mcssdk/constant/a;->b:Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public d()Ljava/lang/String;
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, ""

    if-eqz v0, :cond_0

    const-string v2, "lastUpLoadInfoSDKVersionName"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :cond_0
    return-object v1
.end method

.method public e()Ljava/lang/String;
    .locals 3

    invoke-direct {p0}, Lcom/heytap/mcssdk/utils/e;->g()Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "DES"

    if-eqz v0, :cond_0

    const-string v2, "decryptTag"

    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    :cond_0
    return-object v1
.end method
