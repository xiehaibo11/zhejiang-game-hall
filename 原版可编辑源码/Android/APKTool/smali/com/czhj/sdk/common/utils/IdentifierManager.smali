.class public Lcom/czhj/sdk/common/utils/IdentifierManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;,
        Lcom/czhj/sdk/common/utils/IdentifierManager$SdkInitializationListener;,
        Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/String; = "com.Sigmob.settings.identifier"

.field private static final c:Ljava/lang/String; = "privacy.identifier.ifa"

.field private static final d:Ljava/lang/String; = "privacy.identifier.ifa_aes"

.field private static final e:Ljava/lang/String; = "privacy.identifier.Sigmob"

.field private static final f:Ljava/lang/String; = "privacy.identifier.time"

.field private static final g:Ljava/lang/String; = "privacy.limit.ad.tracking"

.field private static final h:I = -0x1


# instance fields
.field private a:J

.field private i:Lcom/czhj/sdk/common/utils/AdvertisingId;

.field private final j:Landroid/content/Context;

.field private k:Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;

.field private l:Z

.field private m:Z

.field private n:Lcom/czhj/sdk/common/utils/IdentifierManager$SdkInitializationListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->j:Landroid/content/Context;

    iput-object p2, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->k:Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/AdvertisingId;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    if-nez p1, :cond_0

    invoke-static {}, Lcom/czhj/sdk/common/utils/AdvertisingId;->generateExpiredAdvertisingId()Lcom/czhj/sdk/common/utils/AdvertisingId;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    :cond_0
    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a()V

    return-void
.end method

.method private static declared-synchronized a(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/AdvertisingId;
    .locals 9

    const-class v0, Lcom/czhj/sdk/common/utils/IdentifierManager;

    monitor-enter v0

    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v2, "com.Sigmob.settings.identifier"

    invoke-static {p0, v2}, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->getSharedPreferences(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    const-string v2, "privacy.identifier.ifa_aes"

    const-string v3, ""

    invoke-interface {p0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "sigandroid_mtadb"

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/AESUtil;->DecryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :goto_0
    move-object v4, v2

    goto :goto_1

    :cond_0
    const-string v2, "privacy.identifier.ifa"

    const-string v3, ""

    invoke-interface {p0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :goto_1
    const-string v2, "privacy.identifier.Sigmob"

    const-string v3, ""

    invoke-interface {p0, v2, v3}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v2, "privacy.identifier.time"

    invoke-virtual {v1}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v6

    invoke-interface {p0, v2, v6, v7}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v7

    const-string v1, "privacy.limit.ad.tracking"

    const/4 v2, 0x0

    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v6

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    new-instance p0, Lcom/czhj/sdk/common/utils/AdvertisingId;

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/czhj/sdk/common/utils/AdvertisingId;-><init>(Ljava/lang/String;Ljava/lang/String;ZJ)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    :try_start_2
    const-string p0, "Cannot read identifier from shared preferences"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_1
    const/4 p0, 0x0

    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a()V
    .locals 2

    iget-boolean v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->l:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->l:Z

    new-instance v0, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;-><init>(Lcom/czhj/sdk/common/utils/IdentifierManager;Lcom/czhj/sdk/common/utils/IdentifierManager$1;)V

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Void;

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/utils/IdentifierManager$RefreshAdvertisingInfoAsyncTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method

.method private static declared-synchronized a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/AdvertisingId;)V
    .locals 4

    const-class v0, Lcom/czhj/sdk/common/utils/IdentifierManager;

    monitor-enter v0

    :try_start_0
    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    const-string v1, "com.Sigmob.settings.identifier"

    invoke-static {p0, v1}, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->getSharedPreferences(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    const-string v1, "privacy.limit.ad.tracking"

    iget-boolean v2, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    const-string v1, "privacy.identifier.ifa"

    invoke-interface {p0, v1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "privacy.identifier.ifa_aes"

    iget-object v2, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    const-string v3, "sigandroid_mtadb"

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/AESUtil;->EncryptString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "privacy.identifier.Sigmob"

    iget-object v2, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    invoke-interface {p0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    const-string v1, "privacy.identifier.time"

    iget-object p1, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->a:Ljava/util/Calendar;

    invoke-virtual {p1}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v2

    invoke-interface {p0, v1, v2, v3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private a(Lcom/czhj/sdk/common/utils/AdvertisingId;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->j:Landroid/content/Context;

    invoke-static {v1, p1}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/AdvertisingId;)V

    iget-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    invoke-virtual {p1, v0}, Lcom/czhj/sdk/common/utils/AdvertisingId;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-boolean p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->m:Z

    if-nez p1, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    invoke-direct {p0, v0, p1}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Lcom/czhj/sdk/common/utils/AdvertisingId;Lcom/czhj/sdk/common/utils/AdvertisingId;)V

    :cond_1
    iget-boolean p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->m:Z

    if-nez p1, :cond_2

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->c()V

    :cond_2
    return-void
.end method

.method private a(Lcom/czhj/sdk/common/utils/AdvertisingId;Lcom/czhj/sdk/common/utils/AdvertisingId;)V
    .locals 1

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->k:Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Lcom/czhj/sdk/common/utils/IdentifierManager$AdvertisingIdChangeListener;->onIdChanged(Lcom/czhj/sdk/common/utils/AdvertisingId;Lcom/czhj/sdk/common/utils/AdvertisingId;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/utils/IdentifierManager;)V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->b()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;ZJ)V
    .locals 7

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    new-instance v6, Lcom/czhj/sdk/common/utils/AdvertisingId;

    move-object v0, v6

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    move-wide v4, p4

    invoke-direct/range {v0 .. v5}, Lcom/czhj/sdk/common/utils/AdvertisingId;-><init>(Ljava/lang/String;Ljava/lang/String;ZJ)V

    invoke-direct {p0, v6}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Lcom/czhj/sdk/common/utils/AdvertisingId;)V

    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/utils/IdentifierManager;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->l:Z

    return p1
.end method

.method private b()V
    .locals 13

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v5

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->d()Z

    move-result v0

    if-eqz v0, :cond_1

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->j:Landroid/content/Context;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/PlayServicesUtil;->getAdvertisingIdInfo(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    iget-boolean v2, v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->limitAdTracking:Z

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/czhj/sdk/common/utils/AdvertisingId;->b()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->advertisingId:Ljava/lang/String;

    invoke-static {}, Lcom/czhj/sdk/common/utils/AdvertisingId;->a()Ljava/lang/String;

    move-result-object v3

    iget-boolean v4, v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->limitAdTracking:Z

    move-object v1, p0

    invoke-direct/range {v1 .. v6}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Ljava/lang/String;Ljava/lang/String;ZJ)V

    goto :goto_1

    :cond_0
    iget-object v8, v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->advertisingId:Ljava/lang/String;

    iget-object v9, v1, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    iget-boolean v10, v0, Lcom/czhj/sdk/common/utils/PlayServicesUtil$AdvertisingInfo;->limitAdTracking:Z

    iget-object v0, v1, Lcom/czhj/sdk/common/utils/AdvertisingId;->a:Ljava/util/Calendar;

    invoke-virtual {v0}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v11

    move-object v7, p0

    invoke-direct/range {v7 .. v12}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a(Ljava/lang/String;Ljava/lang/String;ZJ)V

    :cond_1
    :goto_1
    return-void
.end method

.method private c()V
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->n:Lcom/czhj/sdk/common/utils/IdentifierManager$SdkInitializationListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/czhj/sdk/common/utils/IdentifierManager$SdkInitializationListener;->onInitializationFinished()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->n:Lcom/czhj/sdk/common/utils/IdentifierManager$SdkInitializationListener;

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->m:Z

    return-void
.end method

.method private d()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public getAdvertisingInfo()Lcom/czhj/sdk/common/utils/AdvertisingId;
    .locals 3

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->i:Lcom/czhj/sdk/common/utils/AdvertisingId;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/czhj/sdk/common/utils/IdentifierManager;->a:J

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/IdentifierManager;->a()V

    return-object v0
.end method
